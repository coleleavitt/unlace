void __fastcall sub_B06790(__int64 a1)
{
  __int64 v1; // rbx
  __int64 i; // rbp
  __int64 v3; // rsi
  unsigned int *v4; // rsi

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 )
  {
    for ( i = v1 + 48LL * *(unsigned int *)(v1 - 4); v1 != i; v1 += 48 )
    {
      v3 = *(_QWORD *)(v1 + 16);
      if ( v3 )
        sub_B065C0(a1, v3);
      v4 = *(unsigned int **)(v1 + 40);
      if ( v4 )
        sub_B05FE0(a1, v4);
    }
  }
}

