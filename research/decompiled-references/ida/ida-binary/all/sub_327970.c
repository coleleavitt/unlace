__int64 __fastcall sa_chooser_t__::vfunc_13(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // rax
  const __m128i *v15; // r12
  __int64 v16; // rbp
  const __m128i *v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  double v27; // xmm4_8
  double v28; // xmm5_8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  __int64 v37; // rsi
  __m128i v38; // [rsp+0h] [rbp-88h] BYREF
  __m128i v39; // [rsp+10h] [rbp-78h]
  __int64 v40; // [rsp+20h] [rbp-68h]
  __int64 v41; // [rsp+28h] [rbp-60h]
  __m128i v42; // [rsp+30h] [rbp-58h] BYREF
  __int64 v43; // [rsp+40h] [rbp-48h]
  __int64 v44; // [rsp+48h] [rbp-40h]
  __int64 v45; // [rsp+50h] [rbp-38h]
  __int64 v46; // [rsp+58h] [rbp-30h]
  unsigned __int64 v47; // [rsp+68h] [rbp-20h]

  v14 = *(_QWORD *)(a1 + 208);
  v15 = *(const __m128i **)(a1 + 184);
  v47 = __readfsqword(0x28u);
  v16 = *(_QWORD *)(v14 + 8 * a2);
  if ( v15
    || (v15 = (const __m128i *)qword_8CC7C0) != nullptr
    || (_QWORD)xmmword_8CC7D8 && (v15 = *(const __m128i **)qword_8CC7D0) != nullptr )
  {
    v17 = (const __m128i *)sub_1EA6A0((__int64)v15[24].m128i_i64, a2, a3, a4, *(double *)a7.m128_u64);
    if ( *(_QWORD *)(a1 + 184) || (v18 = &qword_8CC7C0, qword_8CC7C0) )
    {
      v41 = v16;
      v38 = _mm_loadu_si128(v17);
      v22 = _mm_loadu_si128(v17 + 1);
      v23 = v17[2].m128i_i64[0];
      v39 = v22;
      v40 = v23;
      if ( v16 )
        v41 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 16LL))(
                v16,
                a2,
                v18,
                v19,
                v20,
                v21,
                v38.m128i_i64[0],
                v38.m128i_i64[1],
                v39.m128i_i64[0],
                v39.m128i_i64[1],
                v40);
      v24 = &v42;
      v43 = 0;
      v44 = -1;
      v45 = 0;
      v46 = 0;
      v42 = 0;
      if ( (unsigned int)sub_1EB7C0(v15, (__int64)&v42, (__int64)&v38, 1, (__m128i)0LL) == 1 )
      {
        v24 = &v42;
        HIWORD(v44) = 5;
        sub_1FFC10((__int64)v15, &v42, 6, 0, v25, v26, 0.0, a8, a9, a10, v27, v28, a13, a14);
      }
      else
      {
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 128LL))(v16);
        if ( v29 == -1 || (v24 = (__m128i *)v29, !(unsigned __int8)sub_192AA0(0, v29, -1, 5u)) )
          sub_169700(
            (int)"Could not jump to location (no suitable view to jump)\n",
            (__int64)v24,
            v30,
            v31,
            v32,
            v33,
            (__m128)0LL,
            a8,
            a9,
            a10,
            v34,
            v35,
            a13,
            a14,
            v38.m128i_i8[0]);
      }
      if ( v46 )
        qfree(v46, v24->m128i_i8);
      if ( v41 )
        qfree(v41, v24->m128i_i8);
    }
    else
    {
      v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 128LL))(v16);
      if ( v37 != -1 )
        (*(void (__fastcall **)(const __m128i *, __int64, __int64, _QWORD))(v15->m128i_i64[0] + 1104))(v15, v37, 1, 0);
    }
  }
  else
  {
    sub_169700(
      (int)"Could not jump to location (no view to jump)\n",
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      v38.m128i_i8[0]);
  }
  return -1;
}
