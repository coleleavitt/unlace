// Alternative name is '_ZN15ClpCholeskyBaseC1ERKS_'
void __fastcall ClpCholeskyBase::ClpCholeskyBase(ClpCholeskyBase *this, const ClpCholeskyBase *a2)
{
  unsigned __int64 v2; // rdx
  __int128 v3; // xmm0
  const void *v4; // r13
  char v5; // al
  int v6; // eax
  size_t v7; // r12
  void *v8; // rax
  void *v9; // rax
  void *v10; // rcx
  const void *v11; // r13
  size_t v12; // r12
  void *v13; // rax
  void *v14; // rax
  void *v15; // rcx
  const void *v16; // r13
  size_t v17; // r12
  void *v18; // rax
  void *v19; // rcx
  int v20; // eax
  const void *v21; // r13
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r12
  void *v24; // rax
  void *v25; // rcx
  unsigned __int64 v26; // rdx
  const void *v27; // r13
  int v28; // r12d
  unsigned __int64 v29; // r12
  void *v30; // rax
  void *v31; // rax
  void *v32; // rcx
  const void *v33; // r13
  size_t v34; // r12
  void *v35; // rax
  void *v36; // rcx
  const void *v37; // r13
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // r12
  void *v40; // rax
  void *v41; // rcx
  const void *v42; // r13
  unsigned __int64 v43; // rdx
  size_t v44; // r12
  void *v45; // rax
  void *v46; // rax
  void *v47; // rcx
  const void *v48; // r13
  size_t v49; // r12
  void *v50; // rax
  void *v51; // rax
  void *v52; // rcx
  const void *v53; // r13
  size_t v54; // r12
  void *v55; // rax
  void *v56; // rax
  void *v57; // rcx
  const void *v58; // r13
  size_t v59; // r12
  void *v60; // rax
  void *v61; // rax
  void *v62; // rcx
  const void *v63; // r13
  size_t v64; // r12
  void *v65; // rax
  void *v66; // rcx
  __m128i v67; // xmm0
  __m128i v68; // xmm0
  __m128i v69; // xmm0
  __m128i v70; // xmm0
  __m128i v71; // xmm0
  __m128i v72; // xmm0
  __m128i v73; // xmm0
  __m128i v74; // xmm0
  int v75; // eax

  v2 = *((int *)a2 + 11);
  v3 = *((_OWORD *)a2 + 1);
  v4 = *((const void **)a2 + 7);
  *(_QWORD *)this = &off_4CFFB8;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v5 = *((_BYTE *)a2 + 12);
  *((_OWORD *)this + 1) = v3;
  *((_BYTE *)this + 12) = v5;
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 4);
  v6 = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = v2;
  *((_DWORD *)this + 10) = v6;
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  if ( v4 )
  {
    v7 = (int)v2;
    v8 = (void *)operator new[]((int)v2);
    v9 = memcpy(v8, v4, v7);
    v2 = *((int *)this + 11);
    v10 = v9;
  }
  else
  {
    v10 = nullptr;
  }
  v11 = *((const void **)a2 + 8);
  *((_QWORD *)this + 7) = v10;
  if ( v11 )
  {
    if ( v2 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_56;
    v12 = 4 * v2;
    v13 = (void *)operator new[](4 * v2);
    v14 = memcpy(v13, v11, v12);
    v2 = *((int *)this + 11);
    v15 = v14;
  }
  else
  {
    v15 = nullptr;
  }
  v16 = *((const void **)a2 + 9);
  *((_QWORD *)this + 8) = v15;
  if ( v16 )
  {
    if ( v2 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_56;
    v17 = 4 * v2;
    v18 = (void *)operator new[](4 * v2);
    v19 = memcpy(v18, v16, v17);
  }
  else
  {
    v19 = nullptr;
  }
  v20 = *((_DWORD *)a2 + 40);
  v21 = *((const void **)a2 + 11);
  *((_QWORD *)this + 9) = v19;
  *((_DWORD *)this + 40) = v20;
  v22 = *((int *)a2 + 40);
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 41);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  if ( v21 )
  {
    if ( v22 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_56;
    v23 = 8 * v22;
    v24 = (void *)operator new[](v23);
    v25 = memcpy(v24, v21, v23);
  }
  else
  {
    v25 = nullptr;
  }
  v26 = *((int *)this + 11);
  v27 = *((const void **)a2 + 12);
  *((_QWORD *)this + 11) = v25;
  v28 = v26 + 1;
  if ( v27 )
  {
    if ( (unsigned __int64)v28 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_56;
    v29 = 4LL * v28;
    v30 = (void *)operator new[](v29);
    v31 = memcpy(v30, v27, v29);
    v26 = *((int *)this + 11);
    v32 = v31;
  }
  else
  {
    v32 = nullptr;
  }
  v33 = *((const void **)a2 + 14);
  *((_QWORD *)this + 12) = v32;
  if ( v33 )
  {
    if ( v26 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_56;
    v34 = 4 * v26;
    v35 = (void *)operator new[](4 * v26);
    v36 = memcpy(v35, v33, v34);
  }
  else
  {
    v36 = nullptr;
  }
  v37 = *((const void **)a2 + 13);
  *((_QWORD *)this + 14) = v36;
  v38 = *((int *)this + 41);
  if ( v37 )
  {
    if ( v38 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_56;
    v39 = 4 * v38;
    v40 = (void *)operator new[](v39);
    v41 = memcpy(v40, v37, v39);
  }
  else
  {
    v41 = nullptr;
  }
  v42 = *((const void **)a2 + 15);
  *((_QWORD *)this + 13) = v41;
  v43 = *((int *)this + 11);
  if ( v42 )
  {
    if ( v43 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_56;
    v44 = 8 * v43;
    v45 = (void *)operator new[](8 * v43);
    v46 = memcpy(v45, v42, v44);
    v43 = *((int *)this + 11);
    v47 = v46;
  }
  else
  {
    v47 = nullptr;
  }
  v48 = *((const void **)a2 + 16);
  *((_QWORD *)this + 15) = v47;
  if ( v48 )
  {
    if ( v43 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_56;
    v49 = 8 * v43;
    v50 = (void *)operator new[](8 * v43);
    v51 = memcpy(v50, v48, v49);
    v43 = *((int *)this + 11);
    v52 = v51;
  }
  else
  {
    v52 = nullptr;
  }
  v53 = *((const void **)a2 + 17);
  *((_QWORD *)this + 16) = v52;
  if ( v53 )
  {
    if ( v43 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_56;
    v54 = 4 * v43;
    v55 = (void *)operator new[](4 * v43);
    v56 = memcpy(v55, v53, v54);
    v43 = *((int *)this + 11);
    v57 = v56;
  }
  else
  {
    v57 = nullptr;
  }
  v58 = *((const void **)a2 + 18);
  *((_QWORD *)this + 17) = v57;
  if ( v58 )
  {
    if ( v43 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_56;
    v59 = 4 * v43;
    v60 = (void *)operator new[](4 * v43);
    v61 = memcpy(v60, v58, v59);
    v43 = *((int *)this + 11);
    v62 = v61;
  }
  else
  {
    v62 = nullptr;
  }
  v63 = *((const void **)a2 + 19);
  *((_QWORD *)this + 18) = v62;
  if ( v63 )
  {
    if ( v43 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v64 = 4 * v43;
      v65 = (void *)operator new[](4 * v43);
      v66 = memcpy(v65, v63, v64);
      goto LABEL_36;
    }
LABEL_56:
    __cxa_throw_bad_array_new_length();
  }
  v66 = nullptr;
LABEL_36:
  *((_QWORD *)this + 19) = v66;
  if ( this != a2 )
  {
    if ( (char *)this + 172 < (char *)a2 + 204 && (char *)a2 + 172 < (char *)this + 204 )
    {
      *((_DWORD *)this + 43) = *((_DWORD *)a2 + 43);
      *((_DWORD *)this + 44) = *((_DWORD *)a2 + 44);
      *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
      *((_DWORD *)this + 46) = *((_DWORD *)a2 + 46);
      *((_DWORD *)this + 47) = *((_DWORD *)a2 + 47);
      *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
      *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
      *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
      *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
      *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
      *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
      *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
      *((_DWORD *)this + 55) = *((_DWORD *)a2 + 55);
      *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
      *((_DWORD *)this + 57) = *((_DWORD *)a2 + 57);
      *((_DWORD *)this + 58) = *((_DWORD *)a2 + 58);
      *((_DWORD *)this + 59) = *((_DWORD *)a2 + 59);
      *((_DWORD *)this + 60) = *((_DWORD *)a2 + 60);
      *((_DWORD *)this + 61) = *((_DWORD *)a2 + 61);
      *((_DWORD *)this + 62) = *((_DWORD *)a2 + 62);
      *((_DWORD *)this + 63) = *((_DWORD *)a2 + 63);
      *((_DWORD *)this + 64) = *((_DWORD *)a2 + 64);
      *((_DWORD *)this + 65) = *((_DWORD *)a2 + 65);
      *((_DWORD *)this + 66) = *((_DWORD *)a2 + 66);
      *((_DWORD *)this + 67) = *((_DWORD *)a2 + 67);
      *((_DWORD *)this + 68) = *((_DWORD *)a2 + 68);
      *((_DWORD *)this + 69) = *((_DWORD *)a2 + 69);
      *((_DWORD *)this + 70) = *((_DWORD *)a2 + 70);
      *((_DWORD *)this + 71) = *((_DWORD *)a2 + 71);
      *((_DWORD *)this + 72) = *((_DWORD *)a2 + 72);
      *((_DWORD *)this + 73) = *((_DWORD *)a2 + 73);
      *((_DWORD *)this + 74) = *((_DWORD *)a2 + 74);
      *((_DWORD *)this + 75) = *((_DWORD *)a2 + 75);
      *((_DWORD *)this + 76) = *((_DWORD *)a2 + 76);
      *((_DWORD *)this + 77) = *((_DWORD *)a2 + 77);
      *((_DWORD *)this + 78) = *((_DWORD *)a2 + 78);
      *((_DWORD *)this + 79) = *((_DWORD *)a2 + 79);
      *((_DWORD *)this + 80) = *((_DWORD *)a2 + 80);
      *((_DWORD *)this + 81) = *((_DWORD *)a2 + 81);
      *((_DWORD *)this + 82) = *((_DWORD *)a2 + 82);
      *((_DWORD *)this + 83) = *((_DWORD *)a2 + 83);
      *((_DWORD *)this + 84) = *((_DWORD *)a2 + 84);
      *((_DWORD *)this + 85) = *((_DWORD *)a2 + 85);
      *((_DWORD *)this + 86) = *((_DWORD *)a2 + 86);
      *((_DWORD *)this + 87) = *((_DWORD *)a2 + 87);
      *((_DWORD *)this + 88) = *((_DWORD *)a2 + 88);
      *((_DWORD *)this + 89) = *((_DWORD *)a2 + 89);
      *((_DWORD *)this + 90) = *((_DWORD *)a2 + 90);
      *((_DWORD *)this + 91) = *((_DWORD *)a2 + 91);
      *((_DWORD *)this + 92) = *((_DWORD *)a2 + 92);
      *((_DWORD *)this + 93) = *((_DWORD *)a2 + 93);
      *((_DWORD *)this + 94) = *((_DWORD *)a2 + 94);
      *((_DWORD *)this + 95) = *((_DWORD *)a2 + 95);
      *((_DWORD *)this + 96) = *((_DWORD *)a2 + 96);
      *((_DWORD *)this + 97) = *((_DWORD *)a2 + 97);
      *((_DWORD *)this + 98) = *((_DWORD *)a2 + 98);
      *((_DWORD *)this + 99) = *((_DWORD *)a2 + 99);
      *((_DWORD *)this + 100) = *((_DWORD *)a2 + 100);
      *((_DWORD *)this + 101) = *((_DWORD *)a2 + 101);
      *((_DWORD *)this + 102) = *((_DWORD *)a2 + 102);
      *((_DWORD *)this + 103) = *((_DWORD *)a2 + 103);
      *((_DWORD *)this + 104) = *((_DWORD *)a2 + 104);
      *((_DWORD *)this + 105) = *((_DWORD *)a2 + 105);
      *((_DWORD *)this + 106) = *((_DWORD *)a2 + 106);
    }
    else
    {
      v67 = _mm_loadu_si128((const __m128i *)((char *)a2 + 188));
      *(__m128i *)((char *)this + 172) = _mm_loadu_si128((const __m128i *)((char *)a2 + 172));
      *(__m128i *)((char *)this + 188) = v67;
      v68 = _mm_loadu_si128((const __m128i *)((char *)a2 + 220));
      *(__m128i *)((char *)this + 204) = _mm_loadu_si128((const __m128i *)((char *)a2 + 204));
      *(__m128i *)((char *)this + 220) = v68;
      v69 = _mm_loadu_si128((const __m128i *)((char *)a2 + 252));
      *(__m128i *)((char *)this + 236) = _mm_loadu_si128((const __m128i *)((char *)a2 + 236));
      *(__m128i *)((char *)this + 252) = v69;
      v70 = _mm_loadu_si128((const __m128i *)((char *)a2 + 284));
      *(__m128i *)((char *)this + 268) = _mm_loadu_si128((const __m128i *)((char *)a2 + 268));
      *(__m128i *)((char *)this + 284) = v70;
      v71 = _mm_loadu_si128((const __m128i *)((char *)a2 + 316));
      *(__m128i *)((char *)this + 300) = _mm_loadu_si128((const __m128i *)((char *)a2 + 300));
      *(__m128i *)((char *)this + 316) = v71;
      v72 = _mm_loadu_si128((const __m128i *)((char *)a2 + 348));
      *(__m128i *)((char *)this + 332) = _mm_loadu_si128((const __m128i *)((char *)a2 + 332));
      *(__m128i *)((char *)this + 348) = v72;
      v73 = _mm_loadu_si128((const __m128i *)((char *)a2 + 380));
      *(__m128i *)((char *)this + 364) = _mm_loadu_si128((const __m128i *)((char *)a2 + 364));
      *(__m128i *)((char *)this + 380) = v73;
      v74 = _mm_loadu_si128((const __m128i *)((char *)a2 + 412));
      *(__m128i *)((char *)this + 396) = _mm_loadu_si128((const __m128i *)((char *)a2 + 396));
      *(__m128i *)((char *)this + 412) = v74;
    }
    if ( this != a2 )
    {
      *((_QWORD *)this + 54) = *((_QWORD *)a2 + 54);
      *((_QWORD *)this + 55) = *((_QWORD *)a2 + 55);
      *((_QWORD *)this + 56) = *((_QWORD *)a2 + 56);
      *((_QWORD *)this + 57) = *((_QWORD *)a2 + 57);
      *((_QWORD *)this + 58) = *((_QWORD *)a2 + 58);
      *((_QWORD *)this + 59) = *((_QWORD *)a2 + 59);
      *((_QWORD *)this + 60) = *((_QWORD *)a2 + 60);
      *((_QWORD *)this + 61) = *((_QWORD *)a2 + 61);
      *((_QWORD *)this + 62) = *((_QWORD *)a2 + 62);
      *((_QWORD *)this + 63) = *((_QWORD *)a2 + 63);
      *((_QWORD *)this + 64) = *((_QWORD *)a2 + 64);
      *((_QWORD *)this + 65) = *((_QWORD *)a2 + 65);
      *((_QWORD *)this + 66) = *((_QWORD *)a2 + 66);
      *((_QWORD *)this + 67) = *((_QWORD *)a2 + 67);
      *((_QWORD *)this + 68) = *((_QWORD *)a2 + 68);
      *((_QWORD *)this + 69) = *((_QWORD *)a2 + 69);
      *((_QWORD *)this + 70) = *((_QWORD *)a2 + 70);
      *((_QWORD *)this + 71) = *((_QWORD *)a2 + 71);
      *((_QWORD *)this + 72) = *((_QWORD *)a2 + 72);
      *((_QWORD *)this + 73) = *((_QWORD *)a2 + 73);
      *((_QWORD *)this + 74) = *((_QWORD *)a2 + 74);
      *((_QWORD *)this + 75) = *((_QWORD *)a2 + 75);
      *((_QWORD *)this + 76) = *((_QWORD *)a2 + 76);
      *((_QWORD *)this + 77) = *((_QWORD *)a2 + 77);
      *((_QWORD *)this + 78) = *((_QWORD *)a2 + 78);
      *((_QWORD *)this + 79) = *((_QWORD *)a2 + 79);
      *((_QWORD *)this + 80) = *((_QWORD *)a2 + 80);
      *((_QWORD *)this + 81) = *((_QWORD *)a2 + 81);
      *((_QWORD *)this + 82) = *((_QWORD *)a2 + 82);
      *((_QWORD *)this + 83) = *((_QWORD *)a2 + 83);
      *((_QWORD *)this + 84) = *((_QWORD *)a2 + 84);
      *((_QWORD *)this + 85) = *((_QWORD *)a2 + 85);
      *((_QWORD *)this + 86) = *((_QWORD *)a2 + 86);
      *((_QWORD *)this + 87) = *((_QWORD *)a2 + 87);
      *((_QWORD *)this + 88) = *((_QWORD *)a2 + 88);
      *((_QWORD *)this + 89) = *((_QWORD *)a2 + 89);
      *((_QWORD *)this + 90) = *((_QWORD *)a2 + 90);
      *((_QWORD *)this + 91) = *((_QWORD *)a2 + 91);
      *((_QWORD *)this + 92) = *((_QWORD *)a2 + 92);
      *((_QWORD *)this + 93) = *((_QWORD *)a2 + 93);
      *((_QWORD *)this + 94) = *((_QWORD *)a2 + 94);
      *((_QWORD *)this + 95) = *((_QWORD *)a2 + 95);
      *((_QWORD *)this + 96) = *((_QWORD *)a2 + 96);
      *((_QWORD *)this + 97) = *((_QWORD *)a2 + 97);
      *((_QWORD *)this + 98) = *((_QWORD *)a2 + 98);
      *((_QWORD *)this + 99) = *((_QWORD *)a2 + 99);
      *((_QWORD *)this + 100) = *((_QWORD *)a2 + 100);
      *((_QWORD *)this + 101) = *((_QWORD *)a2 + 101);
      *((_QWORD *)this + 102) = *((_QWORD *)a2 + 102);
      *((_QWORD *)this + 103) = *((_QWORD *)a2 + 103);
      *((_QWORD *)this + 104) = *((_QWORD *)a2 + 104);
      *((_QWORD *)this + 105) = *((_QWORD *)a2 + 105);
      *((_QWORD *)this + 106) = *((_QWORD *)a2 + 106);
      *((_QWORD *)this + 107) = *((_QWORD *)a2 + 107);
      *((_QWORD *)this + 108) = *((_QWORD *)a2 + 108);
      *((_QWORD *)this + 109) = *((_QWORD *)a2 + 109);
      *((_QWORD *)this + 110) = *((_QWORD *)a2 + 110);
      *((_QWORD *)this + 111) = *((_QWORD *)a2 + 111);
      *((_QWORD *)this + 112) = *((_QWORD *)a2 + 112);
      *((_QWORD *)this + 113) = *((_QWORD *)a2 + 113);
      *((_QWORD *)this + 114) = *((_QWORD *)a2 + 114);
      *((_QWORD *)this + 115) = *((_QWORD *)a2 + 115);
      *((_QWORD *)this + 116) = *((_QWORD *)a2 + 116);
      *((_QWORD *)this + 117) = *((_QWORD *)a2 + 117);
    }
  }
  *((_QWORD *)this + 118) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 118) + 440LL))(*((_QWORD *)a2 + 118));
  v75 = *((_DWORD *)a2 + 244);
  *((_QWORD *)this + 119) = 0;
  *((_QWORD *)this + 120) = 0;
  *((_QWORD *)this + 121) = 0;
  *((_DWORD *)this + 244) = v75;
}

