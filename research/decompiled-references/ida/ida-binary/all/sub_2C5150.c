__int64 __fastcall sub_2C5150(
        __int64 a1,
        __int64 a2,
        int a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  _QWORD *v11; // r13
  _DWORD *v12; // r12
  __int64 v13; // rax
  double v14; // xmm4_8
  double v15; // xmm5_8
  int *v16; // r15
  int *v17; // r14
  int v18; // esi
  double v19; // xmm4_8
  double v20; // xmm5_8
  int v21; // ebx
  __int64 (__fastcall *v22)(__int64); // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __int64 v30; // rax
  const __m128i *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  const __m128i *v34; // rax
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rcx
  double v39; // xmm4_8
  double v40; // xmm5_8
  const __m128i *v41; // rax
  __m128i v42; // xmm0
  double v43; // xmm4_8
  double v44; // xmm5_8
  __int64 v45; // [rsp+0h] [rbp-A8h]
  char v46; // [rsp+8h] [rbp-A0h]
  int v47; // [rsp+18h] [rbp-90h]
  __int32 v49; // [rsp+1Ch] [rbp-8Ch]
  __m128i v50; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v51[24]; // [rsp+30h] [rbp-78h]
  __m128i v52; // [rsp+48h] [rbp-60h]
  int v53; // [rsp+58h] [rbp-50h]
  __int64 v54; // [rsp+60h] [rbp-48h]
  unsigned __int64 v55; // [rsp+68h] [rbp-40h]

  v11 = (_QWORD *)a2;
  v55 = __readfsqword(0x28u);
  v12 = *(_DWORD **)(a1 + 440);
  if ( v12 )
    v12 = *((_DWORD **)v12 + 1);
  v13 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 168LL))(v12);
  v16 = *(int **)a2;
  v17 = (int *)v13;
  if ( 4LL * *(_QWORD *)(a2 + 8) )
  {
    v46 = 0;
    do
    {
      v21 = *v16;
      if ( *v16 < 0 )
      {
LABEL_13:
        if ( v17 )
          (*(void (__fastcall **)(int *))(*(_QWORD *)v17 + 8LL))(v17);
        return 0;
      }
      v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL);
      if ( v22 == interactive_graph_t__::vfunc_7 )
      {
        if ( v21 >= v12[46] )
          goto LABEL_13;
      }
      else if ( v21 >= (int)v22((__int64)v12) )
      {
        goto LABEL_13;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v17 + 13) + v21) & 1) != 0 )
      {
        v46 = *(_BYTE *)(*((_QWORD *)v17 + 13) + v21) & 1;
        v18 = v21;
      }
      else
      {
        v18 = *(_DWORD *)(*((_QWORD *)v17 + 10) + 4LL * v21) & 0x7FFFFFFF;
        if ( v21 == v18 )
          goto LABEL_13;
      }
      ++v16;
      sub_29B570(v17, v18);
      a2 = v11[1];
    }
    while ( v16 != (int *)(*v11 + 4 * a2) );
    *(double *)a4.m128_u64 = sub_29BBD0((__int64)v17, a2, a4, a5, a6, a7, v19, v20, a10, a11);
    if ( !v46 )
      goto LABEL_20;
    v30 = sub_1EA6C0(
            *(_QWORD *)(a1 + 16) + 384LL,
            a2,
            v24,
            v25,
            v26,
            v27,
            a4,
            a5,
            a6,
            a7,
            v28,
            v29,
            a10,
            a11,
            v45,
            *(_QWORD *)(a1 + 16),
            a1,
            v47,
            v50.m128i_i64[0],
            v50.m128i_i64[1],
            *(__int64 *)v51,
            *(int *)&v51[8],
            *(int *)&v51[16],
            v52.m128i_i32[0],
            v52.m128i_i32[2],
            v53,
            v54);
    v50 = (__m128i)(unsigned __int64)v17;
    v31 = (const __m128i *)v30;
    *(_QWORD *)v51 = 0xA00000028LL;
    v34 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, a2, v32, v33, *(double *)a4.m128_u64);
    v35 = _mm_loadu_si128(v34 + 1);
    v53 = v34[2].m128i_i32[0];
    v52 = v35;
    v36 = _mm_loadu_si128(v31);
    v52.m128i_i32[2] = v49;
    v37 = v31[1].m128i_i64[0];
    *(__m128i *)&v51[8] = v36;
    v52.m128i_i64[0] = v37;
    sub_2C29E0(a1, (__int64)&v50, 1, v38, *(double *)v36.m128i_i64, a5, a6, a7, v39, v40, a10, a11);
  }
  else
  {
    *(double *)a4.m128_u64 = sub_29BBD0(v13, a2, a4, a5, a6, a7, v14, v15, a10, a11);
LABEL_20:
    v41 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, a2, v24, v25, *(double *)a4.m128_u64);
    v50 = _mm_loadu_si128(v41);
    v42 = _mm_loadu_si128(v41 + 1);
    *(_QWORD *)&v51[16] = v41[2].m128i_i64[0];
    *(__m128i *)v51 = v42;
    *(_DWORD *)&v51[8] = a3;
    sub_2BC330(a1, (__int64)v17, &v50, *(double *)v42.m128i_i64, (__m128i)a5, a6, a7, v43, v44, a10, a11);
  }
  return 1;
}
