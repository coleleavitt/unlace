void __fastcall sub_1BF4A50(
        __int64 *a1,
        __int64 a2,
        __m128i *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 *v8; // r10
  __int64 v9; // r12
  __int64 *i; // r15
  int v13; // ecx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rsi
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // edx
  __int8 v22; // al
  __m128d v23; // xmm0
  unsigned int v24; // edx
  __int64 v25; // r9
  __int64 v26; // xmm0_8
  unsigned __int64 *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v32[5]; // [rsp+18h] [rbp-80h] BYREF
  __m128 *v33; // [rsp+40h] [rbp-58h]
  __int64 v34; // [rsp+48h] [rbp-50h]
  __m128 v35; // [rsp+50h] [rbp-48h] BYREF

  v8 = *(__int64 **)a2;
  v9 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
  v33 = &v35;
  if ( v8 != (__int64 *)v9 )
  {
    for ( i = v8; (__int64 *)v9 != i; ++i )
    {
      while ( 1 )
      {
        v16 = *i & 0xFFFFFFFFFFFFFFF8LL;
        v17 = *(_BYTE *)(v16 + 28) & 0x7F;
        if ( (unsigned int)v17 - 53 <= 1 || ((v17 + 52) & 0x7Fu) <= 1 )
        {
          v16 = sub_B72ED0(*i & 0xFFFFFFFFFFFFFFF8LL);
          v17 = *(_BYTE *)(v16 + 28) & 0x7F;
        }
        if ( v17 == 71 )
        {
          v13 = *(_DWORD *)(a5 + 2976);
          v14 = *(_QWORD *)(v16 + 48);
          if ( !v13 )
            goto LABEL_4;
          v18 = v16;
          v16 = *(_QWORD *)(v16 + 48);
        }
        else
        {
          v13 = *(_DWORD *)(a5 + 2976);
          if ( !v13 )
            goto LABEL_21;
          v18 = 0;
        }
        if ( (*(_DWORD *)(v16 + 40) & 7) != 6 )
          goto LABEL_5;
        v19 = *(_DWORD *)(*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v19 )
          goto LABEL_5;
        if ( v19 != v13 )
          break;
LABEL_20:
        if ( v18 )
        {
          v14 = v16;
          v16 = v18;
LABEL_4:
          v32[0] = v14;
          sub_1BF3B70(
            a1,
            (__int64 *)v16,
            *i,
            a6,
            (unsigned __int64 *)a3,
            a4,
            *(double *)a7.m128_u64,
            a8,
            a5,
            0,
            0,
            0,
            0);
          v15 = *(_QWORD *)(a5 + 2976);
          v35.m128_i8[8] = *(_BYTE *)(a5 + 2984);
          v35.m128_u64[0] = v15;
          if ( (unsigned __int8)sub_1BD2370((__int64)v33, a1, (__int64)a3, a4, v32[0]) )
          {
            v24 = *(_DWORD *)(a5 + 2988);
            v25 = a3->m128i_i64[0];
            v26 = a3->m128i_i64[1];
            if ( 4864 - v24 <= 0xF )
            {
              v28 = *(_QWORD *)(a5 + 2872);
              *(_QWORD *)(a5 + 2952) += 16LL;
              v27 = (unsigned __int64 *)((v28 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( *(_QWORD *)(a5 + 2880) >= (unsigned __int64)(v27 + 2) && v28 )
              {
                *(_QWORD *)(a5 + 2872) = v27 + 2;
              }
              else
              {
                v34 = v26;
                v32[0] = v25;
                v29 = sub_986170(a5 + 2872, 16, 16, 3, (__int64)v27, v25);
                v25 = v32[0];
                v27 = (unsigned __int64 *)v29;
              }
            }
            else
            {
              *(_DWORD *)(a5 + 2988) = v24 + 16;
              v27 = (unsigned __int64 *)(a5 + v24 + 2992);
            }
            v32[0] = v25;
            a7 = _mm_loadh_ps((const double *)v32);
            *(__m128 *)v27 = a7;
            sub_1BF3B70(a1, (__int64 *)v16, *i, a6, v27, 2u, *(double *)a7.m128_u64, a8, a5, 0, 0, 0, 1);
          }
          goto LABEL_5;
        }
LABEL_21:
        if ( a6 )
          goto LABEL_5;
        v32[1] = 0;
        v32[2] = 0;
        sub_1BF10B0(a1, v16, *i, (unsigned __int64 *)a3, a4, (unsigned int *)a5, a7, a8, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);
        v22 = *(_BYTE *)(a5 + 2984);
        v35.m128_u64[0] = *(_QWORD *)(a5 + 2976);
        v35.m128_i8[8] = v22;
        if ( !(unsigned __int8)sub_1BD2370((__int64)v33, a1, (__int64)a3, a4, v16) )
          goto LABEL_5;
        v23 = (__m128d)_mm_loadu_si128(a3);
        v32[3] = 0;
        ++i;
        v32[4] = 0;
        a7 = (__m128)_mm_shuffle_pd(v23, v23, 1);
        v35 = a7;
        sub_1BF10B0(
          a1,
          v16,
          *(i - 1),
          (unsigned __int64 *)v33,
          2u,
          (unsigned int *)a5,
          a7,
          a8,
          0,
          0,
          1,
          0,
          0,
          0,
          0,
          1,
          0,
          0);
        if ( (__int64 *)v9 == i )
          return;
      }
      if ( !*(_BYTE *)(a5 + 2984) )
        continue;
      v20 = v13 - 16;
      if ( v20 > 0x11 )
        continue;
      if ( ((1LL << v20) & 0x30003) != 0 )
      {
        v21 = 34;
      }
      else
      {
        v21 = 30;
        if ( (((unsigned __int16)(1LL << v20) >> 8) & 0x80u) == 0 )
          continue;
      }
      if ( v19 == v21 )
        goto LABEL_20;
LABEL_5:
      ;
    }
  }
}
