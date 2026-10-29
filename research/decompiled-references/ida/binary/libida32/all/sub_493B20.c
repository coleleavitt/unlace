unsigned __int64 __fastcall sub_493B20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
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
  __int64 v20; // rbp
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
  __int64 v39; // r15
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rbx
  __m128i v43; // [rsp+0h] [rbp-158h] BYREF
  __m128i v44; // [rsp+10h] [rbp-148h] BYREF
  __m128i v45; // [rsp+20h] [rbp-138h] BYREF
  __int64 v46; // [rsp+30h] [rbp-128h]
  __int64 v47; // [rsp+38h] [rbp-120h]
  __m128i v48; // [rsp+40h] [rbp-118h] BYREF
  __int64 v49; // [rsp+50h] [rbp-108h]
  __m128i v50; // [rsp+58h] [rbp-100h] BYREF
  __int64 v51; // [rsp+68h] [rbp-F0h]
  __m128i v52; // [rsp+70h] [rbp-E8h] BYREF
  __m128i v53; // [rsp+88h] [rbp-D0h] BYREF
  __m128i v54; // [rsp+98h] [rbp-C0h] BYREF
  int v55; // [rsp+A8h] [rbp-B0h]
  __int64 v56; // [rsp+B0h] [rbp-A8h]
  char v57; // [rsp+B8h] [rbp-A0h]
  int v58; // [rsp+C0h] [rbp-98h]
  __int64 v59; // [rsp+C8h] [rbp-90h]
  __int64 v60; // [rsp+D0h] [rbp-88h]
  int v61; // [rsp+D8h] [rbp-80h]
  char v62; // [rsp+DCh] [rbp-7Ch]
  __int64 v63; // [rsp+E0h] [rbp-78h]
  _BYTE v64[16]; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v65; // [rsp+100h] [rbp-58h]
  int (__fastcall *v66)(__int64, __int64, __m128i *); // [rsp+108h] [rbp-50h]
  unsigned __int64 v67; // [rsp+118h] [rbp-40h]

  v43.m128i_i64[0] = a2;
  v47 = a3;
  v67 = __readfsqword(0x28u);
  v46 = (a3 - 1) / 2;
  if ( a2 >= v46 )
  {
    v9 = v43.m128i_i64[0];
  }
  else
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = 336 * (i + 1);
      v11 = a1 + v10;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v10, a1 + v10 - 168) < 0 )
      {
        --v9;
        v11 = a1 + 168 * v9;
      }
      v12 = a1 + 168 * i;
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
        v44.m128i_i64[0] = v13;
        v45 = v14;
        qfree(v15);
        v14 = _mm_load_si128(&v45);
        v13 = v44.m128i_i64[0];
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
        v45.m128i_i64[0] = v16;
        v44 = v17;
        qfree(v18);
        v16 = v45.m128i_i64[0];
        v17 = _mm_load_si128(&v44);
      }
      *(_QWORD *)(v12 + 40) = v16;
      *(__m128i *)(v12 + 48) = v17;
      copy_tinfo_t(v12 + 64);
      v19 = v46;
      *(__m128i *)(v12 + 72) = _mm_loadu_si128((const __m128i *)(v11 + 72));
      *(__m128i *)(v12 + 88) = _mm_loadu_si128((const __m128i *)(v11 + 88));
      *(_DWORD *)(v12 + 104) = *(_DWORD *)(v11 + 104);
      *(_DWORD *)(v12 + 112) = *(_DWORD *)(v11 + 112);
      *(_DWORD *)(v12 + 116) = *(_DWORD *)(v11 + 116);
      *(_BYTE *)(v12 + 120) = *(_BYTE *)(v11 + 120);
      *(_DWORD *)(v12 + 128) = *(_DWORD *)(v11 + 128);
      *(_QWORD *)(v12 + 136) = *(_QWORD *)(v11 + 136);
      *(_DWORD *)(v12 + 144) = *(_DWORD *)(v11 + 144);
      *(_DWORD *)(v12 + 148) = *(_DWORD *)(v11 + 148);
      *(_DWORD *)(v12 + 152) = *(_DWORD *)(v11 + 152);
      *(_BYTE *)(v12 + 156) = *(_BYTE *)(v11 + 156);
      *(_QWORD *)(v12 + 160) = *(_QWORD *)(v11 + 160);
      if ( v9 >= v19 )
        break;
    }
  }
  if ( (v47 & 1) == 0 && (v47 - 2) / 2 == v9 )
  {
    v46 = 2 * (v9 + 1);
    v39 = a1 + 336 * (v9 + 1) - 168;
    v40 = a1 + 168 * v9;
    sub_47EC10(v40, v39);
    v41 = v46;
    *(_DWORD *)(v40 + 128) = *(_DWORD *)(v39 + 128);
    v9 = v41 - 1;
    *(_QWORD *)(v40 + 136) = *(_QWORD *)(v39 + 136);
    *(_DWORD *)(v40 + 144) = *(_DWORD *)(v39 + 144);
    *(_DWORD *)(v40 + 148) = *(_DWORD *)(v39 + 148);
    *(_DWORD *)(v40 + 152) = *(_DWORD *)(v39 + 152);
    *(_BYTE *)(v40 + 156) = *(_BYTE *)(v39 + 156);
    *(_QWORD *)(v40 + 160) = *(_QWORD *)(v39 + 160);
  }
  v46 = (__int64)v64;
  sub_489E30((__int64)v64, (const __m128i *)a5);
  sub_485740((__int64)&v48, a4);
  v58 = *(_DWORD *)(a4 + 128);
  v59 = *(_QWORD *)(a4 + 136);
  v60 = *(_QWORD *)(a4 + 144);
  v61 = *(_DWORD *)(a4 + 152);
  v62 = *(_BYTE *)(a4 + 156);
  v63 = *(_QWORD *)(a4 + 160);
  v20 = (v9 - 1) / 2;
  if ( v9 > v43.m128i_i64[0] )
  {
    while ( 1 )
    {
      v27 = a1 + 168 * v20;
      if ( !v65 )
        std::__throw_bad_function_call();
      v42 = a1 + 168 * v9;
      if ( v66(v46, a1 + 168 * v20, &v48) >= 0 )
        break;
      *(_QWORD *)v42 = *(_QWORD *)v27;
      *(_QWORD *)(v42 + 8) = *(_QWORD *)(v27 + 8);
      v21 = *(_QWORD *)(v27 + 16);
      v22 = _mm_loadu_si128((const __m128i *)(v27 + 24));
      *(_QWORD *)(v27 + 16) = 0;
      *(_OWORD *)(v27 + 24) = 0;
      v23 = *(void **)(v42 + 16);
      if ( v23 )
      {
        *(_QWORD *)(v42 + 24) = 0;
        v44 = v22;
        qfree(v23);
        v22 = _mm_load_si128(&v44);
      }
      *(_QWORD *)(v42 + 16) = v21;
      *(__m128i *)(v42 + 24) = v22;
      v24 = *(_QWORD *)(v27 + 40);
      v25 = _mm_loadu_si128((const __m128i *)(v27 + 48));
      *(_QWORD *)(v27 + 40) = 0;
      *(_OWORD *)(v27 + 48) = 0;
      v26 = *(void **)(v42 + 40);
      if ( v26 )
      {
        *(_QWORD *)(v42 + 48) = 0;
        v44 = v25;
        qfree(v26);
        v25 = _mm_load_si128(&v44);
      }
      *(_QWORD *)(v42 + 40) = v24;
      *(__m128i *)(v42 + 48) = v25;
      copy_tinfo_t(v42 + 64);
      v9 = v20;
      *(__m128i *)(v42 + 72) = _mm_loadu_si128((const __m128i *)(v27 + 72));
      *(__m128i *)(v42 + 88) = _mm_loadu_si128((const __m128i *)(v27 + 88));
      *(_DWORD *)(v42 + 104) = *(_DWORD *)(v27 + 104);
      *(_DWORD *)(v42 + 112) = *(_DWORD *)(v27 + 112);
      *(_DWORD *)(v42 + 116) = *(_DWORD *)(v27 + 116);
      *(_BYTE *)(v42 + 120) = *(_BYTE *)(v27 + 120);
      *(_DWORD *)(v42 + 128) = *(_DWORD *)(v27 + 128);
      *(_QWORD *)(v42 + 136) = *(_QWORD *)(v27 + 136);
      *(_DWORD *)(v42 + 144) = *(_DWORD *)(v27 + 144);
      *(_DWORD *)(v42 + 148) = *(_DWORD *)(v27 + 148);
      *(_DWORD *)(v42 + 152) = *(_DWORD *)(v27 + 152);
      *(_BYTE *)(v42 + 156) = *(_BYTE *)(v27 + 156);
      *(_QWORD *)(v42 + 160) = *(_QWORD *)(v27 + 160);
      if ( v43.m128i_i64[0] >= v20 )
      {
        v42 = a1 + 168 * v20;
        break;
      }
      v20 = (v20 - 1) / 2;
    }
  }
  else
  {
    v42 = a1 + 168 * v9;
  }
  v28 = _mm_load_si128(&v48);
  v29 = *(void **)(v42 + 16);
  v30 = v49;
  v49 = 0;
  *(__m128i *)v42 = v28;
  v31 = _mm_loadu_si128(&v50);
  v50 = 0;
  if ( v29 )
  {
    *(_QWORD *)(v42 + 24) = 0;
    v43 = v31;
    qfree(v29);
    v31 = _mm_load_si128(&v43);
  }
  v32 = *(void **)(v42 + 40);
  *(_QWORD *)(v42 + 16) = v30;
  *(__m128i *)(v42 + 24) = v31;
  v33 = v51;
  v34 = _mm_load_si128(&v52);
  v51 = 0;
  v52 = 0;
  if ( v32 )
  {
    *(_QWORD *)(v42 + 48) = 0;
    v43 = v34;
    qfree(v32);
    v34 = _mm_load_si128(&v43);
  }
  *(_QWORD *)(v42 + 40) = v33;
  *(__m128i *)(v42 + 48) = v34;
  copy_tinfo_t(v42 + 64);
  v35 = _mm_loadu_si128(&v53);
  *(_DWORD *)(v42 + 104) = v55;
  v36 = v56;
  *(__m128i *)(v42 + 72) = v35;
  v37 = _mm_loadu_si128(&v54);
  *(_QWORD *)(v42 + 112) = v36;
  LOBYTE(v36) = v57;
  *(__m128i *)(v42 + 88) = v37;
  *(_BYTE *)(v42 + 120) = v36;
  *(_DWORD *)(v42 + 128) = v58;
  *(_QWORD *)(v42 + 136) = v59;
  *(_QWORD *)(v42 + 144) = v60;
  *(_DWORD *)(v42 + 152) = v61;
  *(_BYTE *)(v42 + 156) = v62;
  *(_QWORD *)(v42 + 160) = v63;
  sub_375BF0(&v48);
  sub_374250(v46);
  return v67 - __readfsqword(0x28u);
}

