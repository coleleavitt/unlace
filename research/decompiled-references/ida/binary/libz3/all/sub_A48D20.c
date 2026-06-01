__m128i *__fastcall sub_A48D20(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rax
  _QWORD *v9; // r14
  __m128i si128; // xmm1
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  unsigned int *v19; // r15
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rax
  std::ios_base *v25; // rdi
  unsigned int v27; // eax
  __int64 v28; // r12
  __int64 v29; // r13
  __int64 *v30; // r14
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 v33; // rax
  unsigned int v34; // edx
  _QWORD *v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // r14d
  unsigned int v38; // edx
  size_t v39; // rsi
  unsigned int v40; // r15d
  unsigned int *v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r15
  size_t v45; // r15
  void *v46; // rsi
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  unsigned __int64 v50; // rdi
  char **exception; // rbp
  __int64 *v52; // rbx
  __int64 *v53; // rsi
  int v54; // [rsp+0h] [rbp-288h]
  __m128i *v56; // [rsp+8h] [rbp-280h]
  int v58; // [rsp+10h] [rbp-278h]
  unsigned int v59; // [rsp+10h] [rbp-278h]
  int v60[2]; // [rsp+10h] [rbp-278h]
  __int64 v62; // [rsp+18h] [rbp-270h]
  std::locale *v63[2]; // [rsp+20h] [rbp-268h] BYREF
  int v64[2]; // [rsp+30h] [rbp-258h]
  int v65[2]; // [rsp+38h] [rbp-250h]
  int v66[4]; // [rsp+40h] [rbp-248h] BYREF
  std::ios_base *v67; // [rsp+50h] [rbp-238h]
  __m128i v68; // [rsp+58h] [rbp-230h] BYREF
  __int64 v69; // [rsp+68h] [rbp-220h]
  __int64 v70; // [rsp+70h] [rbp-218h]
  __int64 *v71; // [rsp+78h] [rbp-210h]
  size_t v72; // [rsp+80h] [rbp-208h]
  _QWORD *v73; // [rsp+88h] [rbp-200h]
  char v74[8]; // [rsp+98h] [rbp-1F0h] BYREF
  void *v75; // [rsp+A0h] [rbp-1E8h] BYREF
  size_t v76; // [rsp+A8h] [rbp-1E0h]
  _QWORD dest[4]; // [rsp+B0h] [rbp-1D8h] BYREF
  int v78[4]; // [rsp+D0h] [rbp-1B8h] BYREF
  __int128 v79; // [rsp+E0h] [rbp-1A8h]
  __int128 v80; // [rsp+F0h] [rbp-198h]
  __int128 v81; // [rsp+100h] [rbp-188h]
  int v82[4]; // [rsp+110h] [rbp-178h] BYREF
  void *src; // [rsp+120h] [rbp-168h]
  size_t n; // [rsp+128h] [rbp-160h]
  _QWORD v85[2]; // [rsp+130h] [rbp-158h] BYREF
  _QWORD v86[28]; // [rsp+140h] [rbp-148h] BYREF
  __int16 v87; // [rsp+220h] [rbp-68h]
  __int128 v88; // [rsp+228h] [rbp-60h]
  __int128 v89; // [rsp+238h] [rbp-50h]

  v6 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)v64 = v78;
  v70 = a3;
  v68.m128i_i64[0] = (__int64)&`vtable for'std::ostringstream + 24;
  v67 = (std::ios_base *)v86;
  *(__m128i *)v63 = _mm_unpacklo_epi64(
                      (__m128i)((unsigned __int64)&`vtable for'std::ostringstream + 24),
                      (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
  std::ios_base::ios_base((std::ios_base *)v86);
  v88 = 0;
  v89 = 0;
  v86[0] = (char *)&`vtable for'std::ios + 16;
  v87 = 0;
  v86[27] = 0;
  v7 = `VTT for'std::ostringstream[1];
  v8 = `VTT for'std::ostringstream[2];
  v9 = (_QWORD *)((char *)v78 + *(_QWORD *)(v7 - 24));
  *(_QWORD *)v78 = v7;
  *v9 = v8;
  *(_QWORD *)v65 = v8;
  std::ios::init();
  si128 = _mm_load_si128((const __m128i *)v63);
  v79 = 0;
  *(__m128i *)v78 = si128;
  v86[0] = (char *)&`vtable for'std::ostringstream + 64;
  v63[0] = (std::locale *)v82;
  v80 = 0;
  v81 = 0;
  std::locale::locale((std::locale *)v82);
  v82[2] = 16;
  LOBYTE(v85[0]) = 0;
  *(_QWORD *)&v78[2] = (char *)&`vtable for'std::stringbuf + 16;
  v68.m128i_i64[1] = (__int64)v85;
  src = v85;
  n = 0;
  std::ios::init();
  v11 = sub_2FCE40(*(__int64 *)v64, a5);
  std::__ostream_insert<char,std::char_traits<char>>();
  v12 = a4;
  v13 = *(_QWORD *)(a2 + 24);
  v71 = (__int64 *)&v75;
  v69 = 8LL * a4;
  sub_1606360(&v75, **(_QWORD **)(*(_QWORD *)(a2 + 32) + v69), v13, 0, 0, 0);
  sub_160E8B0(v11, &v75);
  sub_18572D0(dest);
  v14 = *(_QWORD *)(v6 + 840);
  v15 = v81;
  v75 = dest;
  v76 = 0;
  *(_QWORD *)v66 = v14;
  LOBYTE(dest[0]) = 0;
  if ( !(_QWORD)v81 )
  {
    v45 = n;
    if ( n > 0xF )
    {
      if ( (n & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( n > 0x1D )
      {
        v72 = n;
        v50 = n + 1;
        if ( (__int64)(n + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v72 = 30;
        v50 = 31;
      }
      v73 = (_QWORD *)operator new(v50);
      sub_233E40((__int64)v71);
      v47 = v73;
      v46 = src;
      v75 = v73;
      dest[0] = v72;
    }
    else
    {
      if ( !n )
      {
LABEL_38:
        v48 = dest;
LABEL_39:
        v76 = v45;
        *((_BYTE *)v48 + v45) = 0;
        goto LABEL_7;
      }
      v46 = src;
      v47 = dest;
      if ( n == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)src;
        goto LABEL_38;
      }
    }
    memcpy(v47, v46, v45);
    v48 = v75;
    goto LABEL_39;
  }
  if ( (unsigned __int64)v80 >= (unsigned __int64)v81 )
    v15 = v80;
  if ( !(_QWORD)v80 )
    v15 = v81;
  sub_A013C0((size_t *)&v75, 0, 0, *((char **)&v80 + 1), v15 - *((_QWORD *)&v80 + 1));
LABEL_7:
  sub_180C5A0(v74, v75);
  v16 = sub_15E3510(v6, v74, 0, 0, *(_QWORD *)v66, 0);
  v19 = (unsigned int *)sub_15DC610(
                          v6,
                          v16,
                          0,
                          0,
                          v17,
                          v18,
                          v54,
                          a1,
                          a4,
                          a5,
                          (int)v63[0],
                          (char)v63[1],
                          v64[0],
                          v65[0],
                          v66[0],
                          *(void **)&v66[2]);
  v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)v6);
  if ( v75 != dest )
  {
    *(__m128i *)v66 = v20;
    operator delete(v75, dest[0] + 1LL);
    v20 = _mm_load_si128((const __m128i *)v66);
  }
  *v56 = v20;
  if ( v19 )
    ++v19[2];
  v21 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8832LL);
  if ( !v21 || (v22 = *v19, (unsigned int)v22 >= *(_DWORD *)(v21 - 4)) || *(_DWORD *)(v21 + 4 * v22) == 0x7FFFFFFF )
  {
    sub_9C2300(v70, *((_QWORD *)v19 + 2));
    v27 = sub_B67520(*(_QWORD *)(a2 + 16), v19);
    v28 = v27;
    sub_8F1CE0(*(_QWORD *)(a2 + 16), v27, *(_DWORD *)(a2 + 8));
    v29 = sub_186B270(0x60u);
    sub_99FEA0(v29, v28, v58, v62, 0);
    sub_9C9700((_QWORD *)a2, v29);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 640) + 4 * v12);
    v30 = (__int64 *)(*(_QWORD *)(a2 + 632) + v69);
    v31 = *v30;
    if ( !*v30 || (v32 = *(_DWORD *)(v31 - 4), v32 == *(_DWORD *)(v31 - 8)) )
    {
      sub_A48C40((unsigned int **)(*(_QWORD *)(a2 + 632) + v69));
      v31 = *v30;
      v32 = *(_DWORD *)(*v30 - 4);
    }
    *(_QWORD *)(v31 + 8LL * v32) = v29;
    *(_DWORD *)(v31 - 4) = v32 + 1;
    v33 = *(_QWORD *)(a2 + 664);
    if ( !v33 || (v34 = *(_DWORD *)(v33 - 4), v34 == *(_DWORD *)(v33 - 8)) )
    {
      sub_A48C40((unsigned int **)(a2 + 664));
      v33 = *(_QWORD *)(a2 + 664);
      v34 = *(_DWORD *)(v33 - 4);
    }
    *(_QWORD *)(v33 + 8LL * v34) = v29;
    v35 = *(_QWORD **)(a2 + 648);
    *(_DWORD *)(v33 - 4) = v34 + 1;
    if ( v35 )
    {
      v36 = *((_DWORD *)v35 - 1);
      v59 = v36;
      if ( (unsigned int)v28 < v36 )
      {
LABEL_31:
        v35[v28] = v29;
        goto LABEL_14;
      }
      v37 = v28 + 1;
      if ( v36 >= (int)v28 + 1 )
      {
        *((_DWORD *)v35 - 1) = v37;
        goto LABEL_31;
      }
    }
    else
    {
      v37 = v28 + 1;
      if ( (_DWORD)v28 == -1 )
        goto LABEL_31;
      v49 = (_QWORD *)sub_186B270(0x18u);
      v35 = v49 + 1;
      *v49 = 2;
      *(_QWORD *)(a2 + 648) = v49 + 1;
      v59 = 0;
    }
    while ( 1 )
    {
      v42 = *((_DWORD *)v35 - 2);
      if ( v42 >= v37 )
        break;
      v38 = (3 * v42 + 1) >> 1;
      v39 = 8 * v38 + 8;
      v40 = v38;
      if ( 8 * v42 + 8 >= (unsigned int)v39 || v42 >= v38 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v71, "Overflow encountered when expanding vector");
        v52 = v71;
        v53 = v71;
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v53);
        sub_233E40((__int64)v52);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v41 = (unsigned int *)sub_186B300(v35 - 1, v39);
      v35 = v41 + 2;
      *v41 = v40;
      *(_QWORD *)(a2 + 648) = v41 + 2;
    }
    *((_DWORD *)v35 - 1) = v37;
    v43 = 8LL * v37;
    v44 = 8LL * v59;
    if ( v44 != v43 )
    {
      *(_QWORD *)v60 = v35;
      memset(&v35[(unsigned __int64)v44 / 8], 0, v43 - v44);
      v35 = *(_QWORD **)v60;
    }
    goto LABEL_31;
  }
LABEL_14:
  v23 = _mm_loadl_epi64(&v68);
  v86[0] = (char *)&`vtable for'std::ostringstream + 64;
  *(__m128i *)v78 = _mm_unpacklo_epi64(v23, (__m128i)((unsigned __int64)&`vtable for'std::stringbuf + 16));
  if ( src != (void *)v68.m128i_i64[1] )
    operator delete(src, v85[0] + 1LL);
  *(_QWORD *)&v78[2] = (char *)&`vtable for'std::streambuf + 16;
  std::locale::~locale(v63[0]);
  v24 = *(_QWORD *)(v7 - 24);
  *(_QWORD *)v78 = v7;
  v25 = v67;
  *(_QWORD *)((char *)v78 + v24) = *(_QWORD *)v65;
  v86[0] = (char *)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base(v25);
  return v56;
}

