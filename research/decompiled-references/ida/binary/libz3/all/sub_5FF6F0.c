__int64 __fastcall sub_5FF6F0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 *a5)
{
  void *v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r13
  __int64 v16; // rax
  _QWORD *v17; // rdi
  __m128i v18; // xmm1
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  _BYTE *v27; // rax
  size_t v28; // rax
  __int64 v29; // r8
  _QWORD *v30; // rcx
  int v31; // edx
  __int64 v32; // r12
  __int64 v33; // rsi
  __int64 *v34; // r15
  unsigned int v35; // ebx
  __m128i v36; // xmm0
  __int64 v37; // rax
  _QWORD *v38; // rdx
  unsigned __int64 v39; // r12
  __int64 *v40; // r15
  __int64 v41; // rsi
  bool v42; // zf
  void *v43; // rdx
  __int64 v45; // rsi
  __int64 *v46; // rax
  size_t v47; // rdx
  void *v48; // rsi
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  unsigned __int64 v51; // rdi
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  unsigned __int64 v54; // rdi
  int n; // [rsp+0h] [rbp-2A0h]
  int nb; // [rsp+0h] [rbp-2A0h]
  int nc; // [rsp+0h] [rbp-2A0h]
  size_t na; // [rsp+0h] [rbp-2A0h]
  size_t nd; // [rsp+0h] [rbp-2A0h]
  size_t ne; // [rsp+0h] [rbp-2A0h]
  int v61; // [rsp+8h] [rbp-298h]
  void *v62; // [rsp+8h] [rbp-298h]
  void *v63; // [rsp+8h] [rbp-298h]
  const void *v64; // [rsp+8h] [rbp-298h]
  size_t v65; // [rsp+8h] [rbp-298h]
  size_t v66; // [rsp+8h] [rbp-298h]
  int v67; // [rsp+10h] [rbp-290h]
  int v68; // [rsp+10h] [rbp-290h]
  __int64 v69; // [rsp+18h] [rbp-288h]
  __int64 v70; // [rsp+18h] [rbp-288h]
  __int64 v71; // [rsp+18h] [rbp-288h]
  __int64 v72; // [rsp+18h] [rbp-288h]
  int v73; // [rsp+20h] [rbp-280h]
  int v74; // [rsp+20h] [rbp-280h]
  void *v75; // [rsp+20h] [rbp-280h]
  __m128i v76; // [rsp+28h] [rbp-278h] BYREF
  __int64 v77; // [rsp+38h] [rbp-268h]
  __m128i v78; // [rsp+40h] [rbp-260h] BYREF
  __int64 v79; // [rsp+50h] [rbp-250h]
  _OWORD *v80; // [rsp+58h] [rbp-248h]
  void *v81; // [rsp+60h] [rbp-240h]
  __int64 *v82; // [rsp+68h] [rbp-238h]
  int v83; // [rsp+70h] [rbp-230h]
  int v84[2]; // [rsp+78h] [rbp-228h] BYREF
  void *v85; // [rsp+80h] [rbp-220h] BYREF
  __int64 v86; // [rsp+88h] [rbp-218h]
  int v87[2]; // [rsp+90h] [rbp-210h] BYREF
  _QWORD *v88; // [rsp+98h] [rbp-208h]
  __int64 v89; // [rsp+A0h] [rbp-200h] BYREF
  void *v90; // [rsp+A8h] [rbp-1F8h]
  void *v91; // [rsp+B0h] [rbp-1F0h] BYREF
  __int64 v92; // [rsp+B8h] [rbp-1E8h]
  __int64 v93; // [rsp+C0h] [rbp-1E0h] BYREF
  void *v94; // [rsp+D0h] [rbp-1D0h] BYREF
  size_t v95; // [rsp+D8h] [rbp-1C8h]
  _QWORD dest[2]; // [rsp+E0h] [rbp-1C0h] BYREF
  _OWORD v97[2]; // [rsp+F0h] [rbp-1B0h] BYREF
  void *src[2]; // [rsp+110h] [rbp-190h]
  __int128 v99; // [rsp+120h] [rbp-180h]
  char v100[8]; // [rsp+130h] [rbp-170h] BYREF
  int v101; // [rsp+138h] [rbp-168h]
  void *v102; // [rsp+140h] [rbp-160h]
  __int64 v103; // [rsp+148h] [rbp-158h]
  _QWORD v104[2]; // [rsp+150h] [rbp-150h] BYREF
  _QWORD v105[28]; // [rsp+160h] [rbp-140h] BYREF
  __int16 v106; // [rsp+240h] [rbp-60h]
  __int128 v107; // [rsp+248h] [rbp-58h]
  __int128 v108; // [rsp+258h] [rbp-48h]

  LODWORD(v80) = a3;
  v8 = *(void **)(a1 + 8);
  v9 = *(_QWORD *)(a2 + 40);
  v82 = a5;
  v88 = nullptr;
  v76.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  v90 = v8;
  *(_QWORD *)v84 = 0;
  v10 = *(_QWORD *)a1;
  v89 = 0;
  *(_QWORD *)v87 = v10;
  v85 = nullptr;
  v86 = v10;
  v78 = _mm_unpacklo_epi64(
          (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
          (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  sub_5FAE80((__int64 *)a1, v9, 1u, (__int64 *)&v85);
  v81 = v85;
  v69 = v86;
  sub_5FEC70((__int64 *)a1, a2, 1u, (int)v80, (__int64)v87, v84);
  sub_5FEC70((__int64 *)a1, a4, 0, -1, (__int64)v87, v84);
  sub_6447F0(
    (int)v87,
    (int)v84,
    v11,
    v12,
    v13,
    v14,
    n,
    v61,
    v67,
    v69,
    v73,
    (int)&`vtable for'std::ostringstream + 24,
    v76.m128i_i32[2],
    v77,
    v78.m128i_i32[0],
    (void *)v78.m128i_i64[1],
    v79,
    (int)v80,
    v81);
  v80 = v97;
  std::ios_base::ios_base((std::ios_base *)v105);
  v106 = 0;
  v107 = 0;
  v105[0] = (char *)&`vtable for'std::ios + 16;
  v108 = 0;
  v15 = `VTT for'std::ostringstream[1];
  v16 = `VTT for'std::ostringstream[2];
  v105[27] = 0;
  v17 = (_QWORD *)((char *)v97 + *(_QWORD *)(v15 - 24));
  *(_QWORD *)&v97[0] = v15;
  *v17 = v16;
  LODWORD(v77) = v16;
  std::ios::init();
  v18 = _mm_load_si128(&v78);
  v97[1] = 0;
  v97[0] = v18;
  v105[0] = (char *)&`vtable for'std::ostringstream + 64;
  *(_OWORD *)src = 0;
  v99 = 0;
  std::locale::locale((std::locale *)v100);
  v101 = 16;
  LOBYTE(v104[0]) = 0;
  *((_QWORD *)&v97[0] + 1) = (char *)&`vtable for'std::stringbuf + 16;
  v102 = v104;
  v103 = 0;
  std::ios::init();
  sub_180CE20(
    (int)&v91,
    a2 + 72,
    v19,
    v20,
    v21,
    v22,
    nb,
    v62,
    v68,
    v70,
    (int)v104,
    v76.m128i_i32[0],
    (int)v100,
    v77,
    v78.m128i_i32[0],
    v78.m128i_i32[2],
    (int)&v91,
    (int)v80,
    (int)v81,
    (int)v82,
    v83,
    v84[0],
    (int)v85,
    v86,
    v87[0],
    (int)v88,
    v89,
    v90,
    (int)v91,
    v92);
  v78.m128i_i64[0] = std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_180CE20(
    (int)&v94,
    a4 + 72,
    v23,
    v24,
    v25,
    v26,
    nc,
    v63,
    (int)&v94,
    v71,
    v74,
    v76.m128i_i32[0],
    v76.m128i_i32[2],
    v77,
    v78.m128i_i32[0],
    v78.m128i_i32[2],
    v79,
    (int)v80,
    (int)v81,
    (int)v82,
    v83,
    v84[0],
    (int)v85,
    v86,
    v87[0],
    (int)v88,
    v89,
    v90,
    (int)v91,
    v92);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v94 != dest )
    operator delete(v94, dest[0] + 1LL);
  if ( v91 != &v93 )
    operator delete(v91, v93 + 1);
  v27 = (_BYTE *)v99;
  v94 = dest;
  v95 = 0;
  LOBYTE(dest[0]) = 0;
  if ( !(_QWORD)v99 )
  {
    v47 = v103;
    if ( (unsigned __int64)v103 > 0xF )
    {
      if ( v103 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      if ( (unsigned __int64)v103 > 0x1D )
      {
        v78.m128i_i64[0] = v103;
        v54 = v103 + 1;
        if ( v103 + 1 < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v78.m128i_i64[0] = 30;
        v54 = 31;
      }
      v66 = v103;
      v49 = (_QWORD *)operator new(v54);
      v47 = v66;
      if ( v94 != dest )
      {
        ne = (size_t)v49;
        operator delete(v94, dest[0] + 1LL);
        v49 = (_QWORD *)ne;
        v47 = v66;
      }
      v94 = v49;
      v48 = v102;
      dest[0] = v78.m128i_i64[0];
    }
    else
    {
      if ( !v103 )
      {
LABEL_59:
        v50 = dest;
LABEL_60:
        v95 = v47;
        *((_BYTE *)v50 + v47) = 0;
        goto LABEL_16;
      }
      v48 = v102;
      v49 = dest;
      if ( v103 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)v102;
        goto LABEL_59;
      }
    }
    v78.m128i_i64[0] = v47;
    memcpy(v49, v48, v47);
    v50 = v94;
    v47 = v78.m128i_i64[0];
    goto LABEL_60;
  }
  if ( src[0] >= (void *)v99 )
    v27 = src[0];
  if ( !src[0] )
    v27 = (_BYTE *)v99;
  v28 = v27 - (char *)src[1];
  v29 = v28;
  if ( (v28 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v28 > 0xF )
  {
    if ( v28 > 0x1D )
    {
      v78.m128i_i64[0] = v28;
      v51 = v28 + 1;
      if ( (__int64)(v28 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v78.m128i_i64[0] = 30;
      v51 = 31;
    }
    na = v28;
    v64 = src[1];
    v52 = (_QWORD *)operator new(v51);
    v29 = na;
    v30 = v52;
    if ( v64 )
    {
      v53 = memcpy(v52, v64, na);
      v29 = na;
      v30 = v53;
    }
    if ( v94 != dest )
    {
      nd = (size_t)v30;
      v65 = v29;
      operator delete(v94, dest[0] + 1LL);
      v30 = (_QWORD *)nd;
      v29 = v65;
    }
    v94 = v30;
    dest[0] = v78.m128i_i64[0];
  }
  else if ( src[1] == dest )
  {
    v78.m128i_i64[0] = v28;
    std::string::_M_replace_cold();
    v29 = v78.m128i_i64[0];
    v30 = v94;
  }
  else
  {
    if ( v28 )
    {
      if ( v28 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)src[1];
      }
      else
      {
        v78.m128i_i64[0] = v28;
        memcpy(dest, src[1], v28);
        v29 = v78.m128i_i64[0];
      }
    }
    v30 = dest;
  }
  v95 = v29;
  *((_BYTE *)v30 + v29) = 0;
LABEL_16:
  sub_180C5A0(v79, v94);
  if ( v94 != dest )
    operator delete(v94, dest[0] + 1LL);
  if ( v88 )
    v31 = *((_DWORD *)v88 - 1);
  else
    v31 = 0;
  v32 = sub_62C680(*(_QWORD *)(a1 + 8), (_DWORD)v81, v31, (_DWORD)v88, v84[0], v79, *(unsigned __int8 *)(a1 + 641));
  if ( v32 )
    sub_62A000(v82[1], v32);
  if ( *v82 )
    sub_62A410(v82[1], *v82);
  v33 = *(_QWORD *)(a1 + 16);
  *v82 = v32;
  sub_629AF0(v32, v33);
  if ( !*(_BYTE *)(a1 + 641) )
    goto LABEL_52;
  v34 = v82;
  sub_630200(*(_QWORD *)(a1 + 8), v82, 1);
  v35 = sub_5CB220((_QWORD *)(a1 + 24), *v34, &v89);
  if ( (_BYTE)v35 )
  {
    v45 = v89;
    if ( *v82 != v89 )
    {
      if ( *v82 )
      {
        sub_62A410(v82[1], *v82);
        v45 = v89;
      }
      v46 = v82;
      *v82 = v45;
      if ( v45 )
        sub_62A000(v46[1], v45);
    }
LABEL_52:
    v35 = 1;
  }
  v36 = _mm_loadl_epi64(&v76);
  v105[0] = (char *)&`vtable for'std::ostringstream + 64;
  v97[0] = _mm_unpacklo_epi64(v36, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( v102 != v75 )
    operator delete(v102, v104[0] + 1LL);
  *((_QWORD *)&v97[0] + 1) = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale((std::locale *)v76.m128i_i64[1]);
  v37 = *(_QWORD *)(v15 - 24);
  *(_QWORD *)&v97[0] = v15;
  *(_QWORD *)((char *)v97 + v37) = v77;
  v105[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v105);
  if ( v89 )
    sub_62A410(v90, v89);
  if ( *(_QWORD *)v84 )
    sub_186B220((void *)(*(_QWORD *)v84 - 8LL));
  v38 = v88;
  if ( v88 )
  {
    v39 = (unsigned __int64)&v88[*((unsigned int *)v88 - 1)];
    if ( (unsigned __int64)v88 >= v39 )
      goto LABEL_40;
    v40 = v88;
    do
    {
      while ( 1 )
      {
        v41 = *v40;
        if ( *v40 )
        {
          v42 = (*(_DWORD *)(v41 + 8))-- == 1;
          if ( v42 )
            break;
        }
        if ( (unsigned __int64)++v40 >= v39 )
          goto LABEL_39;
      }
      sub_15D7BC0(*(_QWORD *)v87, v41);
      ++v40;
    }
    while ( (unsigned __int64)v40 < v39 );
LABEL_39:
    v38 = v88;
    if ( v88 )
LABEL_40:
      sub_186B220(v38 - 1);
  }
  v43 = v81;
  if ( v81 )
  {
    LODWORD(v82) = *((_DWORD *)v81 + 2);
    v42 = (_DWORD)v82 == 1;
    *((_DWORD *)v81 + 2) = (_DWORD)v82 - 1;
    if ( v42 )
      sub_15D7BC0(v72, v43);
  }
  return v35;
}

