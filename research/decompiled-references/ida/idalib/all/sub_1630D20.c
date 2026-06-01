_DWORD *__fastcall sub_1630D20(_QWORD *a1, int a2, _BYTE *a3, __int64 a4)
{
  _DWORD *result; // rax
  __int64 v8; // rax
  _BYTE *v9; // rsi
  size_t v10; // r14
  char *v11; // r13
  size_t v12; // r9
  __m128i *v13; // rax
  size_t v14; // rcx
  size_t v15; // r14
  size_t v16; // r9
  unsigned __int64 v17; // rdx
  char *v18; // rax
  __m128i *v19; // rsi
  signed __int64 v20; // rdx
  __int64 v21; // rax
  _BYTE *v22; // rsi
  size_t v23; // r12
  _WORD *v24; // rbp
  size_t v25; // r9
  __m128i *v26; // rax
  size_t v27; // rcx
  size_t v28; // r12
  unsigned __int64 v29; // rcx
  _BYTE *v30; // rdi
  size_t v31; // rsi
  unsigned __int64 v32; // rax
  bool v33; // zf
  size_t v34; // r8
  size_t v35; // r12
  unsigned __int64 v36; // rax
  __m128i *v37; // rax
  size_t v38; // rcx
  size_t v39; // r12
  size_t v40; // r10
  unsigned __int64 v41; // rdx
  char *v42; // rax
  __m128i *v43; // rsi
  signed __int64 v44; // rdx
  _BYTE *v45; // rdi
  __m128i v46; // xmm3
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r14
  void *v64; // rax
  _QWORD *v65; // rax
  size_t v66; // [rsp+0h] [rbp-278h]
  size_t v67; // [rsp+0h] [rbp-278h]
  size_t v68; // [rsp+0h] [rbp-278h]
  size_t v69; // [rsp+10h] [rbp-268h]
  size_t v70; // [rsp+10h] [rbp-268h]
  size_t v71; // [rsp+38h] [rbp-240h]
  __int64 v72; // [rsp+38h] [rbp-240h]
  __int64 v73; // [rsp+38h] [rbp-240h]
  __int64 v74; // [rsp+48h] [rbp-230h] BYREF
  void *v75; // [rsp+50h] [rbp-228h] BYREF
  __int64 v76; // [rsp+58h] [rbp-220h]
  char v77[16]; // [rsp+60h] [rbp-218h] BYREF
  void *src; // [rsp+70h] [rbp-208h] BYREF
  size_t n; // [rsp+78h] [rbp-200h]
  _QWORD v80[2]; // [rsp+80h] [rbp-1F8h] BYREF
  void *v81; // [rsp+90h] [rbp-1E8h] BYREF
  size_t v82; // [rsp+98h] [rbp-1E0h]
  __m128i v83; // [rsp+A0h] [rbp-1D8h] BYREF
  void *v84; // [rsp+B0h] [rbp-1C8h]
  signed __int64 v85; // [rsp+B8h] [rbp-1C0h]
  __m128i v86; // [rsp+C0h] [rbp-1B8h] BYREF
  void *v87; // [rsp+D0h] [rbp-1A8h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-1A0h]
  _WORD v89[8]; // [rsp+E0h] [rbp-198h] BYREF
  void *v90; // [rsp+F0h] [rbp-188h] BYREF
  size_t v91; // [rsp+F8h] [rbp-180h]
  _QWORD v92[2]; // [rsp+100h] [rbp-178h] BYREF
  void *v93; // [rsp+110h] [rbp-168h] BYREF
  size_t v94; // [rsp+118h] [rbp-160h]
  __m128i v95; // [rsp+120h] [rbp-158h] BYREF
  void *v96; // [rsp+130h] [rbp-148h] BYREF
  size_t v97; // [rsp+138h] [rbp-140h]
  __m128i v98; // [rsp+140h] [rbp-138h] BYREF
  void *v99; // [rsp+150h] [rbp-128h] BYREF
  size_t v100; // [rsp+158h] [rbp-120h]
  _QWORD v101[2]; // [rsp+160h] [rbp-118h] BYREF
  void *v102; // [rsp+170h] [rbp-108h] BYREF
  size_t v103; // [rsp+178h] [rbp-100h]
  __m128i v104; // [rsp+180h] [rbp-F8h] BYREF
  void *v105; // [rsp+190h] [rbp-E8h] BYREF
  signed __int64 v106; // [rsp+198h] [rbp-E0h]
  __m128i v107; // [rsp+1A0h] [rbp-D8h] BYREF
  _BYTE v108[16]; // [rsp+1B0h] [rbp-C8h] BYREF
  void *v109; // [rsp+1C0h] [rbp-B8h]
  unsigned __int8 *v110[11]; // [rsp+1D0h] [rbp-A8h] BYREF
  char v111; // [rsp+228h] [rbp-50h]
  unsigned int v112; // [rsp+230h] [rbp-48h]
  char v113; // [rsp+234h] [rbp-44h]

  result = (_DWORD *)*a1;
  if ( *(_DWORD *)*a1 != a2 )
    return result;
  sub_168B9F0(v108, a1[1] + 8LL, *(unsigned int *)(a1[2] + 24LL), 3245, 0);
  v8 = a1[3];
  v9 = *(_BYTE **)v8;
  if ( *(_QWORD *)v8 )
  {
    src = v80;
    sub_16283D0(&src, v9, (__int64)&v9[*(_QWORD *)(v8 + 8)]);
  }
  else
  {
    LOBYTE(v80[0]) = 0;
    src = v80;
    n = 0;
  }
  v10 = n;
  v11 = v77;
  v76 = 12;
  v12 = n + 12;
  strcpy(v77, "'__arm_new(\"");
  v75 = v77;
  if ( n + 12 <= 0xF )
  {
    if ( n )
    {
      if ( n == 1 )
      {
        v77[12] = *(_BYTE *)src;
      }
      else
      {
        v67 = n + 12;
        memcpy(&v77[12], src, n);
        v12 = v67;
      }
    }
    goto LABEL_8;
  }
  if ( src == v80 || v12 > v80[0] )
  {
    v66 = n + 12;
    sub_998B30((__int64)&v75, 0xCu, 0, src, n);
    v11 = (char *)v75;
    v12 = v66;
LABEL_8:
    v76 = v12;
    v13 = (__m128i *)&v75;
    v11[v10 + 12] = 0;
    goto LABEL_9;
  }
  v13 = (__m128i *)sub_99BDC0(&src, 0, 0, v77, 0xCu);
LABEL_9:
  v81 = &v83;
  if ( (__m128i *)v13->m128i_i64[0] == &v13[1] )
  {
    v83 = _mm_loadu_si128(v13 + 1);
  }
  else
  {
    v81 = (void *)v13->m128i_i64[0];
    v83.m128i_i64[0] = v13[1].m128i_i64[0];
  }
  v14 = v13->m128i_u64[1];
  v13[1].m128i_i8[0] = 0;
  v82 = v14;
  v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
  v13->m128i_i64[1] = 0;
  v15 = v82;
  if ( 0x7FFFFFFFFFFFFFFFLL - v82 <= 2 )
LABEL_125:
    std::__throw_length_error("basic_string::append");
  v16 = v82 + 3;
  if ( v81 == &v83 )
    v17 = 15;
  else
    v17 = v83.m128i_i64[0];
  if ( v16 > v17 )
  {
    v68 = v82 + 3;
    sub_998B30((__int64)&v81, v82, 0, "\")'", 3u);
    v16 = v68;
  }
  else
  {
    v18 = (char *)v81 + v82;
    *(_WORD *)v18 = 10530;
    v18[2] = 39;
  }
  v82 = v16;
  *((_BYTE *)v81 + v15 + 3) = 0;
  v19 = (__m128i *)v81;
  v84 = &v86;
  if ( v81 == &v83 )
  {
    v19 = &v86;
    v86 = _mm_load_si128(&v83);
  }
  else
  {
    v84 = v81;
    v86.m128i_i64[0] = v83.m128i_i64[0];
  }
  v20 = v82;
  v82 = 0;
  v81 = &v83;
  v85 = v20;
  v83.m128i_i8[0] = 0;
  if ( v111 )
  {
    sub_AEC220(v110, v19, v20);
  }
  else if ( v113 )
  {
    v63 = sub_168B9E0(v108);
    v64 = v109;
    if ( v109 )
      v64 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v109 + 32LL))(v109);
    v105 = v64;
    v65 = sub_1587BC0(v63, (__int64 *)&v105, v59, v60, v61, v62);
    sub_AEC220((unsigned __int8 **)(*v65 + 32LL * v112 + 8), v84, v85);
  }
  v21 = a1[3];
  v22 = *(_BYTE **)v21;
  if ( *(_QWORD *)v21 )
  {
    v99 = v101;
    sub_16283D0(&v99, v22, (__int64)&v22[*(_QWORD *)(v21 + 8)]);
  }
  else
  {
    LOBYTE(v101[0]) = 0;
    v99 = v101;
    v100 = 0;
  }
  if ( a3 )
  {
    v90 = v92;
    sub_16283D0(&v90, a3, (__int64)&a3[a4]);
  }
  else
  {
    LOBYTE(v92[0]) = 0;
    v90 = v92;
    v91 = 0;
  }
  v23 = v91;
  v24 = v89;
  v25 = v91 + 1;
  v87 = v89;
  v88 = 1;
  v89[0] = 39;
  if ( v91 + 1 <= 0xF )
  {
    if ( v91 )
    {
      if ( v91 == 1 )
      {
        HIBYTE(v89[0]) = *(_BYTE *)v90;
      }
      else
      {
        v70 = v91 + 1;
        memcpy((char *)v89 + 1, v90, v91);
        v25 = v70;
      }
    }
    goto LABEL_28;
  }
  if ( v90 == v92 || v25 > v92[0] )
  {
    v69 = v91 + 1;
    sub_998B30((__int64)&v87, 1u, 0, v90, v91);
    v24 = v87;
    v25 = v69;
LABEL_28:
    v88 = v25;
    v26 = (__m128i *)&v87;
    *((_BYTE *)v24 + v23 + 1) = 0;
    goto LABEL_29;
  }
  v26 = (__m128i *)sub_99BDC0(&v90, 0, 0, v89, 1u);
