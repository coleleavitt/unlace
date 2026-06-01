__int64 __fastcall sub_E97C30(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v2; // rax
  unsigned int *v4; // rbx
  __int64 v5; // r13
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __m128i si128; // xmm1
  unsigned __int64 v9; // r14
  __int64 v10; // r10
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  __m128 *v14; // rdi
  unsigned __int64 v15; // r11
  __m128 *v16; // rcx
  __m128i v17; // xmm0
  unsigned __int64 v18; // r14
  unsigned __int64 v20; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+18h] [rbp-40h]

  v2 = a1 + 16;
  v4 = a2 + 2;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x800000000LL;
  v5 = (__int64)&a2[6 * *a2 + 2];
  if ( a2 + 2 != (unsigned int *)v5 )
  {
    v6 = 8;
    v7 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8FF0);
    while ( 1 )
    {
      if ( (*v4 & 0x7FFFFFFF) == 9 )
      {
        v9 = *((_QWORD *)v4 + 1);
        v10 = 24LL * v4[1];
        v11 = v4[1];
        v12 = v7 + v11;
        v13 = v11;
        if ( v6 < v7 + v11 )
        {
          v22 = 24LL * v4[1];
          v20 = v2;
          v21 = v11;
          sub_2237220(a1, v2, v12, 8);
          v7 = *(unsigned int *)(a1 + 8);
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8FF0);
          v10 = v22;
          v13 = v21;
          LODWORD(v12) = v7 + v11;
          v2 = v20;
        }
        v14 = (__m128 *)(*(_QWORD *)a1 + 8 * v7);
        if ( v10 )
        {
          v15 = 1;
          if ( v10 > 0 )
            v15 = v11;
          if ( v10 <= 72 )
            goto LABEL_17;
          v20 = v9 + 24;
          v16 = v14;
          v17 = (__m128i)_mm_loadh_ps((const double *)&v20);
          do
          {
            *v16++ = (__m128)v17;
            v17 = _mm_add_epi64(v17, si128);
          }
          while ( v16 != &v14[v15 >> 1] );
          v13 = v11 - (v15 & 0xFFFFFFFFFFFFFFFELL);
          v14 = (__m128 *)((char *)v14 + 8 * (v15 & 0xFFFFFFFFFFFFFFFELL));
          v9 += 24 * (v15 & 0xFFFFFFFFFFFFFFFELL);
          if ( v15 != (v15 & 0xFFFFFFFFFFFFFFFELL) )
          {
LABEL_17:
            v14->m128_u64[0] = v9;
            if ( v13 != 1 )
            {
              v14->m128_u64[1] = v9 + 24;
              v18 = v9 + 48;
              if ( v13 != 2 )
                v14[1].m128_u64[0] = v18;
            }
          }
        }
        v4 += 6;
        v7 = (unsigned int)v12;
        *(_DWORD *)(a1 + 8) = v12;
        if ( (unsigned int *)v5 == v4 )
          return a1;
      }
      else
      {
        if ( v7 + 1 > v6 )
        {
          v20 = v2;
          sub_2237220(a1, v2, v7 + 1, 8);
          v7 = *(unsigned int *)(a1 + 8);
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8FF0);
          v2 = v20;
        }
        *(_QWORD *)(*(_QWORD *)a1 + 8 * v7) = v4;
        v4 += 6;
        v7 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
        *(_DWORD *)(a1 + 8) = v7;
        if ( (unsigned int *)v5 == v4 )
          return a1;
      }
      v6 = *(unsigned int *)(a1 + 12);
    }
  }
  return a1;
}
