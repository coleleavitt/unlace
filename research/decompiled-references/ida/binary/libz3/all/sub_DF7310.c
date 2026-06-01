__int64 __fastcall sub_DF7310(__int64 ****a1, unsigned int a2, __int64 a3)
{
  __int64 ***v3; // rax
  __int64 **v4; // r13
  __int64 **v7; // r12
  __m128i v8; // xmm0
  int v9; // r15d
  __int64 *v10; // rax
  __int64 *v11; // rsi
  __int64 *v12; // rbx
  size_t v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  bool v21; // di
  __int64 v22; // [rsp+0h] [rbp-40h]

  v3 = *a1;
  if ( !*a1 )
    return 0;
  v4 = *v3;
  if ( !*v3 )
    return 0;
  v7 = &v4[2 * *((unsigned int *)v4 - 1)];
  if ( v7 == v4 )
    return 0;
  while ( 2 )
  {
    while ( 1 )
    {
      v15 = *v4;
      if ( *v4 )
        break;
      if ( !a2 )
        return (__int64)v4[1];
LABEL_11:
      v4 += 2;
      if ( v7 == v4 )
        return 0;
    }
    do
    {
      v8 = _mm_loadl_epi64((const __m128i *)(v15 - 1));
      v22 = v8.m128i_i64[0];
      v9 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v8, 229));
      v10 = (__int64 *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v8) + 8);
      v11 = *v4;
      v12 = v10;
      *v10 = v22;
      if ( !v11 )
        goto LABEL_8;
      v13 = 8LL * *((unsigned int *)v11 - 1);
      if ( v13 > 8 )
      {
        memmove(v10 + 1, v11, v13);
LABEL_8:
        v14 = (__int64)v4[1];
        goto LABEL_9;
      }
      v14 = (__int64)v4[1];
      if ( v13 == 8 )
      {
        v10[1] = *v11;
        goto LABEL_8;
      }
LABEL_9:
      if ( a2 != v9 )
      {
        sub_186B220(v12);
        goto LABEL_11;
      }
      if ( !a2 )
        goto LABEL_24;
      v18 = 0;
      do
      {
        v19 = *(_QWORD *)(a3 + 8 * v18);
        v20 = v12[v18 + 1];
        v21 = (int)v18++ + 1 < a2;
      }
      while ( v19 == v20 && v21 );
      if ( v19 == v20 )
      {
LABEL_24:
        v22 = v14;
        sub_186B220(v12);
        return v22;
      }
      v4 += 2;
      sub_186B220(v12);
      if ( v7 == v4 )
        return 0;
      v15 = *v4;
    }
    while ( *v4 );
    v4 += 2;
    if ( v7 != v4 )
      continue;
    return 0;
  }
}

