void __fastcall sub_15B9900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i *v6; // rax
  char *v8; // rdi
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // r12
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __m128i *v14; // rdi

  v6 = *(__m128i **)(a1 + 32);
  if ( v6 && !*(_QWORD *)(a1 + 16) )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = (__m128i *)(*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
    {
      v14 = (__m128i *)v14->m128i_i64[0];
      if ( &v6[3] != v14 )
        goto LABEL_3;
    }
    else if ( &v6[3] != v14 )
    {
      goto LABEL_3;
    }
    sub_B94AD0(v14, v13, *(_QWORD *)(v13 + 16) & 4LL, a4, a5, a6);
  }
LABEL_3:
  v8 = *(char **)(a1 + 40);
  if ( *(_DWORD *)(a1 + 52) )
  {
    v9 = *(_DWORD *)(a1 + 48);
    if ( v9 )
    {
      v10 = 0;
      v11 = 8LL * (unsigned int)(v9 - 1) + 8;
      do
      {
        v12 = *(_QWORD **)&v8[v10];
        if ( v12 != (_QWORD *)-8LL && v12 )
        {
          operator delete(*(_QWORD *)&v8[v10], *v12 + 17LL, 8);
          v8 = *(char **)(a1 + 40);
        }
        v10 += 8;
      }
      while ( v11 != v10 );
    }
  }
  free(v8);
}
