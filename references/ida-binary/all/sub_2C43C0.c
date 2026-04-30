unsigned __int64 __fastcall sub_2C43C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rax
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  int *v25; // rbx
  unsigned int v26; // r15d
  const __m128i *v27; // rbp
  __m128 *v28; // rax
  int *v29; // rax
  __int64 v30; // r15
  int v31; // ebp
  __int64 v32; // rax
  const __m128i *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  const __m128i *v36; // rax
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rcx
  double v41; // xmm4_8
  double v42; // xmm5_8
  __int64 v43; // rdx
  __int64 v44; // rcx
  const __m128i *v45; // rax
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  __int64 v48; // rax
  __int64 v49; // rcx
  double v50; // xmm4_8
  double v51; // xmm5_8
  __int64 v52; // rdx
  __int64 v53; // rcx
  const __m128i *v54; // rax
  __m128i v55; // xmm0
  __m128i v56; // xmm0
  __int64 v57; // rax
  __int64 v58; // rcx
  double v59; // xmm4_8
  double v60; // xmm5_8
  __int64 v62; // [rsp+0h] [rbp-118h]
  __int64 v63; // [rsp+0h] [rbp-118h]
  __int64 v65; // [rsp+10h] [rbp-108h] BYREF
  __int64 v66; // [rsp+18h] [rbp-100h]
  __int64 v67; // [rsp+20h] [rbp-F8h]
  __m128i v68; // [rsp+28h] [rbp-F0h]
  __m128i v69; // [rsp+38h] [rbp-E0h]
  int v70; // [rsp+48h] [rbp-D0h]
  __int64 v71; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+58h] [rbp-C0h]
  __int64 v73; // [rsp+60h] [rbp-B8h]
  __m128i v74; // [rsp+68h] [rbp-B0h]
  __m128i v75; // [rsp+78h] [rbp-A0h]
  int v76; // [rsp+88h] [rbp-90h]
  _QWORD v77[3]; // [rsp+90h] [rbp-88h] BYREF
  __m128i v78; // [rsp+A8h] [rbp-70h]
  __m128i v79; // [rsp+B8h] [rbp-60h]
  int v80; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v81; // [rsp+D8h] [rbp-40h]

  v12 = *(_QWORD *)a2;
  v81 = __readfsqword(0x28u);
  v14 = (*(__int64 (__fastcall **)(__int64))(v12 + 168))(a2);
  sub_2BB620(a1, a2, v15, v16);
  v17 = *(_QWORD **)(a1 + 440);
  if ( v17 )
    v17 = (_QWORD *)v17[1];
  v18 = a3;
  v62 = (*(__int64 (__fastcall **)(_QWORD *))(*v17 + 168LL))(v17);
  sub_29B750(v62, (int **)a3, a2);
  v25 = *(int **)a3;
  if ( 4LL * *(_QWORD *)(a3 + 8) )
  {
    do
    {
      v26 = *v25++;
      v18 = v26;
      v27 = (const __m128i *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 152LL))(a2, v26);
      v28 = (__m128 *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 152LL))(v14, v26);
      a4 = (__m128)_mm_loadu_si128(v27);
      *v28 = a4;
      v29 = *(int **)a3;
      v19 = *(_QWORD *)a3 + 4LL * *(_QWORD *)(a3 + 8);
    }
    while ( v25 != (int *)v19 );
  }
  else
  {
    v29 = *(int **)a3;
  }
  v30 = a1;
  v31 = *v29;
  v32 = sub_1EA6C0(
          *(_QWORD *)(a1 + 16) + 384LL,
          v18,
          v19,
          v20,
          v21,
          v22,
          a4,
          a5,
          a6,
          a7,
          v23,
          v24,
          a10,
          a11,
          v62,
          *(_QWORD *)(a1 + 16),
          v65,
          v66,
          v67,
          v68.m128i_i64[0],
          v68.m128i_i64[1],
          v69.m128i_i32[0],
          v69.m128i_i32[2],
          v70,
          v71,
          v72,
          v73);
  v66 = 0;
  v33 = (const __m128i *)v32;
  v65 = v63;
  v67 = 0x500000028LL;
  v36 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(v30 + 16) + 384LL, v18, v34, v35, *(double *)a4.m128_u64);
  v37 = _mm_loadu_si128(v36 + 1);
  LODWORD(v36) = v36[2].m128i_i32[0];
  v69 = v37;
  v38 = _mm_loadu_si128(v33);
  v70 = (int)v36;
  v39 = v33[1].m128i_i64[0];
  v68 = v38;
  v69.m128i_i32[2] = -1;
  v69.m128i_i64[0] = v39;
  sub_2C29E0(v30, (__int64)&v65, 1, v40, *(double *)v38.m128i_i64, a5, a6, a7, v41, v42, a10, a11);
  v71 = v14;
  v72 = 0;
  v73 = 0x100000028LL;
  v45 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(v30 + 16) + 384LL, (__int64)&v65, v43, v44, *(double *)v38.m128i_i64);
  v46 = _mm_loadu_si128(v45 + 1);
  LODWORD(v45) = v45[2].m128i_i32[0];
  v75 = v46;
  v47 = _mm_loadu_si128(v33);
  v76 = (int)v45;
  v48 = v33[1].m128i_i64[0];
  v74 = v47;
  v75.m128i_i32[2] = v31;
  v75.m128i_i64[0] = v48;
  sub_2C29E0(v30, (__int64)&v71, 1, v49, *(double *)v47.m128i_i64, a5, a6, a7, v50, v51, a10, a11);
  v77[0] = a2;
  v77[1] = 0;
  v77[2] = 0xA00000028LL;
  v54 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(v30 + 16) + 384LL, (__int64)&v71, v52, v53, *(double *)v47.m128i_i64);
  v55 = _mm_loadu_si128(v54 + 1);
  LODWORD(v54) = v54[2].m128i_i32[0];
  v79 = v55;
  v56 = _mm_loadu_si128(v33);
  v80 = (int)v54;
  v57 = v33[1].m128i_i64[0];
  v79.m128i_i32[2] = v31;
  v79.m128i_i64[0] = v57;
  v78 = v56;
  sub_2C29E0(v30, (__int64)v77, 1, v58, *(double *)v56.m128i_i64, a5, a6, a7, v59, v60, a10, a11);
  return v81 - __readfsqword(0x28u);
}
