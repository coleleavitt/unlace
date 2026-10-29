__int64 __fastcall sub_B9F800(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int32 a5,
        double a6,
        double a7,
        __m128 a8)
{
  __int64 v11; // rax
  const __m128i *v12; // r14
  int v13; // r15d
  __m128i *v14; // rax
  __m128i v15; // xmm0
  __int8 v16; // r8
  __m128i v17; // xmm1
  __int64 v18; // rbx
  __m128 v19; // xmm0
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128i v26; // [rsp+10h] [rbp-48h] BYREF

  v11 = *(_QWORD *)(a3 + 8LL * a4 + 32);
  v12 = *(const __m128i **)(a1 + 16);
  v26.m128i_i32[3] = a5;
  v13 = *(_DWORD *)(v11 + 24);
  v26.m128i_i64[0] = *(_QWORD *)(v11 + 16);
  v14 = (__m128i *)sub_186B270(0x30u);
  v15 = _mm_loadl_epi64(v12);
  v16 = v26.m128i_i8[12];
  v17 = _mm_loadl_epi64(&v26);
  v14[1].m128i_i32[0] = (unsigned __int16)v13;
  v18 = (__int64)v14;
  v14[1].m128i_i8[4] = v16;
  v19 = (__m128)_mm_unpacklo_epi64(v15, v17);
  *v14 = (__m128i)v19;
  v20 = v12[1].m128i_i64[0];
  v14[1].m128i_i64[1] = (unsigned int)(unsigned __int16)v13 + 1;
  v14[2].m128i_i64[1] = 0;
  if ( (unsigned __int16)v13 > 6u )
  {
    v21 = sub_180C100(v20, 24);
    *(_DWORD *)v21 = 6;
    *(_QWORD *)(v21 + 8) = 0;
    *(_DWORD *)(v21 + 16) = (unsigned __int16)v13;
  }
  else
  {
    v21 = sub_180C100(v20, 16);
    *(_QWORD *)(v21 + 8) = 0;
    *(_DWORD *)v21 = (unsigned __int16)v13 - 1;
  }
  *(_QWORD *)(v18 + 32) = v21;
  sub_B9BFE0(a1, v18, a2, a3, a4);
  sub_B9F490(a1, *(_QWORD *)(v18 + 32), a4, v19, (__m128)v17, a8, v22, v23, v24);
  *(_DWORD *)(v18 + 28) = *(_DWORD *)(a1 + 96);
  return v18;
}

