/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400596D0
// Address: 0x00000001400596D0

//----- (00000001400596D0) ----------------------------------------------------
char __fastcall sub_1400596D0(__int64 a1)
{
  SECURITY_STATUS v2; // eax
  PCCERT_CONTEXT v4; // rbp
  HCERTSTORE hCertStore; // r9
  DWORD dwErrorStatus; // ebx
  DWORD v7; // ebx
  const CERT_CONTEXT *v8; // rcx
  PCCERT_CONTEXT pBuffer; // [rsp+40h] [rbp-458h] BYREF
  PCCERT_CHAIN_CONTEXT pChainContext; // [rsp+48h] [rbp-450h] BYREF
  struct _CERT_CHAIN_PARA pChainPara; // [rsp+50h] [rbp-448h] BYREF
  CHAR pszNameString[1024]; // [rsp+70h] [rbp-428h] BYREF

  v2 = QueryContextAttributesA((PCtxtHandle)(a1 + 120), 0x53u, &pBuffer);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 72) = v2;
    *(_QWORD *)(a1 + 64) = "QueryContextAttributes(SECPKG_ATTR_REMOTE_CERT_CONTEXT)";
    return 0;
  }
  v4 = pBuffer;
  hCertStore = pBuffer->hCertStore;
  memset(&pChainPara, 0, sizeof(pChainPara));
  pChainPara.cbSize = 32;
  if ( !CertGetCertificateChain(nullptr, pBuffer, nullptr, hCertStore, &pChainPara, 0, nullptr, &pChainContext) )
  {
    *(_QWORD *)(a1 + 64) = "CertGetCertificateChain[1]";
    *(_DWORD *)(a1 + 72) = GetLastError();
    return 0;
  }
  dwErrorStatus = pChainContext->TrustStatus.dwErrorStatus;
  CertFreeCertificateChain(pChainContext);
  if ( (dwErrorStatus & 1) != 0 )
  {
    *(_QWORD *)(a1 + 64) = "expired_remote_certificate";
    return 0;
  }
  if ( dwErrorStatus != 0x10000 )
    goto LABEL_19;
  if ( !CertAddEncodedCertificateToStore(
          v4->hCertStore,
          1u,
          *(const BYTE **)(a1 + 80),
          *(_DWORD *)(a1 + 88),
          2u,
          nullptr) )
  {
    *(_QWORD *)(a1 + 64) = "CertAddEncodedCertificateToStore";
    *(_DWORD *)(a1 + 72) = GetLastError();
    return 0;
  }
  if ( !CertGetCertificateChain(nullptr, v4, nullptr, v4->hCertStore, &pChainPara, 0, nullptr, &pChainContext) )
  {
    *(_QWORD *)(a1 + 64) = "CertGetCertificateChain[2]";
    *(_DWORD *)(a1 + 72) = GetLastError();
    return 0;
  }
  v7 = pChainContext->TrustStatus.dwErrorStatus;
  CertFreeCertificateChain(pChainContext);
  if ( v7 != 32 )
  {
LABEL_19:
    *(_QWORD *)(a1 + 64) = "invalid_remote_certificate";
    return 0;
  }
  if ( CertVerifyTimeValidity(nullptr, pBuffer->pCertInfo) )
  {
    v8 = pBuffer;
    *(_QWORD *)(a1 + 64) = "expired_remote_certificate";
    CertFreeCertificateContext(v8);
    return 0;
  }
  else if ( CertGetNameStringA(pBuffer, 3u, 0, "2.5.4.3", pszNameString, 0x400u) <= 1
         || !strcmp(pszNameString, "internal.hex-rays.com") )
  {
    *(_QWORD *)(a1 + 64) = "invalid_remote_certificate";
    CertFreeCertificateContext(pBuffer);
    return 0;
  }
  else
  {
    CertFreeCertificateContext(pBuffer);
    return 1;
  }
}
