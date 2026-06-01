__int64 __fastcall sub_2C4D80(
        __int64 a1,
        __int64 a2,
        __int32 a3,
        unsigned __int8 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  _QWORD *v13; // rdi
  _QWORD *v16; // r12
  unsigned int v17; // r15d
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  __int64 v27; // rax
  const __m128i *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  const __m128i *v31; // rax
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rcx
  double v36; // xmm4_8
  double v37; // xmm5_8
  _QWORD *v38; // [rsp+0h] [rbp-88h] BYREF
  __int64 v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+10h] [rbp-78h]
  __m128i v41; // [rsp+18h] [rbp-70h]
  __m128i v42; // [rsp+28h] [rbp-60h]
  int v43; // [rsp+38h] [rbp-50h]
  int v44; // [rsp+40h] [rbp-48h]
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]
  int v46; // [rsp+50h] [rbp-38h]
  int v47; // [rsp+58h] [rbp-30h]
  __int64 v48; // [rsp+60h] [rbp-28h]

  v45 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 8) )
    return 0;
  v13 = *(_QWORD **)(a1 + 440);
  if ( v13 )
    v13 = (_QWORD *)v13[1];
  v16 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v13 + 168LL))(v13);
  v17 = sub_29B4F0(v16, a2, a4);
  if ( !(_BYTE)v17 )
  {
    if ( v16 )
      (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
    return 0;
  }
  *(double *)a5.m128_u64 = sub_29BBD0((__int64)v16, a2, a5, a6, a7, a8, v18, v19, a11, a12);
  if ( a4 )
  {
    v27 = sub_1EA6C0(
            *(_QWORD *)(a1 + 16) + 384LL,
            a2,
            v21,
            v22,
            v23,
            v24,
            a5,
            a6,
            a7,
            a8,
            v25,
            v26,
            a11,
            a12,
            (__int64)v38,
            v39,
            v40,
            v41.m128i_i32[0],
            v41.m128i_i64[1],
            v42.m128i_i64[0],
            v42.m128i_i64[1],
            v43,
            v44,
            v45,
            v46,
            v47,
            v48);
    v38 = v16;
    v39 = 0;
    v28 = (const __m128i *)v27;
    v40 = 0xA00000028LL;
    v31 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, a2, v29, v30, *(double *)a5.m128_u64);
    v32 = _mm_loadu_si128(v31 + 1);
    LODWORD(v31) = v31[2].m128i_i32[0];
    v42 = v32;
    v33 = _mm_loadu_si128(v28);
    v43 = (int)v31;
    v34 = v28[1].m128i_i64[0];
    v42.m128i_i32[2] = a3;
    v42.m128i_i64[0] = v34;
    v41 = v33;
    sub_2C29E0(a1, (__int64)&v38, 1, v35, *(double *)v33.m128i_i64, a6, a7, a8, v36, v37, a11, a12);
  }
  else
  {
    sub_2C43C0(a1, (__int64)v16, a2, a5, a6, a7, a8, *(double *)v25.m128_u64, *(double *)v26.m128_u64, a11, a12);
  }
  return v17;
}
