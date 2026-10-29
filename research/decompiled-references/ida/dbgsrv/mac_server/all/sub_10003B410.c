/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003B410
// Address: 0x000000010003B410

//----- (000000010003B410) ----------------------------------------------------
__int64 __fastcall sub_10003B410(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  const char *v4; // r15
  __int64 v5; // r13
  int v6; // eax
  const char *v7; // rdi
  const char *v8; // rsi

  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      v4 = _s1;
      if ( *(_QWORD *)(a2 + 8) )
        v4 = *(const char **)a2;
      v5 = a1 + 8;
      do
      {
        v7 = _s1;
        if ( *(_QWORD *)(v3 + 40) )
          v7 = *(const char **)(v3 + 32);
        v6 = strcmp(v7, v4);
        if ( v6 >= 0 )
          v5 = v3;
        v3 = *(_QWORD *)(v3 + 8LL * ((unsigned int)v6 >> 31));
      }
      while ( v3 );
      if ( v5 != a1 + 8 )
      {
        v8 = _s1;
        if ( *(_QWORD *)(v5 + 40) )
          v8 = *(const char **)(v5 + 32);
        if ( strcmp(v4, v8) >= 0 )
          break;
      }
    }
    if ( !*(_DWORD *)(a1 + 24) && !*(_DWORD *)(a1 + 28) )
      return 0xFFFFFFFFLL;
    a1 = sub_100033F10(*(int *)(a1 + 24));
  }
  return *(unsigned int *)(v5 + 56);
}
