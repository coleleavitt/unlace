/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D21E0
// Address: 0x00000000000D21E0

//----- (00000000000D21E0) ----------------------------------------------------
int __fastcall sub_D21E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned __int8 a6)
{
  __int64 v10; // rax

  v10 = *(_QWORD *)(a2 + 16);
  if ( a6 )
  {
    LODWORD(v10) = strcmp(*(const char **)(a1 + 8), *(const char **)(v10 + 8));
    if ( (_DWORD)v10 )
    {
LABEL_3:
      LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16)
                                                                                                  + 40LL))(
                       *(_QWORD *)(a1 + 16),
                       a2,
                       a3,
                       a4,
                       a5,
                       a6);
      return v10;
    }
  }
  else if ( a1 != v10 )
  {
    goto LABEL_3;
  }
  *(_BYTE *)(a2 + 77) = 1;
  if ( *(_QWORD *)(a2 + 8) != a4 )
    return v10;
  *(_BYTE *)(a2 + 76) = 1;
  v10 = *(_QWORD *)(a2 + 32);
  if ( !v10 )
  {
    *(_QWORD *)(a2 + 32) = a3;
    *(_DWORD *)(a2 + 48) = a5;
    *(_DWORD *)(a2 + 60) = 1;
    if ( a5 != 1 )
      return v10;
    goto LABEL_14;
  }
  if ( v10 != a3 )
  {
    ++*(_DWORD *)(a2 + 60);
    goto LABEL_15;
  }
  LODWORD(v10) = *(_DWORD *)(a2 + 48);
  if ( (_DWORD)v10 == 2 )
  {
    *(_DWORD *)(a2 + 48) = a5;
    LODWORD(v10) = a5;
  }
  if ( (_DWORD)v10 == 1 )
  {
LABEL_14:
    if ( *(_DWORD *)(a2 + 72) != 1 )
      return v10;
LABEL_15:
    *(_BYTE *)(a2 + 78) = 1;
  }
  return v10;
}
