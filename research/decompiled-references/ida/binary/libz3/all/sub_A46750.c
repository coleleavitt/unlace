void __fastcall sub_A46750(__int64 a1)
{
  unsigned int v1; // r13d
  unsigned int v2; // r15d
  unsigned int v3; // ecx
  unsigned int i; // r12d
  unsigned int v5; // eax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdi
  __int64 *v8; // r8
  __int64 *v9; // r8
  __m128i si128; // xmm0
  char *v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // r15
  size_t *v17; // rax
  size_t *v18; // rcx
  size_t v19; // rdx
  size_t v20; // r12
  size_t v21; // r15
  size_t v22; // rax
  char *v23; // rbp
  size_t v24; // rdx
  size_t v25; // rbp
  size_t v26; // r15
  __int64 v27; // rdi
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // r15
  size_t v35; // r14
  unsigned __int64 v36; // rdi
  char *v37; // rax
  _OWORD *v38; // rcx
  char *v39; // rax
  __int64 v40; // rax
  _DWORD *v41; // r8
  __int64 v42; // rdx
  _DWORD *v43; // rsi
  __int64 v44; // rdi
  int v45; // eax
  __int64 *v46; // rdi
  _DWORD *v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rsi
  __m128i v53; // [rsp+0h] [rbp-298h] BYREF
  __int64 v54; // [rsp+10h] [rbp-288h]
  __int64 *v55; // [rsp+18h] [rbp-280h]
  void *v56; // [rsp+20h] [rbp-278h]
  size_t v57; // [rsp+28h] [rbp-270h]
  __int64 v58; // [rsp+30h] [rbp-268h] BYREF
  int v59; // [rsp+38h] [rbp-260h]
  void *src; // [rsp+40h] [rbp-258h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-250h]
  __int64 v62; // [rsp+50h] [rbp-248h] BYREF
  int v63; // [rsp+58h] [rbp-240h]
  size_t n[2]; // [rsp+60h] [rbp-238h] BYREF
  _OWORD v65[3]; // [rsp+70h] [rbp-228h] BYREF
  _OWORD v66[7]; // [rsp+A0h] [rbp-1F8h] BYREF
  __m128i v67[4]; // [rsp+110h] [rbp-188h]
  _QWORD v68[28]; // [rsp+158h] [rbp-140h] BYREF
  __int16 v69; // [rsp+238h] [rbp-60h]
  __int128 v70; // [rsp+240h] [rbp-58h]
  __int128 v71; // [rsp+250h] [rbp-48h]

  v53.m128i_i64[0] = a1;
  v1 = (unsigned int)dword_1C7ECAC >> 31;
  v2 = -dword_1C7ECAC;
  if ( dword_1C7ECAC > 0 )
    v2 = dword_1C7ECAC;
  if ( v2 <= 9 )
  {
    LOBYTE(v62) = 45;
    v6 = v1 + 1;
    src = &v62;
    v11 = (char *)&v62 + (dword_1C7ECAC < 0);
LABEL_18:
    v16 = v2 + 48;
    goto LABEL_19;
  }
  v3 = v2;
  for ( i = 1; ; i += 4 )
  {
    if ( v3 <= 0x63 )
    {
      v5 = i + 1;
      goto LABEL_11;
    }
    if ( v3 <= 0x3E7 )
    {
      v5 = i + 2;
      ++i;
      goto LABEL_11;
    }
    if ( v3 <= 0x270F )
    {
      v5 = i + 3;
      i += 2;
      goto LABEL_11;
    }
    v5 = i + 4;
    if ( v3 <= 0x1869F )
      break;
    v3 /= 0x2710u;
  }
  i += 3;
LABEL_11:
  v6 = v5 + v1;
  LOBYTE(v62) = 0;
  src = &v62;
  v61 = 0;
  if ( v6 <= 0xF )
  {
    v9 = &v62;
  }
  else
  {
    if ( v6 <= 0x1D )
    {
      v54 = 30;
      v7 = 31;
    }
    else
    {
      v54 = v5 + v1;
      v7 = v6 + 1;
    }
    v8 = (__int64 *)operator new(v7);
    *(_BYTE *)v8 = *(_BYTE *)src;
    v55 = v8;
    sub_233E40((__int64)&src);
    v9 = v55;
    src = v55;
    v62 = v54;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
  *(_BYTE *)v9 = 45;
  v11 = (char *)v9 + (unsigned __int8)v1;
  *(__m128i *)n = si128;
  v65[0] = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
  v65[1] = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
  v65[2] = _mm_load_si128((const __m128i *)&xmmword_18B6400);
  v66[0] = _mm_load_si128((const __m128i *)&xmmword_18B6410);
  v66[1] = _mm_load_si128((const __m128i *)&xmmword_18B6420);
  v66[2] = _mm_load_si128((const __m128i *)&xmmword_18B6430);
  v66[3] = _mm_load_si128((const __m128i *)&xmmword_18B6440);
  v66[4] = _mm_load_si128((const __m128i *)&xmmword_18B6450);
  v66[5] = _mm_load_si128((const __m128i *)&xmmword_18B6460);
  v66[6] = _mm_load_si128((const __m128i *)&xmmword_18B6470);
  v67[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
  *(__m128i *)((char *)v67 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
  if ( v2 > 0x63 )
  {
    do
    {
      v12 = v2 % 0x64;
      v13 = v2;
      v2 /= 0x64u;
      v14 = 2 * v12;
      v11[i] = *((_BYTE *)n + (unsigned int)(v14 + 1));
      v15 = i - 1;
      i -= 2;
      v11[v15] = *((_BYTE *)n + v14);
    }
    while ( v13 > 0x270F );
    if ( v13 <= 0x3E7 )
      goto LABEL_18;
  }
  v34 = 2 * v2;
  v11[1] = *((_BYTE *)n + (unsigned int)(v34 + 1));
  v16 = *((_BYTE *)n + v34);
LABEL_19:
  *v11 = v16;
  v61 = v6;
  *((_BYTE *)src + v6) = 0;
  v17 = sub_A013C0((size_t *)&src, 0, 0, "arith_", 6u);
  v18 = v17 + 2;
  n[0] = (size_t)v65;
  if ( (size_t *)*v17 == v17 + 2 )
  {
    v41 = v65;
    v42 = v17[1] + 1;
    v43 = v17 + 2;
    if ( (unsigned int)v42 >= 8 )
    {
      LODWORD(v49) = 0;
      do
      {
        v50 = (unsigned int)v49;
        v49 = (unsigned int)(v49 + 8);
        *(_QWORD *)((char *)v65 + v50) = *(size_t *)((char *)v18 + v50);
      }
      while ( (unsigned int)v49 < ((unsigned int)v42 & 0xFFFFFFF8) );
      v41 = (_DWORD *)((char *)v65 + v49);
      v43 = (_DWORD *)((char *)v18 + v49);
    }
    v44 = 0;
    if ( (v42 & 4) != 0 )
    {
      *v41 = *v43;
      v44 = 4;
    }
    if ( (v42 & 2) != 0 )
    {
      *(_WORD *)((char *)v41 + v44) = *(_WORD *)((char *)v43 + v44);
      v44 += 2;
    }
    if ( (v42 & 1) != 0 )
      *((_BYTE *)v41 + v44) = *((_BYTE *)v43 + v44);
  }
  else
  {
    n[0] = *v17;
    *(_QWORD *)&v65[0] = v17[2];
  }
  v19 = v17[1];
  v17[1] = 0;
  *v17 = (size_t)v18;
  n[1] = v19;
  *((_BYTE *)v17 + 16) = 0;
  v20 = n[1];
  if ( 0x7FFFFFFFFFFFFFFFLL - n[1] <= 4 )
    std::__throw_length_error("basic_string::append");
  v21 = n[1] + 5;
  if ( (_OWORD *)n[0] == v65 )
  {
    if ( v21 <= 0xF )
      goto LABEL_24;
    v40 = operator new(0x1Fu);
    v38 = (_OWORD *)n[0];
    v23 = (char *)v40;
    v35 = 30;
    goto LABEL_53;
  }
  if ( *(_QWORD *)&v65[0] >= v21 )
  {
LABEL_24:
    v22 = n[1] + n[0];
    *(_DWORD *)v22 = 1953329966;
    *(_BYTE *)(v22 + 4) = 50;
    v23 = (char *)n[0];
    goto LABEL_25;
  }
  if ( (v21 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  v35 = 2LL * *(_QWORD *)&v65[0];
  if ( v21 >= 2LL * *(_QWORD *)&v65[0] )
  {
    v35 = n[1] + 5;
    v36 = n[1] + 6;
    if ( (signed __int64)(n[1] + 6) >= 0 )
      goto LABEL_39;
LABEL_50:
    std::__throw_bad_alloc();
  }
  v36 = v35 + 1;
  if ( (*(_QWORD *)&v65[0] & 0x4000000000000000LL) != 0 )
    goto LABEL_50;
LABEL_39:
  v37 = (char *)operator new(v36);
  v38 = (_OWORD *)n[0];
  v23 = v37;
  if ( v20 )
  {
    if ( v20 == 1 )
    {
      *v37 = *(_BYTE *)n[0];
      goto LABEL_40;
    }
LABEL_53:
    v54 = (__int64)v38;
    memcpy(v23, v38, v20);
    v38 = (_OWORD *)v54;
  }
LABEL_40:
  v39 = &v23[v20];
  *(_DWORD *)v39 = 1953329966;
  v39[4] = 50;
  if ( v38 != v65 )
    operator delete(v38, *(_QWORD *)&v65[0] + 1LL);
  n[0] = (size_t)v23;
  *(_QWORD *)&v65[0] = v35;
LABEL_25:
  n[1] = v20 + 5;
  v23[v20 + 5] = 0;
  v56 = &v58;
  v24 = n[1];
  if ( (_OWORD *)n[0] == v65 )
  {
    v45 = LODWORD(n[1]) + 1;
    v46 = &v58;
    v47 = v65;
    if ( (unsigned int)(LODWORD(n[1]) + 1) >= 8 )
    {
      LODWORD(v51) = 0;
      do
      {
        v52 = (unsigned int)v51;
        v51 = (unsigned int)(v51 + 8);
        *(__int64 *)((char *)&v58 + v52) = *(_QWORD *)((char *)v65 + v52);
      }
      while ( (unsigned int)v51 < (v45 & 0xFFFFFFF8) );
      v46 = (__int64 *)((char *)&v58 + v51);
      v47 = (_DWORD *)((char *)v65 + v51);
    }
    v48 = 0;
    if ( (v45 & 4) != 0 )
    {
      *(_DWORD *)v46 = *v47;
      v48 = 4;
    }
    if ( (v45 & 2) != 0 )
    {
      *(_WORD *)((char *)v46 + v48) = *(_WORD *)((char *)v47 + v48);
      v48 += 2;
    }
    if ( (v45 & 1) != 0 )
      *((_BYTE *)v46 + v48) = *((_BYTE *)v47 + v48);
  }
  else
  {
    v56 = (void *)n[0];
    v58 = *(_QWORD *)&v65[0];
  }
  v57 = v24;
  if ( src != &v62 )
    operator delete(src, v62 + 1);
  std::ios_base::ios_base((std::ios_base *)v68);
  v70 = 0;
  v71 = 0;
  v68[0] = (char *)&`vtable for'std::ios + 16;
  v69 = 0;
  v68[27] = 0;
  v25 = `VTT for'std::ofstream[1];
  v26 = `VTT for'std::ofstream[2];
  v27 = *(_QWORD *)(v25 - 24);
  n[0] = v25;
  *(size_t *)((char *)n + v27) = v26;
  std::ios::init();
  n[0] = (size_t)&`vtable for'std::ofstream + 24;
  v68[0] = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::basic_filebuf();
  std::ios::init();
  std::filebuf::open();
  std::ios::clear();
  sub_9D2C80(
    v53.m128i_i32[0],
    (unsigned int)n,
    v28,
    v29,
    v30,
    v31,
    v53.m128i_i32[0],
    v53.m128i_i32[2],
    v54,
    (__int64)v55,
    (_DWORD)v56,
    v57,
    v58,
    v59,
    (_DWORD)src,
    v61,
    v62,
    v63,
    n[0],
    n[1]);
  v32 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::ofstream + 24),
          (__m128i)((unsigned __int64)&`vtable for'std::filebuf + 16));
  if ( !std::filebuf::close() )
  {
    v53 = v32;
    std::ios::clear();
    v32 = _mm_load_si128(&v53);
  }
  *(__m128i *)n = v32;
  ++dword_1C7ECAC;
  v68[0] = (char *)&`vtable for'std::ofstream + 64;
  std::filebuf::close();
  std::__basic_file<char>::~__basic_file();
  n[1] = (size_t)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v66);
  v33 = *(_QWORD *)(v25 - 24);
  n[0] = v25;
  *(size_t *)((char *)n + v33) = v26;
  v68[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v68);
  if ( v56 != &v58 )
    operator delete(v56, v58 + 1);
}

