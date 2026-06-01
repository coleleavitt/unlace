__m128i *__fastcall sub_A14FE0(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // r14
  __m128i si128; // xmm1
  __int64 v11; // r13
  size_t *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r15
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  unsigned int *v19; // r15
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rax
  __m128i v23; // xmm0
  std::ios_base *v24; // rdi
  unsigned int v26; // eax
  int v27; // edx
  __int64 v28; // rdi
  __int64 v29; // rbp
  __int64 v30; // rsi
  char v31; // al
  unsigned int **v32; // r12
  unsigned int *v33; // rax
  int v34; // edx
  _QWORD *v35; // r14
  __int64 v36; // r13
  unsigned __int32 v37; // r12d
  unsigned int v38; // r15d
  size_t v39; // rsi
  unsigned int *v40; // rax
  unsigned __int32 v41; // eax
  __int64 v42; // r13
  __int64 v43; // rdx
  size_t v44; // r14
  void *v45; // rsi
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  unsigned __int64 v49; // rdi
  char **exception; // rbp
  __int64 v51; // rbx
  _QWORD *v52; // rsi
  int v53; // [rsp+0h] [rbp-288h]
  __m128i *v55; // [rsp+10h] [rbp-278h]
  int v56; // [rsp+18h] [rbp-270h]
  int v58; // [rsp+1Ch] [rbp-26Ch]
  int v59[4]; // [rsp+20h] [rbp-268h] BYREF
  int v60[2]; // [rsp+30h] [rbp-258h]
  int v61[2]; // [rsp+38h] [rbp-250h]
  int v62[2]; // [rsp+40h] [rbp-248h]
  std::locale *v63; // [rsp+48h] [rbp-240h]
  std::ios_base *v64; // [rsp+50h] [rbp-238h]
  char *v65; // [rsp+58h] [rbp-230h] BYREF
  __m128i v66; // [rsp+60h] [rbp-228h] BYREF
  _QWORD *v67; // [rsp+70h] [rbp-218h]
  __int64 v68; // [rsp+78h] [rbp-210h]
  __int64 v69; // [rsp+80h] [rbp-208h]
  _QWORD *v70; // [rsp+88h] [rbp-200h]
  __int64 v71; // [rsp+98h] [rbp-1F0h] BYREF
  void *v72; // [rsp+A0h] [rbp-1E8h] BYREF
  size_t v73; // [rsp+A8h] [rbp-1E0h]
  _QWORD dest[4]; // [rsp+B0h] [rbp-1D8h] BYREF
  int v75[4]; // [rsp+D0h] [rbp-1B8h] BYREF
  __int128 v76; // [rsp+E0h] [rbp-1A8h]
  __int128 v77; // [rsp+F0h] [rbp-198h]
  __int128 v78; // [rsp+100h] [rbp-188h]
  _BYTE ptr[8]; // [rsp+110h] [rbp-178h] BYREF
  int v80; // [rsp+118h] [rbp-170h]
  void *src; // [rsp+120h] [rbp-168h]
  size_t n; // [rsp+128h] [rbp-160h]
  _QWORD v83[2]; // [rsp+130h] [rbp-158h] BYREF
  _QWORD v84[28]; // [rsp+140h] [rbp-148h] BYREF
  __int16 v85; // [rsp+220h] [rbp-68h]
  __int128 v86; // [rsp+228h] [rbp-60h]
  __int128 v87; // [rsp+238h] [rbp-50h]

  v6 = *(_QWORD *)(a2 + 24);
  v69 = a3;
  *(_QWORD *)v60 = a5;
  v65 = (char *)&`vtable for'std::ostringstream + 24;
  v64 = (std::ios_base *)v84;
  *(__m128i *)v59 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v84);
  v86 = 0;
  v87 = 0;
  v84[0] = (char *)&`vtable for'std::ios + 16;
  v85 = 0;
  v84[27] = 0;
  v7 = `VTT for'std::ostringstream[1];
  v8 = `VTT for'std::ostringstream[2];
  v9 = (_QWORD *)((char *)v75 + *(_QWORD *)(v7 - 24));
  *(_QWORD *)v75 = v7;
  *v9 = v8;
  *(_QWORD *)v61 = v7;
  *(_QWORD *)v62 = v8;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v59);
  v76 = 0;
  *(__m128i *)v75 = si128;
  v84[0] = (char *)&`vtable for'std::ostringstream + 64;
  v63 = (std::locale *)ptr;
  v77 = 0;
  v78 = 0;
  std::locale::locale((std::locale *)ptr);
  v80 = 16;
  LOBYTE(v83[0]) = 0;
  *(_QWORD *)&v75[2] = (char *)&`vtable for'std::stringbuf + 16;
  v67 = v83;
  src = v83;
  n = 0;
  std::ios::init();
  *(_QWORD *)v59 = &v72;
  sub_2FD7A0((char **)&v72, *(__int64 *)v60);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v72 != dest )
    operator delete(v72, dest[0] + 1LL);
  std::__ostream_insert<char,std::char_traits<char>>();
  v11 = a4;
  v12 = *(size_t **)v59;
  v13 = *(_QWORD *)(a2 + 24);
  v68 = 8LL * a4;
  sub_1606360(*(_QWORD *)v59, **(_QWORD **)(*(_QWORD *)(a2 + 32) + v68), v13, 0, 0, 0);
  sub_160E8B0(v75, v12);
  sub_18572D0(dest);
  v14 = v78;
  v15 = *(_QWORD *)(v6 + 840);
  v72 = dest;
  v73 = 0;
  LOBYTE(dest[0]) = 0;
  if ( !(_QWORD)v78 )
  {
    v44 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v66.m128i_i64[0] = n;
        v49 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v66.m128i_i64[0] = 30;
        v49 = 31;
      }
      v70 = (_QWORD *)operator new(v49);
      sub_233E40(*(__int64 *)v59);
      v46 = v70;
      v45 = src;
      v72 = v70;
      dest[0] = v66.m128i_i64[0];
    }
    else
    {
      if ( !n )
      {
LABEL_37:
        v47 = dest;
LABEL_38:
        v73 = v44;
        *((_BYTE *)v47 + v44) = 0;
        goto LABEL_9;
      }
      v45 = src;
      v46 = dest;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)src;
        goto LABEL_37;
      }
    }
    memcpy(v46, v45, v44);
    v47 = v72;
    goto LABEL_38;
  }
  if ( (unsigned __int64)v77 >= (unsigned __int64)v78 )
    v14 = v77;
  if ( !(_QWORD)v77 )
    v14 = v78;
  sub_A013C0(v12, 0, 0, *((char **)&v77 + 1), v14 - *((_QWORD *)&v77 + 1));
