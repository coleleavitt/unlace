void __fastcall sub_1194EE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD **a5,
        _DWORD *a6,
        __m128 a7,
        double a8)
{
  _BYTE *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // r13d
  __int64 v14; // rax
  size_t v15; // rax
  __int64 v16; // rbp
  __int64 *v17; // rbp
  char *v18; // rax
  __int64 v19; // rdi
  size_t v20; // rdx
  size_t v21; // r14
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  size_t v26; // r14
  __int64 v27; // rdi
  void *v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r9
  int v33; // ebp
  __int64 v34; // rax
  __int64 i; // rax
  size_t v36; // r15
  size_t v37; // rdi
  const void *v38; // rax
  size_t v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // r13
  __int64 v46; // rbx
  __int64 v47; // rbp
  __int64 v48; // rsi
  int v49; // ecx
  unsigned __int64 v50; // r13
  __int64 *v51; // rbp
  __int64 v52; // rdx
  __int64 v53; // rdi
  __int64 v54; // rax
  unsigned int v55; // ebp
  void *v56; // rdi
  size_t v57; // rax
  size_t v58; // rsi
  size_t v59; // rcx
  _BYTE *v60; // rbp
  size_t v61; // rax
  size_t *v62; // rsi
  size_t *v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r14
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  __int64 v69; // rdi
  _QWORD *v70; // r15
  _QWORD *v71; // rdx
  _QWORD *v72; // rsi
  unsigned __int64 v73; // r8
  __int64 v74; // rdx
  unsigned __int64 v75; // rsi
  _QWORD **v76; // rcx
  _QWORD *v77; // rbx
  __int32 v78; // ebx
  _QWORD *v79; // rax
  __int64 v80; // [rsp+0h] [rbp-2D8h]
  char v81; // [rsp+0h] [rbp-2D8h]
  unsigned __int64 v82; // [rsp+20h] [rbp-2B8h]
  __int64 v83; // [rsp+28h] [rbp-2B0h]
  __int64 v84; // [rsp+28h] [rbp-2B0h]
  __int64 v85; // [rsp+30h] [rbp-2A8h]
  size_t v86; // [rsp+38h] [rbp-2A0h]
  void *v87; // [rsp+38h] [rbp-2A0h]
  char *v88; // [rsp+38h] [rbp-2A0h]
  _BYTE *v91; // [rsp+50h] [rbp-288h]
  __int64 v93; // [rsp+68h] [rbp-270h] BYREF
  __m128i v94[2]; // [rsp+70h] [rbp-268h] BYREF
  __int16 v95; // [rsp+90h] [rbp-248h]
  __m128i v96; // [rsp+A0h] [rbp-238h] BYREF
  _BYTE v97[16]; // [rsp+B0h] [rbp-228h] BYREF
  __int16 v98; // [rsp+C0h] [rbp-218h]
  void *v99; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v100; // [rsp+D8h] [rbp-200h]
  _BYTE v101[128]; // [rsp+E0h] [rbp-1F8h] BYREF
  void *ptr; // [rsp+160h] [rbp-178h] BYREF
  __m128i si128; // [rsp+168h] [rbp-170h]
  __int64 v104; // [rsp+178h] [rbp-160h] BYREF
  __int16 v105; // [rsp+180h] [rbp-158h]
  void *src; // [rsp+200h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+208h] [rbp-D0h] BYREF
  __int64 v108; // [rsp+218h] [rbp-C0h] BYREF
  __int16 v109; // [rsp+220h] [rbp-B8h]

  v99 = v101;
  v100 = 0x1000000000LL;
  v91 = (_BYTE *)**a5;
  v10 = (_BYTE *)sub_12CC940(*((unsigned int *)*a5 + 6), 0);
  v105 = 257;
  if ( *v10 )
  {
    ptr = v10;
    LOBYTE(v105) = 3;
  }
  v13 = 0;
  v98 = 259;
  v96.m128i_i64[0] = (__int64)"-type=";
  sub_A41580((__m128i *)&src, &v96, (const __m128i *)&ptr, v11, v12, 259);
  v14 = sub_10DA6C0((__int64)a6, (__int64)&src);
  sub_10DC5D0((__int64)&v99, v14);
  ptr = &v104;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v15 = j__strlen("-targets=");
  v16 = 0;
  sub_A1FE50(&ptr, "-targets=", &aOffloadTargets[v15 + 9]);
  v80 = *(_QWORD *)(a3 + 88);
  v82 = *(unsigned int *)(a3 + 96);
  if ( *(_DWORD *)(a3 + 96) )
  {
    v85 = a4;
    while ( 1 )
    {
      v17 = (__int64 *)(v80 + 32 * v16);
      v18 = sub_10D1F80(*((_DWORD *)v17 + 6));
      v19 = si128.m128i_i64[0];
      v21 = v20;
      v22 = v20 + si128.m128i_i64[0];
      if ( v22 > si128.m128i_i64[1] )
      {
        v88 = v18;
        sub_2236E10(&ptr, &v104, v22, 1);
        v19 = si128.m128i_i64[0];
        v18 = v88;
      }
      if ( v21 )
      {
        memcpy((char *)ptr + v19, v18, v21);
        v19 = si128.m128i_i64[0];
      }
      v23 = v21 + v19;
      si128.m128i_i64[0] = v21 + v19;
      v24 = v21 + v19 + 1;
      if ( v24 > si128.m128i_i64[1] )
      {
        sub_2236E10(&ptr, &v104, v24, 1);
        v23 = si128.m128i_i64[0];
      }
      *((_BYTE *)ptr + v23) = 45;
      v25 = *v17;
      ++si128.m128i_i64[0];
      sub_22BC1E0(&src, *(_QWORD *)(v25 + 16), *(_QWORD *)(v25 + 24), 4);
      v26 = n[0];
      v27 = si128.m128i_i64[0];
      v28 = src;
      if ( n[0] + si128.m128i_i64[0] > si128.m128i_i64[1] )
      {
        v87 = src;
        sub_2236E10(&ptr, &v104, n[0] + si128.m128i_i64[0], 1);
        v27 = si128.m128i_i64[0];
        v28 = v87;
      }
      if ( v26 )
      {
        memcpy((char *)ptr + v27, v28, v26);
        v27 = si128.m128i_i64[0];
      }
      si128.m128i_i64[0] = v26 + v27;
      if ( src != &n[1] )
        operator delete(src);
      v29 = *((_DWORD *)v17 + 6);
      if ( (v29 == 8 || v29 == 2) && v17[2] )
      {
        v54 = si128.m128i_i64[0];
        if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
        {
          sub_2236E10(&ptr, &v104, si128.m128i_i64[0] + 1, 1);
          v54 = si128.m128i_i64[0];
        }
        *((_BYTE *)ptr + v54) = 45;
        ++si128.m128i_i64[0];
        sub_A1FE50(&ptr, (_BYTE *)v17[1], (_BYTE *)(v17[1] + v17[2]));
        if ( *((_DWORD *)v17 + 6) != 4 )
          goto LABEL_20;
      }
      else if ( v29 != 4 )
      {
        goto LABEL_20;
      }
      v55 = 0;
      if ( !a6[4] )
        goto LABEL_69;
      while ( 1 )
      {
        v56 = (void *)(**(__int64 (__fastcall ***)(_DWORD *, _QWORD))a6)(a6, v55);
        src = v56;
        v57 = 0;
        if ( v56 )
          v57 = strlen((const char *)v56);
        n[0] = v57;
        if ( (unsigned __int8)sub_2246340(&src, "-march=", 7) )
          break;
        if ( ++v55 >= a6[4] )
          goto LABEL_69;
      }
      v58 = n[0];
      v59 = 0;
      if ( n[0] > 6 )
      {
        v59 = n[0] - 7;
        v58 = 7;
      }
      v86 = v59;
      v60 = (char *)src + v58;
      v61 = j__strlen("-");
      sub_A1FE50(&ptr, "-", &asc_2336D94[v61 + 2]);
      if ( v60 )
      {
        src = &n[1];
        sub_11892E0(&src, v60, (__int64)&v60[v86]);
        v62 = (size_t *)src;
        v63 = (size_t *)((char *)src + n[0]);
      }
      else
      {
LABEL_69:
        src = &n[1];
        v63 = &n[1];
        v62 = &n[1];
        n[0] = 0;
        LOBYTE(n[1]) = 0;
      }
      sub_A1FE50(&ptr, v62, v63);
      if ( src == &n[1] )
      {
LABEL_20:
        v16 = ++v13;
        if ( v82 <= v13 )
          goto LABEL_21;
        goto LABEL_64;
      }
      operator delete(src);
      v16 = ++v13;
      if ( v82 <= v13 )
      {
LABEL_21:
        a4 = v85;
        break;
      }
LABEL_64:
      v64 = si128.m128i_i64[0];
      if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
      {
        sub_2236E10(&ptr, &v104, si128.m128i_i64[0] + 1, 1);
        v64 = si128.m128i_i64[0];
      }
      *((_BYTE *)ptr + v64) = 44;
      ++si128.m128i_i64[0];
    }
  }
  v109 = 261;
  src = ptr;
  n[0] = si128.m128i_i64[0];
  v30 = sub_10DA6C0((__int64)a6, (__int64)&src);
  sub_10DC5D0((__int64)&v99, v30);
  v98 = 257;
  if ( *v91 )
  {
    v96.m128i_i64[0] = (__int64)v91;
    LOBYTE(v98) = 3;
  }
  v33 = 0;
  v95 = 259;
  v94[0].m128i_i64[0] = (__int64)"-input=";
  sub_A41580((__m128i *)&src, v94, &v96, v31, 257, v32);
  v34 = sub_10DA6C0((__int64)a6, (__int64)&src);
  sub_10DC5D0((__int64)&v99, v34);
  for ( i = 0; (unsigned int)i < *(_DWORD *)(a4 + 8); v33 = i )
  {
    while ( 1 )
    {
      src = &v108;
      n[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40).m128i_u64[1];
      v108 = 0x3D74757074756F2DLL;
      n[0] = 8;
      (*(void (__fastcall **)(__m128i *, _QWORD, __int64))(**(_QWORD **)(v80 + 32 * i) + 64LL))(
        &v96,
        *(_QWORD *)(v80 + 32 * i),
        *(_QWORD *)a4 + 40 * i);
      v36 = v96.m128i_u64[1];
      v37 = n[0];
      v38 = (const void *)v96.m128i_i64[0];
      if ( v96.m128i_i64[1] + n[0] > n[1] )
      {
        v83 = v96.m128i_i64[0];
        sub_2236E10(&src, &v108, v96.m128i_i64[1] + n[0], 1);
        v37 = n[0];
        v38 = (const void *)v83;
      }
      if ( v36 )
      {
        memcpy((char *)src + v37, v38, v36);
        v37 = n[0];
      }
      v39 = v36 + v37;
      n[0] = v36 + v37;
      if ( (_BYTE *)v96.m128i_i64[0] != v97 )
      {
        operator delete((void *)v96.m128i_i64[0]);
        v39 = n[0];
      }
      v40 = (*(__int64 (__fastcall **)(_DWORD *, void *, size_t))(*(_QWORD *)a6 + 16LL))(a6, src, v39);
      v41 = (unsigned int)v100;
      v42 = (unsigned int)v100 + 1LL;
      if ( v42 > HIDWORD(v100) )
      {
        v84 = v40;
        sub_2237220(&v99, v101, v42, 8);
        v41 = (unsigned int)v100;
        v40 = v84;
      }
      *((_QWORD *)v99 + v41) = v40;
      LODWORD(v100) = v100 + 1;
      if ( src == &v108 )
        break;
      free(src);
      i = (unsigned int)(v33 + 1);
      v33 = i;
      if ( (unsigned int)i >= *(_DWORD *)(a4 + 8) )
        goto LABEL_35;
    }
    i = (unsigned int)(v33 + 1);
  }
LABEL_35:
  sub_10DC5D0((__int64)&v99, (__int64)"-unbundle");
  sub_10DC5D0((__int64)&v99, (__int64)"-allow-missing-bundles");
  if ( sub_10DCD30((__int64)a6, 0xD45u) )
    sub_10DC5D0((__int64)&v99, (__int64)"-verbose");
  sub_112D530(&v96, *(_QWORD *)(a1 + 24), *(char **)(a1 + 16));
  src = &v96;
  v109 = 260;
  v43 = sub_10DA6C0((__int64)a6, (__int64)&src);
  v44 = *(_QWORD *)a4;
  v45 = *(unsigned int *)(a4 + 8);
  v46 = v43;
  v47 = operator new(0x208u);
  sub_1106AE0(v47, a3, a1, 2, 0, v46, (__int64)&v99, nullptr, 0, v44, v45, 0);
  v93 = v47;
  v48 = *(unsigned int *)(a2 + 160);
  v49 = *(_DWORD *)(a2 + 160);
  if ( v48 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v51 = &v93;
    v65 = -1;
    v81 = 0;
    v66 = *(_QWORD *)(a2 + 152);
    if ( v66 <= (unsigned __int64)&v93 && (unsigned __int64)&v93 < v66 + 8 * v48 )
    {
      v81 = 1;
      v65 = (__int64)((__int64)&v93 - v66) >> 3;
    }
    v67 = sub_2237400(a2 + 152, a2 + 168, v48 + 1, 8, v94);
    v68 = *(_QWORD *)(a2 + 152);
    v50 = v67;
    v69 = 8LL * *(unsigned int *)(a2 + 160);
    v70 = (_QWORD *)(v68 + v69);
    if ( v68 != v68 + v69 )
    {
      v71 = *(_QWORD **)(a2 + 152);
      v72 = (_QWORD *)(v69 - 8);
      if ( (v68 >= v67 + 16 || v67 >= v68 + 16) && (unsigned __int64)v72 > 0x10 )
      {
        v73 = ((unsigned __int64)(v69 - 8) >> 3) + 1;
        v74 = 0;
        a8 = 0.0;
        do
        {
          a7 = (__m128)_mm_loadu_si128((const __m128i *)(v68 + v74));
          *(_OWORD *)(v68 + v74) = 0;
          *(__m128 *)(v67 + v74) = a7;
          v74 += 16;
        }
        while ( 16 * (v73 >> 1) != v74 );
        v71 = (_QWORD *)(v73 & 0xFFFFFFFFFFFFFFFELL);
        v75 = 8 * (v73 & 0xFFFFFFFFFFFFFFFELL);
        v76 = (_QWORD **)(v75 + v68);
        v72 = (_QWORD *)(v67 + v75);
        if ( (v73 & 0xFFFFFFFFFFFFFFFELL) != v73 )
        {
          v71 = *v76;
          *v76 = nullptr;
          *v72 = v71;
        }
      }
      else
      {
        v76 = (_QWORD **)v67;
        do
        {
          v79 = (_QWORD *)*v71;
          *v71++ = 0;
          *v76++ = v79;
        }
        while ( v70 != v71 );
      }
      v77 = *(_QWORD **)(a2 + 152);
      v70 = &v77[(unsigned __int64)v69 / 8];
      if ( v77 != &v77[(unsigned __int64)v69 / 8] )
      {
        do
        {
          while ( *--v70 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD *, _QWORD **, double, double))(*(_QWORD *)*v70 + 8LL))(
              *v70,
              v72,
              v71,
              v76,
              *(double *)a7.m128_u64,
              a8);
            if ( v77 == v70 )
              goto LABEL_81;
          }
        }
        while ( v77 != v70 );
LABEL_81:
        v70 = *(_QWORD **)(a2 + 152);
      }
    }
    v78 = v94[0].m128i_i32[0];
    if ( v70 != (_QWORD *)(a2 + 168) )
      free(v70);
    if ( v81 )
      v51 = (__int64 *)(v50 + 8 * v65);
    v48 = *(unsigned int *)(a2 + 160);
    *(_QWORD *)(a2 + 152) = v50;
    *(_DWORD *)(a2 + 164) = v78;
    v49 = v48;
  }
  else
  {
    v50 = *(_QWORD *)(a2 + 152);
    v51 = &v93;
  }
  v52 = *v51;
  *v51 = 0;
  v53 = v93;
  *(_QWORD *)(v50 + 8 * v48) = v52;
  *(_DWORD *)(a2 + 160) = v49 + 1;
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
  if ( (_BYTE *)v96.m128i_i64[0] != v97 )
    operator delete((void *)v96.m128i_i64[0]);
  if ( ptr != &v104 )
    free(ptr);
  if ( v99 != v101 )
    free(v99);
}
