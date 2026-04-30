unsigned __int64 __fastcall sub_2BC330(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        double a4,
        __m128i a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __m128i *v14; // r12
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(__int64, __int64); // rdx
  __int64 (__fastcall *v21)(__int64, __int64); // rax
  __int64 v22; // rdi
  const __m128i *v23; // rax
  __m128 v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  double v30; // xmm4_8
  double v31; // xmm5_8
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r12
  __int64 i; // rbp
  __int64 *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdi
  __m128 *v39; // rax
  __int64 v40; // xmm0_8
  __int32 v41; // edx
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdi
  __m128i v45; // xmm0
  __m128i *v46; // [rsp+8h] [rbp-D0h] BYREF
  __m128i v47[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+30h] [rbp-A8h]
  __m128i v49; // [rsp+40h] [rbp-98h] BYREF
  __m128i v50; // [rsp+50h] [rbp-88h]
  __int64 v51; // [rsp+60h] [rbp-78h]
  __int64 v52; // [rsp+68h] [rbp-70h]
  __m128i v53; // [rsp+70h] [rbp-68h] BYREF
  __m128i v54; // [rsp+80h] [rbp-58h] BYREF
  __int64 v55; // [rsp+90h] [rbp-48h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-30h]

  v56 = __readfsqword(0x28u);
  v46 = nullptr;
  if ( !(unsigned __int8)sub_2B5270((_QWORD *)a1, (__int64 *)&v46, a2) )
    return v56 - __readfsqword(0x28u);
  v14 = v46;
  v15 = a3[2].m128i_i64[0];
  v47[0] = _mm_loadu_si128(a3);
  v16 = _mm_loadu_si128(a3 + 1);
  v48 = v15;
  v47[1] = v16;
  sub_2BC080(a1, (__int64)v47, v46, *(double *)v16.m128i_i64);
  v16.m128i_i64[0] = 0;
  v17 = &v49;
  v50.m128i_i64[0] = 0;
  v50.m128i_i64[1] = -1;
  v51 = 0;
  v52 = 0;
  v49 = 0;
  if ( !(unsigned __int8)sub_2BC150(a1, &v49, v47, v14, 0.0) )
  {
    v39 = (__m128 *)sub_1EA680(*(_QWORD *)(a1 + 16) + 384LL, (__int64)&v49, v18, v19, 0.0);
    a5 = *(__m128i *)v39;
    v40 = v39[1].m128_i64[0];
    v41 = v39[2].m128_i32[0];
    v42 = v39[2].m128_i64[1];
    v54.m128i_i64[1] = 0xFFFFFFFFLL;
    LODWORD(v55) = v41;
    v53 = a5;
    v54.m128i_i64[0] = v40;
    if ( v42 )
    {
      v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      v44 = v52;
      v42 = v43;
      if ( !v52 )
        goto LABEL_22;
    }
    else
    {
      v44 = v52;
      if ( !v52 )
      {
        v45 = _mm_load_si128(&v53);
        LODWORD(v51) = v41;
        v49 = v45;
        v16 = _mm_load_si128(&v54);
        v50 = v16;
        goto LABEL_4;
      }
    }
    qfree(v44, v49.m128i_i8);
    v52 = 0;
LABEL_22:
    v49 = _mm_load_si128(&v53);
    v16 = _mm_load_si128(&v54);
    LODWORD(v51) = v55;
    v50 = v16;
    if ( v42 )
    {
      v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      *(double *)v16.m128i_i64 = qfree(v42, v49.m128i_i8);
    }
  }
LABEL_4:
  v20 = sub_2B23B0;
  v21 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 600LL);
  if ( v21 == sub_2B23B0 )
  {
    v22 = *(_QWORD *)(a1 + 440);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    *(_QWORD *)(a1 + 440) = v14;
  }
  else
  {
    v17 = v14;
    v21(a1, (__int64)v14);
  }
  v23 = (const __m128i *)sub_1EA6A0(
                           *(_QWORD *)(a1 + 16) + 384LL,
                           (__int64)v17,
                           (__int64)v20,
                           v19,
                           *(double *)v16.m128i_i64);
  v53 = _mm_loadu_si128(v23);
  v24 = (__m128)_mm_loadu_si128(v23 + 1);
  v54 = (__m128i)v24;
  v25 = v23[2].m128i_i64[0];
  v54.m128i_i32[2] = -1;
  v55 = v25;
  sub_1F14A0((const __m128i *)(*(_QWORD *)(a1 + 16) + 384LL), &v53, v26, v27, v28, v29);
  sub_174FE0((__int64 *)a1);
  sub_1FF700(*(_QWORD *)(a1 + 16) + 384LL, &v49, v24, (__m128)a5, a6, a7, v30, v31, a10, a11);
  v32 = *(_QWORD *)(a1 + 192);
  if ( v32 )
  {
    *(_QWORD *)(a1 + 200) = 0;
    qfree(v32, v49.m128i_i8);
    *(_QWORD *)(a1 + 192) = 0;
    *(_QWORD *)(a1 + 208) = 0;
  }
  sub_2B38C0(a1 + 192);
  v33 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(a1 + 68) = 0;
  if ( v33 )
  {
    v34 = *(_QWORD *)(a1 + 48);
    if ( v34 )
    {
      for ( i = 0; i != v34; ++i )
      {
        v36 = (__int64 *)(v33 + 24 * i);
        v37 = *v36;
        if ( *v36 )
        {
          v36[1] = 0;
          qfree(v37, v49.m128i_i8);
          v33 = *(_QWORD *)(a1 + 40);
        }
      }
    }
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v33, v49.m128i_i8);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  v38 = v52;
  *(_DWORD *)(a1 + 64) = -1;
  if ( v38 )
    qfree(v38, v49.m128i_i8);
  return v56 - __readfsqword(0x28u);
}
