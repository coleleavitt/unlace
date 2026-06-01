/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140058A70
// Address: 0x0000000140058A70

//----- (0000000140058A70) ----------------------------------------------------
char __fastcall sub_140058A70(__int64 a1)
{
  size_t v2; // rsi
  void *v3; // rax
  char *v4; // r8
  char v5; // al
  __int64 v6; // rsi
  void *v7; // r14
  void *v8; // rcx
  __int64 v9; // r12
  void *v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  char *v14; // rax
  SECURITY_STATUS v15; // eax
  SECURITY_STATUS v16; // eax
  void *v17; // [rsp+50h] [rbp-49h] BYREF
  __int64 v18; // [rsp+58h] [rbp-41h]
  __int64 v19; // [rsp+60h] [rbp-39h]
  void *Block[2]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v21; // [rsp+78h] [rbp-21h]
  _OWORD pAuthData[3]; // [rsp+80h] [rbp-19h] BYREF
  __int128 v23; // [rsp+B0h] [rbp+17h]
  __int128 v24; // [rsp+C0h] [rbp+27h]
  int pBuffer; // [rsp+100h] [rbp+67h] BYREF

  pBuffer = 0;
  *(_OWORD *)Block = 0;
  v21 = 0;
  if ( "MIIF0TCCA7mgAwIBAgIULzKtEOP9Q7V/L/G4Rnv4L3vq/hEwDQYJKoZIhvcNAQENBQAwVDELMAkGA1UEBhMCQkUxDzANBgNVBAcMBkxpw6hnZTEVM"
       "BMGA1UECgwMSGV4LVJheXMgU0EuMR0wGwYDVQQDDBRIZXgtUmF5cyBTQS4gUm9vdCBDQTAeFw0yMDA1MDQxMTAyMDhaFw00MDA0MjkxMTAyMDhaMF"
       "QxCzAJBgNVBAYTAkJFMQ8wDQYDVQQHDAZMacOoZ2UxFTATBgNVBAoMDEhleC1SYXlzIFNBLjEdMBsGA1UEAwwUSGV4LVJheXMgU0EuIFJvb3QgQ0E"
       "wggIiMA0GCSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQDBrsEh48VNyjCPROSYzw5viAcfDuBoDAHe3bIRYMaGm2a6omSXSzT02RAipSlO6nJZ/PgN"
       "EipaXYLbEXmrrGdnSdBu8ub51t17AdGcGYzzPjSIpIVH5mX2iObHdS3gyNzpJKJQUCDM6FdJa8ZcztKw+bXsN1ftKaZCzHcuUBc8P5lkiRGcuYfbi"
       "Hri5C02pGo13y4Oz99Sot8KUfwNhByOOGOweYyfn9NgmhqhkBu27+6rxpmuR7mHyOhfnLs+psQ0yjE6bzul2ilWFrOSaLAxKbhBLLQDWCYeBvXmE0"
       "IzmZVbo2DqTU+NWREU6avmRRBz6RnZHFUhl2LVbJ5Ar45BawR38bRNro6VNCTq89rBXVFeCnk9Ja6v4ZAoWmjJupHCpXTIxoebkoeWAwICuz63cWs"
       "Rh1y2aqdgQ6v9yVErA64GhgCkpJO82HDtA9Siqge3T+rgUnj1pcllGKgxAFYcKhlCLl4+bm0ohlxF0WF8VMhG/TBLNH3MlJFjlMoBwQnlAPheEgZW"
       "oQSEjAkzRLUrRw7kVk/Qt8G5hFGLb3UjE8SKDPKRYSBAUN/uP8YHKFqo2arpTCi1DO4SqX8r6zqzslVTf6uWTiq8MNkZ/+7NYr1/JPT25iMlw6sa6"
       "g4GUPpQzhRaPy19obGe43u4vjpyse9g5vqX9p3u9MI14x3k6QIDAQABo4GaMIGXMB0GA1UdDgQWBBQaxNacfM7XKjKIutIHrc6tjiE9DTAfBgNVHS"
       "MEGDAWgBQaxNacfM7XKjKIutIHrc6tjiE9DTAPBgNVHRMBAf8EBTADAQH/MA4GA1UdDwEB/wQEAwIBhjA0BgNVHR8ELTArMCmgJ6AlhiNodHRwOi8"
       "vY3JsLmhleC1yYXlzLmNvbS9yb290X2NhLmNybDANBgkqhkiG9w0BAQ0FAAOCAgEAdKp4InpRk5z0BjPs6CcJSgKbCH0MXZqbt/EM/4dJPvmA6tAe"
       "xJpv9e9BmT/DOB84QB2xzQlEiNOB7/V4j3oDij5mMwRyqYL24l3gHAavwc+dLrpzX/54uZmH9bKs7yj3fk/vU3e7th720ArL2/YZjHV2Wx0BMcs+Y"
       "VitphvG2mxu16DTpidms3pCj25eEISJvXfe8XEfKOP1FxGCpmKxx6qPHlNASOp5zdwViEimkguUwzCsmmPI5rEWLXdLRxc0CkffmbsNmsF8SZz38C"
       "iwuRlichDDdZuJXji7jnZF7h04Mo2AKPt6wJ9+66rYqDigvP9sHGKpQp5hr1DMukFGnei3S9h5Kp8eDhRXY24y/CJVNO0rxYoFPUnOwbSUF3Fwu4f"
       "X3Ezq5eW7N0Nl7s0XHExb/P9fmhPxQBV1gwr665inq5ZwD8H9uwGEVp3IBT9cHRu8ieZrQDMI1UqPOy+2EWNPtY4KxmgerTbcN0VH4BuE8tdxTGUc"
       "kg4JTbsNRUbqxSXmSL9jA1dLBT63lbMLIU06dIdqNbpxE4GVMgOLwqwx/BF+FZgQTttdjmpexml6NIDVGDBxfyECJ5vdwxbKMIRfo7fp0jRpjZpP8"
       "bw4BPnx0Y4NpMzKxiWS0i7re9iEafdh6GtpNynKU0JFSKrIwmIecKF+Z4ZUE/1K+t/FOgI=" )
  {
    v2 = strlen(
           "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"
           "JFSKrIwmIecKF+Z4ZUE/1K+t/FOgI=");
    v3 = nullptr;
    if ( v2 != -1 )
    {
      v3 = sub_14005ABE0((__int64)Block, nullptr, v2 + 1, 1u);
      Block[0] = v3;
    }
    Block[1] = (void *)(v2 + 1);
    memcpy(
      v3,
      "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",
      v2);
    *((_BYTE *)Block[0] + v2) = 0;
  }
  v17 = nullptr;
  v18 = 0;
  v19 = 0;
  pBuffer = 1;
  v4 = (char *)Block[1] - 1;
  if ( !Block[1] )
    v4 = nullptr;
  v5 = sub_1400695A0((__int64)&v17, (unsigned __int8 *)Block[0], (__int64)v4);
  v6 = v18;
  if ( !v5 )
    v6 = 0;
  v7 = v17;
  v8 = nullptr;
  v17 = nullptr;
  v18 = 0;
  v9 = v19;
  v19 = 0;
  v10 = *(void **)(a1 + 80);
  v11 = (_QWORD *)(a1 + 88);
  if ( v10 )
  {
    *v11 = 0;
    j_free(v10);
    v12 = (_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = 0;
    v8 = v17;
  }
  else
  {
    v12 = (_QWORD *)(a1 + 96);
  }
  *(_QWORD *)(a1 + 80) = v7;
  *v11 = v6;
  *v12 = v9;
  if ( v8 )
  {
    v18 = 0;
    j_free(v8);
    v17 = nullptr;
    v19 = 0;
  }
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
  }
  if ( !*(_QWORD *)(a1 + 88) )
  {
    *(_QWORD *)(a1 + 64) = "load_root_ca_certificate";
    return 0;
  }
  v14 = sub_1400543F0(0);
  *(_QWORD *)(a1 + 32) = v14;
  if ( (unsigned __int8)sub_1400543D0((__int64)v14) )
  {
    memset(pAuthData, 0, sizeof(pAuthData));
    v23 = 0;
    v24 = 0;
    LODWORD(pAuthData[0]) = 4;
    DWORD2(v23) = 2048;
    DWORD2(v24) = 4194340;
    v15 = AcquireCredentialsHandleA(
            nullptr,
            (LPSTR)"Microsoft Unified Security Protocol Provider",
            2u,
            nullptr,
            pAuthData,
            nullptr,
            nullptr,
            (PCredHandle)(a1 + 104),
            nullptr);
    if ( v15 )
    {
      *(_DWORD *)(a1 + 72) = v15;
      *(_QWORD *)(a1 + 64) = "AcquireCredentialsHandle";
      return 0;
    }
    else
    {
      v16 = QueryCredentialsAttributesA((PCredHandle)(a1 + 104), 0x58u, &pBuffer);
      if ( v16 )
      {
        *(_DWORD *)(a1 + 72) = v16;
        *(_QWORD *)(a1 + 64) = "QueryCredentialsAttributes(SECPKG_ATTR_SUPPORTED_PROTOCOLS)";
        return 0;
      }
      else if ( (pBuffer & 0x800) != 0 )
      {
        if ( !(unsigned __int8)sub_140058D30(a1) )
          return 0;
        if ( sub_1400596D0(a1) )
        {
          if ( (dword_1400CB618 & 0x100000) != 0 )
            sub_140002CE0((struct __crt_locale_pointers *)"TLS: certificate verified\n");
          return 1;
        }
        else
        {
          sub_140059680(a1);
          return 0;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 64) = "unsupported_tls12";
        return 0;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 64) = "irs";
    return 0;
  }
}
// 1400CB618: using guessed type int dword_1400CB618;
