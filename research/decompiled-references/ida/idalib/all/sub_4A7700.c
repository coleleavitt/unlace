unsigned __int64 __fastcall sub_4A7700(__int64 a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  __int64 v4; // r15
  __m128i v7; // xmm0
  void *v8; // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  void *v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rdx
  char v15; // al
  __m128i v16; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm0
  void *v22; // rdi
  __int64 v23; // rax
  __m128i v24; // xmm0
  void *v25; // rdi
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  int v30; // eax
  __m128i v31; // xmm0
  int v32; // eax
  __m128i v33; // xmm0
  _QWORD *v34; // r8
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __int64 v38; // [rsp+8h] [rbp-180h]
  __int64 v39; // [rsp+8h] [rbp-180h]
  __m128i v40; // [rsp+10h] [rbp-178h] BYREF
  __m128i v41; // [rsp+20h] [rbp-168h] BYREF
  void *v42; // [rsp+30h] [rbp-158h]
  __m128i v43; // [rsp+38h] [rbp-150h] BYREF
  void *v44; // [rsp+48h] [rbp-140h]
  __m128i v45; // [rsp+50h] [rbp-138h] BYREF
  __int64 v46; // [rsp+60h] [rbp-128h] BYREF
  __m128i v47; // [rsp+68h] [rbp-120h] BYREF
  __m128i v48; // [rsp+78h] [rbp-110h] BYREF
  __m128i v49; // [rsp+88h] [rbp-100h] BYREF
  __int64 v50; // [rsp+98h] [rbp-F0h]
  __int64 v51; // [rsp+A0h] [rbp-E8h]
  char v52; // [rsp+A8h] [rbp-E0h]
  __m128i v53; // [rsp+B0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-C8h]
  __m128i v55; // [rsp+C8h] [rbp-C0h]
  void *v56; // [rsp+D8h] [rbp-B0h]
  __m128i v57; // [rsp+E0h] [rbp-A8h]
  __int64 v58; // [rsp+F0h] [rbp-98h] BYREF
  __m128i v59; // [rsp+F8h] [rbp-90h]
  __m128i v60; // [rsp+108h] [rbp-80h]
  __m128i v61; // [rsp+118h] [rbp-70h]
  __int64 v62; // [rsp+128h] [rbp-60h]
  __int64 v63; // [rsp+130h] [rbp-58h]
  char v64; // [rsp+138h] [rbp-50h]
  unsigned __int64 v65; // [rsp+148h] [rbp-40h]

  v4 = a3 + 64;
  v7 = _mm_loadu_si128((const __m128i *)a3);
  v8 = *(void **)(a3 + 16);
  v65 = __readfsqword(0x28u);
  *(_QWORD *)(a3 + 16) = 0;
  v10 = _mm_loadu_si128((const __m128i *)(a3 + 48));
  v41 = v7;
  v11 = _mm_loadu_si128((const __m128i *)(a3 + 24));
  v42 = v8;
  v12 = *(void **)(a3 + 40);
  *(_QWORD *)(a3 + 40) = 0;
  v43 = v11;
  *(_OWORD *)(a3 + 24) = 0;
  *(_OWORD *)(a3 + 48) = 0;
  v44 = v12;
  v46 = 0;
  v45 = v10;
  copy_tinfo_t(&v46);
  v13 = _mm_loadu_si128((const __m128i *)(a3 + 72));
  v14 = *(_QWORD *)(a3 + 128);
  v50 = *(_QWORD *)(a3 + 120);
  v15 = *(_BYTE *)(a3 + 136);
  v47 = v13;
  v16 = _mm_loadu_si128((const __m128i *)(a3 + 88));
  v52 = v15;
  v17 = *(_QWORD *)a1;
  v48 = v16;
  v18 = _mm_loadu_si128((const __m128i *)(a3 + 104));
  *(_QWORD *)a3 = v17;
  v19 = *(_QWORD *)(a1 + 8);
  v49 = v18;
  *(_QWORD *)(a3 + 8) = v19;
  v20 = *(_QWORD *)(a1 + 16);
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v22 = *(void **)(a3 + 16);
  v51 = v14;
  if ( v22 )
  {
    *(_QWORD *)(a3 + 24) = 0;
    v38 = v20;
    v40 = v21;
    qfree(v22);
    v21 = _mm_load_si128(&v40);
    v20 = v38;
  }
  *(_QWORD *)(a3 + 16) = v20;
  *(__m128i *)(a3 + 24) = v21;
  v23 = *(_QWORD *)(a1 + 40);
  v24 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v25 = *(void **)(a3 + 40);
  if ( v25 )
  {
    *(_QWORD *)(a3 + 48) = 0;
    v39 = v23;
    v40 = v24;
    qfree(v25);
    v24 = _mm_load_si128(&v40);
    v23 = v39;
  }
  *(_QWORD *)(a3 + 40) = v23;
  *(__m128i *)(a3 + 48) = v24;
  copy_tinfo_t(v4);
  v26 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v27 = _mm_load_si128(&v45);
  v58 = 0;
  *(__m128i *)(a3 + 72) = v26;
  v28 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v57 = v27;
  *(__m128i *)(a3 + 88) = v28;
  *(__m128i *)(a3 + 104) = _mm_loadu_si128((const __m128i *)(a1 + 104));
  v29 = _mm_load_si128(&v41);
  *(_DWORD *)(a3 + 120) = *(_DWORD *)(a1 + 120);
  v30 = *(_DWORD *)(a1 + 128);
  v53 = v29;
  v31 = _mm_loadu_si128(&v43);
  *(_DWORD *)(a3 + 128) = v30;
  v32 = *(_DWORD *)(a1 + 132);
  v55 = v31;
  *(_DWORD *)(a3 + 132) = v32;
  LOBYTE(v32) = *(_BYTE *)(a1 + 136);
  v43 = 0;
  *(_BYTE *)(a3 + 136) = v32;
  v45 = 0;
  ptr = v42;
  v42 = nullptr;
  v56 = v44;
  v44 = nullptr;
  copy_tinfo_t(&v58);
  v33 = _mm_loadu_si128(&v47);
  v34 = *a4;
  v62 = v50;
  v59 = v33;
  v35 = _mm_loadu_si128(&v48);
  v63 = v51;
  v60 = v35;
  v36 = _mm_loadu_si128(&v49);
  v64 = v52;
  v61 = v36;
  sub_4A6D70(a1, 0, 0x8E38E38E38E38E39LL * ((a2 - a1) >> 4), (__int64)&v53, v34);
  sub_379560(&v53);
  sub_379560(&v41);
  return v65 - __readfsqword(0x28u);
}
