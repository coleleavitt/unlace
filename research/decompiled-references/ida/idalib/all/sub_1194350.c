void __fastcall sub_1194350(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // r12
  int v18; // r13d
  int v19; // edi
  __int64 v20; // r12
  char *v21; // rax
  __int64 v22; // rdi
  size_t v23; // rdx
  size_t v24; // r15
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  size_t v28; // r15
  __int64 v29; // rdi
  void *v30; // rax
  int v31; // edx
  __int64 v32; // rax
  const char *v33; // rdi
  size_t v34; // rax
  __int64 v35; // rax
  char *v36; // r12
  char *v37; // rdx
  unsigned int v38; // r12d
  void *v39; // rdi
  size_t v40; // rax
  size_t v41; // rsi
  size_t v42; // rcx
  _BYTE *v43; // r12
  size_t v44; // rax
  size_t *v45; // rsi
  size_t *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // r13d
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  void **v57; // r15
  const char *v58; // r15
  __int64 v59; // rax
  size_t v60; // r8
  size_t v61; // rax
  size_t v62; // rdx
  void *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  __int64 *v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // r15
  size_t v71; // r15
  size_t v72; // rdi
  __int64 *v73; // rax
  __int64 v74; // rax
  __int64 v75; // r12
  __int64 v76; // rbx
  void *v77; // rbp
  void **v81; // [rsp+20h] [rbp-2B8h] BYREF
  void **p_ptr; // [rsp+28h] [rbp-2B0h]
  __int64 *v83; // [rsp+30h] [rbp-2A8h]
  void **v84; // [rsp+38h] [rbp-2A0h]
  __m128 v85; // [rsp+40h] [rbp-298h] BYREF
  char *v86; // [rsp+50h] [rbp-288h]
  size_t *v87; // [rsp+58h] [rbp-280h]
  __int64 *v88; // [rsp+68h] [rbp-270h] BYREF
  void *v89[4]; // [rsp+70h] [rbp-268h] BYREF
  __int16 v90; // [rsp+90h] [rbp-248h]
  size_t v91[2]; // [rsp+A0h] [rbp-238h] BYREF
  _BYTE v92[16]; // [rsp+B0h] [rbp-228h] BYREF
  __int16 v93; // [rsp+C0h] [rbp-218h]
  void *v94; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v95; // [rsp+D8h] [rbp-200h]
  char v96; // [rsp+E0h] [rbp-1F8h] BYREF
  void *ptr; // [rsp+160h] [rbp-178h] BYREF
  __m128i si128; // [rsp+168h] [rbp-170h]
  __int64 v99; // [rsp+178h] [rbp-160h] BYREF
  __int16 v100; // [rsp+180h] [rbp-158h]
  void *src; // [rsp+200h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+208h] [rbp-D0h] BYREF
  _BYTE v103[8]; // [rsp+218h] [rbp-C0h] BYREF
  __int16 v104; // [rsp+220h] [rbp-B8h]

  v10 = *(unsigned int *)(a4 + 24);
  v84 = &v94;
  v94 = &v96;
  v87 = (size_t *)a4;
  v95 = 0x1000000000LL;
  v11 = (_BYTE *)sub_12CC940(v10, 0);
  v100 = 257;
  if ( *v11 )
  {
    ptr = v11;
    LOBYTE(v100) = 3;
  }
  v93 = 259;
  p_ptr = &ptr;
  v91[0] = (size_t)"-type=";
  sub_A41580((__m128i *)&src, (const __m128i *)v91, (const __m128i *)&ptr, v12, v13, v14);
  v15 = sub_10DA6C0(a6, (__int64)&src);
  sub_10DC5D0((__int64)v84, v15);
  ptr = &v99;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v16 = j__strlen("-targets=");
  sub_A1FE50(&ptr, "-targets=", &aOffloadTargets[v16 + 9]);
  if ( *((_DWORD *)a5 + 2) )
  {
    v17 = 0;
    v18 = 0;
    v81 = v89;
    v83 = &v99;
    v85 = _mm_loadh_ps((const double *)&v81);
    while ( 1 )
    {
      LODWORD(v88) = 1;
      v19 = 1;
      v89[0] = *(void **)(a1 + 24);
      v20 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8 * v17);
      if ( *(_DWORD *)(v20 + 8) == 2 )
      {
        a8 = (__m128)_mm_load_si128((const __m128i *)&v85);
        src = sub_1188E20;
        v89[0] = nullptr;
        *(__m128 *)v91 = a8;
        n[0] = (size_t)v91;
        sub_10D2160(v20, (__int64)&src);
        v19 = (int)v88;
      }
      v21 = sub_10D1F80(v19);
      v22 = si128.m128i_i64[0];
      v24 = v23;
      v25 = v23 + si128.m128i_i64[0];
      if ( v25 > si128.m128i_i64[1] )
      {
        v86 = v21;
        sub_2236E10(p_ptr, v83, v25, 1);
        v22 = si128.m128i_i64[0];
        v21 = v86;
      }
      if ( v24 )
      {
        memcpy((char *)ptr + v22, v21, v24);
        v22 = si128.m128i_i64[0];
      }
      v26 = v24 + v22;
      si128.m128i_i64[0] = v24 + v22;
      v27 = v24 + v22 + 1;
      if ( v27 > si128.m128i_i64[1] )
      {
        sub_2236E10(p_ptr, v83, v27, 1);
        v26 = si128.m128i_i64[0];
      }
      *((_BYTE *)ptr + v26) = 45;
      ++si128.m128i_i64[0];
      sub_22BC1E0(&src, *((_QWORD *)v89[0] + 2), *((_QWORD *)v89[0] + 3), 4);
      v28 = n[0];
      v29 = si128.m128i_i64[0];
      v30 = src;
      if ( n[0] + si128.m128i_i64[0] > si128.m128i_i64[1] )
      {
        v86 = (char *)src;
        sub_2236E10(p_ptr, v83, n[0] + si128.m128i_i64[0], 1);
        v29 = si128.m128i_i64[0];
        v30 = v86;
      }
      if ( v28 )
      {
        memcpy((char *)ptr + v29, v30, v28);
        v29 = si128.m128i_i64[0];
      }
      si128.m128i_i64[0] = v28 + v29;
      if ( src != &n[1] )
        operator delete(src);
      v31 = (int)v88;
      if ( ((_DWORD)v88 == 8 || (_DWORD)v88 == 2)
        && (v33 = *(const char **)(v20 + 72)) != nullptr
        && (LODWORD(v86) = (_DWORD)v88, v34 = strlen(v33), v31 = (int)v86, v34) )
      {
        v35 = si128.m128i_i64[0];
        if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
        {
          sub_2236E10(p_ptr, v83, si128.m128i_i64[0] + 1, 1);
          v35 = si128.m128i_i64[0];
        }
        *((_BYTE *)ptr + v35) = 45;
        v36 = *(char **)(v20 + 72);
        v37 = nullptr;
        ++si128.m128i_i64[0];
        if ( v36 )
          v37 = &v36[j__strlen(v36)];
        sub_A1FE50(p_ptr, v36, v37);
        if ( (_DWORD)v88 != 4 )
          goto LABEL_22;
      }
      else if ( v31 != 4 )
      {
        goto LABEL_22;
      }
      v38 = 0;
      if ( !*(_DWORD *)(a6 + 16) )
        goto LABEL_83;
      while ( 1 )
      {
        v39 = (void *)(**(__int64 (__fastcall ***)(__int64, _QWORD))a6)(a6, v38);
        src = v39;
        v40 = 0;
        if ( v39 )
          v40 = strlen((const char *)v39);
        n[0] = v40;
        if ( (unsigned __int8)sub_2246340(&src, "-march=", 7) )
          break;
        if ( ++v38 >= *(_DWORD *)(a6 + 16) )
          goto LABEL_83;
      }
      v41 = n[0];
      v42 = 0;
      if ( n[0] > 6 )
      {
        v42 = n[0] - 7;
        v41 = 7;
      }
      v86 = (char *)v42;
      v43 = (char *)src + v41;
      v44 = j__strlen("-");
      sub_A1FE50(p_ptr, "-", &asc_2336D94[v44 + 2]);
      if ( v43 )
      {
        src = &n[1];
        sub_11892E0(&src, v43, (__int64)&v86[(_QWORD)v43]);
        v45 = (size_t *)src;
        v46 = (size_t *)((char *)src + n[0]);
      }
      else
      {
LABEL_83:
        v46 = &n[1];
        LOBYTE(n[1]) = 0;
        src = &n[1];
        v45 = &n[1];
        n[0] = 0;
      }
      sub_A1FE50(p_ptr, v45, v46);
      if ( src != &n[1] )
        operator delete(src);
LABEL_22:
      v17 = (unsigned int)(v18 + 1);
      v18 = v17;
      if ( (unsigned int)v17 >= *((_DWORD *)a5 + 2) )
        goto LABEL_47;
      if ( (_DWORD)v17 )
      {
        v32 = si128.m128i_i64[0];
        if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
        {
          sub_2236E10(p_ptr, v83, si128.m128i_i64[0] + 1, 1);
          v32 = si128.m128i_i64[0];
        }
        *((_BYTE *)ptr + v32) = 44;
        ++si128.m128i_i64[0];
      }
    }
  }
  v81 = v89;
