__int64 __fastcall sub_43EA20(__m128i *a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rax
  unsigned __int8 (__fastcall *v7)(_QWORD); // rax
  _QWORD *v8; // rdi
  unsigned int v9; // eax
  char v10; // r12
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  unsigned __int32 v14; // ecx
  __int64 v15; // r14
  void *v16; // rdi
  __m128i v17; // xmm0
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r14
  char v21; // al
  int v22; // eax
  __int8 *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // rbp
  void *v29; // rdi
  __m128i v30; // xmm0
  int v31; // eax
  _QWORD *v32; // rbx
  _QWORD *v33; // rbp
  void *v34; // rdi
  _QWORD **v35; // rbx
  void *v36; // rdi
  unsigned int v37; // eax
  void *v38; // rax
  __int64 v39; // rsi
  void *v40; // rdi
  void *v41; // rax
  __int64 v42; // rax
  unsigned int v43; // eax
  unsigned int *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 (*v47)(); // rax
  __int64 (__fastcall *v48)(unsigned int **, __int64, unsigned int *); // rax
  unsigned int **v49; // rdi
  __int64 v50; // rax
  __int64 (*v51)(); // rdx
  __int64 (*v52)(); // rax
  __int64 v53; // rax
  _QWORD *v54; // rbp
  unsigned int v55; // r12d
  unsigned int v56; // r15d
  __int64 v57; // rdi
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  _QWORD *v64; // rbp
  _QWORD *v65; // r15
  void *v66; // rdi
  _QWORD **v67; // rbp
  void *v68; // rdi
  _QWORD *v69; // rbp
  _QWORD *v70; // r12
  void *v71; // rdi
  _QWORD **v72; // rbp
  void *v73; // rdi
  unsigned __int64 v74; // [rsp+8h] [rbp-160h]
  __int64 v75; // [rsp+10h] [rbp-158h]
  void *src; // [rsp+18h] [rbp-150h]
  __m128i v77; // [rsp+20h] [rbp-148h] BYREF
  __m128i v78; // [rsp+30h] [rbp-138h] BYREF
  size_t n; // [rsp+40h] [rbp-128h]
  unsigned int v80; // [rsp+48h] [rbp-120h]
  int v81; // [rsp+4Ch] [rbp-11Ch]
  __int64 v82; // [rsp+50h] [rbp-118h]
  __int64 v83; // [rsp+58h] [rbp-110h]
  unsigned int *v84; // [rsp+68h] [rbp-100h] BYREF
  unsigned int v85; // [rsp+70h] [rbp-F8h] BYREF
  __int64 *v86; // [rsp+78h] [rbp-F0h]
  __m128i *v87; // [rsp+80h] [rbp-E8h]
  bool v88; // [rsp+88h] [rbp-E0h]
  int v89; // [rsp+8Ch] [rbp-DCh]
  __int128 v90; // [rsp+90h] [rbp-D8h]
  unsigned int v91; // [rsp+A0h] [rbp-C8h]
  __int64 v92; // [rsp+A4h] [rbp-C4h]
  __int64 v93; // [rsp+B0h] [rbp-B8h] BYREF
  int v94; // [rsp+B8h] [rbp-B0h] BYREF
  void *v95; // [rsp+C0h] [rbp-A8h]
  int *v96; // [rsp+C8h] [rbp-A0h]
  int *v97; // [rsp+D0h] [rbp-98h]
  __int64 v98; // [rsp+D8h] [rbp-90h]
  int v99; // [rsp+E8h] [rbp-80h] BYREF
  void *v100; // [rsp+F0h] [rbp-78h]
  int *v101; // [rsp+F8h] [rbp-70h]
  int *v102; // [rsp+100h] [rbp-68h]
  __int64 v103; // [rsp+108h] [rbp-60h]
  __int8 *v104; // [rsp+110h] [rbp-58h]
  unsigned int *v105; // [rsp+118h] [rbp-50h]
  unsigned __int64 v106; // [rsp+128h] [rbp-40h]

  v4 = a1[41].m128i_u64[0];
  v80 = a2;
  v106 = __readfsqword(0x28u);
  src = nullptr;
  if ( v4 )
  {
    v41 = (void *)qalloc_or_throw(24 * v4, (const char *)a2);
    a2 = a1[40].m128i_i64[1];
    src = v41;
    memcpy(v41, (const void *)a2, 24 * v4);
  }
  v6 = a1[39].m128i_u64[1];
  a1[36].m128i_i8[8] = 0;
  v74 = v6;
  v81 = a3 & 0x10;
  LODWORD(n) = a3 & 0xF;
  if ( (a3 & 0xF) == 0 )
  {
    v7 = (unsigned __int8 (__fastcall *)(_QWORD))a1[20].m128i_i64[1];
    v8 = (__int64 *)((char *)a1->m128i_i64 + a1[21].m128i_i64[0]);
    if ( ((unsigned __int8)v7 & 1) != 0 )
      v7 = *(unsigned __int8 (__fastcall **)(_QWORD))((char *)v7 + *v8 - 1);
    if ( v7(v8) )
    {
      v9 = v80;
      v10 = 0;
      a1[15].m128i_i32[0] = v80;
      v11 = v9;
LABEL_8:
      v12 = a1[36].m128i_u8[8];
      if ( !(_BYTE)v12 )
      {
        v75 = (int)n;
        goto LABEL_14;
      }
    }
    else
    {
LABEL_49:
      v12 = 0;
    }
    goto LABEL_9;
  }
  v75 = (int)n;
  if ( a1[19].m128i_i8[(int)n] )
  {
    v11 = v80;
    v10 = 0;
    goto LABEL_14;
  }
  v82 = (__int64)&a1[40].m128i_i64[1];
  v78.m128i_i32[0] = a3 & 0x20;
  v85 = v80;
  v88 = v78.m128i_i32[0] != 0;
  v92 = 0xFFFFFFFFLL;
  v77.m128i_i64[0] = (__int64)&v94;
  v96 = &v94;
  v97 = &v94;
  v86 = &a1[40].m128i_i64[1];
  v87 = a1;
  v89 = 200;
  v91 = v80;
  v94 = 0;
  v95 = nullptr;
  v98 = 0;
  v99 = 0;
  v100 = nullptr;
  v101 = &v99;
  v102 = &v99;
  v103 = 0;
  v90 = 0;
  *(_QWORD *)&v90 = get_func(v80);
  if ( !(_QWORD)v90 )
  {
    *((_QWORD *)&v90 + 1) = getseg(v91);
    if ( !*((_QWORD *)&v90 + 1) )
    {
      if ( !under_debugger )
        interr(10183);
      BUG();
    }
  }
  v19 = (__int64)&a1->m128i_i64[1] + 4;
  v104 = &a1[36].m128i_i8[9];
  v105 = &a1[36].m128i_u32[3];
  v83 = (__int64)&a1->m128i_i64[1] + 4;
  v20 = (__int64)&a1[(int)n + 20].m128i_i64[1];
  v21 = a1[36].m128i_i8[8];
LABEL_32:
  if ( !v21 )
  {
    v22 = sub_43D520(&v85);
    v23 = v104;
    if ( !*v104 )
      goto LABEL_36;
    if ( v22 == 21 )
      goto LABEL_37;
LABEL_35:
    *v23 = 0;
    goto LABEL_36;
  }
  while ( 1 )
  {
    v19 = v78.m128i_u32[0];
    if ( v78.m128i_i32[0] )
      break;
    v54 = v95;
    v55 = v85;
    v56 = v92;
    v19 = (__int64)v96;
    if ( v95 )
    {
      v57 = v77.m128i_i64[0];
      v58 = v95;
      do
      {
        while ( 1 )
        {
          v59 = v58[2];
          v60 = v58[3];
          if ( v85 < *((_DWORD *)v58 + 8) )
            break;
          v58 = (_QWORD *)v58[3];
          if ( !v60 )
            goto LABEL_77;
        }
        v57 = (__int64)v58;
        v58 = (_QWORD *)v58[2];
      }
      while ( v59 );
LABEL_77:
      if ( (int *)v57 == v96 )
      {
        if ( (_DWORD)v92 == -1 )
        {
          LODWORD(v92) = v85;
          v56 = v85;
        }
LABEL_89:
        v19 = v77.m128i_i64[0];
        do
        {
          while ( 1 )
          {
            v62 = v54[2];
            v63 = v54[3];
            if ( *((_DWORD *)v54 + 8) >= v55 )
              break;
            v54 = (_QWORD *)v54[3];
            if ( !v63 )
              goto LABEL_93;
          }
          v19 = (__int64)v54;
          v54 = (_QWORD *)v54[2];
        }
        while ( v62 );
LABEL_93:
        if ( v19 != v77.m128i_i64[0] && v55 >= *(_DWORD *)(v19 + 32) )
          goto LABEL_96;
        goto LABEL_95;
      }
    }
    else if ( v96 == (int *)v77.m128i_i64[0] )
    {
      if ( (_DWORD)v92 == -1 )
      {
        LODWORD(v92) = v85;
        v56 = v85;
      }
      goto LABEL_102;
    }
    v61 = std::_Rb_tree_decrement();
    if ( *(_DWORD *)(v61 + 36) >= v55 )
    {
      if ( v56 != -1 )
        *(_DWORD *)(v61 + 36) = v56;
      goto LABEL_81;
    }
    if ( v56 == -1 )
    {
      LODWORD(v92) = v55;
      v56 = v55;
    }
    if ( v54 )
      goto LABEL_89;
LABEL_102:
    v19 = v77.m128i_i64[0];
LABEL_95:
    v84 = &v85;
    v19 = sub_4365C0(&v93, v19, &v84);
LABEL_96:
    *(_DWORD *)(v19 + 36) = v56;
LABEL_81:
    v22 = sub_43D320((__int64)&v85);
    v23 = v104;
    if ( *v104 )
      goto LABEL_35;
LABEL_36:
    if ( !v22 )
      break;
LABEL_37:
    v19 = 4;
    if ( (~(unsigned __int16)get_flags_ex(v85, 4) & 0x600) != 0 )
      break;
    v19 = v85;
    if ( !(unsigned int)decode_insn(v83, v85, v24, v25, v26, v27) )
      break;
    v43 = v92;
    v44 = v105;
    if ( (_DWORD)v92 == -1 )
      v43 = v85;
    *v105 = v43;
    v45 = a1[20].m128i_i32[0];
    if ( (_DWORD)v45 != -1 && !*(_BYTE *)(a1[40].m128i_i64[1] + 24 * v45 + 1) )
    {
LABEL_83:
      v21 = a1[36].m128i_i8[8];
      goto LABEL_32;
    }
    v46 = a1->m128i_i64[0];
    a1[36].m128i_i8[8] = 0;
    a2 = (__int64)sub_436330;
    v47 = *(__int64 (**)())(v46 + 168);
    if ( v47 == sub_436330
      || (a2 = (unsigned int)n,
          ((unsigned __int8 (__fastcall *)(__m128i *, _QWORD, unsigned int *))v47)(a1, (unsigned int)n, v44)) )
    {
      v48 = *(__int64 (__fastcall **)(unsigned int **, __int64, unsigned int *))v20;
      v49 = (unsigned int **)((char *)a1->m128i_i64 + *(_QWORD *)(v20 + 8));
      if ( (*(_QWORD *)v20 & 1) != 0 )
      {
        v44 = *v49;
        v48 = *(__int64 (__fastcall **)(unsigned int **, __int64, unsigned int *))((char *)v48 + (_QWORD)*v49 - 1);
      }
      v10 = v48(v49, a2, v44);
      if ( v10 )
      {
        v11 = a1[1].m128i_u32[1];
        v64 = v100;
        a1[15].m128i_i32[v75] = v11;
        while ( v64 )
        {
          v65 = v64;
          sub_437100((_QWORD *)v64[3]);
          v66 = (void *)v64[5];
          v64 = (_QWORD *)v64[2];
          if ( v66 )
          {
            v65[6] = 0;
            qfree(v66);
          }
          a2 = 72;
          operator delete(v65, 0x48u);
        }
        v67 = (_QWORD **)v95;
        if ( v95 )
        {
          do
          {
            sub_436830(v67[3]);
            v68 = v67;
            v67 = (_QWORD **)v67[2];
            a2 = 40;
            operator delete(v68, 0x28u);
          }
          while ( v67 );
        }
        goto LABEL_8;
      }
    }
    if ( !a1[36].m128i_i8[8] )
    {
      v50 = a1->m128i_i64[0];
      v51 = *(__int64 (**)())(a1->m128i_i64[0] + 16);
      if ( v51 != sub_436310 )
      {
        v19 = v82;
        if ( ((unsigned __int8 (__fastcall *)(__m128i *, __int64))v51)(a1, v82) )
          goto LABEL_68;
        v50 = a1->m128i_i64[0];
      }
      v52 = *(__int64 (**)())(v50 + 24);
      v19 = v82;
      if ( v52 == j__check_spoiled_jpt )
        check_spoiled_jpt(a1, v82);
      else
        ((void (__fastcall *)(__m128i *, __int64))v52)(a1, v82);
LABEL_68:
      v53 = a1[20].m128i_i32[0];
      if ( (_DWORD)v53 == -1 || *(_BYTE *)(a1[40].m128i_i64[1] + 24 * v53 + 1) )
        goto LABEL_83;
      a1[36].m128i_i8[8] = 1;
    }
  }
  v28 = nullptr;
  if ( v4 )
  {
    v28 = (void *)qalloc_or_throw(24 * v4, (const char *)v19);
    memcpy(v28, src, 24 * v4);
  }
  v29 = (void *)a1[40].m128i_i64[1];
  v30 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v29 )
  {
    a1[41].m128i_i64[0] = 0;
    v77 = v30;
    qfree(v29);
    v30 = _mm_load_si128(&v77);
  }
  v31 = v81;
  a1[40].m128i_i64[1] = (__int64)v28;
  a1[41] = v30;
  if ( !v31 )
  {
    v32 = v100;
    if ( v100 )
    {
      do
      {
        v33 = v32;
        sub_437100((_QWORD *)v32[3]);
        v34 = (void *)v32[5];
        v32 = (_QWORD *)v32[2];
        if ( v34 )
        {
          v33[6] = 0;
          qfree(v34);
        }
        operator delete(v33, 0x48u);
      }
      while ( v32 );
    }
    v35 = (_QWORD **)v95;
    if ( v95 )
    {
      do
      {
        sub_436830(v35[3]);
        v36 = v35;
        v35 = (_QWORD **)v35[2];
        operator delete(v36, 0x28u);
      }
      while ( v35 );
    }
    goto LABEL_49;
  }
  a2 = v74;
  sub_439570(a1[39].m128i_i64, v74);
  v69 = v100;
  if ( v100 )
  {
    do
    {
      v70 = v69;
      sub_437100((_QWORD *)v69[3]);
      v71 = (void *)v69[5];
      v69 = (_QWORD *)v69[2];
      if ( v71 )
      {
        v70[6] = 0;
        qfree(v71);
      }
      a2 = 72;
      operator delete(v70, 0x48u);
    }
    while ( v69 );
  }
  v72 = (_QWORD **)v95;
  if ( v95 )
  {
    do
    {
      sub_436830(v72[3]);
      v73 = v72;
      v72 = (_QWORD **)v72[2];
      a2 = 40;
      operator delete(v73, 0x28u);
    }
    while ( v72 );
  }
  v11 = v80;
  v10 = 0;
