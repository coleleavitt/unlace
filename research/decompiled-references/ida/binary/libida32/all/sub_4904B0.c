unsigned __int64 __fastcall sub_4904B0(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  void *v3; // rax
  __m128i v4; // xmm1
  __m128i v5; // xmm0
  void *v6; // rax
  __m128i v7; // xmm0
  __int64 *v8; // rbx
  __int64 v9; // rdx
  char v10; // al
  __m128i v11; // xmm0
  int v12; // eax
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // r14
  __m128i v18; // xmm0
  __int64 v19; // rax
  void *v20; // rdi
  __int64 v21; // r14
  __m128i v22; // xmm0
  int v23; // eax
  __m128i v24; // xmm0
  int v25; // eax
  __m128i v26; // xmm0
  int v27; // eax
  __int64 *v28; // rbp
  void *v29; // rdi
  void *v30; // rbx
  __m128i v31; // xmm0
  void *v32; // rdi
  void *v33; // rbx
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i v37; // xmm0
  __m128i v39; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v40; // [rsp+10h] [rbp-D8h] BYREF
  void *v41; // [rsp+20h] [rbp-C8h]
  __m128i v42; // [rsp+28h] [rbp-C0h] BYREF
  void *ptr; // [rsp+38h] [rbp-B0h]
  __m128i v44; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-98h] BYREF
  __m128i v46; // [rsp+58h] [rbp-90h] BYREF
  __m128i v47; // [rsp+68h] [rbp-80h] BYREF
  __int64 v48; // [rsp+78h] [rbp-70h]
  __int64 v49; // [rsp+80h] [rbp-68h]
  char v50; // [rsp+88h] [rbp-60h]
  int v51; // [rsp+90h] [rbp-58h]
  __int64 v52; // [rsp+98h] [rbp-50h]
  __int64 v53; // [rsp+A0h] [rbp-48h]
  int v54; // [rsp+A8h] [rbp-40h]
  char v55; // [rsp+ACh] [rbp-3Ch]
  __int64 v56; // [rsp+B0h] [rbp-38h]
  unsigned __int64 v57; // [rsp+B8h] [rbp-30h]

  v2 = _mm_loadu_si128((const __m128i *)a1);
  v3 = *(void **)(a1 + 16);
  v57 = __readfsqword(0x28u);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v40 = v2;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v41 = v3;
  v6 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v42 = v5;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  ptr = v6;
  v45 = 0;
  v44 = v4;
  copy_tinfo_t(&v45);
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v8 = (__int64 *)(a1 - 168);
  v9 = *(_QWORD *)(a1 - 168 + 280);
  v48 = *(_QWORD *)(a1 + 104);
  v10 = *(_BYTE *)(a1 - 168 + 288);
  v46 = v7;
  v11 = _mm_loadu_si128((const __m128i *)(a1 - 168 + 256));
  v50 = v10;
  v12 = *(_DWORD *)(a1 - 168 + 296);
  v49 = v9;
  v51 = v12;
  v13 = *(_QWORD *)(a1 - 168 + 304);
  v47 = v11;
  v52 = v13;
  v53 = *(_QWORD *)(a1 - 168 + 312);
  v54 = *(_DWORD *)(a1 - 168 + 320);
  v55 = *(_BYTE *)(a1 - 168 + 324);
  v14 = *(_QWORD *)(a2 + 16) == 0;
  v56 = *(_QWORD *)(a1 - 168 + 328);
  if ( v14 )
