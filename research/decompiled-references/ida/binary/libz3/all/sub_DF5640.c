__int64 __fastcall sub_DF5640(_QWORD *a1, void *a2)
{
  _QWORD *v2; // r12
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  _BYTE *v5; // rbp
  __int64 v7; // rbx
  _BYTE *v8; // rax
  void *v9; // r13
  _QWORD *v10; // rbp
  __int64 v11; // rax
  __m128i si128; // xmm0
  _QWORD *v13; // rbx
  const char *v14; // r12
  size_t v15; // rax
  size_t v16; // r14
  size_t v17; // rcx
  __int64 v18; // rax
  size_t v19; // r13
  char *v20; // rax
  void *v21; // r15
  char *v22; // rbp
  char *v23; // r15
  _QWORD *v24; // r12
  __int64 v25; // rax
  size_t v26; // rbx
  size_t v27; // r14
  char *v28; // rax
  void *v29; // r15
  char *v30; // r13
  char *v31; // r13
  _QWORD *v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // rdi
  _QWORD *v36; // r14
  _BYTE *v37; // rax
  const void *v38; // r15
  size_t v39; // rax
  size_t v40; // r13
  void *v41; // rbx
  __int64 v42; // rax
  size_t v43; // rbx
  size_t v44; // r13
  char *v45; // rax
  void *v46; // r12
  size_t v47; // rbx
  void *v48; // rdi
  void *v49; // rax
  std::ios_base *v50; // rdi
  __int64 v51; // r12
  void *v52; // r13
  size_t v53; // r13
  _BYTE *v54; // rax
  __int64 v55; // r12
  unsigned __int64 v56; // rdi
  void *v57; // rax
  char *v58; // r15
  void *v59; // rsi
  void *v60; // rbx
  size_t v61; // r12
  unsigned __int64 v62; // rdi
  size_t n[2]; // [rsp+0h] [rbp-228h] BYREF
  void *dest; // [rsp+10h] [rbp-218h]
  _QWORD *v65; // [rsp+18h] [rbp-210h]
  __int64 v66; // [rsp+20h] [rbp-208h]
  std::locale *v67; // [rsp+28h] [rbp-200h]
  std::ios_base *v68; // [rsp+30h] [rbp-1F8h]
  __m128i v69; // [rsp+38h] [rbp-1F0h] BYREF
  size_t v70; // [rsp+48h] [rbp-1E0h]
  void *src; // [rsp+50h] [rbp-1D8h]
  size_t v72; // [rsp+58h] [rbp-1D0h]
  _QWORD v73[2]; // [rsp+60h] [rbp-1C8h] BYREF
  _OWORD v74[2]; // [rsp+70h] [rbp-1B8h] BYREF
  void *v75[2]; // [rsp+90h] [rbp-198h]
  __int128 v76; // [rsp+A0h] [rbp-188h]
  char v77[8]; // [rsp+B0h] [rbp-178h] BYREF
  int v78; // [rsp+B8h] [rbp-170h]
  void *v79; // [rsp+C0h] [rbp-168h]
  size_t v80; // [rsp+C8h] [rbp-160h]
  _QWORD v81[2]; // [rsp+D0h] [rbp-158h] BYREF
  _QWORD v82[28]; // [rsp+E0h] [rbp-148h] BYREF
  __int16 v83; // [rsp+1C0h] [rbp-68h]
  __int128 v84; // [rsp+1C8h] [rbp-60h]
  __int128 v85; // [rsp+1D8h] [rbp-50h]

  v2 = (_QWORD *)a1[4];
  dest = a2;
  if ( v2 )
    goto LABEL_2;
  v10 = a1;
  v11 = sub_186B270(0x58u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B6650);
  v13 = (_QWORD *)v11;
  *(_QWORD *)(v11 + 64) = v11;
  *(__m128i *)(v11 + 72) = si128;
  a1[4] = v11;
  v14 = (const char *)(*(__int64 (__fastcall **)(_QWORD *))(*v10 + 232LL))(v10);
  v15 = strlen(v14);
  v16 = v13[10];
  v17 = v15;
  n[0] = v15;
  v18 = v13[9];
  v19 = v17 + v18;
  if ( v16 >= v17 + v18 )
  {
    v23 = (char *)v13[8];
  }
  else
  {
    v65 = a1;
    do
    {
      while ( 1 )
      {
        v16 *= 2LL;
        v20 = (char *)sub_186B270(v16);
        v21 = (void *)v13[8];
        v22 = v20;
        memcpy(v20, v21, v13[9]);
        if ( v13[10] > 0x40u )
          break;
        v13[10] = v16;
        v13[8] = v22;
        if ( v16 >= v19 )
          goto LABEL_12;
      }
      sub_186B220(v21);
      v13[10] = v16;
      v13[8] = v22;
    }
    while ( v16 < v19 );
LABEL_12:
    v23 = v22;
    v18 = v13[9];
    v10 = v65;
  }
  memcpy(&v23[v18], v14, n[0]);
  v24 = (_QWORD *)v10[4];
  v13[9] += n[0];
  v25 = v24[9];
  v26 = v24[10];
  v27 = v25 + 38;
  if ( v26 >= v25 + 38 )
  {
    v30 = (char *)v24[8];
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v26 *= 2LL;
        v28 = (char *)sub_186B270(v26);
        v29 = (void *)v24[8];
        v30 = v28;
        memcpy(v28, v29, v24[9]);
        if ( v24[10] > 0x40u )
          break;
        v24[10] = v26;
        v24[8] = v30;
        if ( v26 >= v27 )
          goto LABEL_16;
      }
      sub_186B220(v29);
      v24[10] = v26;
      v24[8] = v30;
    }
    while ( v26 < v27 );
