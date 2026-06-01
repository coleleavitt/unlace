/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D1F60
// Address: 0x00000000000D1F60

//----- (00000000000D1F60) ----------------------------------------------------
int __fastcall sub_D1F60(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  __int64 v7; // rax
  const char *v8; // rbp

  v7 = *(_QWORD *)(a2 + 16);
  if ( a5 )
  {
    v8 = *(const char **)(a1 + 8);
    LODWORD(v7) = strcmp(v8, *(const char **)(v7 + 8));
    if ( (_DWORD)v7 )
    {
      LODWORD(v7) = strcmp(v8, *(const char **)(*(_QWORD *)a2 + 8LL));
      if ( (_DWORD)v7 )
        return v7;
      goto LABEL_4;
    }
  }
  else if ( a1 != v7 )
  {
    if ( a1 != *(_QWORD *)a2 )
      return v7;
LABEL_4:
    if ( *(_QWORD *)(a2 + 32) == a3 || *(_QWORD *)(a2 + 40) == a3 )
    {
      if ( a4 == 1 )
        *(_DWORD *)(a2 + 56) = 1;
    }
    else
    {
      *(_DWORD *)(a2 + 56) = a4;
      *(_QWORD *)(a2 + 40) = a3;
      ++*(_DWORD *)(a2 + 64);
      if ( *(_DWORD *)(a2 + 60) == 1 && *(_DWORD *)(a2 + 48) == 2 )
        *(_BYTE *)(a2 + 78) = 1;
      *(_DWORD *)(a2 + 68) = 4;
    }
    return v7;
  }
  if ( *(_QWORD *)(a2 + 8) == a3 && *(_DWORD *)(a2 + 52) != 1 )
    *(_DWORD *)(a2 + 52) = a4;
  return v7;
}