LABEL_14:
    std::__throw_bad_function_call();
  while ( (*(int (__fastcall **)(__int64, __m128i *, __int64 *))(a2 + 24))(a2, &v40, v8) < 0 )
  {
    v15 = *v8;
    v16 = (void *)v8[23];
    v17 = v8[2];
    v18 = _mm_loadu_si128((const __m128i *)(v8 + 3));
    *(_OWORD *)(v8 + 3) = 0;
    v8[21] = v15;
    v19 = v8[1];
    v8[2] = 0;
    v8[22] = v19;
    if ( v16 )
    {
      v8[24] = 0;
      v39 = v18;
      qfree(v16);
      v18 = _mm_load_si128(&v39);
    }
    v20 = (void *)v8[26];
    v8[23] = v17;
    *((__m128i *)v8 + 12) = v18;
    v21 = v8[5];
    v22 = _mm_loadu_si128((const __m128i *)v8 + 3);
    v8[5] = 0;
    *((_OWORD *)v8 + 3) = 0;
    if ( v20 )
    {
      v8[27] = 0;
      v39 = v22;
      qfree(v20);
      v22 = _mm_load_si128(&v39);
    }
    v8[26] = v21;
    *(__m128i *)(v8 + 27) = v22;
    copy_tinfo_t(v8 + 29);
    v23 = *((_DWORD *)v8 + 26);
    v24 = _mm_loadu_si128((const __m128i *)(v8 + 9));
    v8 -= 21;
    *((_DWORD *)v8 + 110) = v23;
    v25 = *((_DWORD *)v8 + 70);
    *(__m128i *)(v8 + 51) = v24;
    v26 = _mm_loadu_si128((const __m128i *)v8 + 16);
    *((_DWORD *)v8 + 112) = v25;
    v27 = *((_DWORD *)v8 + 71);
    *(__m128i *)(v8 + 53) = v26;
    *((_DWORD *)v8 + 113) = v27;
    *((_BYTE *)v8 + 456) = *((_BYTE *)v8 + 288);
    *((_DWORD *)v8 + 116) = *((_DWORD *)v8 + 74);
    v8[59] = v8[38];
    *((_DWORD *)v8 + 120) = *((_DWORD *)v8 + 78);
    *((_DWORD *)v8 + 121) = *((_DWORD *)v8 + 79);
    *((_DWORD *)v8 + 122) = *((_DWORD *)v8 + 80);
    *((_BYTE *)v8 + 492) = *((_BYTE *)v8 + 324);
    v8[62] = v8[41];
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_14;
  }
  v28 = v8 + 21;
  *(__m128i *)(v8 + 21) = _mm_load_si128(&v40);
  v29 = (void *)v8[23];
  v30 = v41;
  v41 = nullptr;
  v31 = _mm_loadu_si128(&v42);
  v42 = 0;
  if ( v29 )
  {
    v28[3] = 0;
    v39 = v31;
    qfree(v29);
    v31 = _mm_load_si128(&v39);
  }
  v32 = (void *)v28[5];
  v28[2] = (__int64)v30;
  *(__m128i *)(v28 + 3) = v31;
  v33 = ptr;
  v34 = _mm_load_si128(&v44);
  ptr = nullptr;
  v44 = 0;
  if ( v32 )
  {
    v28[6] = 0;
    v39 = v34;
    qfree(v32);
    v34 = _mm_load_si128(&v39);
  }
  v28[5] = (__int64)v33;
  *((__m128i *)v28 + 3) = v34;
  copy_tinfo_t(v28 + 8);
  v35 = _mm_loadu_si128(&v46);
  *((_DWORD *)v28 + 26) = v48;
  v36 = v49;
  *(__m128i *)(v28 + 9) = v35;
  v37 = _mm_loadu_si128(&v47);
  v28[14] = v36;
  LOBYTE(v36) = v50;
  *(__m128i *)(v28 + 11) = v37;
  *((_BYTE *)v28 + 120) = v36;
  *((_DWORD *)v28 + 32) = v51;
  v28[17] = v52;
  v28[18] = v53;
  *((_DWORD *)v28 + 38) = v54;
  *((_BYTE *)v28 + 156) = v55;
  v28[20] = v56;
  sub_375BF0(&v40);
  return v57 - __readfsqword(0x28u);
}