LABEL_47:
  v104 = 261;
  src = ptr;
  n[0] = si128.m128i_i64[0];
  v47 = sub_10DA6C0(a6, (__int64)&src);
  sub_10DC5D0((__int64)v84, v47);
  v93 = 257;
  if ( *(_BYTE *)*v87 )
  {
    v91[0] = *v87;
    LOBYTE(v93) = 3;
  }
  v51 = 0;
  v90 = 259;
  v89[0] = "-output=";
  sub_A41580((__m128i *)&src, (const __m128i *)v81, (const __m128i *)v91, v48, v49, v50);
  v52 = sub_10DA6C0(a6, (__int64)&src);
  sub_10DC5D0((__int64)v84, v52);
  v53 = 0;
  if ( *((_DWORD *)a5 + 2) )
  {
    v86 = v92;
    v85.m128_u64[0] = (unsigned __int64)&v88;
    do
    {
      a7 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8D40);
      src = v103;
      *(__m128 *)n = a7;
      qmemcpy(v103, "-input=", 7);
      v67 = *(__int64 **)(a1 + 24);
      n[0] = 7;
      v68 = *(_QWORD *)(a3 + 16);
      v88 = v67;
      v69 = *(_QWORD *)(v68 + 8 * v53);
      v70 = 40 * v53;
      if ( *(_DWORD *)(v69 + 8) != 2 )
      {
        (*(void (__fastcall **)(size_t *, __int64 *, __int64))(*v67 + 64))(v91, v67, v70 + *a5);
        v71 = v91[1];
        v72 = n[0];
        v73 = (__int64 *)v91[0];
        if ( v91[1] + n[0] > n[1] )
        {
          v83 = (__int64 *)v91[0];
          sub_2236E10(&src, v103, v91[1] + n[0], 1);
          v72 = n[0];
          v73 = v83;
        }
        if ( v71 )
        {
          memcpy((char *)src + v72, v73, v71);
          v72 = n[0];
        }
        v62 = v71 + v72;
        v63 = (void *)v91[0];
        n[0] = v62;
        if ( (char *)v91[0] == v86 )
          goto LABEL_59;
LABEL_58:
        operator delete(v63);
        v62 = n[0];
        goto LABEL_59;
      }
      v88 = nullptr;
      v89[0] = (void *)v85.m128_u64[0];
      v91[0] = (size_t)sub_1188E30;
      v91[1] = (size_t)v81;
      sub_10D2160(v69, (__int64)v91);
      v54 = *a5;
      v55 = *v88;
      v83 = *(__int64 **)(a2 + 80);
      v56 = v70 + v54;
      v57 = v81;
      (*(void (__fastcall **)(void **, __int64 *, __int64))(v55 + 64))(v81, v88, v56);
      v93 = 260;
      v91[0] = (size_t)v57;
      v58 = (const char *)sub_10DA6C0((__int64)v83, (__int64)v91);
      v59 = *(unsigned int *)(a2 + 256);
      if ( v59 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 260) )
      {
        sub_2237220(a2 + 248, a2 + 264, v59 + 1, 8);
        v59 = *(unsigned int *)(a2 + 256);
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 248) + 8 * v59) = v58;
      ++*(_DWORD *)(a2 + 256);
      if ( v58 )
      {
        v60 = strlen(v58);
        v61 = n[0];
        v62 = v60 + n[0];
        if ( v60 + n[0] <= n[1] )
          goto LABEL_55;
      }
      else
      {
        v62 = n[0];
        if ( n[0] <= n[1] )
          goto LABEL_57;
        v60 = 0;
      }
      v83 = (__int64 *)v60;
      sub_2236E10(&src, v103, v62, 1);
      v61 = n[0];
      v60 = (size_t)v83;
