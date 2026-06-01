/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D9338
// Address: 0x00000000000D9338

//----- (00000000000D9338) ----------------------------------------------------
__int64 __fastcall sub_D9338(__int64 result, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  __int64 v6; // x8
  __int64 v12; // x24
  __int64 v13; // x9
  __int64 v14; // x9
  int v15; // w8
  unsigned int v16; // w8

  v6 = *(_QWORD *)(a2 + 16);
  v12 = result;
  if ( (a6 & 1) != 0 )
  {
    result = strcmp(*(const char **)(result + 8), *(const char **)(v6 + 8));
    if ( (_DWORD)result )
      return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(v12 + 16)
                                                                                          + 40LL))(
               *(_QWORD *)(v12 + 16),
               a2,
               a3,
               a4,
               a5,
               a6 & 1);
  }
  else if ( result != v6 )
  {
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(v12 + 16) + 40LL))(
             *(_QWORD *)(v12 + 16),
             a2,
             a3,
             a4,
             a5,
             a6 & 1);
  }
  v13 = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(a2 + 77) = 1;
  if ( v13 != a4 )
    return result;
  v14 = *(_QWORD *)(a2 + 32);
  *(_BYTE *)(a2 + 76) = 1;
  if ( !v14 )
  {
    *(_QWORD *)(a2 + 32) = a3;
    *(_DWORD *)(a2 + 48) = a5;
    *(_DWORD *)(a2 + 60) = 1;
    if ( a5 != 1 )
      return result;
    goto LABEL_15;
  }
  if ( v14 != a3 )
  {
    v15 = *(_DWORD *)(a2 + 60);
    *(_BYTE *)(a2 + 78) = 1;
    *(_DWORD *)(a2 + 60) = v15 + 1;
    return result;
  }
  v16 = *(_DWORD *)(a2 + 48);
  if ( v16 == 2 )
  {
    v16 = a5;
    *(_DWORD *)(a2 + 48) = a5;
  }
  if ( v16 == 1 )
  {
LABEL_15:
    if ( *(_DWORD *)(a2 + 72) == 1 )
      *(_BYTE *)(a2 + 78) = 1;
  }
  return result;
}