LABEL_9:
  sub_180C5A0(&v71, v72);
  v16 = sub_15E3510(v6, &v71, 0, 0, v15, 0);
  v19 = (unsigned int *)sub_15DC610(
                          v6,
                          v16,
                          0,
                          0,
                          v17,
                          v18,
                          v53,
                          (int)v75,
                          a1,
                          v56,
                          v59[0],
                          v59[2],
                          v60[0],
                          v61[0],
                          v62[0],
                          v63);
  v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)v6);
  if ( v72 != dest )
  {
    v66 = v20;
    operator delete(v72, dest[0] + 1LL);
    v20 = _mm_load_si128(&v66);
  }
  *v55 = v20;
  if ( v19 )
    ++v19[2];
  v21 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8832LL);
  if ( !v21 || (v22 = *v19, (unsigned int)v22 >= *(_DWORD *)(v21 - 4)) || *(_DWORD *)(v21 + 4 * v22) == 0x7FFFFFFF )
  {
    sub_9C2300(v69, *((_QWORD *)v19 + 2));
    v26 = sub_B67520(*(_QWORD *)(a2 + 16), v19);
    v27 = *(_DWORD *)(a2 + 8);
    v28 = *(_QWORD *)(a2 + 16);
    v66.m128i_i32[0] = v26;
    sub_8F1CE0(v28, v26, v27);
    v29 = sub_186B270(0xA0u);
    *(_QWORD *)v29 = &off_1C56158;
    *(_DWORD *)(v29 + 8) = v58;
    sub_91F480(v29 + 16, (__int64)&qword_1C7F200);
    v30 = *(_QWORD *)v60;
    v31 = *(_BYTE *)(v29 + 80) & 0xFC | 2;
    *(_QWORD *)v29 = &off_1C56190;
    *(_BYTE *)(v29 + 80) = v31;
    *(_DWORD *)(v29 + 84) = v66.m128i_i32[0];
    sub_91F480(v29 + 88, v30);
    *(_BYTE *)(v29 + 152) &= 0xF8u;
    v71 = v29;
    sub_9CAFB0((_QWORD *)a2, v29);
    v32 = (unsigned int **)(*(_QWORD *)(a2 + 696) + v68);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 704) + 4 * v11);
    v33 = *v32;
    if ( !*v32 || (v34 = *(v33 - 1), v34 == *(v33 - 2)) )
    {
      sub_A14F00(v32);
      v33 = *v32;
      v34 = *(*v32 - 1);
    }
    *(_QWORD *)&v33[2 * v34] = v29;
    *(v33 - 1) = v34 + 1;
    sub_98CE40((_QWORD *)(a2 + 728), &v71);
    v35 = *(_QWORD **)(a2 + 712);
    if ( v35 )
    {
      v36 = *((unsigned int *)v35 - 1);
      if ( v66.m128i_i32[0] < (unsigned int)v36 )
      {
LABEL_31:
        v35[v66.m128i_u32[0]] = v29;
        goto LABEL_16;
      }
      v37 = v66.m128i_i32[0] + 1;
      if ( (unsigned int)v36 >= v66.m128i_i32[0] + 1 )
      {
        *((_DWORD *)v35 - 1) = v37;
        goto LABEL_31;
      }
    }
    else
    {
      v37 = v66.m128i_i32[0] + 1;
      if ( v66.m128i_i32[0] == -1 )
        goto LABEL_31;
      v48 = (_QWORD *)sub_186B270(0x18u);
      v35 = v48 + 1;
      *v48 = 2;
      v36 = 0;
      *(_QWORD *)(a2 + 712) = v48 + 1;
    }
    while ( 1 )
    {
      v41 = *((_DWORD *)v35 - 2);
      if ( v41 >= v37 )
        break;
      v38 = (3 * v41 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v41 + 8 >= (unsigned int)v39 || v41 >= v38 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(*(__int64 **)v59, "Overflow encountered when expanding vector");
        v51 = *(_QWORD *)v59;
        v52 = *(_QWORD **)v59;
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v52);
        sub_233E40(v51);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v40 = (unsigned int *)sub_186B300(v35 - 1, v39);
      v35 = v40 + 2;
      *v40 = v38;
      *(_QWORD *)(a2 + 712) = v40 + 2;
    }
    v42 = 8 * v36;
    *((_DWORD *)v35 - 1) = v37;
    v43 = 8LL * v37;
    if ( v42 != v43 )
      memset(&v35[(unsigned __int64)v42 / 8], 0, v43 - v42);
    goto LABEL_31;
  }
LABEL_16:
  v23 = _mm_loadl_epi64((const __m128i *)&v65);
  v84[0] = (char *)&`vtable for'std::ostringstream + 64;
  *(__m128i *)v75 = _mm_unpacklo_epi64(v23, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( src != v67 )
    operator delete(src, v83[0] + 1LL);
  *(_QWORD *)&v75[2] = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v63);
  v24 = v64;
  *(_QWORD *)v75 = *(_QWORD *)v61;
  *(_QWORD *)((char *)v75 + *(_QWORD *)(*(_QWORD *)v61 - 24LL)) = *(_QWORD *)v62;
  v84[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v24);
  return v55;
}