LABEL_29:
  v93 = &v95;
  if ( (__m128i *)v26->m128i_i64[0] == &v26[1] )
  {
    v95 = _mm_loadu_si128(v26 + 1);
  }
  else
  {
    v93 = (void *)v26->m128i_i64[0];
    v95.m128i_i64[0] = v26[1].m128i_i64[0];
  }
  v27 = v26->m128i_u64[1];
  v26[1].m128i_i8[0] = 0;
  v94 = v27;
  v26->m128i_i64[0] = (__int64)v26[1].m128i_i64;
  v26->m128i_i64[1] = 0;
  v28 = v94;
  if ( v94 == 0x7FFFFFFFFFFFFFFFLL || v94 == 9223372036854775806LL )
    goto LABEL_125;
  if ( v93 == &v95 )
    v29 = 15;
  else
    v29 = v95.m128i_i64[0];
  if ( v94 + 2 > v29 )
    sub_998B30((__int64)&v93, v94, 0, "(\"", 2u);
  else
    *(_WORD *)((char *)v93 + v94) = 8744;
  v94 = v28 + 2;
  *((_BYTE *)v93 + v28 + 2) = 0;
  v30 = v93;
  v96 = &v98;
  if ( v93 == &v95 )
  {
    v31 = v94;
    v34 = v100;
    v30 = &v98;
    v32 = 15;
    v46 = _mm_load_si128(&v95);
    v94 = 0;
    v97 = v31;
    v35 = v100 + v31;
    v98 = v46;
    v95.m128i_i8[0] = 0;
  }
  else
  {
    v31 = v94;
    v32 = v95.m128i_i64[0];
    v33 = v93 == &v98;
    v96 = v93;
    v34 = v100;
    v93 = &v95;
    v97 = v94;
    v94 = 0;
    v35 = v100 + v97;
    v95.m128i_i8[0] = 0;
    v98.m128i_i64[0] = v32;
    if ( v33 )
      v32 = 15;
  }
  if ( v35 <= v32 )
  {
    if ( v34 )
    {
      v45 = &v30[v31];
      if ( v34 == 1 )
        *v45 = *(_BYTE *)v99;
      else
        memcpy(v45, v99, v34);
      v30 = v96;
    }
    goto LABEL_44;
  }
  if ( v99 == v101 )
    v36 = 15;
  else
    v36 = v101[0];
  if ( v35 > v36 )
  {
    sub_998B30((__int64)&v96, v31, 0, v99, v34);
    v30 = v96;
LABEL_44:
    v97 = v35;
    v37 = (__m128i *)&v96;
    v30[v35] = 0;
    goto LABEL_45;
  }
  v37 = (__m128i *)sub_99BDC0(&v99, 0, 0, v30, v31);
