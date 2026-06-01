/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75750
// Address: 0x0000000000075750

//----- (0000000000075750) ----------------------------------------------------
__int64 __fastcall sub_75750(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  const char *v4; // r13
  __int64 v5; // rbx
  const char *v6; // rdi
  int v7; // eax
  const char *v8; // rsi

  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      v4 = s1;
      if ( *(_QWORD *)(a2 + 8) )
        v4 = *(const char **)a2;
      v5 = a1 + 8;
      do
      {
        v6 = s1;
        if ( *(_QWORD *)(v3 + 40) )
          v6 = *(const char **)(v3 + 32);
        v7 = strcmp(v6, v4);
        if ( v7 >= 0 )
          v5 = v3;
        v3 = *(_QWORD *)(v3 + 8LL * (v7 < 0));
      }
      while ( v3 );
      if ( v5 != a1 + 8 )
      {
        v8 = s1;
        if ( *(_QWORD *)(v5 + 40) )
          v8 = *(const char **)(v5 + 32);
        if ( strcmp(v4, v8) >= 0 )
          break;
      }
    }
    if ( !*(_DWORD *)(a1 + 24) && !*(_DWORD *)(a1 + 28) )
      return 0xFFFFFFFFLL;
    a1 = sub_6D420(*(int *)(a1 + 24));
  }
  return *(unsigned int *)(v5 + 56);
}
