void __fastcall sub_101F640(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int a7)
{
  __int64 v11; // rbx
  __int64 v12; // rax
  char *v13; // rsi
  unsigned int v14; // edx
  char *v15; // rax
  char *v16; // rsi
  int v17; // [rsp+Ch] [rbp-5Ch] BYREF
  __m128i v18; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+20h] [rbp-48h]

  v11 = a1 + 152;
  v12 = *(_QWORD *)(a1 + 160);
  v17 = a2;
  if ( !v12 )
    goto LABEL_17;
  do
  {
    while ( *(_DWORD *)(v12 + 32) >= a2 )
    {
      v11 = v12;
      v12 = *(_QWORD *)(v12 + 16);
      if ( !v12 )
        goto LABEL_6;
    }
    v12 = *(_QWORD *)(v12 + 24);
  }
  while ( v12 );
LABEL_6:
  if ( a1 + 152 == v11 || a2 < *(_DWORD *)(v11 + 32) )
  {
LABEL_17:
    v18.m128i_i64[0] = (__int64)&v17;
    v11 = sub_101F290((_QWORD *)(a1 + 144), v11, (int **)&v18);
  }
  v13 = *(char **)(v11 + 48);
  v14 = a3 - 1;
  if ( a6 != 1 )
  {
    if ( *(char **)(v11 + 40) == v13 )
    {
      if ( a6 == 2 )
        BUG();
    }
    else
    {
      v15 = v13 - 20;
      if ( a6 == 2 )
      {
        v15 = (char *)sub_101F540(a1, v17, *((_DWORD *)v13 - 1));
        v13 = *(char **)(v11 + 48);
      }
      if ( v15 )
      {
        v14 = *((_DWORD *)v15 + 4);
        if ( a5 == -1 )
          a5 = *((_DWORD *)v15 + 2);
        goto LABEL_15;
      }
    }
    v14 = 0;
  }
LABEL_15:
  v18.m128i_i64[0] = __PAIR64__(a4, a3);
  v18.m128i_i64[1] = __PAIR64__(a7, a5);
  v19 = v14;
  if ( *(char **)(v11 + 56) == v13 )
  {
    sub_101E770(v11 + 40, v13, &v18);
  }
  else
  {
    v16 = v13 + 20;
    *(__m128i *)(v16 - 20) = _mm_load_si128(&v18);
    *((_DWORD *)v16 - 1) = v19;
    *(_QWORD *)(v11 + 48) = v16;
  }
}
