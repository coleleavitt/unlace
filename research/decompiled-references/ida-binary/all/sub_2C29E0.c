__int64 __fastcall sub_2C29E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  unsigned int v12; // r12d
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // r13
  __m128i *v16; // rax
  const __m128i *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  double v22; // xmm4_8
  double v23; // xmm5_8
  __int64 v24; // rsi
  __m128i v25; // xmm0
  __int64 v26; // rax
  bool v28; // zf
  __m128i v29; // xmm0
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  double v33; // xmm4_8
  double v34; // xmm5_8
  __m128i v35; // [rsp+0h] [rbp-58h] BYREF
  __m128i v36; // [rsp+10h] [rbp-48h]
  __int64 v37; // [rsp+20h] [rbp-38h]
  unsigned __int64 v38; // [rsp+28h] [rbp-30h]

  v12 = (unsigned __int8)byte_8CCA9E;
  v38 = __readfsqword(0x28u);
  v13 = a2;
  if ( byte_8CCA9E && *(int *)(a2 + 20) > 0 && (a2 = *(unsigned int *)(a2 + 16), (int)a2 > 0) )
  {
    if ( *(_DWORD *)(a1 + 384) )
    {
      if ( (_BYTE)a3 )
      {
        v14 = a1 + 320;
        do
        {
          v15 = v14;
          v14 = *(_QWORD *)(v14 + 8);
        }
        while ( v14 );
        v16 = (__m128i *)operator new(0x40u);
        *v16 = _mm_loadu_si128((const __m128i *)v13);
        v16[1] = _mm_loadu_si128((const __m128i *)(v13 + 16));
        v16[2] = _mm_loadu_si128((const __m128i *)(v13 + 32));
        v16[3] = _mm_loadu_si128((const __m128i *)(v13 + 48));
        *(_QWORD *)(v15 + 8) = v16;
        return v12;
      }
      do
        sub_2C2100((__m128i *)a1, a2, a5, a6, a7, a8, a9, a10, a11, a12);
      while ( *(_DWORD *)(a1 + 384) );
    }
    *(__m128i *)(a1 + 320) = _mm_loadu_si128((const __m128i *)v13);
    v28 = *(_QWORD *)(a1 + 320) == 0;
    *(__m128i *)(a1 + 336) = _mm_loadu_si128((const __m128i *)(v13 + 16));
    *(__m128i *)(a1 + 352) = _mm_loadu_si128((const __m128i *)(v13 + 32));
    v29 = _mm_loadu_si128((const __m128i *)(v13 + 48));
    *(__m128i *)(a1 + 368) = v29;
    if ( !v28 )
      sub_2B4F60((_QWORD *)a1, (const char *)a2);
    v30 = *(int *)(a1 + 336);
    QT::QBasicTimer::start(a1 + 384, v30, a1);
    sub_2C2750(
      a1,
      v30,
      v31,
      v32,
      *(double *)v29.m128i_i64,
      *(double *)a6.m128_u64,
      *(double *)a7.m128_u64,
      *(double *)a8.m128_u64,
      v33,
      v34,
      a11,
      a12);
  }
  else
  {
    v17 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, a2, a3, a4, a5);
    v24 = *(_QWORD *)v13;
    v35 = _mm_loadu_si128(v17);
    v36 = _mm_loadu_si128(v17 + 1);
    v25 = _mm_loadu_si128((const __m128i *)(v13 + 24));
    v37 = v17[2].m128i_i64[0];
    v26 = *(_QWORD *)(v13 + 40);
    v35 = v25;
    v36.m128i_i64[0] = v26;
    if ( v24 )
    {
      v36.m128i_i64[1] = *(_QWORD *)(v13 + 48);
      sub_2BC330(a1, v24, &v35, *(double *)v25.m128i_i64, (__m128i)a6, a7, a8, v22, v23, a11, a12);
    }
    else
    {
      sub_1F14A0((const __m128i *)(*(_QWORD *)(a1 + 16) + 384LL), &v35, v18, v19, v20, v21);
    }
    v12 = 0;
    sub_1F4880(*(QT::QAbstractScrollArea **)(a1 + 16), 0);
  }
  return v12;
}