LABEL_55:
      v62 = v61;
      if ( v60 )
      {
        v83 = (__int64 *)v60;
        memcpy((char *)src + v61, v58, v60);
        v62 = (size_t)v83 + n[0];
      }
LABEL_57:
      v63 = v89[0];
      n[0] = v62;
      if ( v89[0] != v81 + 2 )
        goto LABEL_58;
LABEL_59:
      v91[1] = v62;
      v93 = 261;
      v91[0] = (size_t)src;
      v64 = sub_10DA6C0(a6, (__int64)v91);
      v65 = (unsigned int)v95;
      v66 = (unsigned int)v95 + 1LL;
      if ( v66 > HIDWORD(v95) )
      {
        v83 = (__int64 *)v64;
        sub_2237220(v84, v84 + 2, v66, 8);
        v65 = (unsigned int)v95;
        v64 = (__int64)v83;
      }
      *((_QWORD *)v94 + v65) = v64;
      LODWORD(v95) = v95 + 1;
      if ( src != v103 )
        free(src);
      v53 = (unsigned int)(v51 + 1);
      v51 = v53;
    }
    while ( (unsigned int)v53 < *((_DWORD *)a5 + 2) );
  }
  sub_11BC9D0(a6, v84);
  sub_112D530(v91, *(_QWORD *)(a1 + 24), *(char **)(a1 + 16));
  src = v91;
  v104 = 260;
  v74 = sub_10DA6C0(a6, (__int64)&src);
  v75 = (__int64)v87;
  v76 = v74;
  v77 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v77, a3, a1, 2, 0, v76, (__int64)v84, nullptr, 0, v75, 1, 0);
  v89[0] = v77;
  sub_118A0F0(a2, (__int64 *)v81, a7, *(double *)a8.m128_u64);
  if ( v89[0] )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v89[0] + 8LL))(v89[0]);
  if ( (_BYTE *)v91[0] != v92 )
    operator delete((void *)v91[0]);
  if ( ptr != p_ptr + 3 )
    free(ptr);
  if ( v94 != v84 + 2 )
    free(v94);
}
