unsigned __int64 __fastcall sub_494710(__int64 a1, __int64 a2)
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
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r12
  __m128i v16; // xmm0
  void *v17; // rdi
  __int64 v18; // r12
  __m128i v19; // xmm0
  void *v20; // rdi
  __m128i v21; // xmm0
  void *v22; // rbp
  __m128i v23; // xmm0
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rbp
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int64 v29; // rax
  __m128i v30; // xmm0
  __m128i v32; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v33; // [rsp+10h] [rbp-D8h] BYREF
  void *v34; // [rsp+20h] [rbp-C8h]
  __m128i v35; // [rsp+28h] [rbp-C0h] BYREF
  void *ptr; // [rsp+38h] [rbp-B0h]
  __m128i v37; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+50h] [rbp-98h] BYREF
  __m128i v39; // [rsp+58h] [rbp-90h] BYREF
  __m128i v40; // [rsp+68h] [rbp-80h] BYREF
  __int64 v41; // [rsp+78h] [rbp-70h]
  __int64 v42; // [rsp+80h] [rbp-68h]
  char v43; // [rsp+88h] [rbp-60h]
  int v44; // [rsp+90h] [rbp-58h]
  __int64 v45; // [rsp+98h] [rbp-50h]
  __int64 v46; // [rsp+A0h] [rbp-48h]
  int v47; // [rsp+A8h] [rbp-40h]
  char v48; // [rsp+ACh] [rbp-3Ch]
  __int64 v49; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v50; // [rsp+B8h] [rbp-30h]

  v2 = a1 + 64;
  v4 = _mm_loadu_si128((const __m128i *)a1);
  v5 = *(void **)(a1 + 16);
  v50 = __readfsqword(0x28u);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v33 = v4;
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v34 = v5;
  v8 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v35 = v7;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  ptr = v8;
  v38 = 0;
  v37 = v6;
  copy_tinfo_t(&v38);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v10 = *(_QWORD *)(a1 + 112);
  v41 = *(_QWORD *)(a1 + 104);
  v11 = *(_BYTE *)(a1 + 120);
  v39 = v9;
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v43 = v11;
  v13 = *(_DWORD *)(a1 + 128);
  v40 = v12;
  v44 = v13;
  v14 = *(_QWORD *)(a1 + 136);
  v42 = v10;
  v45 = v14;
  v46 = *(_QWORD *)(a1 + 144);
  v47 = *(_DWORD *)(a1 + 152);
  v48 = *(_BYTE *)(a1 + 156);
  v49 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v15 = *(_QWORD *)(a2 + 16);
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v17 = *(void **)(a1 + 16);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v32 = v16;
    qfree(v17);
    v16 = _mm_load_si128(&v32);
  }
  *(_QWORD *)(a1 + 16) = v15;
  *(__m128i *)(a1 + 24) = v16;
  v18 = *(_QWORD *)(a2 + 40);
  v19 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  *(_QWORD *)(a2 + 40) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  v20 = *(void **)(a1 + 40);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    v32 = v19;
    qfree(v20);
    v19 = _mm_load_si128(&v32);
  }
  *(_QWORD *)(a1 + 40) = v18;
  *(__m128i *)(a1 + 48) = v19;
  copy_tinfo_t(v2);
  *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 72));
  *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 88));
  v21 = _mm_load_si128(&v33);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 116);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 136);
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(a1 + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
  *(_BYTE *)(a1 + 156) = *(_BYTE *)(a2 + 156);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
  v22 = v34;
  *(__m128i *)a2 = v21;
  v23 = _mm_loadu_si128(&v35);
  v34 = nullptr;
  v35 = 0;
  v24 = *(void **)(a2 + 16);
  if ( v24 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    v32 = v23;
    qfree(v24);
    v23 = _mm_load_si128(&v32);
  }
  v25 = *(void **)(a2 + 40);
  *(_QWORD *)(a2 + 16) = v22;
  *(__m128i *)(a2 + 24) = v23;
  v26 = ptr;
  v27 = _mm_load_si128(&v37);
  ptr = nullptr;
  v37 = 0;
  if ( v25 )
  {
    *(_QWORD *)(a2 + 48) = 0;
    v32 = v27;
    qfree(v25);
    v27 = _mm_load_si128(&v32);
  }
  *(_QWORD *)(a2 + 40) = v26;
  *(__m128i *)(a2 + 48) = v27;
  copy_tinfo_t(a2 + 64);
  v28 = _mm_loadu_si128(&v39);
  *(_DWORD *)(a2 + 104) = v41;
  v29 = v42;
  *(__m128i *)(a2 + 72) = v28;
  v30 = _mm_loadu_si128(&v40);
  *(_QWORD *)(a2 + 112) = v29;
  LOBYTE(v29) = v43;
  *(__m128i *)(a2 + 88) = v30;
  *(_BYTE *)(a2 + 120) = v29;
  *(_DWORD *)(a2 + 128) = v44;
  *(_QWORD *)(a2 + 136) = v45;
  *(_QWORD *)(a2 + 144) = v46;
  *(_DWORD *)(a2 + 152) = v47;
  *(_BYTE *)(a2 + 156) = v48;
  *(_QWORD *)(a2 + 160) = v49;
  sub_375BF0(&v33);
  return v50 - __readfsqword(0x28u);
}

