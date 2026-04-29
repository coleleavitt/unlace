unsigned __int64 __fastcall sub_2860(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // r12
  __m128i v12; // xmm0
  __m128 v13; // xmm2
  __int64 v14; // r14
  __m128i v15; // xmm1
  __m128 v16; // xmm0
  __int64 v17; // r14
  unsigned __int64 v18; // rbx
  __int64 v19; // r12
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  __int64 v22; // r14
  bool v23; // zf
  unsigned __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdi
  unsigned __int64 i; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128 v39; // xmm4
  __m128 v40; // xmm5
  __int64 v42; // rdi
  char v43; // [rsp+0h] [rbp-A8h]
  char v44; // [rsp+0h] [rbp-A8h]
  _BYTE v45[8]; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v46; // [rsp+18h] [rbp-90h]
  unsigned int v47; // [rsp+1Ch] [rbp-8Ch]
  unsigned int v48; // [rsp+20h] [rbp-88h]
  unsigned int v49; // [rsp+24h] [rbp-84h]
  __m128i v50; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v51; // [rsp+38h] [rbp-70h]
  unsigned int v52; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v53; // [rsp+40h] [rbp-68h]
  unsigned __int64 v54; // [rsp+68h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  lread(a2, v45, 76);
  enable_flags(0x80000000LL, 2149580800LL, 1);
  v10 = qlsize(a2);
  v11 = v10;
  if ( !v46 )
    v46 = 2048;
  v12 = _mm_unpacklo_epi32(_mm_loadl_epi64(&v50), (__m128i)0LL);
  v13 = _mm_movehl_ps(a5, (__m128)v12);
  v14 = v12.m128i_i64[0];
  if ( *(_QWORD *)(a1 + 16) - v12.m128i_i64[0] < v13.m128_u64[0]
    || (v15 = _mm_srli_si128(v12, 8), v16 = (__m128)_mm_add_epi64(v12, v15), v46 > v10)
    || v10 - (unsigned __int64)v46 < v13.m128_u64[0] )
  {
    sub_27B0((__int64)"Truncated input file (code segment)");
  }
  file2base(a2, v46, v14, v16.m128_u64[0], 1);
  set_selector(1, 0);
  add_segm(1, v14, v16.m128_u64[0], "TEXT", "CODE", 32);
  if ( !v50.m128i_i32[3] )
  {
    v21 = v52;
    v19 = -1;
    v20 = 2;
    if ( v52 )
      goto LABEL_13;
LABEL_19:
    v26 = v53;
    if ( !v53 )
      goto LABEL_20;
    goto LABEL_17;
  }
  if ( !v47 )
    v47 = 2048;
  v17 = v50.m128i_u32[2];
  if ( *(_QWORD *)(a1 + 16) - (unsigned __int64)v50.m128i_u32[2] < v50.m128i_u32[3]
    || (v18 = v50.m128i_u32[3] + (unsigned __int64)v50.m128i_u32[2], v47 > v11)
    || v11 - (unsigned __int64)v47 < v50.m128i_u32[3] )
  {
    sub_27B0((__int64)"Truncated input file (data segment)");
  }
  file2base(a2, v47, v50.m128i_u32[2], v50.m128i_u32[3] + (unsigned __int64)v50.m128i_u32[2], 1);
  v19 = 2;
  set_selector(2, 0);
  v20 = 3;
  add_segm(2, v17, v18, "DATA", "DATA", 32);
  v21 = v52;
  if ( !v52 )
    goto LABEL_19;
LABEL_13:
  v22 = v51;
  if ( *(_QWORD *)(a1 + 16) - (unsigned __int64)v51 < v21 )
    sub_27B0((__int64)"Wrong BSS segment");
  v23 = v19 == -1;
  v24 = v21 + v51;
  v19 = 2;
  if ( v23 )
    v19 = v20;
  set_selector(v20, 0);
  v25 = v20++;
  add_segm(v25, v22, v24, "BSS", "BSS", 32);
  v26 = v53;
  if ( v53 )
LABEL_17:
    set_name(v26, "stack", 0);
LABEL_20:
  for ( i = 0x80000000LL; i <= 0x801FFFFF; i = *(_QWORD *)(v28 + 8) )
  {
    while ( 1 )
    {
      v28 = getseg(i);
      if ( v28 )
        break;
      if ( v19 == -1 )
        v19 = v20;
      set_selector(v20, 0);
      v42 = v20++;
      add_segm(v42, i, 2149580800LL, "RAM", "DATA", 32);
    }
  }
  if ( v19 != -1 )
    set_default_dataseg(v19);
  *(double *)v16.m128_u64 = create_filename_cmt();
  sub_2620(
    (__int64)"Image type    : %-8.8s",
    (__int64)v45,
    v29,
    v30,
    v31,
    v32,
    v16,
    (__m128)v15,
    v13,
    a6,
    v33,
    v34,
    a9,
    a10,
    v43);
  sub_2620((__int64)"Global pointer: %08X", v49, v35, v36, v37, v38, v16, (__m128)v15, v13, a6, v39, v40, a9, a10, v44);
  setinf(14, 1);
  setinf(15, v48);
  return v54 - __readfsqword(0x28u);
}
