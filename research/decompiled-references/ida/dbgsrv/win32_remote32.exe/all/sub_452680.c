/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452680
// Address: 0x00452680

//----- (00452680) --------------------------------------------------------
char __thiscall sub_452680(int this)
{
  SECURITY_STATUS v2; // eax
  PCCERT_CONTEXT v4; // esi
  DWORD dwErrorStatus; // ebx
  DWORD v6; // esi
  int v7; // eax
  HCERTSTORE hCertStore; // [esp-1Ch] [ebp-440h]
  const CERT_CONTEXT *v9; // [esp-Ch] [ebp-430h]
  PCCERT_CONTEXT pBuffer; // [esp+8h] [ebp-41Ch] BYREF
  PCCERT_CHAIN_CONTEXT ppChainContext; // [esp+Ch] [ebp-418h] BYREF
  struct _CERT_CHAIN_PARA pChainPara; // [esp+10h] [ebp-414h] BYREF
  CHAR pszNameString[1024]; // [esp+20h] [ebp-404h] BYREF

  v2 = QueryContextAttributesA((PCtxtHandle)(this + 60), 0x53u, &pBuffer);
  if ( v2 )
  {
    *(_DWORD *)(this + 36) = v2;
    *(_DWORD *)(this + 32) = "QueryContextAttributes(SECPKG_ATTR_REMOTE_CERT_CONTEXT)";
    return 0;
  }
  v4 = pBuffer;
  hCertStore = pBuffer->hCertStore;
  pChainPara = 0;
  pChainPara.cbSize = 16;
  if ( !CertGetCertificateChain(nullptr, pBuffer, nullptr, hCertStore, &pChainPara, 0, nullptr, &ppChainContext) )
  {
    *(_DWORD *)(this + 32) = "CertGetCertificateChain[1]";
    *(_DWORD *)(this + 36) = GetLastError();
    return 0;
  }
  dwErrorStatus = ppChainContext->TrustStatus.dwErrorStatus;
  CertFreeCertificateChain(ppChainContext);
  if ( (dwErrorStatus & 1) != 0 )
  {
    *(_DWORD *)(this + 32) = "expired_remote_certificate";
    return 0;
  }
  if ( dwErrorStatus != 0x10000 )
    goto LABEL_21;
  if ( !CertAddEncodedCertificateToStore(
          v4->hCertStore,
          1u,
          *(const BYTE **)(this + 40),
          *(_DWORD *)(this + 44),
          2u,
          nullptr) )
  {
    *(_DWORD *)(this + 32) = "CertAddEncodedCertificateToStore";
    *(_DWORD *)(this + 36) = GetLastError();
    return 0;
  }
  if ( !CertGetCertificateChain(nullptr, v4, nullptr, v4->hCertStore, &pChainPara, 0, nullptr, &ppChainContext) )
  {
    *(_DWORD *)(this + 32) = "CertGetCertificateChain[2]";
    *(_DWORD *)(this + 36) = GetLastError();
    return 0;
  }
  v6 = ppChainContext->TrustStatus.dwErrorStatus;
  CertFreeCertificateChain(ppChainContext);
  if ( v6 != 32 )
  {
LABEL_21:
    *(_DWORD *)(this + 32) = "invalid_remote_certificate";
    return 0;
  }
  if ( CertVerifyTimeValidity(nullptr, pBuffer->pCertInfo) )
  {
    v9 = pBuffer;
    *(_DWORD *)(this + 32) = "expired_remote_certificate";
    CertFreeCertificateContext(v9);
    return 0;
  }
  else
  {
    if ( CertGetNameStringA(pBuffer, 3u, 0, "2.5.4.3", pszNameString, 0x400u) <= 1 )
      goto LABEL_20;
    v7 = strcmp(pszNameString, "internal.hex-rays.com");
    if ( v7 )
      v7 = v7 < 0 ? -1 : 1;
    if ( v7 )
    {
      CertFreeCertificateContext(pBuffer);
      return 1;
    }
    else
    {
LABEL_20:
      *(_DWORD *)(this + 32) = "invalid_remote_certificate";
      CertFreeCertificateContext(pBuffer);
      return 0;
    }
  }
}
