__int64 __fastcall sub_20FD20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __m128i v16; // xmm4
  __m128i v17; // xmm3
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __m128i v33; // xmm5
  __int64 v34; // r12
  __int64 v35; // r13
  __m128i si128; // xmm1
  __int64 v37; // rdi
  __int64 v38; // rdi
  __m128i v39; // xmm6
  int v40; // edx
  int v41; // eax
  int v42; // edx
  int v43; // eax
  __int64 v44; // rdx
  __m128i v45; // xmm7
  __int64 v46; // r12
  __int64 v47; // r13
  __m128i v48; // xmm1
  __int64 v49; // rdi
  __int64 v50; // rdi
  __m128i v51; // xmm2
  __m128i v52; // xmm3
  __int64 v53; // r12
  __int64 v54; // r13
  __m128i v55; // xmm1
  __int64 v56; // rdi
  __int64 v57; // rdi
  __m128i v58; // xmm4
  char v59; // dl
  __int64 result; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __m128i v65; // [rsp+0h] [rbp-48h] BYREF
  __m128i v66[3]; // [rsp+10h] [rbp-38h] BYREF

  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(a2 + 16);
  if ( v7 )
  {
    if ( v8 )
    {
      *(_QWORD *)(a1 + 16) = v8;
      v9 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(a2 + 16) = v7;
      v10 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v9;
      v11 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 24) = v10;
      v12 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = v11;
      *(_QWORD *)(a2 + 32) = v12;
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = a1 + 8;
      *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) = a2 + 8;
      v13 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = v13;
    }
    else
    {
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
      v61 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a2 + 16) = v61;
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v61 + 8) = a2 + 8;
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = a1 + 8;
      *(_QWORD *)(a1 + 32) = a1 + 8;
      *(_QWORD *)(a1 + 40) = 0;
    }
  }
  else if ( v8 )
  {
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    v62 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 16) = v62;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(v62 + 8) = a1 + 8;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = a2 + 8;
    *(_QWORD *)(a2 + 32) = a2 + 8;
    *(_QWORD *)(a2 + 40) = 0;
  }
  v14 = *(_QWORD *)(a1 + 48);
  v15 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  v16 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v17 = _mm_loadu_si128((const __m128i *)(a1 + 80));
  *(_OWORD *)(a1 + 64) = 0;
  v18 = _mm_loadu_si128((const __m128i *)(a1 + 96));
  *(_OWORD *)(a1 + 80) = 0;
  v19 = _mm_loadu_si128((const __m128i *)(a1 + 112));
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(__m128i *)(a1 + 48) = _mm_loadu_si128((const __m128i *)(a2 + 48));
  *(__m128i *)(a1 + 64) = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *(__m128i *)(a1 + 80) = _mm_loadu_si128((const __m128i *)(a2 + 80));
  *(__m128i *)(a1 + 96) = _mm_loadu_si128((const __m128i *)(a2 + 96));
  *(__m128i *)(a1 + 112) = _mm_loadu_si128((const __m128i *)(a2 + 112));
  *(_QWORD *)(a2 + 48) = v14;
  v20 = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a2 + 56) = v15;
  *(__m128i *)(a2 + 64) = v16;
  *(__m128i *)(a2 + 80) = v17;
  *(__m128i *)(a2 + 96) = v18;
  *(__m128i *)(a2 + 112) = v19;
  v21 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v20;
  *(_QWORD *)(a2 + 128) = v21;
  v22 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v21;
  *(_QWORD *)(a2 + 128) = v22;
  LODWORD(v21) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  v23 = *(_QWORD *)(a2 + 192);
  *(_DWORD *)(a2 + 136) = v21;
  v24 = *(_QWORD *)(a1 + 192);
  if ( v24 )
  {
    if ( v23 )
    {
      *(_QWORD *)(a1 + 192) = v23;
      v25 = *(_QWORD *)(a2 + 200);
      *(_QWORD *)(a2 + 192) = v24;
      v26 = *(_QWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 200) = v25;
      v27 = *(_QWORD *)(a2 + 208);
      *(_QWORD *)(a2 + 200) = v26;
      v28 = *(_QWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 208) = v27;
      *(_QWORD *)(a2 + 208) = v28;
      *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) = a1 + 184;
      *(_QWORD *)(*(_QWORD *)(a2 + 192) + 8LL) = a2 + 184;
      v29 = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 216);
      *(_QWORD *)(a2 + 216) = v29;
    }
    else
    {
      *(_DWORD *)(a2 + 184) = *(_DWORD *)(a1 + 184);
      v64 = *(_QWORD *)(a1 + 192);
      *(_QWORD *)(a2 + 192) = v64;
      *(_QWORD *)(a2 + 200) = *(_QWORD *)(a1 + 200);
      *(_QWORD *)(a2 + 208) = *(_QWORD *)(a1 + 208);
      *(_QWORD *)(v64 + 8) = a2 + 184;
      *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a1 + 192) = 0;
      *(_QWORD *)(a1 + 200) = a1 + 184;
      *(_QWORD *)(a1 + 208) = a1 + 184;
      *(_QWORD *)(a1 + 216) = 0;
    }
  }
  else if ( v23 )
  {
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 184);
    v63 = *(_QWORD *)(a2 + 192);
    *(_QWORD *)(a1 + 192) = v63;
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a2 + 200);
    *(_QWORD *)(a1 + 208) = *(_QWORD *)(a2 + 208);
    *(_QWORD *)(v63 + 8) = a1 + 184;
    *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 216);
    *(_QWORD *)(a2 + 192) = 0;
    *(_QWORD *)(a2 + 200) = a2 + 184;
    *(_QWORD *)(a2 + 208) = a2 + 184;
    *(_QWORD *)(a2 + 216) = 0;
  }
  v30 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 224);
  v31 = *(_QWORD *)(a2 + 232);
  *(_QWORD *)(a2 + 224) = v30;
  v32 = *(_QWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 232) = v31;
  *(_QWORD *)(a2 + 232) = v32;
  v33 = _mm_loadu_si128((const __m128i *)(a1 + 248));
  v34 = *(_QWORD *)(a1 + 240);
  *(_OWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  v35 = *(_QWORD *)(a2 + 240);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 248));
  *(_OWORD *)(a2 + 248) = 0;
  *(_QWORD *)(a2 + 240) = 0;
  v37 = *(_QWORD *)(a1 + 240);
  v65 = v33;
  if ( v37 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v37, (const char *)a2, v31, a4, a5, a6, *(_OWORD *)&v65, *(_OWORD *)&si128);
    si128 = _mm_load_si128(v66);
  }
  *(_QWORD *)(a1 + 240) = v35;
  *(__m128i *)(a1 + 248) = si128;
  v38 = *(_QWORD *)(a2 + 240);
  if ( v38 )
  {
    *(_QWORD *)(a2 + 248) = 0;
    qfree(v38, (const char *)a2);
  }
  v39 = _mm_load_si128(&v65);
  *(_QWORD *)(a2 + 240) = v34;
  v40 = *(_DWORD *)(a2 + 352);
  *(__m128i *)(a2 + 248) = v39;
  v41 = *(_DWORD *)(a1 + 352);
  *(_DWORD *)(a1 + 352) = v40;
  v42 = *(_DWORD *)(a2 + 356);
  *(_DWORD *)(a2 + 352) = v41;
  v43 = *(_DWORD *)(a1 + 356);
  *(_DWORD *)(a1 + 356) = v42;
  v44 = *(unsigned __int8 *)(a2 + 360);
  *(_DWORD *)(a2 + 356) = v43;
  LOBYTE(v43) = *(_BYTE *)(a1 + 360);
  *(_BYTE *)(a1 + 360) = v44;
  *(_BYTE *)(a2 + 360) = v43;
  v45 = _mm_loadu_si128((const __m128i *)(a1 + 312));
  v46 = *(_QWORD *)(a1 + 304);
  *(_OWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  v47 = *(_QWORD *)(a2 + 304);
  v48 = _mm_loadu_si128((const __m128i *)(a2 + 312));
  *(_OWORD *)(a2 + 312) = 0;
  *(_QWORD *)(a2 + 304) = 0;
  v49 = *(_QWORD *)(a1 + 304);
  v65 = v45;
  if ( v49 )
  {
    *(_QWORD *)(a1 + 312) = 0;
    qfree(v49, (const char *)a2, v44, a4, a5, a6, *(_OWORD *)&v65, *(_OWORD *)&v48);
    v48 = _mm_load_si128(v66);
  }
  *(_QWORD *)(a1 + 304) = v47;
  *(__m128i *)(a1 + 312) = v48;
  v50 = *(_QWORD *)(a2 + 304);
  if ( v50 )
  {
    *(_QWORD *)(a2 + 312) = 0;
    qfree(v50, (const char *)a2);
  }
  v51 = _mm_load_si128(&v65);
  *(_QWORD *)(a2 + 304) = v46;
  *(__m128i *)(a2 + 312) = v51;
  v52 = _mm_loadu_si128((const __m128i *)(a1 + 336));
  v53 = *(_QWORD *)(a1 + 328);
  *(_OWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  v54 = *(_QWORD *)(a2 + 328);
  v55 = _mm_loadu_si128((const __m128i *)(a2 + 336));
  *(_OWORD *)(a2 + 336) = 0;
  *(_QWORD *)(a2 + 328) = 0;
  v56 = *(_QWORD *)(a1 + 328);
  v65 = v52;
  if ( v56 )
  {
    *(_QWORD *)(a1 + 336) = 0;
    qfree(v56, (const char *)a2, v44, a4, a5, a6, *(_OWORD *)&v65, *(_OWORD *)&v55);
    v55 = _mm_load_si128(v66);
  }
  *(_QWORD *)(a1 + 328) = v54;
  *(__m128i *)(a1 + 336) = v55;
  v57 = *(_QWORD *)(a2 + 328);
  if ( v57 )
  {
    *(_QWORD *)(a2 + 336) = 0;
    qfree(v57, (const char *)a2);
  }
  v58 = _mm_load_si128(&v65);
  *(_QWORD *)(a2 + 328) = v53;
  v59 = *(_BYTE *)(a2 + 361);
  *(__m128i *)(a2 + 336) = v58;
  result = *(unsigned __int8 *)(a1 + 361);
  *(_BYTE *)(a1 + 361) = v59;
  *(_BYTE *)(a2 + 361) = result;
  return result;
}
