unsigned __int64 __fastcall sub_4A9AD0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __m128i v4; // xmm0
  void *v5; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  void *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rdx
  char v11; // al
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  __m128i v18; // xmm0
  void *v19; // rdi
  __int64 v20; // r12
  __m128i v21; // xmm0
  void *v22; // rdi
  __m128i v23; // xmm0
  void *v24; // rbp
  __m128i v25; // xmm0
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rbp
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __int64 v31; // rax
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __int64 v34; // rax
  __m128i v36; // [rsp+0h] [rbp-108h] BYREF
  __m128i v37; // [rsp+10h] [rbp-F8h] BYREF
  void *v38; // [rsp+20h] [rbp-E8h]
  __m128i v39; // [rsp+28h] [rbp-E0h] BYREF
  void *ptr; // [rsp+38h] [rbp-D0h]
  __m128i v41; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v43; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v44; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v45; // [rsp+78h] [rbp-90h] BYREF
  __int64 v46; // [rsp+88h] [rbp-80h]
  __int64 v47; // [rsp+90h] [rbp-78h]
  char v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-68h]
  __int64 v50; // [rsp+A8h] [rbp-60h]
  __int64 v51; // [rsp+B0h] [rbp-58h]
  __int64 v52; // [rsp+B8h] [rbp-50h]
  char v53; // [rsp+C0h] [rbp-48h]
  __int64 v54; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v55; // [rsp+D8h] [rbp-30h]

  v2 = a1 + 64;
  v4 = _mm_loadu_si128((const __m128i *)a1);
  v5 = *(void **)(a1 + 16);
  v55 = __readfsqword(0x28u);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v37 = v4;
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v38 = v5;
  v8 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v39 = v7;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  ptr = v8;
  v42 = 0;
  v41 = v6;
  copy_tinfo_t(&v42);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v10 = *(_QWORD *)(a1 + 128);
  v46 = *(_QWORD *)(a1 + 120);
  v11 = *(_BYTE *)(a1 + 136);
  v43 = v9;
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v48 = v11;
  v13 = *(_QWORD *)(a1 + 144);
  v44 = v12;
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 104));
  v49 = v13;
  v15 = *(_QWORD *)(a1 + 152);
  v45 = v14;
  v50 = v15;
  v16 = *(_QWORD *)(a1 + 160);
  v47 = v10;
  v51 = v16;
  v52 = *(_QWORD *)(a1 + 168);
  v53 = *(_BYTE *)(a1 + 176);
  v54 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v17 = *(_QWORD *)(a2 + 16);
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v19 = *(void **)(a1 + 16);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v36 = v18;
    qfree(v19);
    v18 = _mm_load_si128(&v36);
  }
  *(_QWORD *)(a1 + 16) = v17;
  *(__m128i *)(a1 + 24) = v18;
  v20 = *(_QWORD *)(a2 + 40);
  v21 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  *(_QWORD *)(a2 + 40) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  v22 = *(void **)(a1 + 40);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    v36 = v21;
    qfree(v22);
    v21 = _mm_load_si128(&v36);
  }
  *(_QWORD *)(a1 + 40) = v20;
  *(__m128i *)(a1 + 48) = v21;
  copy_tinfo_t(v2);
  *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 72));
  *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 88));
  *(__m128i *)(a1 + 104) = _mm_loadu_si128((const __m128i *)(a2 + 104));
  v23 = _mm_load_si128(&v37);
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  *(_BYTE *)(a1 + 136) = *(_BYTE *)(a2 + 136);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(a2 + 168);
  *(_DWORD *)(a1 + 172) = *(_DWORD *)(a2 + 172);
  *(_BYTE *)(a1 + 176) = *(_BYTE *)(a2 + 176);
  *(_QWORD *)(a1 + 184) = *(_QWORD *)(a2 + 184);
  v24 = v38;
  *(__m128i *)a2 = v23;
  v38 = nullptr;
  v25 = _mm_loadu_si128(&v39);
  v26 = *(void **)(a2 + 16);
  v39 = 0;
  if ( v26 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    v36 = v25;
    qfree(v26);
    v25 = _mm_load_si128(&v36);
  }
  v27 = *(void **)(a2 + 40);
  *(_QWORD *)(a2 + 16) = v24;
  *(__m128i *)(a2 + 24) = v25;
  v28 = ptr;
  v29 = _mm_load_si128(&v41);
  ptr = nullptr;
  v41 = 0;
  if ( v27 )
  {
    *(_QWORD *)(a2 + 48) = 0;
    v36 = v29;
    qfree(v27);
    v29 = _mm_load_si128(&v36);
  }
  *(_QWORD *)(a2 + 40) = v28;
  *(__m128i *)(a2 + 48) = v29;
  copy_tinfo_t(a2 + 64);
  v30 = _mm_loadu_si128(&v43);
  *(_DWORD *)(a2 + 120) = v46;
  v31 = v47;
  *(__m128i *)(a2 + 72) = v30;
  v32 = _mm_loadu_si128(&v44);
  *(_QWORD *)(a2 + 128) = v31;
  LOBYTE(v31) = v48;
  *(__m128i *)(a2 + 88) = v32;
  v33 = _mm_loadu_si128(&v45);
  *(_BYTE *)(a2 + 136) = v31;
  v34 = v49;
  *(__m128i *)(a2 + 104) = v33;
  *(_QWORD *)(a2 + 144) = v34;
  *(_QWORD *)(a2 + 152) = v50;
  *(_QWORD *)(a2 + 160) = v51;
  *(_QWORD *)(a2 + 168) = v52;
  *(_BYTE *)(a2 + 176) = v53;
  *(_QWORD *)(a2 + 184) = v54;
  sub_379560(&v37);
  return v55 - __readfsqword(0x28u);
}
