__int64 __fastcall sub_211BC00(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  const char *v6; // rsi
  int v7; // edx
  __int64 v8; // rdi
  _QWORD *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 *v12; // rdx
  const char *v13; // rdi
  __int64 v14; // rdi
  __int64 *v15; // rdx
  _QWORD v16[4]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v17; // [rsp+20h] [rbp-18h]

  result = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(result + 152);
  if ( *(_DWORD *)(v5 + 312) != 4 || (v7 = *(_DWORD *)(v5 + 320)) == 0 || v7 == 6 )
  {
    v6 = ".seh_* directives are not supported on this target";
LABEL_3:
    v16[0] = v6;
    v17 = 259;
    return sub_2100A30(result, a3, (__int64)v16);
  }
  v8 = *(_QWORD *)(a1 + 104);
  if ( !v8 || (v9 = *(_QWORD **)(v8 + 8)) != nullptr )
  {
    v6 = ".seh_ directive must appear within an active frame";
    goto LABEL_3;
  }
  if ( *(_BYTE *)(v8 + 84) != 1 )
  {
    v10 = *(_QWORD *)(v8 + 32);
    v11 = 0;
    if ( (*(_BYTE *)(v10 + 8) & 1) != 0 )
    {
      v12 = *(__int64 **)(v10 - 8);
      v11 = *v12;
      v9 = v12 + 3;
    }
    v13 = "Duplicate .seh_unwindversion in ";
    v17 = 1283;
LABEL_12:
    v16[0] = v13;
    v16[2] = v9;
    v16[3] = v11;
    return sub_2100A30(result, a3, (__int64)v16);
  }
  if ( a2 != 2 )
  {
    v14 = *(_QWORD *)(v8 + 32);
    v11 = 0;
    if ( (*(_BYTE *)(v14 + 8) & 1) != 0 )
    {
      v15 = *(__int64 **)(v14 - 8);
      v11 = *v15;
      v9 = v15 + 3;
    }
    v17 = 1283;
    v13 = "Unsupported version specified in .seh_unwindversion in ";
    goto LABEL_12;
  }
  *(_BYTE *)(v8 + 84) = 2;
  return result;
}
