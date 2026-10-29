/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_451BE0
// Address: 0x00451BE0

//----- (00451BE0) --------------------------------------------------------
char __thiscall sub_451BE0(int this, int pBuffer)
{
  _BYTE *v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // edi
  char v6; // al
  int v7; // ecx
  void *v8; // eax
  void *v9; // edx
  void *v10; // edx
  int v11; // ecx
  bool v12; // zf
  char result; // al
  char *v14; // eax
  SECURITY_STATUS v15; // eax
  SECURITY_STATUS v16; // eax
  int v17; // [esp-8h] [ebp-84h]
  __m128i pAuthData[2]; // [esp+10h] [ebp-6Ch] BYREF
  int v19; // [esp+30h] [ebp-4Ch]
  int v20; // [esp+40h] [ebp-3Ch]
  _BYTE *v21; // [esp+48h] [ebp-34h] BYREF
  unsigned int v22; // [esp+4Ch] [ebp-30h]
  int v23; // [esp+50h] [ebp-2Ch]
  void *v24; // [esp+54h] [ebp-28h] BYREF
  int v25; // [esp+58h] [ebp-24h]
  int v26; // [esp+5Ch] [ebp-20h]
  int v27; // [esp+60h] [ebp-1Ch]
  void *v28; // [esp+64h] [ebp-18h]
  int v29; // [esp+68h] [ebp-14h]
  unsigned int v30; // [esp+6Ch] [ebp-10h]
  int v31; // [esp+78h] [ebp-4h]

  v3 = nullptr;
  v4 = 0;
  v30 = (unsigned int)"MIIF0TCCA7mgAwIBAgIULzKtEOP9Q7V/L/G4Rnv4L3vq/hEwDQYJKoZIhvcNAQENBQAwVDELMAkGA1UEBhMCQkUxDzANBgNVBA"
                      "cMBkxpw6hnZTEVMBMGA1UECgwMSGV4LVJheXMgU0EuMR0wGwYDVQQDDBRIZXgtUmF5cyBTQS4gUm9vdCBDQTAeFw0yMDA1MDQx"
                      "MTAyMDhaFw00MDA0MjkxMTAyMDhaMFQxCzAJBgNVBAYTAkJFMQ8wDQYDVQQHDAZMacOoZ2UxFTATBgNVBAoMDEhleC1SYXlzIF"
                      "NBLjEdMBsGA1UEAwwUSGV4LVJheXMgU0EuIFJvb3QgQ0EwggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQDBrsEh48VN"
                      "yjCPROSYzw5viAcfDuBoDAHe3bIRYMaGm2a6omSXSzT02RAipSlO6nJZ/PgNEipaXYLbEXmrrGdnSdBu8ub51t17AdGcGYzzPj"
                      "SIpIVH5mX2iObHdS3gyNzpJKJQUCDM6FdJa8ZcztKw+bXsN1ftKaZCzHcuUBc8P5lkiRGcuYfbiHri5C02pGo13y4Oz99Sot8K"
                      "UfwNhByOOGOweYyfn9NgmhqhkBu27+6rxpmuR7mHyOhfnLs+psQ0yjE6bzul2ilWFrOSaLAxKbhBLLQDWCYeBvXmE0IzmZVbo2"
                      "DqTU+NWREU6avmRRBz6RnZHFUhl2LVbJ5Ar45BawR38bRNro6VNCTq89rBXVFeCnk9Ja6v4ZAoWmjJupHCpXTIxoebkoeWAwIC"
                      "uz63cWsRh1y2aqdgQ6v9yVErA64GhgCkpJO82HDtA9Siqge3T+rgUnj1pcllGKgxAFYcKhlCLl4+bm0ohlxF0WF8VMhG/TBLNH"
                      "3MlJFjlMoBwQnlAPheEgZWoQSEjAkzRLUrRw7kVk/Qt8G5hFGLb3UjE8SKDPKRYSBAUN/uP8YHKFqo2arpTCi1DO4SqX8r6zqz"
                      "slVTf6uWTiq8MNkZ/+7NYr1/JPT25iMlw6sa6g4GUPpQzhRaPy19obGe43u4vjpyse9g5vqX9p3u9MI14x3k6QIDAQABo4GaMI"
                      "GXMB0GA1UdDgQWBBQaxNacfM7XKjKIutIHrc6tjiE9DTAfBgNVHSMEGDAWgBQaxNacfM7XKjKIutIHrc6tjiE9DTAPBgNVHRMB"
                      "Af8EBTADAQH/MA4GA1UdDwEB/wQEAwIBhjA0BgNVHR8ELTArMCmgJ6AlhiNodHRwOi8vY3JsLmhleC1yYXlzLmNvbS9yb290X2"
                      "NhLmNybDANBgkqhkiG9w0BAQ0FAAOCAgEAdKp4InpRk5z0BjPs6CcJSgKbCH0MXZqbt/EM/4dJPvmA6tAexJpv9e9BmT/DOB84"
                      "QB2xzQlEiNOB7/V4j3oDij5mMwRyqYL24l3gHAavwc+dLrpzX/54uZmH9bKs7yj3fk/vU3e7th720ArL2/YZjHV2Wx0BMcs+YV"
                      "itphvG2mxu16DTpidms3pCj25eEISJvXfe8XEfKOP1FxGCpmKxx6qPHlNASOp5zdwViEimkguUwzCsmmPI5rEWLXdLRxc0Ckff"
                      "mbsNmsF8SZz38CiwuRlichDDdZuJXji7jnZF7h04Mo2AKPt6wJ9+66rYqDigvP9sHGKpQp5hr1DMukFGnei3S9h5Kp8eDhRXY2"
                      "4y/CJVNO0rxYoFPUnOwbSUF3Fwu4fX3Ezq5eW7N0Nl7s0XHExb/P9fmhPxQBV1gwr665inq5ZwD8H9uwGEVp3IBT9cHRu8ieZr"
                      "QDMI1UqPOy+2EWNPtY4KxmgerTbcN0VH4BuE8tdxTGUckg4JTbsNRUbqxSXmSL9jA1dLBT63lbMLIU06dIdqNbpxE4GVMgOLwq"
                      "wx/BF+FZgQTttdjmpexml6NIDVGDBxfyECJ5vdwxbKMIRfo7fp0jRpjZpP8bw4BPnx0Y4NpMzKxiWS0i7re9iEafdh6GtpNynK"
                      "U0JFSKrIwmIecKF+Z4ZUE/1K+t/FOgI=";
  v21 = nullptr;
  v22 = 0;
  v23 = 0;
  v31 = 0;
  if ( "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" )
  {
    v5 = strlen(
           "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"
           "JFSKrIwmIecKF+Z4ZUE/1K+t/FOgI=");
    if ( v5 != -1 )
    {
      v3 = sub_453B00((int)&v21, nullptr, v5 + 1, 1u);
      v21 = v3;
    }
    v22 = v5 + 1;
    sub_464310((unsigned int)v3, v30, v5);
    v21[v5] = 0;
    v4 = v22;
    v3 = v21;
  }
  v31 = 2;
  v24 = nullptr;
  v25 = 0;
  v26 = 0;
  v30 = 1;
  v6 = sub_4616B0((int)&v24, v3, v4 != 0 ? v4 - 1 : 0);
  v7 = v25;
  if ( !v6 )
    v7 = 0;
  v29 = v7;
  v28 = v24;
  v8 = nullptr;
  v27 = v26;
  v9 = *(void **)(this + 40);
  LOBYTE(v31) = 3;
  v24 = nullptr;
  v25 = 0;
  v26 = 0;
  if ( v9 )
  {
    *(_DWORD *)(this + 44) = 0;
    sub_453A20(v9);
    v8 = v24;
    v7 = v29;
    *(_DWORD *)(this + 48) = 0;
  }
  v10 = v28;
  *(_DWORD *)(this + 44) = v7;
  v11 = v27;
  *(_DWORD *)(this + 40) = v10;
  *(_DWORD *)(this + 48) = v11;
  LOBYTE(v31) = 5;
  if ( v8 )
  {
    v25 = 0;
    sub_453A20(v8);
    v24 = nullptr;
    v26 = 0;
  }
  v31 = 6;
  if ( v21 )
  {
    v22 = 0;
    sub_453A20(v21);
  }
  v12 = *(_DWORD *)(this + 44) == 0;
  v31 = -1;
  if ( v12 )
  {
    *(_DWORD *)(this + 32) = "load_root_ca_certificate";
    return 0;
  }
  v14 = sub_44D560(0);
  v17 = pBuffer;
  *(_DWORD *)(this + 16) = v14;
  result = sub_44D540((int)v14, v17);
  if ( result )
  {
    sub_464890(pAuthData, 0, 0x38u);
    pAuthData[0].m128i_i32[0] = 4;
    v19 = 2048;
    v20 = 4194340;
    v15 = AcquireCredentialsHandleA(
            nullptr,
            (LPSTR)"Microsoft Unified Security Protocol Provider",
            2u,
            nullptr,
            pAuthData,
            nullptr,
            nullptr,
            (PCredHandle)(this + 52),
            nullptr);
    if ( v15 )
    {
      *(_DWORD *)(this + 36) = v15;
      *(_DWORD *)(this + 32) = "AcquireCredentialsHandle";
      return 0;
    }
    else
    {
      v16 = QueryCredentialsAttributesA((PCredHandle)(this + 52), 0x58u, &pBuffer);
      if ( v16 )
      {
        *(_DWORD *)(this + 36) = v16;
        *(_DWORD *)(this + 32) = "QueryCredentialsAttributes(SECPKG_ATTR_SUPPORTED_PROTOCOLS)";
        return 0;
      }
      else if ( (pBuffer & 0x800) != 0 )
      {
        if ( !sub_451EE0(this) )
          return 0;
        if ( sub_452680(this) )
        {
          if ( (dword_4B70EC & 0x100000) != 0 )
            sub_402760("TLS: certificate verified\n");
          return 1;
        }
        else
        {
          sub_452650(this, -1);
          return 0;
        }
      }
      else
      {
        *(_DWORD *)(this + 32) = "unsupported_tls12";
        return 0;
      }
    }
  }
  else
  {
    *(_DWORD *)(this + 32) = &dword_48FD78;
  }
  return result;
}
// 48FD78: using guessed type int dword_48FD78;
// 4B70EC: using guessed type int dword_4B70EC;
