unsigned __int64 __fastcall sub_4A5570(__int64 a1, __int64 a2)
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
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rax
  void *v18; // rdi
  __int64 v19; // r14
  __m128i v20; // xmm0
  __int64 v21; // rax
  void *v22; // rdi
  __int64 v23; // r14
  __m128i v24; // xmm0
  int v25; // eax
  __m128i v26; // xmm0
  int v27; // eax
  __m128i v28; // xmm0
  int v29; // eax
  __m128i v30; // xmm0
  __int64 *v31; // rbp
  void *v32; // rdi
  void *v33; // rbx
  __m128i v34; // xmm0
  void *v35; // rdi
  void *v36; // rbx
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __int64 v39; // rax
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __int64 v42; // rax
  __m128i v44; // [rsp+0h] [rbp-108h] BYREF
  __m128i v45; // [rsp+10h] [rbp-F8h] BYREF
  void *v46; // [rsp+20h] [rbp-E8h]
  __m128i v47; // [rsp+28h] [rbp-E0h] BYREF
  void *ptr; // [rsp+38h] [rbp-D0h]
  __m128i v49; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v51; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v52; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v53; // [rsp+78h] [rbp-90h] BYREF
  __int64 v54; // [rsp+88h] [rbp-80h]
  __int64 v55; // [rsp+90h] [rbp-78h]
  char v56; // [rsp+98h] [rbp-70h]
  __int64 v57; // [rsp+A0h] [rbp-68h]
  __int64 v58; // [rsp+A8h] [rbp-60h]
  __int64 v59; // [rsp+B0h] [rbp-58h]
  __int64 v60; // [rsp+B8h] [rbp-50h]
  char v61; // [rsp+C0h] [rbp-48h]
  __int64 v62; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v63; // [rsp+D8h] [rbp-30h]

  v2 = _mm_loadu_si128((const __m128i *)a1);
  v3 = *(void **)(a1 + 16);
  v63 = __readfsqword(0x28u);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v45 = v2;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v46 = v3;
  v6 = *(void **)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v47 = v5;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  ptr = v6;
  v50 = 0;
  v49 = v4;
  copy_tinfo_t(&v50);
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v8 = (__int64 *)(a1 - 192);
  v9 = *(_QWORD *)(a1 - 192 + 320);
  v54 = *(_QWORD *)(a1 + 120);
  v10 = *(_BYTE *)(a1 - 192 + 328);
  v51 = v7;
  v11 = _mm_loadu_si128((const __m128i *)(a1 - 192 + 280));
  v56 = v10;
  v12 = *(_QWORD *)(a1 - 192 + 336);
  v52 = v11;
  v13 = _mm_loadu_si128((const __m128i *)(a1 - 192 + 296));
  v57 = v12;
  v14 = *(_QWORD *)(a1 - 192 + 344);
  v55 = v9;
  v58 = v14;
  v15 = *(_QWORD *)(a1 - 192 + 352);
  v53 = v13;
  v59 = v15;
  v60 = *(_QWORD *)(a1 - 192 + 360);
  v61 = *(_BYTE *)(a1 - 192 + 368);
  v16 = *(_QWORD *)(a2 + 16) == 0;
  v62 = *(_QWORD *)(a1 - 192 + 376);
  if ( v16 )
LABEL_14:
    std::__throw_bad_function_call();
  while ( (*(int (__fastcall **)(__int64, __m128i *, __int64 *))(a2 + 24))(a2, &v45, v8) < 0 )
  {
    v17 = *v8;
    v18 = (void *)v8[26];
    v19 = v8[2];
    v20 = _mm_loadu_si128((const __m128i *)(v8 + 3));
    *(_OWORD *)(v8 + 3) = 0;
    v8[24] = v17;
    v21 = v8[1];
    v8[2] = 0;
    v8[25] = v21;
    if ( v18 )
    {
      v8[27] = 0;
      v44 = v20;
      qfree(v18);
      v20 = _mm_load_si128(&v44);
    }
    v22 = (void *)v8[29];
    v8[26] = v19;
    *(__m128i *)(v8 + 27) = v20;
    v23 = v8[5];
    v24 = _mm_loadu_si128((const __m128i *)v8 + 3);
    v8[5] = 0;
    *((_OWORD *)v8 + 3) = 0;
    if ( v22 )
    {
      v8[30] = 0;
      v44 = v24;
      qfree(v22);
      v24 = _mm_load_si128(&v44);
    }
    v8[29] = v23;
    *((__m128i *)v8 + 15) = v24;
    copy_tinfo_t(v8 + 32);
    v25 = *((_DWORD *)v8 + 30);
    v26 = _mm_loadu_si128((const __m128i *)(v8 + 9));
    v8 -= 24;
    *((_DWORD *)v8 + 126) = v25;
    v27 = *((_DWORD *)v8 + 80);
    *(__m128i *)(v8 + 57) = v26;
    v28 = _mm_loadu_si128((const __m128i *)(v8 + 35));
    *((_DWORD *)v8 + 128) = v27;
    v29 = *((_DWORD *)v8 + 81);
    *(__m128i *)(v8 + 59) = v28;
    v30 = _mm_loadu_si128((const __m128i *)(v8 + 37));
    *((_DWORD *)v8 + 129) = v29;
    LOBYTE(v29) = *((_BYTE *)v8 + 328);
    *(__m128i *)(v8 + 61) = v30;
    *((_BYTE *)v8 + 520) = v29;
    v8[66] = v8[42];
    v8[67] = v8[43];
    v8[68] = v8[44];
    *((_DWORD *)v8 + 138) = *((_DWORD *)v8 + 90);
    *((_DWORD *)v8 + 139) = *((_DWORD *)v8 + 91);
    *((_BYTE *)v8 + 560) = *((_BYTE *)v8 + 368);
    v8[71] = v8[47];
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_14;
  }
  v31 = v8 + 24;
  *((__m128i *)v8 + 12) = _mm_load_si128(&v45);
  v32 = (void *)v8[26];
  v33 = v46;
  v46 = nullptr;
  v34 = _mm_loadu_si128(&v47);
  v47 = 0;
  if ( v32 )
  {
    v31[3] = 0;
    v44 = v34;
    qfree(v32);
    v34 = _mm_load_si128(&v44);
  }
  v35 = (void *)v31[5];
  v31[2] = (__int64)v33;
  *(__m128i *)(v31 + 3) = v34;
  v36 = ptr;
  v37 = _mm_load_si128(&v49);
  ptr = nullptr;
  v49 = 0;
  if ( v35 )
  {
    v31[6] = 0;
    v44 = v37;
    qfree(v35);
    v37 = _mm_load_si128(&v44);
  }
  v31[5] = (__int64)v36;
  *((__m128i *)v31 + 3) = v37;
  copy_tinfo_t(v31 + 8);
  v38 = _mm_loadu_si128(&v51);
  *((_DWORD *)v31 + 30) = v54;
  v39 = v55;
  *(__m128i *)(v31 + 9) = v38;
  v40 = _mm_loadu_si128(&v52);
  v31[16] = v39;
  LOBYTE(v39) = v56;
  *(__m128i *)(v31 + 11) = v40;
  v41 = _mm_loadu_si128(&v53);
  *((_BYTE *)v31 + 136) = v39;
  v42 = v57;
  *(__m128i *)(v31 + 13) = v41;
  v31[18] = v42;
  v31[19] = v58;
  v31[20] = v59;
  v31[21] = v60;
  *((_BYTE *)v31 + 176) = v61;
  v31[23] = v62;
  sub_379560(&v45);
  return v63 - __readfsqword(0x28u);
}
