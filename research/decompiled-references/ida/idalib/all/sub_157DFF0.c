unsigned __int64 __fastcall sub_157DFF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int128 a8,
        __int64 a9)
{
  __int64 i; // r15
  __int64 v10; // r14
  __int64 v11; // r13
  __m128i v12; // xmm1
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  int v15; // r12d
  unsigned int v16; // eax
  __m128i v17; // xmm2
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // r15
  int v21; // r13d
  unsigned int v22; // eax
  char v23; // al
  __m128i v25; // xmm3
  __int64 v26; // rdx
  __int64 v27; // rdx
  __m128i v28; // xmm5
  unsigned __int64 v30; // [rsp+8h] [rbp-80h]
  __int64 v31; // [rsp+10h] [rbp-78h]
  __int64 v32; // [rsp+18h] [rbp-70h]
  __int64 v33; // [rsp+20h] [rbp-68h]
  __m128i v35; // [rsp+30h] [rbp-58h] BYREF
  __int64 v36; // [rsp+40h] [rbp-48h]

  v31 = a2;
  v33 = a3 & 1;
  v32 = (a3 - 1) / 2;
  v30 = a8;
  if ( a2 >= v32 )
  {
    v10 = a2;
    v11 = a1 + 24 * a2;
    if ( (a3 & 1) != 0 )
    {
      v35.m128i_i64[1] = _mm_loadu_si128((const __m128i *)&a8).m128i_i64[1];
      v36 = a9;
      goto LABEL_13;
    }
LABEL_14:
    if ( (a3 - 2) / 2 == v10 )
    {
      v26 = 6 * (v10 + 1);
      v10 = 2 * (v10 + 1) - 1;
      v27 = a1 + 8 * v26 - 24;
      v28 = _mm_loadu_si128((const __m128i *)(v27 + 8));
      *(_QWORD *)v11 = *(_QWORD *)v27;
      *(__m128i *)(v11 + 8) = v28;
      v11 = a1 + 24 * v10;
    }
    goto LABEL_8;
  }
  for ( i = a2; ; i = v10 )
  {
    v10 = 2 * (i + 1);
    v11 = a1 + 48 * (i + 1);
    v14 = *(_QWORD *)v11;
    v15 = sub_EEB7E0(*(_QWORD *)(v11 - 24), a2, *(double *)a5.m128_u64);
    v16 = sub_EEB7E0(v14, a2, *(double *)a5.m128_u64);
    a2 = v16;
    if ( !sub_10246C0(a4, v16, v15) )
      break;
    --v10;
    v11 = a1 + 24 * v10;
    v12 = _mm_loadu_si128((const __m128i *)(v11 + 8));
    v13 = a1 + 24 * i;
    *(_QWORD *)v13 = *(_QWORD *)v11;
    *(__m128i *)(v13 + 8) = v12;
    if ( v10 >= v32 )
      goto LABEL_7;
LABEL_4:
    ;
  }
  v17 = _mm_loadu_si128((const __m128i *)(v11 + 8));
  v18 = a1 + 24 * i;
  *(_QWORD *)v18 = *(_QWORD *)v11;
  *(__m128i *)(v18 + 8) = v17;
  if ( v10 < v32 )
    goto LABEL_4;
LABEL_7:
  if ( !v33 )
    goto LABEL_14;
LABEL_8:
  v36 = a9;
  v35.m128i_i64[1] = _mm_loadu_si128((const __m128i *)&a8).m128i_i64[1];
  v19 = (v10 - 1) / 2;
  if ( v10 > v31 )
  {
    while ( 1 )
    {
      v20 = a1 + 24 * v19;
      v21 = sub_EEB7E0(v30, a2, *(double *)a5.m128_u64);
      v22 = sub_EEB7E0(*(_QWORD *)v20, a2, *(double *)a5.m128_u64);
      a2 = v22;
      v23 = sub_10246C0(a4, v22, v21);
      v11 = a1 + 24 * v10;
      if ( !v23 )
        break;
      a5 = (__m128)_mm_loadu_si128((const __m128i *)(v20 + 8));
      v10 = v19;
      *(_QWORD *)v11 = *(_QWORD *)v20;
      *(__m128 *)(v11 + 8) = a5;
      if ( v31 >= v19 )
      {
        v11 = a1 + 24 * v19;
        break;
      }
      v19 = (v19 - 1) / 2;
    }
  }
LABEL_13:
  v25 = _mm_loadu_si128((const __m128i *)&v35.m128i_u64[1]);
  *(_QWORD *)v11 = v30;
  *(__m128i *)(v11 + 8) = v25;
  return v30;
}