LABEL_45:
  v102 = &v104;
  if ( (__m128i *)v37->m128i_i64[0] == &v37[1] )
  {
    v104 = _mm_loadu_si128(v37 + 1);
  }
  else
  {
    v102 = (void *)v37->m128i_i64[0];
    v104.m128i_i64[0] = v37[1].m128i_i64[0];
  }
  v38 = v37->m128i_u64[1];
  v37[1].m128i_i8[0] = 0;
  v103 = v38;
  v37->m128i_i64[0] = (__int64)v37[1].m128i_i64;
  v37->m128i_i64[1] = 0;
  v39 = v103;
  if ( 0x7FFFFFFFFFFFFFFFLL - v103 <= 2 )
    goto LABEL_125;
  v40 = v103 + 3;
  if ( v102 == &v104 )
    v41 = 15;
  else
    v41 = v104.m128i_i64[0];
  if ( v40 > v41 )
  {
    v71 = v103 + 3;
    sub_998B30((__int64)&v102, v103, 0, "\")'", 3u);
    v40 = v71;
  }
  else
  {
    v42 = (char *)v102 + v103;
    *(_WORD *)v42 = 10530;
    v42[2] = 39;
  }
  v103 = v40;
  *((_BYTE *)v102 + v39 + 3) = 0;
  v43 = (__m128i *)v102;
  v105 = &v107;
  if ( v102 == &v104 )
  {
    v43 = &v107;
    v107 = _mm_load_si128(&v104);
  }
  else
  {
    v105 = v102;
    v107.m128i_i64[0] = v104.m128i_i64[0];
  }
  v44 = v103;
  v103 = 0;
  v102 = &v104;
  v106 = v44;
  v104.m128i_i8[0] = 0;
  if ( v111 )
  {
    sub_AEC220(v110, v43, v44);
LABEL_96:
    if ( v111 )
    {
      sub_AE9DF0(v110, 1, 2u);
    }
    else if ( v113 )
    {
      v53 = sub_168B9E0(v108);
      v57 = (__int64)v109;
      if ( v109 )
      {
        v73 = v53;
        v57 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v109 + 32LL))(v109);
        v53 = v73;
      }
      v74 = v57;
      v58 = sub_1587BC0(v53, &v74, v53, v54, v55, v56);
      sub_AE9DF0((unsigned __int8 **)(*v58 + 32LL * v112 + 8), 1, 2u);
    }
    goto LABEL_56;
  }
  if ( v113 )
  {
    v47 = sub_168B9E0(v108);
    v51 = (__int64)v109;
    if ( v109 )
    {
      v72 = v47;
      v51 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v109 + 32LL))(v109);
      v47 = v72;
    }
    v74 = v51;
    v52 = sub_1587BC0(v47, &v74, v47, v48, v49, v50);
    sub_AEC220((unsigned __int8 **)(*v52 + 32LL * v112 + 8), v105, v106);
    goto LABEL_96;
  }
LABEL_56:
  if ( v105 != &v107 )
    operator delete(v105);
  if ( v102 != &v104 )
    operator delete(v102);
  if ( v96 != &v98 )
    operator delete(v96);
  if ( v93 != &v95 )
    operator delete(v93);
  if ( v87 != v89 )
    operator delete(v87);
  if ( v90 != v92 )
    operator delete(v90);
  if ( v99 != v101 )
    operator delete(v99);
  if ( v84 != &v86 )
    operator delete(v84);
  if ( v81 != &v83 )
    operator delete(v81);
  if ( v75 != v77 )
    operator delete(v75);
  if ( src != v80 )
    operator delete(src);
  sub_15F7200(v108);
  result = (_DWORD *)a1[2];
  *((_BYTE *)result + 58) |= 1u;
  return result;
}
