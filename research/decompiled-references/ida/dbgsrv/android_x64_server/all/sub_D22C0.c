/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D22C0
// Address: 0x00000000000D22C0

//----- (00000000000D22C0) ----------------------------------------------------
int __fastcall sub_D22C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v9; // rax

  v9 = *(_QWORD *)(a2 + 16);
  if ( a6 )
  {
    LODWORD(v9) = strcmp(*(const char **)(a1 + 8), *(const char **)(v9 + 8));
    if ( (_DWORD)v9 )
      return v9;
  }
  else if ( a1 != v9 )
  {
    return v9;
  }
  *(_BYTE *)(a2 + 77) = 1;
  if ( *(_QWORD *)(a2 + 8) != a4 )
    return v9;
  *(_BYTE *)(a2 + 76) = 1;
  v9 = *(_QWORD *)(a2 + 32);
  if ( !v9 )
  {
    *(_QWORD *)(a2 + 32) = a3;
    *(_DWORD *)(a2 + 48) = a5;
    *(_DWORD *)(a2 + 60) = 1;
    if ( a5 != 1 )
      return v9;
LABEL_14:
    if ( *(_DWORD *)(a2 + 72) == 1 )
      goto LABEL_15;
    return v9;
  }
  if ( v9 != a3 )
  {
    ++*(_DWORD *)(a2 + 60);
LABEL_15:
    *(_BYTE *)(a2 + 78) = 1;
    return v9;
  }
  LODWORD(v9) = *(_DWORD *)(a2 + 48);
  if ( (_DWORD)v9 == 2 )
  {
    *(_DWORD *)(a2 + 48) = a5;
    LODWORD(v9) = a5;
  }
  if ( (_DWORD)v9 == 1 )
    goto LABEL_14;
  return v9;
}
