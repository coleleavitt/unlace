void __fastcall sub_1FB2990(char **a1, unsigned __int64 a2)
{
  char *v2; // rdx
  __int64 i; // rax
  __int64 v4; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // r12
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r12
  char *v12; // rax
  char *v13; // rdx
  char *v14; // r15
  __int64 v15; // rax
  char *v16; // rdx
  char *v17; // rdi
  char *v18; // rsi
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi

  if ( a2 )
  {
    v2 = a1[1];
    if ( a2 <= (a1[2] - v2) >> 4 )
    {
      for ( i = 0; i != a2; ++i )
      {
        v4 = i;
        *(_OWORD *)&v2[16 * v4] = 0;
      }
      a1[1] = &v2[16 * a2];
      return;
    }
    v7 = v2 - *a1;
    v8 = v7 >> 4;
    if ( 0xFFFFFFFFFFFFFFFLL - (v7 >> 4) < a2 )
      std::__throw_length_error("vector::_M_default_append");
    v9 = v7 >> 4;
    if ( a2 >= v8 )
      v9 = a2;
    v10 = v8 + v9;
    if ( v10 > 0xFFFFFFFFFFFFFFFLL )
      v10 = 0xFFFFFFFFFFFFFFFLL;
    v11 = 16 * v10;
    v12 = (char *)operator new(v11);
    v13 = &v12[v7];
    v14 = v12;
    v15 = (__int64)&v12[16 * a2 + v7];
    do
    {
      *(_OWORD *)v13 = 0;
      v13 += 16;
    }
    while ( (char *)v15 != v13 );
    v16 = a1[1];
    v17 = *a1;
    if ( v16 == *a1 )
    {
      if ( !v17 )
        goto LABEL_18;
    }
    else
    {
      v18 = v16 - 16;
      v19 = 0;
      v20 = 0;
      v21 = ((unsigned __int64)(v18 - v17) >> 4) + 1;
      do
      {
        ++v19;
        *(__m128i *)&v14[v20] = _mm_loadu_si128((const __m128i *)&v17[v20]);
        v20 += 16;
      }
      while ( v21 > v19 );
    }
    operator delete(v17);
LABEL_18:
    *a1 = v14;
    a1[2] = &v14[v11];
    a1[1] = &v14[16 * a2 + 16 * v8];
  }
}