LABEL_14:
  v77.m128i_i8[0] = (v81 & 0x10) != 0;
  n = 24 * v4;
  while ( 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(4 * v75 + a1[37].m128i_i64[0] + v14) )
      {
        a2 = v11;
        v78.m128i_i32[0] = v14;
        v37 = sub_43EA20(a1, v11);
        v14 = v78.m128i_i32[0];
        v12 = v37;
        if ( !(_BYTE)v37 )
          break;
      }
      if ( ++v14 == 4 )
      {
        v12 = 1;
        break;
      }
    }
    v15 = 0;
    if ( v4 )
    {
      v38 = (void *)qalloc_or_throw(n, (const char *)a2);
      a2 = (__int64)src;
      v15 = (__int64)v38;
      memcpy(v38, src, n);
    }
    v16 = (void *)a1[40].m128i_i64[1];
    v17 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
    if ( v16 )
    {
      a1[41].m128i_i64[0] = 0;
      v78 = v17;
      qfree(v16);
      v17 = _mm_load_si128(&v78);
    }
    a1[40].m128i_i64[1] = v15;
    a1[41] = v17;
    if ( (_BYTE)v12 == 1 || !v77.m128i_i8[0] )
      break;
    if ( !v10 )
      goto LABEL_49;
    a1[15].m128i_i32[v75] = -1;
    v18 = a1[39].m128i_u64[1];
    if ( v18 < v74 )
    {
      v39 = a1[39].m128i_i64[0];
      if ( a1[40].m128i_i64[0] < v74 )
      {
        v42 = qvector_reserve(&a1[39], v39, v74, 4);
        a1[39].m128i_i64[0] = v42;
        v18 = a1[39].m128i_u64[1];
        v39 = v42;
      }
      v40 = (void *)(v39 + 4 * v18);
      a2 = 0;
      memset(v40, 0, 4 * (v74 - v18));
      a1[39].m128i_i64[1] = v74;
    }
    else if ( v74 != v18 )
    {
      a1[39].m128i_i64[1] = v74;
    }
    v11 = v80;
    v10 = 0;
  }
LABEL_9:
  if ( src )
    qfree(src);
  return v12;
}

