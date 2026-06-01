/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140061080
// Address: 0x0000000140061080

//----- (0000000140061080) ----------------------------------------------------
__int64 __fastcall sub_140061080(__int64 a1, const char *a2, UINT a3, UINT a4)
{
  const CHAR *lpDefaultChar; // r15
  int v9; // eax
  __int64 cchWideChar; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  char *v13; // rax
  int v14; // r9d
  int v15; // eax
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r9d
  unsigned __int8 v19; // bl
  size_t v20; // rax
  int cbMultiByte; // [rsp+40h] [rbp-48h]
  __int128 lpWideCharStr; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-30h]
  char v25; // [rsp+A8h] [rbp+20h] BYREF

  lpWideCharStr = 0;
  v24 = 0;
  v25 = 95;
  lpDefaultChar = &v25;
  if ( a4 == 65001 )
    lpDefaultChar = nullptr;
  cbMultiByte = strlen(a2);
  v9 = MultiByteToWideChar(a3, 0, a2, cbMultiByte, nullptr, 0);
  cchWideChar = v9;
  if ( v9 <= 0 )
    goto LABEL_22;
  v11 = v9 + 1LL;
  v12 = *((_QWORD *)&lpWideCharStr + 1);
  if ( v11 <= *((_QWORD *)&lpWideCharStr + 1) )
  {
    if ( v9 + 1LL == *((_QWORD *)&lpWideCharStr + 1) || (unsigned __int64)(v9 + 1LL) >= *((_QWORD *)&lpWideCharStr + 1) )
      goto LABEL_12;
  }
  else
  {
    if ( v11 <= v24 )
    {
      v13 = (char *)lpWideCharStr;
    }
    else
    {
      v13 = (char *)sub_14005ABE0((__int64)&lpWideCharStr, (void *)lpWideCharStr, v9 + 1LL, 2u);
      *(_QWORD *)&lpWideCharStr = v13;
      v12 = *((_QWORD *)&lpWideCharStr + 1);
    }
    memset(&v13[2 * v12], 0, 2 * (v11 - v12));
  }
  *((_QWORD *)&lpWideCharStr + 1) = cchWideChar + 1;
LABEL_12:
  *(_WORD *)(lpWideCharStr + 2 * cchWideChar) = 0;
  if ( MultiByteToWideChar(a3, 0, a2, cbMultiByte, (LPWSTR)lpWideCharStr, cchWideChar) > 0 )
  {
    v14 = DWORD2(lpWideCharStr) - 1;
    if ( !*((_QWORD *)&lpWideCharStr + 1) )
      v14 = 0;
    v15 = WideCharToMultiByte(a4, 0, (LPCWCH)lpWideCharStr, v14, nullptr, 0, lpDefaultChar, nullptr);
    if ( v15 > 0 )
    {
      sub_14001A300(a1, v15);
      v16 = *(_QWORD *)(a1 + 8);
      v17 = v16 - 1;
      if ( !v16 )
        v17 = 0;
      v18 = DWORD2(lpWideCharStr) - 1;
      if ( !*((_QWORD *)&lpWideCharStr + 1) )
        v18 = 0;
      if ( WideCharToMultiByte(a4, 0, (LPCWCH)lpWideCharStr, v18, *(LPSTR *)a1, v17, lpDefaultChar, nullptr) > 0 )
      {
        v19 = 1;
        goto LABEL_27;
      }
    }
  }
LABEL_22:
  if ( a2 && (v20 = strlen(a2)) != 0 )
    sub_140001810(a1, a2, v20);
  else
    *(_QWORD *)(a1 + 8) = 0;
  v19 = 0;
LABEL_27:
  if ( (_QWORD)lpWideCharStr )
  {
    *((_QWORD *)&lpWideCharStr + 1) = 0;
    j_free((void *)lpWideCharStr);
  }
  return v19;
}
