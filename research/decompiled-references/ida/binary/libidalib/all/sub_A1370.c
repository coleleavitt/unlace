__int64 __fastcall sub_A1370(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i v12; // xmm4
  __m128i v13; // xmm3
  __m128i v14; // xmm2
  __m128i v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __m128i v29; // xmm5
  __int64 v30; // r12
  __int64 v31; // r13
  __m128i si128; // xmm1
  __int64 v33; // rdi
  __m128i v34; // xmm6
  int v35; // edx
  int v36; // eax
  int v37; // edx
  int v38; // eax
  __m128i v39; // xmm7
  __int64 v40; // r12
  __int64 v41; // r13
  __m128i v42; // xmm1
  __int64 v43; // rdi
  __m128i v44; // xmm2
  __m128i v45; // xmm3
  __int64 v46; // r12
  __int64 v47; // r13
  __m128i v48; // xmm1
  __int64 v49; // rdi
  __m128i v50; // xmm4
  char v51; // dl
  __int64 result; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __m128i v57; // [rsp+0h] [rbp-48h] BYREF
  __m128i v58[3]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    if ( v4 )
    {
      *(_QWORD *)(a1 + 16) = v4;
      v5 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(a2 + 16) = v3;
      v6 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v5;
      v7 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 24) = v6;
      v8 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = v7;
      *(_QWORD *)(a2 + 32) = v8;
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = a1 + 8;
      *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) = a2 + 8;
      v9 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = v9;
    }
    else
    {
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
      v53 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a2 + 16) = v53;
      *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v53 + 8) = a2 + 8;
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 24) = a1 + 8;
      *(_QWORD *)(a1 + 32) = a1 + 8;
      *(_QWORD *)(a1 + 40) = 0;
    }
  }
  else if ( v4 )
  {
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    v54 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 16) = v54;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(v54 + 8) = a1 + 8;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = a2 + 8;
    *(_QWORD *)(a2 + 32) = a2 + 8;
    *(_QWORD *)(a2 + 40) = 0;
  }
  v10 = *(_QWORD *)(a1 + 48);
  v11 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  v12 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v13 = _mm_loadu_si128((const __m128i *)(a1 + 80));
  *(_OWORD *)(a1 + 64) = 0;
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 96));
  *(_OWORD *)(a1 + 80) = 0;
  v15 = _mm_loadu_si128((const __m128i *)(a1 + 112));
  *(_OWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(__m128i *)(a1 + 48) = _mm_loadu_si128((const __m128i *)(a2 + 48));
  *(__m128i *)(a1 + 64) = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *(__m128i *)(a1 + 80) = _mm_loadu_si128((const __m128i *)(a2 + 80));
  *(__m128i *)(a1 + 96) = _mm_loadu_si128((const __m128i *)(a2 + 96));
  *(__m128i *)(a1 + 112) = _mm_loadu_si128((const __m128i *)(a2 + 112));
  *(_QWORD *)(a2 + 48) = v10;
  v16 = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a2 + 56) = v11;
  *(__m128i *)(a2 + 64) = v12;
  *(__m128i *)(a2 + 80) = v13;
  *(__m128i *)(a2 + 96) = v14;
  *(__m128i *)(a2 + 112) = v15;
  v17 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v16;
  *(_QWORD *)(a2 + 128) = v17;
  v18 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 128) = v17;
  *(_QWORD *)(a2 + 128) = v18;
  LODWORD(v17) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
  v19 = *(_QWORD *)(a2 + 192);
  *(_DWORD *)(a2 + 136) = v17;
  v20 = *(_QWORD *)(a1 + 192);
  if ( v20 )
  {
    if ( v19 )
    {
      *(_QWORD *)(a1 + 192) = v19;
      v21 = *(_QWORD *)(a2 + 200);
      *(_QWORD *)(a2 + 192) = v20;
      v22 = *(_QWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 200) = v21;
      v23 = *(_QWORD *)(a2 + 208);
      *(_QWORD *)(a2 + 200) = v22;
      v24 = *(_QWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 208) = v23;
      *(_QWORD *)(a2 + 208) = v24;
      *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) = a1 + 184;
      *(_QWORD *)(*(_QWORD *)(a2 + 192) + 8LL) = a2 + 184;
      v25 = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 216);
      *(_QWORD *)(a2 + 216) = v25;
    }
    else
    {
      *(_DWORD *)(a2 + 184) = *(_DWORD *)(a1 + 184);
      v56 = *(_QWORD *)(a1 + 192);
      *(_QWORD *)(a2 + 192) = v56;
      *(_QWORD *)(a2 + 200) = *(_QWORD *)(a1 + 200);
      *(_QWORD *)(a2 + 208) = *(_QWORD *)(a1 + 208);
      *(_QWORD *)(v56 + 8) = a2 + 184;
      *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 216);
      *(_QWORD *)(a1 + 192) = 0;
      *(_QWORD *)(a1 + 200) = a1 + 184;
      *(_QWORD *)(a1 + 208) = a1 + 184;
      *(_QWORD *)(a1 + 216) = 0;
    }
  }
  else if ( v19 )
  {
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 184);
    v55 = *(_QWORD *)(a2 + 192);
    *(_QWORD *)(a1 + 192) = v55;
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a2 + 200);
    *(_QWORD *)(a1 + 208) = *(_QWORD *)(a2 + 208);
    *(_QWORD *)(v55 + 8) = a1 + 184;
    *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 216);
    *(_QWORD *)(a2 + 192) = 0;
    *(_QWORD *)(a2 + 200) = a2 + 184;
    *(_QWORD *)(a2 + 208) = a2 + 184;
    *(_QWORD *)(a2 + 216) = 0;
  }
  v26 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 224);
  v27 = *(_QWORD *)(a2 + 232);
  *(_QWORD *)(a2 + 224) = v26;
  v28 = *(_QWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 232) = v27;
  *(_QWORD *)(a2 + 232) = v28;
  v29 = _mm_loadu_si128((const __m128i *)(a1 + 248));
  v30 = *(_QWORD *)(a1 + 240);
  *(_OWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  v31 = *(_QWORD *)(a2 + 240);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 248));
  *(_OWORD *)(a2 + 248) = 0;
  *(_QWORD *)(a2 + 240) = 0;
  v33 = *(_QWORD *)(a1 + 240);
  v57 = v29;
  if ( v33 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    v58[0] = si128;
    qfree();
    si128 = _mm_load_si128(v58);
  }
  *(_QWORD *)(a1 + 240) = v31;
  *(__m128i *)(a1 + 248) = si128;
  if ( *(_QWORD *)(a2 + 240) )
  {
    *(_QWORD *)(a2 + 248) = 0;
    qfree();
  }
  v34 = _mm_load_si128(&v57);
  *(_QWORD *)(a2 + 240) = v30;
  v35 = *(_DWORD *)(a2 + 352);
  *(__m128i *)(a2 + 248) = v34;
  v36 = *(_DWORD *)(a1 + 352);
  *(_DWORD *)(a1 + 352) = v35;
  v37 = *(_DWORD *)(a2 + 356);
  *(_DWORD *)(a2 + 352) = v36;
  v38 = *(_DWORD *)(a1 + 356);
  *(_DWORD *)(a1 + 356) = v37;
  LOBYTE(v37) = *(_BYTE *)(a2 + 360);
  *(_DWORD *)(a2 + 356) = v38;
  LOBYTE(v38) = *(_BYTE *)(a1 + 360);
  *(_BYTE *)(a1 + 360) = v37;
  *(_BYTE *)(a2 + 360) = v38;
  v39 = _mm_loadu_si128((const __m128i *)(a1 + 312));
  v40 = *(_QWORD *)(a1 + 304);
  *(_OWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  v41 = *(_QWORD *)(a2 + 304);
  v42 = _mm_loadu_si128((const __m128i *)(a2 + 312));
  *(_OWORD *)(a2 + 312) = 0;
  *(_QWORD *)(a2 + 304) = 0;
  v43 = *(_QWORD *)(a1 + 304);
  v57 = v39;
  if ( v43 )
  {
    *(_QWORD *)(a1 + 312) = 0;
    v58[0] = v42;
    qfree();
    v42 = _mm_load_si128(v58);
  }
  *(_QWORD *)(a1 + 304) = v41;
  *(__m128i *)(a1 + 312) = v42;
  if ( *(_QWORD *)(a2 + 304) )
  {
    *(_QWORD *)(a2 + 312) = 0;
    qfree();
  }
  v44 = _mm_load_si128(&v57);
  *(_QWORD *)(a2 + 304) = v40;
  *(__m128i *)(a2 + 312) = v44;
  v45 = _mm_loadu_si128((const __m128i *)(a1 + 336));
  v46 = *(_QWORD *)(a1 + 328);
  *(_OWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  v47 = *(_QWORD *)(a2 + 328);
  v48 = _mm_loadu_si128((const __m128i *)(a2 + 336));
  *(_OWORD *)(a2 + 336) = 0;
  *(_QWORD *)(a2 + 328) = 0;
  v49 = *(_QWORD *)(a1 + 328);
  v57 = v45;
  if ( v49 )
  {
    *(_QWORD *)(a1 + 336) = 0;
    v58[0] = v48;
    qfree();
    v48 = _mm_load_si128(v58);
  }
  *(_QWORD *)(a1 + 328) = v47;
  *(__m128i *)(a1 + 336) = v48;
  if ( *(_QWORD *)(a2 + 328) )
  {
    *(_QWORD *)(a2 + 336) = 0;
    qfree();
  }
  v50 = _mm_load_si128(&v57);
  *(_QWORD *)(a2 + 328) = v46;
  v51 = *(_BYTE *)(a2 + 361);
  *(__m128i *)(a2 + 336) = v50;
  result = *(unsigned __int8 *)(a1 + 361);
  *(_BYTE *)(a1 + 361) = v51;
  *(_BYTE *)(a2 + 361) = result;
  return result;
}

