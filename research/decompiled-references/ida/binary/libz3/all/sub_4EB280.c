__int64 __fastcall sub_4EB280(
        __int64 a1,
        __int64 a2,
        const void *a3,
        _QWORD *a4,
        unsigned int a5,
        __int32 *a6,
        __int32 *a7)
{
  __int64 v9; // r13
  __int32 *v10; // r12
  __int32 *v11; // rbx
  _QWORD *v12; // rax
  _DWORD *v13; // rdx
  _QWORD *v14; // rax
  int v15; // ecx
  int v16; // edi
  __int64 v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // r8d
  size_t v20; // rsi
  unsigned int *v21; // rdx
  __int64 v22; // rdx
  unsigned int *v23; // rax
  __int32 *v24; // rbx
  unsigned int *v25; // rdx
  unsigned int v26; // ecx
  int v27; // edi
  __int64 v28; // rax
  unsigned int v29; // ecx
  unsigned int v30; // r9d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rax
  unsigned int v34; // ebx
  _QWORD *v35; // rax
  _DWORD *v36; // rcx
  unsigned int v37; // edx
  size_t v38; // rsi
  unsigned int *v39; // rax
  unsigned int v40; // eax
  _BYTE *v41; // rcx
  __int64 v42; // rdx
  _BYTE *v43; // rax
  __int64 v44; // rax
  _BYTE *v45; // rdx
  _BYTE *v46; // rax
  bool v47; // al
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rdi
  _QWORD *v51; // rax
  __int8 v52; // dl
  const __m128i *v53; // rbx
  __m128i *v54; // rax
  __int32 v55; // eax
  __int64 v56; // rax
  __int32 v57; // eax
  __int64 v58; // rax
  unsigned int v59; // r15d
  size_t v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  _DWORD *v64; // rsi
  __m128i *v65; // rdx
  const __m128i *v66; // rax
  const __m128i *v67; // rcx
  bool v68; // zf
  __int64 v69; // r13
  __int64 v70; // r15
  const __m128i *v71; // r13
  const __m128i *v72; // rdi
  size_t v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rcx
  __m128i *v76; // rdx
  _DWORD *v77; // rsi
  const __m128i *v78; // rax
  const __m128i *v79; // rcx
  __int64 v80; // r13
  const __m128i *v81; // r13
  const __m128i *v82; // rdi
  __m128i v83; // xmm0
  __int32 v84; // eax
  _QWORD *v85; // rax
  _QWORD *v86; // rax
  __int32 v87; // ecx
  __int64 result; // rax
  __int64 v89; // r15
  __int64 v90; // rsi
  __int64 v91; // rax
  const __m128i *v92; // r12
  const __m128i *v93; // rax
  const __m128i *v94; // r15
  __int64 v95; // rax
  char **v96; // r12
  char **exception; // rbx
  char **v98; // r12
  char **v99; // r12
  char **v100; // r12
  int v102; // [rsp+Ch] [rbp-B4h]
  int v103; // [rsp+10h] [rbp-B0h]
  const __m128i *v105; // [rsp+20h] [rbp-A0h]
  const __m128i *v106; // [rsp+20h] [rbp-A0h]
  const __m128i *v107; // [rsp+28h] [rbp-98h]
  unsigned int v108; // [rsp+28h] [rbp-98h]
  __int64 v109; // [rsp+30h] [rbp-90h]
  __int32 *v110; // [rsp+30h] [rbp-90h]
  unsigned int v112; // [rsp+38h] [rbp-88h]
  __int64 v113; // [rsp+38h] [rbp-88h]
  unsigned int v114; // [rsp+40h] [rbp-80h]
  unsigned int v115; // [rsp+40h] [rbp-80h]
  __int32 *v116; // [rsp+48h] [rbp-78h]
  unsigned int v117; // [rsp+48h] [rbp-78h]
  __int32 *v118; // [rsp+48h] [rbp-78h]
  __m128i v119; // [rsp+60h] [rbp-60h] BYREF
  __int64 v120[10]; // [rsp+70h] [rbp-50h] BYREF

  v9 = a5;
  *(_QWORD *)a1 = qword_1C66790;
  v10 = a7;
  *(_DWORD *)(a1 + 8) = a5;
  *(_QWORD *)(a1 + 16) = 0;
  if ( !a5 )
  {
    v95 = a4[2];
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
    if ( !v95 )
    {
      *(_BYTE *)(a1 + 33) = 0;
      goto LABEL_101;
    }
    v34 = *(_DWORD *)(v95 - 4);
    *(_BYTE *)(a1 + 33) = 0;
    if ( !v34 )
      goto LABEL_101;
    goto LABEL_18;
  }
  v116 = a6;
  v109 = a5;
  v11 = &a6[v109];
  v12 = (_QWORD *)sub_186B270(0x10u);
  v13 = v12 + 1;
  *(_QWORD *)(a1 + 16) = v12 + 1;
  *v12 = 2;
  v14 = v12 + 1;
  while ( 1 )
  {
    v15 = *v116++;
    *v13 = v15;
    v16 = *((_DWORD *)v14 - 1);
    v17 = (unsigned int)(v16 + 1);
    *((_DWORD *)v14 - 1) = v17;
    if ( v11 == v116 )
      break;
    v18 = *((_DWORD *)v14 - 2);
    if ( v18 == (_DWORD)v17 )
    {
      v19 = (3 * v18 + 1) >> 1;
      v20 = 4 * v19 + 8;
      if ( 4 * v16 + 12 >= (unsigned int)v20 || v18 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v120, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v120);
        sub_233E40((__int64)v120);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v114 = (3 * v18 + 1) >> 1;
      v21 = (unsigned int *)sub_186B300(v14 - 1, v20);
      v14 = v21 + 2;
      *v21 = v114;
      v22 = v21[1];
      *(_QWORD *)(a1 + 16) = v14;
      v13 = (_DWORD *)v14 + v22;
    }
    else
    {
      v13 = (_DWORD *)v14 + v17;
    }
  }
  *(_QWORD *)(a1 + 24) = 0;
  v23 = (unsigned int *)(sub_186B270(0x10u) + 8);
  v24 = a7;
  *((_QWORD *)v23 - 1) = 2;
  v25 = v23;
  *(_QWORD *)(a1 + 24) = v23;
  while ( 1 )
  {
    v26 = *v24++;
    *v23 = v26;
    v27 = *(v25 - 1);
    v28 = (unsigned int)(v27 + 1);
    *(v25 - 1) = v28;
    if ( &a7[v109] == v24 )
      break;
    v29 = *(v25 - 2);
    if ( v29 == (_DWORD)v28 )
    {
      v30 = (3 * v29 + 1) >> 1;
      v31 = 4 * v30 + 8;
      if ( 4 * v27 + 12 >= (unsigned int)v31 || v29 >= v30 )
      {
        v98 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v120, "Overflow encountered when expanding vector");
        *v98 = (char *)off_1C63128;
        sub_2333C0(v98 + 1, v120);
        sub_233E40((__int64)v120);
        __cxa_throw(v98, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v115 = (3 * v29 + 1) >> 1;
      v32 = (unsigned int *)sub_186B300(v25 - 2, v31);
      v25 = v32 + 2;
      *(_QWORD *)(a1 + 24) = v32 + 2;
      *v32 = v115;
      v23 = &v32[v32[1] + 2];
    }
    else
    {
      v23 = &v25[v28];
    }
  }
  *(_QWORD *)(a1 + 40) = 0;
  v33 = a4[2];
  if ( !v33 )
  {
    *(_BYTE *)(a1 + 33) = 0;
    goto LABEL_95;
  }
  v34 = *(_DWORD *)(v33 - 4);
  *(_BYTE *)(a1 + 33) = 0;
  if ( !v34 )
  {
LABEL_95:
    v41 = nullptr;
    v34 = 0;
    goto LABEL_24;
  }
LABEL_18:
  v35 = (_QWORD *)sub_186B270(0xAu);
  v36 = v35 + 1;
  *v35 = 2;
  *(_QWORD *)(a1 + 40) = v35 + 1;
  while ( 1 )
  {
    v40 = *(v36 - 2);
    if ( v40 >= v34 )
      break;
    v37 = (3 * v40 + 1) >> 1;
    v38 = v37 + 8;
    v117 = v37;
    if ( v40 + 8 >= (unsigned int)v38 || v40 >= v37 )
    {
      v99 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v120, "Overflow encountered when expanding vector");
      *v99 = (char *)off_1C63128;
      sub_2333C0(v99 + 1, v120);
      sub_233E40((__int64)v120);
      __cxa_throw(v99, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v39 = (unsigned int *)sub_186B300(v36 - 2, v38);
    v36 = v39 + 2;
    *(_QWORD *)(a1 + 40) = v39 + 2;
    *v39 = v117;
  }
  *(v36 - 1) = v34;
  v41 = memset(v36, 0, v34);
  if ( !(_DWORD)v9 )
  {
LABEL_37:
    v47 = 0;
    goto LABEL_38;
  }
LABEL_24:
  v42 = 0;
  do
  {
    while ( 1 )
    {
      v43 = &v41[a7[v42]];
      if ( !*v43 )
        break;
      ++v42;
      *(_BYTE *)(a1 + 33) = 1;
      *v43 = 1;
      if ( (unsigned int)v42 >= (unsigned int)v9 )
      {
        if ( (unsigned int)v9 < v34 )
          goto LABEL_37;
        goto LABEL_28;
      }
    }
    ++v42;
    *v43 = 1;
  }
  while ( (unsigned int)v42 < (unsigned int)v9 );
  if ( (unsigned int)v9 < v34 )
    goto LABEL_37;
LABEL_28:
  if ( !v41 )
    goto LABEL_101;
  v44 = *((unsigned int *)v41 - 1);
  v45 = &v41[v44];
  if ( v44 >> 2 )
  {
    v46 = &v41[4 * (v44 >> 2)];
    while ( *v41 )
    {
      if ( !v41[1] )
      {
        ++v41;
        goto LABEL_36;
      }
      if ( !v41[2] )
      {
        v41 += 2;
        goto LABEL_36;
      }
      if ( !v41[3] )
      {
        v41 += 3;
        goto LABEL_36;
      }
      v41 += 4;
      if ( v41 == v46 )
      {
        v44 = v45 - v41;
        goto LABEL_107;
      }
    }
    goto LABEL_36;
  }
LABEL_107:
  if ( v44 == 2 )
    goto LABEL_98;
  if ( v44 == 3 )
  {
    if ( !*v41 )
      goto LABEL_36;
    ++v41;
LABEL_98:
    if ( *v41 )
    {
      ++v41;
      goto LABEL_100;
    }
LABEL_36:
    v47 = v45 == v41;
    goto LABEL_38;
  }
  if ( v44 != 1 )
    goto LABEL_101;
LABEL_100:
  if ( !*v41 )
    goto LABEL_36;
LABEL_101:
  v47 = 1;
LABEL_38:
  *(_BYTE *)(a1 + 32) = v47;
  v48 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)a1 = &off_1C4FC30;
  *(_QWORD *)(a1 + 48) = a2;
  v49 = sub_4D6490(v48);
  *(_QWORD *)(a1 + 56) = 0;
  v50 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 64) = v49;
  v103 = sub_4D6490(v50);
  v102 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 40) + 16LL))(*(_QWORD *)(a2 + 40));
  if ( (_DWORD)v9 )
  {
    v119.m128i_i8[8] = 0;
    v119.m128i_i32[0] = *a6;
    v51 = (_QWORD *)sub_186B270(0x28u);
    v118 = a6;
    v52 = 0;
    v53 = (const __m128i *)(v51 + 1);
    v110 = &a6[v9];
    *v51 = 2;
    v54 = (__m128i *)(v51 + 1);
LABEL_40:
    *v54 = _mm_load_si128(&v119);
    if ( v52 )
    {
      v119.m128i_i32[0] = 0;
      v119.m128i_i8[8] = 0;
      goto LABEL_42;
    }
    while ( 1 )
    {
      v119.m128i_i32[0] = 0;
LABEL_42:
      ++v53[-1].m128i_i32[3];
      sub_15D0DF0(&v119);
      v55 = *v10;
      v119.m128i_i8[8] = 0;
      v119.m128i_i32[0] = v55;
      v56 = v53[-1].m128i_u32[3];
      if ( (_DWORD)v56 != v53[-1].m128i_i32[2] )
        break;
      v108 = (unsigned int)(3 * v56 + 1) >> 1;
      v73 = 16 * v108 + 8;
      if ( 16 * (int)v56 + 8 >= (unsigned int)v73 || (unsigned int)v56 >= (unsigned int)(3 * v56 + 1) >> 1 )
      {
        v100 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v120, "Overflow encountered when expanding vector");
        *v100 = (char *)off_1C63128;
        sub_2333C0(v100 + 1, v120);
        sub_233E40((__int64)v120);
        __cxa_throw(v100, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v74 = sub_186B270(v73);
      v75 = v53[-1].m128i_u32[3];
      v76 = (__m128i *)(v74 + 8);
      v77 = (_DWORD *)v74;
      v113 = v74 + 8;
      *(_DWORD *)(v74 + 4) = v75;
      v78 = v53;
      v79 = &v53[v75];
      if ( v53 != v79 )
      {
        do
        {
          v68 = v78->m128i_i8[8] == 0;
          *v76 = _mm_loadu_si128(v78);
          v78->m128i_i32[0] = 0;
          if ( !v68 )
            v78->m128i_i8[8] = 0;
          ++v78;
          ++v76;
        }
        while ( v79 != v78 );
      }
      v80 = v53[-1].m128i_u32[3];
      if ( (_DWORD)v80 )
      {
        v106 = v53;
        v81 = &v53[v80];
        do
        {
          v82 = v53++;
          sub_15D0DF0(v82);
        }
        while ( v53 != v81 );
        v53 = v106;
      }
      sub_186B220(&v53[-1].m128i_u64[1]);
      v83 = _mm_load_si128(&v119);
      *v77 = v108;
      v68 = v119.m128i_i8[8] == 0;
      *(__m128i *)(v113 + 16LL * (unsigned int)v77[1]) = v83;
      if ( v68 )
      {
        v53 = (const __m128i *)v113;
        goto LABEL_44;
      }
      ++v77[1];
      ++v10;
      v119.m128i_i32[0] = 0;
      v119.m128i_i8[8] = 0;
      sub_15D0DF0(&v119);
      if ( v110 == ++v118 )
      {
        v53 = (const __m128i *)v113;
        goto LABEL_77;
      }
      v84 = *v118;
      v53 = (const __m128i *)v113;
      v119.m128i_i8[8] = 0;
      v119.m128i_i32[0] = v84;
LABEL_46:
      v58 = v53[-1].m128i_u32[3];
      if ( (_DWORD)v58 == v53[-1].m128i_i32[2] )
      {
        v59 = (unsigned int)(3 * v58 + 1) >> 1;
        v112 = v59;
        v60 = 16 * v59 + 8;
        if ( 16 * (int)v58 + 8 >= (unsigned int)v60 || (unsigned int)v58 >= v59 )
        {
          v96 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v120, "Overflow encountered when expanding vector");
          *v96 = (char *)off_1C63128;
          sub_2333C0(v96 + 1, v120);
          sub_233E40((__int64)v120);
          __cxa_throw(v96, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v61 = sub_186B270(v60);
        v62 = v53[-1].m128i_u32[3];
        v63 = v61 + 8;
        v64 = (_DWORD *)v61;
        v65 = (__m128i *)(v61 + 8);
        *(_DWORD *)(v61 + 4) = v62;
        v66 = v53;
        v67 = &v53[v62];
        if ( v67 != v53 )
        {
          do
          {
            v68 = v66->m128i_i8[8] == 0;
            *v65 = _mm_loadu_si128(v66);
            v66->m128i_i32[0] = 0;
            if ( !v68 )
              v66->m128i_i8[8] = 0;
            ++v66;
            ++v65;
          }
          while ( v67 != v66 );
        }
        v69 = v53[-1].m128i_u32[3];
        if ( (_DWORD)v69 )
        {
          v107 = v53;
          v70 = v63;
          v71 = &v53[v69];
          do
          {
            v72 = v53++;
            sub_15D0DF0(v72);
          }
          while ( v53 != v71 );
          v53 = v107;
          v63 = v70;
        }
        v105 = (const __m128i *)v63;
        sub_186B220(&v53[-1].m128i_u64[1]);
        v52 = v119.m128i_i8[8];
        *v64 = v112;
        v53 = v105;
        v54 = (__m128i *)&v105[v64[1]];
        goto LABEL_40;
      }
      v53[v58] = _mm_load_si128(&v119);
    }
    v53[v56] = _mm_load_si128(&v119);
LABEL_44:
    ++v53[-1].m128i_i32[3];
    ++v10;
    v119.m128i_i32[0] = 0;
    sub_15D0DF0(&v119);
    if ( v110 == ++v118 )
      goto LABEL_77;
    v57 = *v118;
    v119.m128i_i8[8] = 0;
    v119.m128i_i32[0] = v57;
    goto LABEL_46;
  }
  v53 = nullptr;
LABEL_77:
  v85 = __dynamic_cast(
          a3,
          (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
          (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
          0);
  if ( !v85 )
    __cxa_bad_cast();
  v120[0] = sub_15D1F10(v85[4]);
  v86 = __dynamic_cast(
          a4,
          (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
          (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
          0);
  if ( !v86 )
    __cxa_bad_cast();
  v120[1] = sub_15D1F10(v86[4]);
  if ( v53 )
    v87 = v53[-1].m128i_i32[3];
  else
    v87 = 0;
  result = sub_15D2D10(v103, v102, 8, v87, (_DWORD)v53, 2, (__int64)v120, 0);
  v89 = result;
  if ( result )
    ++*(_DWORD *)(result + 8);
  v90 = *(_QWORD *)(a1 + 56);
  if ( v90 )
  {
    v68 = (*(_DWORD *)(v90 + 8))-- == 1;
    if ( v68 )
      result = sub_15D7BC0(*(_QWORD *)(a1 + 64), v90);
  }
  *(_QWORD *)(a1 + 56) = v89;
  if ( v53 )
  {
    v91 = v53[-1].m128i_u32[3];
    if ( (_DWORD)v91 )
    {
      v92 = &v53[v91];
      v93 = v53;
      do
      {
        v94 = v93;
        sub_15D0DF0(v93);
        v93 = v94 + 1;
      }
      while ( &v94[1] != v92 );
    }
    return sub_186B220(&v53[-1].m128i_u64[1]);
  }
  return result;
}

