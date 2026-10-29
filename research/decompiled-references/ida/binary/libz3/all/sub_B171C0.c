unsigned int *__fastcall sub_B171C0(__int64 a1, unsigned int **a2, __int64 *a3, unsigned int **a4)
{
  unsigned int *v6; // rsi
  __int64 v7; // rdx
  unsigned int *result; // rax
  unsigned int v9; // edi
  int v10; // esi
  unsigned int v11; // ecx
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // r12d
  _QWORD *v15; // rbx
  unsigned __int64 v16; // xmm0_8
  const double *v17; // r12
  __m128i v18; // xmm0
  __m128i *v19; // r14
  __int64 v20; // rax
  int v21; // ecx
  unsigned __int64 *v22; // rax
  __int64 v23; // rdi
  unsigned int v24; // esi
  __int64 v25; // r13
  unsigned __int64 v26; // r15
  unsigned int v27; // ecx
  unsigned int v28; // edx
  size_t v29; // rsi
  _DWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int *v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  __m128i *v38; // r15
  _QWORD *v39; // rbx
  const double *v40; // r12
  __m128i v41; // xmm0
  __int64 v42; // rax
  int v43; // ecx
  unsigned __int64 *v44; // rax
  __int64 v45; // rdi
  unsigned int v46; // esi
  __m128i v47; // kr10_16
  unsigned __int64 v48; // rdx
  unsigned int v49; // ecx
  unsigned int v50; // r9d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __m128i *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int *v56; // rbp
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rax
  int v60; // r12d
  unsigned int v61; // ebx
  unsigned int v62; // r13d
  int v63; // eax
  int v64; // eax
  __int32 v65; // eax
  unsigned int *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 *v69; // rsi
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // ecx
  unsigned int **v74; // rbx
  int v75; // eax
  int v76; // eax
  __int32 v77; // eax
  int v78; // eax
  unsigned int **v79; // rbx
  unsigned int *v80; // rax
  __int64 *v81; // rbx
  __int64 v82; // rcx
  int v83; // ecx
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  unsigned int *v86; // rsi
  char **v87; // r15
  char **exception; // r12
  __int64 v90; // [rsp+8h] [rbp-110h]
  __m128i v91; // [rsp+10h] [rbp-108h] BYREF
  __m128i v92; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v93; // [rsp+30h] [rbp-E8h]
  __m128i *v94; // [rsp+38h] [rbp-E0h]
  __int64 v95; // [rsp+40h] [rbp-D8h]
  unsigned int **v96; // [rsp+48h] [rbp-D0h]
  __int64 *v97; // [rsp+50h] [rbp-C8h]
  unsigned int **v98; // [rsp+58h] [rbp-C0h]
  __int64 v99; // [rsp+60h] [rbp-B8h]
  __int64 *v100; // [rsp+68h] [rbp-B0h]
  unsigned int v101; // [rsp+70h] [rbp-A8h]
  unsigned int v102; // [rsp+74h] [rbp-A4h]
  __int64 v103; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v104; // [rsp+88h] [rbp-90h] BYREF
  __m128i v105; // [rsp+90h] [rbp-88h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-78h] BYREF
  _QWORD *v107; // [rsp+A8h] [rbp-70h]
  __m128i v108; // [rsp+B0h] [rbp-68h] BYREF
  unsigned __int64 v109; // [rsp+C0h] [rbp-58h] BYREF
  unsigned int v110; // [rsp+C8h] [rbp-50h]

  v96 = a2;
  v6 = *a2;
  v97 = a3;
  v98 = a4;
  sub_B0E5E0(a4, v6);
  v7 = *a3;
  result = *a2;
  if ( !*a3 )
  {
    if ( result )
    {
      v102 = 0;
      v10 = *(result - 1);
      v83 = 0;
      goto LABEL_89;
    }
    goto LABEL_103;
  }
  v9 = *(_DWORD *)(v7 - 4);
  v102 = v9;
  if ( result )
  {
    v10 = *(result - 1);
    v11 = v10 - 1;
    if ( v9 <= v10 - 1 )
      v11 = v9;
    v102 = v11;
    if ( !v11 )
    {
LABEL_88:
      v83 = *(_DWORD *)(v7 - 4);
      goto LABEL_89;
    }
    goto LABEL_6;
  }
  if ( !v102 )
  {
LABEL_103:
    v103 = 0;
    goto LABEL_99;
  }
LABEL_6:
  v95 = 0;
  v12 = 0;
  v103 = v102;
  v99 = 4LL * v102;
  while ( 2 )
  {
    v13 = *(unsigned int *)((char *)result + v12 + 4);
    v14 = *(_DWORD *)(v7 + v12);
    v93 = v12 + 4;
    if ( v13 == v14 )
    {
      v91.m128i_i32[0] = v14;
      v62 = v14;
      v61 = v14;
      goto LABEL_41;
    }
    v15 = nullptr;
    v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(v14)).m128i_u64[0];
    v17 = *(const double **)(a1 + 8);
    ++*(_DWORD *)(a1 + 20);
    v104 = v16;
    v18 = (__m128i)_mm_loadh_ps(v17 + 1);
    v106 = *((_QWORD *)v17 + 1);
    v94 = (__m128i *)&v104;
    v19 = (__m128i *)&v104;
    do
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)v17;
        v24 = v19->m128i_i32[0];
        v105 = v18;
        sub_894B80(v23, v24, v105.m128i_i64);
        v25 = v105.m128i_i64[1];
        v18 = _mm_load_si128(&v105);
        v90 = v105.m128i_i64[0];
        v26 = v18.m128i_i64[0];
        if ( v18.m128i_i64[0] )
          ++*(_DWORD *)(v18.m128i_i64[0] + 8);
        if ( !v15 )
        {
          v91 = v18;
          v84 = (_QWORD *)sub_186B270(0x18u);
          v15 = v84 + 1;
          v18 = _mm_load_si128(&v91);
          v21 = 1;
          *v84 = 2;
          v22 = v84 + 1;
          goto LABEL_10;
        }
        v27 = *((_DWORD *)v15 - 1);
        if ( v27 == *((_DWORD *)v15 - 2) )
          break;
        v20 = v27;
        v21 = v27 + 1;
        v22 = &v15[v20];
