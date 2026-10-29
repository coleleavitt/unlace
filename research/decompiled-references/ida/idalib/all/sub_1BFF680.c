void __fastcall sub_1BFF680(
        __int64 *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __m128i *a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned __int8 a9)
{
  int v9; // r15d
  char v15; // cl
  bool v16; // zf
  unsigned int v17; // edx
  __m128i *v18; // rax
  __int64 v19; // rax
  char v20; // al
  unsigned int v21; // [rsp+4h] [rbp-54h]
  unsigned int v22; // [rsp+Ch] [rbp-4Ch]
  const __m128i *v23; // [rsp+10h] [rbp-48h] BYREF
  __int64 v24; // [rsp+18h] [rbp-40h]

  v9 = 0;
  v22 = -30;
  v21 = *(_DWORD *)(a2 + 2968);
  if ( *(_BYTE *)(a2 + 2984) )
  {
    v15 = a3 - 16;
    if ( (unsigned int)(a3 - 16) <= 0x11 )
    {
      if ( ((1LL << v15) & 0x30003) != 0 )
      {
        v22 = 0;
        v9 = 34;
      }
      else
      {
        v19 = (1LL << v15) & 0x8000;
        v22 = v19 == 0 ? 0xFFFFFFE2 : 0;
        v9 = v19 != 0 ? 0x1E : 0;
      }
    }
  }
  sub_1BF4A50(a1, a4, a5, a6, a2, 0, a7, a8);
  v16 = *(_BYTE *)(a2 + 2984) == 0;
  v23 = nullptr;
  v24 = 0;
  if ( !v16 )
  {
    if ( ((a3 - 30) & 0xFFFFFFFB) != 0 && v22 )
    {
      sub_1BF0DE0(a1, a3, v21, a5, a6, a2, *(double *)a7.m128_u64, a8, 0);
      goto LABEL_7;
    }
    v17 = *(_DWORD *)(a2 + 2988);
    v23 = (const __m128i *)a5->m128i_i64[0];
    v24 = a5->m128i_i64[1];
    if ( 4864 - v17 <= 0xF )
    {
      v18 = (__m128i *)sub_9C3B30((__int64 *)(a2 + 2872), 16, 3u);
    }
    else
    {
      *(_DWORD *)(a2 + 2988) = v17 + 16;
      v18 = (__m128i *)(a2 + v17 + 2992);
    }
    v24 = 2;
    a7 = _mm_loadh_ps((const double *)&v23);
    v23 = v18;
    *v18 = (__m128i)a7;
  }
  sub_1BF0DE0(a1, a3, v21, a5, a6, a2, *(double *)a7.m128_u64, a8, 0);
  if ( *(_BYTE *)(a2 + 2984) && ((a3 - 30) & 0xFFFFFFFB) == 0 )
    sub_1BF0DE0(a1, a3, v21, v23, v24, a2, *(double *)a7.m128_u64, a8, 1u);
LABEL_7:
  if ( v9 )
  {
    sub_1BF0DE0(a1, v9, v21, a5, a6, a2, *(double *)a7.m128_u64, a8, 0);
    v20 = a9 & (a3 != 15);
    if ( *(_BYTE *)(a2 + 2984) && !v22 )
    {
      sub_1BF0DE0(a1, v9, v21, v23, v24, a2, *(double *)a7.m128_u64, a8, 1u);
      v20 = a9 & (a3 != 15);
    }
    if ( v20 )
    {
      sub_1BF3E80(a1, (a1[31] + 16LL * a3 + 17592) | 6, v21, a5, a6, 0, a7, a8, a2, 0);
      sub_1BF3E80(a1, (a1[31] + 16LL * v9 + 17592) | 6, v21, a5, a6, 0, a7, a8, a2, 0);
    }
  }
  else if ( (a9 & (a3 != 15)) != 0 )
  {
    sub_1BF3E80(a1, (a1[31] + 16LL * a3 + 17592) | 6, v21, a5, a6, 0, a7, a8, a2, 0);
  }
  sub_1BFBE60((__int64)a1, (unsigned int)a3, v21, a5->m128i_i64, a6, a2, *(double *)a7.m128_u64, a8);
}
