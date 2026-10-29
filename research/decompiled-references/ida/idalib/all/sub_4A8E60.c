unsigned __int64 __fastcall sub_4A8E60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // r15
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdx
  __m128i v14; // xmm0
  void *v15; // rdi
  __int64 v16; // rdx
  __m128i v17; // xmm0
  void *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r13
  __m128i v22; // xmm0
  void *v23; // rdi
  __int64 v24; // r13
  __m128i v25; // xmm0
  void *v26; // rdi
  __int64 v27; // r14
  __m128i v28; // xmm0
  void *v29; // rdi
  __int64 v30; // rbp
  __m128i v31; // xmm0
  void *v32; // rdi
  __int64 v33; // rbp
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 v41; // r14
  __int64 v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rbx
  __m128i v45; // [rsp+0h] [rbp-168h] BYREF
  __m128i v46; // [rsp+10h] [rbp-158h] BYREF
  __m128i v47; // [rsp+20h] [rbp-148h] BYREF
  __int64 v48; // [rsp+30h] [rbp-138h]
  __int64 v49; // [rsp+38h] [rbp-130h]
  __m128i v50; // [rsp+40h] [rbp-128h] BYREF
  __int64 v51; // [rsp+50h] [rbp-118h]
  __m128i v52; // [rsp+58h] [rbp-110h] BYREF
  __int64 v53; // [rsp+68h] [rbp-100h]
  __m128i v54; // [rsp+70h] [rbp-F8h] BYREF
  __m128i v55; // [rsp+88h] [rbp-E0h] BYREF
  __m128i v56; // [rsp+98h] [rbp-D0h] BYREF
  __m128i v57; // [rsp+A8h] [rbp-C0h] BYREF
  int v58; // [rsp+B8h] [rbp-B0h]
  __int64 v59; // [rsp+C0h] [rbp-A8h]
  char v60; // [rsp+C8h] [rbp-A0h]
  __int64 v61; // [rsp+D0h] [rbp-98h]
  __int64 v62; // [rsp+D8h] [rbp-90h]
  __int64 v63; // [rsp+E0h] [rbp-88h]
  __int64 v64; // [rsp+E8h] [rbp-80h]
  char v65; // [rsp+F0h] [rbp-78h]
  __int64 v66; // [rsp+F8h] [rbp-70h]
  _BYTE v67[16]; // [rsp+100h] [rbp-68h] BYREF
  __int64 v68; // [rsp+110h] [rbp-58h]
  int (__fastcall *v69)(__int64, __int64, __m128i *); // [rsp+118h] [rbp-50h]
  unsigned __int64 v70; // [rsp+128h] [rbp-40h]

  v45.m128i_i64[0] = a2;
  v49 = a3;
  v70 = __readfsqword(0x28u);
  v48 = (a3 - 1) / 2;
  if ( a2 >= v48 )
  {
    v9 = v45.m128i_i64[0];
  }
  else
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = 384 * (i + 1);
      v11 = a1 + v10;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v10, a1 + v10 - 192) < 0 )
      {
        --v9;
        v11 = a1 + 192 * v9;
      }
      v12 = a1 + 192 * i;
      *(_QWORD *)v12 = *(_QWORD *)v11;
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
      v14 = _mm_loadu_si128((const __m128i *)(v11 + 24));
      *(_QWORD *)(v11 + 16) = 0;
      *(_OWORD *)(v11 + 24) = 0;
      v15 = *(void **)(v12 + 16);
      if ( v15 )
      {
        *(_QWORD *)(v12 + 24) = 0;
        v46.m128i_i64[0] = v13;
        v47 = v14;
        qfree(v15);
        v14 = _mm_load_si128(&v47);
        v13 = v46.m128i_i64[0];
      }
      *(_QWORD *)(v12 + 16) = v13;
      *(__m128i *)(v12 + 24) = v14;
      v16 = *(_QWORD *)(v11 + 40);
      v17 = _mm_loadu_si128((const __m128i *)(v11 + 48));
      *(_QWORD *)(v11 + 40) = 0;
      *(_OWORD *)(v11 + 48) = 0;
      v18 = *(void **)(v12 + 40);
      if ( v18 )
      {
        *(_QWORD *)(v12 + 48) = 0;
        v47.m128i_i64[0] = v16;
        v46 = v17;
        qfree(v18);
        v16 = v47.m128i_i64[0];
        v17 = _mm_load_si128(&v46);
      }
      *(_QWORD *)(v12 + 40) = v16;
      *(__m128i *)(v12 + 48) = v17;
      copy_tinfo_t(v12 + 64);
      v19 = v48;
      *(__m128i *)(v12 + 72) = _mm_loadu_si128((const __m128i *)(v11 + 72));
      *(__m128i *)(v12 + 88) = _mm_loadu_si128((const __m128i *)(v11 + 88));
      *(__m128i *)(v12 + 104) = _mm_loadu_si128((const __m128i *)(v11 + 104));
      *(_DWORD *)(v12 + 120) = *(_DWORD *)(v11 + 120);
      *(_DWORD *)(v12 + 128) = *(_DWORD *)(v11 + 128);
      *(_DWORD *)(v12 + 132) = *(_DWORD *)(v11 + 132);
      *(_BYTE *)(v12 + 136) = *(_BYTE *)(v11 + 136);
      *(_QWORD *)(v12 + 144) = *(_QWORD *)(v11 + 144);
      *(_QWORD *)(v12 + 152) = *(_QWORD *)(v11 + 152);
      *(_QWORD *)(v12 + 160) = *(_QWORD *)(v11 + 160);
      *(_DWORD *)(v12 + 168) = *(_DWORD *)(v11 + 168);
      *(_DWORD *)(v12 + 172) = *(_DWORD *)(v11 + 172);
      *(_BYTE *)(v12 + 176) = *(_BYTE *)(v11 + 176);
      *(_QWORD *)(v12 + 184) = *(_QWORD *)(v11 + 184);
      if ( v9 >= v19 )
        break;
    }
  }
  if ( (v49 & 1) == 0 && (v49 - 2) / 2 == v9 )
  {
    v41 = a1 + 192 * v9;
    v48 = 2 * (v9 + 1);
    v42 = a1 + 384 * (v9 + 1) - 192;
    sub_493710(v41, v42);
    v43 = v48;
    *(_QWORD *)(v41 + 144) = *(_QWORD *)(v42 + 144);
    v9 = v43 - 1;
    *(_QWORD *)(v41 + 152) = *(_QWORD *)(v42 + 152);
    *(_QWORD *)(v41 + 160) = *(_QWORD *)(v42 + 160);
    *(_DWORD *)(v41 + 168) = *(_DWORD *)(v42 + 168);
    *(_DWORD *)(v41 + 172) = *(_DWORD *)(v42 + 172);
    *(_BYTE *)(v41 + 176) = *(_BYTE *)(v42 + 176);
    *(_QWORD *)(v41 + 184) = *(_QWORD *)(v42 + 184);
  }
  v48 = (__int64)v67;
  sub_49EAB0((__int64)v67, (const __m128i *)a5);
  sub_49A3E0((__int64)&v50, a4);
  v61 = *(_QWORD *)(a4 + 144);
  v62 = *(_QWORD *)(a4 + 152);
  v63 = *(_QWORD *)(a4 + 160);
  v64 = *(_QWORD *)(a4 + 168);
  v65 = *(_BYTE *)(a4 + 176);
  v66 = *(_QWORD *)(a4 + 184);
  v20 = (v9 - 1) / 2;
  if ( v9 > v45.m128i_i64[0] )
  {
    while ( 1 )
    {
      v27 = a1 + 192 * v20;
      if ( !v68 )
        std::__throw_bad_function_call();
      v44 = a1 + 192 * v9;
      if ( v69(v48, a1 + 192 * v20, &v50) >= 0 )
        break;
      *(_QWORD *)v44 = *(_QWORD *)v27;
      *(_QWORD *)(v44 + 8) = *(_QWORD *)(v27 + 8);
      v21 = *(_QWORD *)(v27 + 16);
      v22 = _mm_loadu_si128((const __m128i *)(v27 + 24));
      *(_QWORD *)(v27 + 16) = 0;
      *(_OWORD *)(v27 + 24) = 0;
      v23 = *(void **)(v44 + 16);
      if ( v23 )
      {
        *(_QWORD *)(v44 + 24) = 0;
        v46 = v22;
        qfree(v23);
        v22 = _mm_load_si128(&v46);
      }
      *(_QWORD *)(v44 + 16) = v21;
      *(__m128i *)(v44 + 24) = v22;
      v24 = *(_QWORD *)(v27 + 40);
      v25 = _mm_loadu_si128((const __m128i *)(v27 + 48));
      *(_QWORD *)(v27 + 40) = 0;
      *(_OWORD *)(v27 + 48) = 0;
      v26 = *(void **)(v44 + 40);
      if ( v26 )
      {
        *(_QWORD *)(v44 + 48) = 0;
        v46 = v25;
        qfree(v26);
        v25 = _mm_load_si128(&v46);
      }
      *(_QWORD *)(v44 + 40) = v24;
      *(__m128i *)(v44 + 48) = v25;
      copy_tinfo_t(v44 + 64);
      v9 = v20;
      *(__m128i *)(v44 + 72) = _mm_loadu_si128((const __m128i *)(v27 + 72));
      *(__m128i *)(v44 + 88) = _mm_loadu_si128((const __m128i *)(v27 + 88));
      *(__m128i *)(v44 + 104) = _mm_loadu_si128((const __m128i *)(v27 + 104));
      *(_DWORD *)(v44 + 120) = *(_DWORD *)(v27 + 120);
      *(_DWORD *)(v44 + 128) = *(_DWORD *)(v27 + 128);
      *(_DWORD *)(v44 + 132) = *(_DWORD *)(v27 + 132);
      *(_BYTE *)(v44 + 136) = *(_BYTE *)(v27 + 136);
      *(_QWORD *)(v44 + 144) = *(_QWORD *)(v27 + 144);
      *(_QWORD *)(v44 + 152) = *(_QWORD *)(v27 + 152);
      *(_QWORD *)(v44 + 160) = *(_QWORD *)(v27 + 160);
      *(_DWORD *)(v44 + 168) = *(_DWORD *)(v27 + 168);
      *(_DWORD *)(v44 + 172) = *(_DWORD *)(v27 + 172);
      *(_BYTE *)(v44 + 176) = *(_BYTE *)(v27 + 176);
      *(_QWORD *)(v44 + 184) = *(_QWORD *)(v27 + 184);
      if ( v45.m128i_i64[0] >= v20 )
      {
        v44 = a1 + 192 * v20;
        break;
      }
      v20 = (v20 - 1) / 2;
    }
  }
  else
  {
    v44 = a1 + 192 * v9;
  }
  v28 = _mm_load_si128(&v50);
  v29 = *(void **)(v44 + 16);
  v30 = v51;
  v51 = 0;
  *(__m128i *)v44 = v28;
  v31 = _mm_loadu_si128(&v52);
  v52 = 0;
  if ( v29 )
  {
    *(_QWORD *)(v44 + 24) = 0;
    v45 = v31;
    qfree(v29);
    v31 = _mm_load_si128(&v45);
  }
  v32 = *(void **)(v44 + 40);
  *(_QWORD *)(v44 + 16) = v30;
  *(__m128i *)(v44 + 24) = v31;
  v33 = v53;
  v34 = _mm_load_si128(&v54);
  v53 = 0;
  v54 = 0;
  if ( v32 )
  {
    *(_QWORD *)(v44 + 48) = 0;
    v45 = v34;
    qfree(v32);
    v34 = _mm_load_si128(&v45);
  }
  *(_QWORD *)(v44 + 40) = v33;
  *(__m128i *)(v44 + 48) = v34;
  copy_tinfo_t(v44 + 64);
  v35 = _mm_loadu_si128(&v55);
  *(_DWORD *)(v44 + 120) = v58;
  v36 = v59;
  *(__m128i *)(v44 + 72) = v35;
  v37 = _mm_loadu_si128(&v56);
  *(_QWORD *)(v44 + 128) = v36;
  LOBYTE(v36) = v60;
  *(__m128i *)(v44 + 88) = v37;
  v38 = _mm_loadu_si128(&v57);
  *(_BYTE *)(v44 + 136) = v36;
  v39 = v61;
  *(__m128i *)(v44 + 104) = v38;
  *(_QWORD *)(v44 + 144) = v39;
  *(_QWORD *)(v44 + 152) = v62;
  *(_QWORD *)(v44 + 160) = v63;
  *(_QWORD *)(v44 + 168) = v64;
  *(_BYTE *)(v44 + 176) = v65;
  *(_QWORD *)(v44 + 184) = v66;
  sub_379560(&v50);
  sub_377BA0(v48);
  return v70 - __readfsqword(0x28u);
}