LABEL_10:
        v19 = (__m128i *)((char *)v19 + 4);
        *v22 = v26;
        *((_DWORD *)v15 - 1) = v21;
        if ( &v105 == v19 )
          goto LABEL_18;
      }
      v28 = (3 * v27 + 1) >> 1;
      v29 = 8 * v28 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v29 || v27 >= v28 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B035D0((__int64 *)&v109, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v109);
        sub_233E40((__int64)&v109);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v91.m128i_i32[0] = (3 * v27 + 1) >> 1;
      v92 = v18;
      v30 = (_DWORD *)sub_186B300(v15 - 1, v29);
      v15 = v30 + 2;
      v19 = (__m128i *)((char *)v19 + 4);
      v18 = _mm_load_si128(&v92);
      *v30 = v91.m128i_i32[0];
      v31 = (unsigned int)v30[1];
      v15[v31] = v26;
      *((_DWORD *)v15 - 1) = v31 + 1;
    }
    while ( &v105 != v19 );
LABEL_18:
    v32 = sub_15E1AF0(*((_QWORD *)v17 + 1));
    v33 = (unsigned int *)v32;
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    sub_B035B0(v90, v25);
    v34 = *(_QWORD *)(*(_QWORD *)v17 + 8832LL);
    if ( !v34
      || (v35 = *v33, (unsigned int)v35 >= *(_DWORD *)(v34 - 4))
      || (v36 = *(_DWORD *)(v34 + 4 * v35), v36 == 0x7FFFFFFF) )
    {
      v36 = sub_B67520(*(_QWORD *)v17, v33);
    }
    v91.m128i_i32[0] = 2 * v36;
    sub_B035B0((__int64)v33, v25);
    v107 = v15;
    v100 = &v106;
    sub_2334C0(&v106);
    v14 = *(unsigned int *)((char *)*v96 + v93);
    v37 = *(_DWORD *)(*v97 + v95);
    if ( v37 == v14 )
    {
      v62 = *(unsigned int *)((char *)*v96 + v93);
      v61 = v62;
      goto LABEL_41;
    }
    v38 = v94;
    v39 = nullptr;
    LODWORD(v104) = *(unsigned int *)((char *)*v96 + v93);
    v40 = *(const double **)(a1 + 8);
    HIDWORD(v104) = v37;
    ++*(_DWORD *)(a1 + 20);
    v41 = (__m128i)_mm_loadh_ps(v40 + 1);
    v106 = *((_QWORD *)v40 + 1);
    while ( 2 )
    {
      while ( 2 )
      {
        v45 = *(_QWORD *)v40;
        v46 = v38->m128i_i32[0];
        v108 = v41;
        sub_894B80(v45, v46, v108.m128i_i64);
        v47 = v108;
        v41 = _mm_load_si128(&v108);
        v48 = v41.m128i_i64[0];
        if ( v41.m128i_i64[0] )
          ++*(_DWORD *)(v41.m128i_i64[0] + 8);
        if ( !v39 )
        {
          v94 = (__m128i *)v41.m128i_i64[0];
          v92 = v41;
          v85 = (_QWORD *)sub_186B270(0x18u);
          v41 = _mm_load_si128(&v92);
          v48 = (unsigned __int64)v94;
          v43 = 1;
          *v85 = 2;
          v39 = v85 + 1;
          v44 = v85 + 1;
LABEL_26:
          v38 = (__m128i *)((char *)v38 + 4);
          *v44 = v48;
          *((_DWORD *)v39 - 1) = v43;
          if ( v38 == &v105 )
            goto LABEL_34;
          continue;
        }
        break;
      }
      v49 = *((_DWORD *)v39 - 1);
      if ( v49 != *((_DWORD *)v39 - 2) )
      {
        v42 = v49;
        v43 = v49 + 1;
        v44 = &v39[v42];
        goto LABEL_26;
      }
      v50 = (3 * v49 + 1) >> 1;
      v51 = 8 * v50 + 8;
      if ( 8 * v49 + 8 >= (unsigned int)v51 || v49 >= v50 )
      {
        v87 = (char **)__cxa_allocate_exception(0x28u);
        sub_B035D0((__int64 *)&v109, "Overflow encountered when expanding vector");
        *v87 = (char *)off_1C63128;
        sub_2333C0(v87 + 1, &v109);
        sub_233E40((__int64)&v109);
        __cxa_throw(v87, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v101 = (3 * v49 + 1) >> 1;
      v94 = (__m128i *)v41.m128i_i64[0];
      v92 = v41;
      v52 = (unsigned int *)sub_186B300(v39 - 1, v51);
      v39 = v52 + 2;
      v53 = v94;
      v38 = (__m128i *)((char *)v38 + 4);
      v41 = _mm_load_si128(&v92);
      *v52 = v101;
      v54 = v52[1];
      v39[v54] = v53;
      *((_DWORD *)v39 - 1) = v54 + 1;
      if ( v38 != &v105 )
        continue;
      break;
    }
LABEL_34:
    v55 = sub_15E1AF0(*((_QWORD *)v40 + 1));
    v56 = (unsigned int *)v55;
    if ( v55 )
      ++*(_DWORD *)(v55 + 8);
    sub_B035B0(v47.m128i_i64[0], v47.m128i_i64[1]);
    v57 = *(_QWORD *)v40;
    v58 = *(_QWORD *)(*(_QWORD *)v40 + 8832LL);
    if ( !v58
      || (v59 = *v56, (unsigned int)v59 >= *(_DWORD *)(v58 - 4))
      || (v60 = *(_DWORD *)(v58 + 4 * v59), v60 == 0x7FFFFFFF) )
    {
      v60 = sub_B67520(v57, v56);
    }
    v14 = 2 * v60;
    sub_B035B0((__int64)v56, v47.m128i_i64[1]);
    v107 = v39;
    sub_2334C0(v100);
    v61 = *(unsigned int *)((char *)*v96 + v93);
    v62 = *(_DWORD *)(*v97 + v95);
LABEL_41:
    switch ( *(_DWORD *)(a1 + 16) )
    {
      case 0:
      case 4:
        v70 = dword_1C7ED20;
        if ( dword_1C7ED24 != v61 )
        {
          v70 = dword_1C7ED24;
          if ( v61 != dword_1C7ED20 )
            v70 = v61 ^ 1;
        }
        v109 = __PAIR64__(v91.m128i_u32[0], v70);
        goto LABEL_61;
      case 1:
      case 3:
        v63 = dword_1C7ED20;
        if ( v14 != dword_1C7ED24 )
        {
          v63 = dword_1C7ED24;
          if ( v14 != dword_1C7ED20 )
            v63 = v14 ^ 1;
        }
        v109 = __PAIR64__(v61, v63);
        sub_B0DE40(a1, &v109);
        v64 = dword_1C7ED20;
        if ( v14 != dword_1C7ED24 )
        {
          v64 = dword_1C7ED24;
          if ( v14 != dword_1C7ED20 )
            v64 = v14 ^ 1;
        }
        v109 = __PAIR64__(v62, v64);
        sub_B0DE40(a1, &v109);
        v65 = dword_1C7ED20;
        if ( dword_1C7ED24 != v91.m128i_i32[0] )
        {
          v65 = dword_1C7ED24;
          if ( v91.m128i_i32[0] != dword_1C7ED20 )
            v65 = v91.m128i_i32[0] ^ 1;
        }
        v109 = __PAIR64__(v61, v65);
        v110 = v62;
        sub_B0DC80(a1, &v109);
        goto LABEL_52;
      case 2:
        v75 = dword_1C7ED20;
        if ( v14 != dword_1C7ED24 )
        {
          v75 = dword_1C7ED24;
          if ( v14 != dword_1C7ED20 )
            v75 = v14 ^ 1;
        }
        v109 = __PAIR64__(v61, v75);
        sub_B0DE40(a1, &v109);
        v76 = dword_1C7ED20;
        if ( v14 != dword_1C7ED24 )
        {
          v76 = dword_1C7ED24;
          if ( v14 != dword_1C7ED20 )
            v76 = v14 ^ 1;
        }
        v109 = __PAIR64__(v62, v76);
        sub_B0DE40(a1, &v109);
        v77 = dword_1C7ED20;
        if ( dword_1C7ED24 != v91.m128i_i32[0] )
        {
          v77 = dword_1C7ED24;
          if ( v91.m128i_i32[0] != dword_1C7ED20 )
            v77 = v91.m128i_i32[0] ^ 1;
        }
        v109 = __PAIR64__(v61, v77);
        v110 = v62;
        sub_B0DC80(a1, &v109);
        v78 = dword_1C7ED20;
        if ( dword_1C7ED24 != v61 )
        {
          v78 = dword_1C7ED24;
          if ( v61 != dword_1C7ED20 )
            v78 = v61 ^ 1;
        }
        v109 = __PAIR64__(v91.m128i_u32[0], v78);
LABEL_61:
        sub_B0DE40(a1, &v109);
        v71 = dword_1C7ED20;
        if ( dword_1C7ED24 != v62 )
        {
          v71 = dword_1C7ED24;
          if ( v62 != dword_1C7ED20 )
            v71 = v62 ^ 1;
        }
        v109 = __PAIR64__(v91.m128i_u32[0], v71);
        sub_B0DE40(a1, &v109);
        v72 = dword_1C7ED20;
        v73 = dword_1C7ED20;
        if ( dword_1C7ED24 != v62 )
        {
          v73 = v62 ^ 1;
          if ( v62 == dword_1C7ED20 )
            v73 = dword_1C7ED24;
        }
        if ( dword_1C7ED24 != v61 )
        {
          v72 = dword_1C7ED24;
          if ( v61 != dword_1C7ED20 )
            v72 = v61 ^ 1;
        }
        v109 = __PAIR64__(v73, v72);
        v110 = v14;
        sub_B0DC80(a1, &v109);
        v66 = *v98;
        if ( !*v98 )
          goto LABEL_71;
        goto LABEL_53;
      default:
LABEL_52:
        v66 = *v98;
        if ( !*v98 )
          goto LABEL_71;
LABEL_53:
        v67 = *(v66 - 1);
        if ( (_DWORD)v67 == *(v66 - 2) )
        {
LABEL_71:
          v74 = v98;
          sub_692C60(v98);
          v66 = *v74;
          v67 = *(*v74 - 1);
        }
        v66[v67] = v91.m128i_i32[0];
        v68 = *(v66 - 1) + 1;
        *(v66 - 1) = v68;
        if ( *(v66 - 2) == (_DWORD)v68 )
        {
          v79 = v98;
          sub_692C60(v98);
          v80 = *v79;
          v81 = v97;
          v82 = v99;
          v80[*(v80 - 1)] = v14;
          v7 = *v81;
          ++*(v80 - 1);
          result = *v96;
          if ( v93 != v82 )
          {
LABEL_56:
            v95 = v93;
            v12 = v93;
            continue;
          }
        }
        else
        {
          v66[v68] = v14;
          v69 = v97;
          ++*(v66 - 1);
          v7 = *v69;
          result = *v96;
          if ( v93 != v99 )
            goto LABEL_56;
        }
        if ( result )
        {
          v10 = *(result - 1);
          if ( v7 )
            goto LABEL_88;
          v83 = 0;
        }
        else
        {
          if ( !v7 )
            goto LABEL_99;
          v83 = *(_DWORD *)(v7 - 4);
          v10 = 0;
        }
        break;
    }
    break;
  }
LABEL_89:
  if ( v83 == v10 )
  {
    v103 = v102;
LABEL_99:
    v86 = (unsigned int *)(v7 + 4 * v103);
    return sub_B0E5E0(v98, v86);
  }
  if ( v83 + 2 == v10 )
  {
    v86 = &result[v102 + 1];
    return sub_B0E5E0(v98, v86);
  }
  return result;
}

