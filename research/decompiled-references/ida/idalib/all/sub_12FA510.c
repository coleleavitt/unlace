void __fastcall sub_12FA510(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  size_t v3; // r15
  size_t v4; // r8
  __m128i *v5; // rbx
  const void *v6; // rbp
  size_t v7; // rdx
  int v8; // eax
  size_t v9; // r14
  size_t v10; // rdx
  int v11; // eax
  __m128i v12; // xmm0
  __int64 v13; // [rsp+0h] [rbp-50h]
  size_t v14; // [rsp+8h] [rbp-48h]

  if ( a1 != a2 && a2 != a1 + 16 )
  {
    v2 = a1 + 32;
    while ( 1 )
    {
      v3 = *(_QWORD *)(v2 - 8);
      v4 = *(_QWORD *)(a1 + 8);
      v5 = (__m128i *)(v2 - 16);
      v13 = v2;
      v6 = *(const void **)(v2 - 16);
      v7 = v3;
      if ( v4 <= v3 )
        v7 = *(_QWORD *)(a1 + 8);
      if ( v7 )
      {
        v14 = *(_QWORD *)(a1 + 8);
        v8 = memcmp(*(const void **)(v2 - 16), *(const void **)a1, v7);
        v4 = v14;
        if ( v8 )
          break;
      }
      if ( v4 == v3 || v4 <= v3 )
      {
        while ( 1 )
        {
LABEL_13:
          v9 = v5[-1].m128i_u64[1];
          v10 = v3;
          if ( v9 <= v3 )
            v10 = v5[-1].m128i_u64[1];
          if ( !v10 )
            break;
          v11 = memcmp(v6, (const void *)v5[-1].m128i_i64[0], v10);
          if ( !v11 )
            break;
          if ( v11 >= 0 )
            goto LABEL_19;
LABEL_22:
          v12 = _mm_loadu_si128(--v5);
          v5[1] = v12;
        }
        if ( v9 != v3 && v9 > v3 )
          goto LABEL_22;
LABEL_19:
        v5->m128i_i64[0] = (__int64)v6;
        v2 += 16;
        v5->m128i_i64[1] = v3;
        if ( a2 == v13 )
          return;
      }
      else
      {
LABEL_4:
        if ( (__int64)v5->m128i_i64 - a1 > 0 )
          memmove(
            (void *)(v2 - 16 * (((__int64)v5->m128i_i64 - a1) >> 4)),
            &v5[-(((__int64)v5->m128i_i64 - a1) >> 4)],
            (size_t)v5 - a1);
        *(_QWORD *)a1 = v6;
        v2 += 16;
        *(_QWORD *)(a1 + 8) = v3;
        if ( a2 == v13 )
          return;
      }
    }
    if ( v8 >= 0 )
      goto LABEL_13;
    goto LABEL_4;
  }
}
