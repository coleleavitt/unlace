__int64 __fastcall sub_1DF900(__int64 a1)
{
  int *v1; // rdx
  int *v2; // rsi
  unsigned int v3; // r8d
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax

  v1 = *(int **)(a1 + 16);
  v2 = &v1[*(_QWORD *)(a1 + 24)];
  if ( v1 == v2 )
    return 0;
  v3 = 0;
  do
  {
    v4 = *v1;
    if ( (v4 & 0x80000000) == 0LL && v4 < (unsigned __int64)xmmword_8CC398 )
    {
      v5 = qword_8CC390 + 56 * v4;
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( (int)v3 < v7 )
            v3 = v7;
        }
      }
    }
    ++v1;
  }
  while ( v1 != v2 );
  return v3;
}