LABEL_16:
    v25 = v24[9];
  }
  v31 = &v30[v25];
  n[0] = (size_t)v74;
  *(__m128i *)v31 = _mm_load_si128((const __m128i *)&xmmword_18B6A00);
  v68 = (std::ios_base *)v82;
  *((__m128i *)v31 + 1) = _mm_load_si128((const __m128i *)&xmmword_18B6A10);
  *(_QWORD *)(v31 + 30) = 0xA3A656C62616C69LL;
  v24[9] += 38LL;
  std::ios_base::ios_base((std::ios_base *)v82);
  v84 = 0;
  v85 = 0;
  v82[0] = (char *)&`vtable for'std::ios + 16;
  v83 = 0;
  v82[27] = 0;
  v32 = (_QWORD *)`VTT for'std::ostringstream[1];
  v33 = `VTT for'std::ostringstream[2];
  v34 = (_QWORD *)((char *)v74 + *(v32 - 3));
  *(_QWORD *)&v74[0] = v32;
  *v34 = v33;
  v65 = v32;
  v66 = v33;
  std::ios::init();
  v82[0] = (char *)&`vtable for'std::ostringstream + 64;
  v69.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  v67 = (std::locale *)v77;
  v74[0] = _mm_unpacklo_epi64(
             (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
             (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  v74[1] = 0;
  *(_OWORD *)v75 = 0;
  v76 = 0;
  std::locale::locale((std::locale *)v77);
  v78 = 16;
  LOBYTE(v81[0]) = 0;
  *((_QWORD *)&v74[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v69.m128i_i64[1] = (__int64)v81;
  v79 = v81;
  v80 = 0;
  std::ios::init();
  v35 = v10[6];
  if ( !v35 )
  {
    v51 = sub_186B270(8u);
    sub_1857380(v51);
    v52 = (void *)v10[6];
    if ( (void *)v51 != v52 )
    {
      if ( v52 )
      {
        sub_1857540(v10[6]);
        sub_186B220(v52);
      }
      v10[6] = v51;
    }
    (*(void (__fastcall **)(_QWORD *, void *, __int64))(*v10 + 224LL))(v10, dest, v51);
    v35 = v10[6];
  }
  sub_185C3C0(v35, n[0], 2, 0, 1);
  LOBYTE(v73[0]) = 0;
  v36 = (_QWORD *)v10[4];
  dest = v73;
  src = v73;
  v37 = (_BYTE *)v76;
  v72 = 0;
  if ( (_QWORD)v76 )
  {
    v38 = v75[1];
    if ( v75[0] >= (void *)v76 )
      v37 = v75[0];
    if ( !v75[0] )
      v37 = (_BYTE *)v76;
    v39 = v37 - (char *)v75[1];
    v40 = v39;
    if ( (v39 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_replace");
    if ( v39 > 0xF )
    {
      if ( v39 > 0x1D )
      {
        v55 = v39;
        v56 = v39 + 1;
        if ( (__int64)(v39 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v55 = 30;
        v56 = 31;
      }
      v57 = (void *)operator new(v56);
      v41 = v57;
      if ( v38 )
        memcpy(v57, v38, v40);
      if ( src != dest )
        operator delete(src, v73[0] + 1LL);
      src = v41;
      v73[0] = v55;
    }
    else if ( v75[1] == dest )
    {
      std::string::_M_replace_cold();
      v41 = src;
    }
    else
    {
      if ( v39 )
      {
        if ( v39 == 1 )
          LOBYTE(v73[0]) = *(_BYTE *)v75[1];
        else
          memcpy(dest, v75[1], v39);
      }
      v41 = dest;
    }
    v72 = v40;
    *((_BYTE *)v41 + v40) = 0;
    goto LABEL_29;
  }
  v53 = v80;
  if ( v80 > 0xF )
  {
    if ( (v80 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( v80 > 0x1D )
    {
      v61 = v80;
      v62 = v80 + 1;
      if ( (__int64)(v80 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v61 = 30;
      v62 = 31;
    }
    v60 = (void *)operator new(v62);
    if ( src != dest )
      operator delete(src, v73[0] + 1LL);
    src = v60;
    v59 = v79;
    v73[0] = v61;
    goto LABEL_75;
  }
  if ( v80 )
  {
    v59 = v79;
    v60 = dest;
    if ( v80 == 1 )
    {
      LOBYTE(v73[0]) = *(_BYTE *)v79;
      goto LABEL_53;
    }
LABEL_75:
    memcpy(v60, v59, v53);
    v54 = src;
    goto LABEL_54;
  }
LABEL_53:
  v54 = dest;
LABEL_54:
  v72 = v53;
  v54[v53] = 0;
LABEL_29:
  v42 = v36[9];
  v43 = v36[10];
  v44 = v72 + v42;
  v70 = v72;
  if ( v43 < v72 + v42 )
  {
    do
    {
      while ( 1 )
      {
        v43 *= 2LL;
        v45 = (char *)sub_186B270(v43);
        v46 = (void *)v36[8];
        v58 = v45;
        memcpy(v45, v46, v36[9]);
        if ( v36[10] > 0x40u )
          break;
        v36[10] = v43;
        v36[8] = v58;
        if ( v43 >= v44 )
          goto LABEL_34;
      }
      sub_186B220(v46);
      v36[10] = v43;
      v36[8] = v58;
    }
    while ( v43 < v44 );
LABEL_34:
    v42 = v36[9];
  }
  else
  {
    v58 = (char *)v36[8];
  }
  v47 = v70;
  *(__m128i *)n = _mm_unpacklo_epi64(
                    _mm_loadl_epi64(&v69),
                    (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  memcpy(&v58[v42], src, v70);
  v48 = src;
  v49 = dest;
  v36[9] += v47;
  if ( v48 != v49 )
    operator delete(v48, v73[0] + 1LL);
  v74[0] = _mm_load_si128((const __m128i *)n);
  v82[0] = (char *)&`vtable for'std::ostringstream + 64;
  if ( v79 != (void *)v69.m128i_i64[1] )
    operator delete(v79, v81[0] + 1LL);
  *((_QWORD *)&v74[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v67);
  v50 = v68;
  *(_QWORD *)&v74[0] = v65;
  *(_QWORD *)((char *)v74 + *(v65 - 3)) = v66;
  v82[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v50);
  v2 = (_QWORD *)v10[4];
LABEL_2:
  v3 = v2[9];
  v4 = v2[10];
  if ( v3 >= v4 )
  {
    v7 = 2 * v4;
    v8 = (_BYTE *)sub_186B270(2 * v4);
    v9 = (void *)v2[8];
    v5 = v8;
    memcpy(v8, v9, v2[9]);
    if ( v2[10] > 0x40u )
      sub_186B220(v9);
    v2[10] = v7;
    v3 = v2[9];
    v2[8] = v5;
  }
  else
  {
    v5 = (_BYTE *)v2[8];
  }
  v5[v3] = 0;
  return v2[8];
}

