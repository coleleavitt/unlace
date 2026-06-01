/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005EDE0
// Address: 0x000000014005EDE0

//----- (000000014005EDE0) ----------------------------------------------------
WCHAR **__fastcall sub_14005EDE0(WCHAR **a1, const CHAR *a2)
{
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rsi
  WCHAR *v9; // r8
  WCHAR *v10; // rcx
  WCHAR *v11; // rdx
  LPWSTR lpWideCharStr[2]; // [rsp+30h] [rbp-38h] BYREF
  WCHAR *v14; // [rsp+40h] [rbp-28h]

  *a1 = nullptr;
  a1[1] = nullptr;
  a1[2] = nullptr;
  v4 = MultiByteToWideChar(0xFDE9u, 8u, a2, -1, nullptr, 0);
  if ( v4 > 0 )
  {
    *(_OWORD *)lpWideCharStr = 0;
    v14 = nullptr;
    v5 = v4 == -1;
    v6 = v4 + 1;
    v7 = v6;
    if ( !v5 )
    {
      v8 = v6 + 1LL;
      if ( v6 != -1 )
      {
        lpWideCharStr[0] = (LPWSTR)sub_14005ABE0((__int64)lpWideCharStr, nullptr, v6 + 1LL, 2u);
        memset(&lpWideCharStr[0][(__int64)lpWideCharStr[1]], 0, 2 * (v8 - (unsigned __int64)lpWideCharStr[1]));
        lpWideCharStr[1] = (LPWSTR)(v7 + 1);
      }
      lpWideCharStr[0][v7] = 0;
    }
    if ( MultiByteToWideChar(0xFDE9u, 8u, a2, -1, lpWideCharStr[0], (int)lpWideCharStr[1]) <= 0 )
    {
      v9 = lpWideCharStr[0];
    }
    else
    {
      v9 = *a1;
      v10 = a1[1];
      v11 = a1[2];
      *a1 = lpWideCharStr[0];
      a1[1] = lpWideCharStr[1];
      a1[2] = v14;
      lpWideCharStr[0] = v9;
      lpWideCharStr[1] = v10;
      v14 = v11;
    }
    if ( v9 )
    {
      lpWideCharStr[1] = nullptr;
      j_free(v9);
    }
  }
  return a1;
}
