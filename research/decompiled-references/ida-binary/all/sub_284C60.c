__int64 __fastcall sub_284C60(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int16 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  _QWORD **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __m128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdi
  double v27; // xmm4_8
  double v28; // xmm5_8
  __m128i v30; // [rsp+0h] [rbp-58h] BYREF
  __int128 v31; // [rsp+10h] [rbp-48h]
  __int64 v32; // [rsp+20h] [rbp-38h]
  _QWORD *v33; // [rsp+28h] [rbp-30h]
  unsigned __int64 v34; // [rsp+38h] [rbp-20h]

  v34 = __readfsqword(0x28u);
  v15 = (_QWORD **)sub_284860(a1, a2);
  if ( !v15 )
    return 0;
  v20 = *v15;
  if ( !*v15 )
    return 0;
  v21 = a3[2].m128i_i64[0];
  v33 = v20;
  v32 = v21;
  v22 = *v20;
  v30 = _mm_loadu_si128(a3);
  v23 = (__m128)_mm_loadu_si128(a3 + 1);
  v24 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64, unsigned __int64, __int64, _QWORD *))(v22 + 16))(
          v20,
          a2,
          v16,
          v17,
          v18,
          v19,
          v30.m128i_i64[0],
          v30.m128i_i64[1],
          v23.m128_u64[0],
          v23.m128_u64[1],
          v32,
          v20);
  v25 = *(_QWORD *)(a1 + 16);
  v33 = (_QWORD *)v24;
  *(double *)v23.m128_u64 = (*(double (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v25 + 584LL))(v25, &v30);
  v26 = *(_QWORD *)(a1 + 16);
  HIWORD(v31) += a4;
  sub_1FF700(v26 + 384, &v30, v23, a6, a7, a8, v27, v28, a11, a12);
  if ( v33 )
    qfree(v33, v30.m128i_i8);
  return 1;
}
