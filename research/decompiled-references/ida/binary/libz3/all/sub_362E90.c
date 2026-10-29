__int64 __fastcall sub_362E90(__m128i *a1, __int64 *a2)
{
  char **exception; // rbp
  __int64 *v3; // r15
  __int64 v4; // r13
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __m128i *v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  __int64 *v14; // rbx
  __int64 v15; // r12
  __int64 v16; // r10
  __int64 v17; // rax
  _QWORD *v18; // rcx
  int v19; // edi
  unsigned int v20; // edx
  _QWORD *v21; // rsi
  __int64 v22; // rdx
  _QWORD *v23; // r9
  _QWORD *i; // rdx
  _QWORD *v25; // rax
  void *v26; // r14
  __int64 v27; // rdx
  _QWORD *v28; // rsi
  unsigned int v29; // ecx
  int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // r10
  _QWORD *j; // rcx
  _QWORD *v35; // r14
  unsigned int v36; // eax
  __int64 v37; // rax
  unsigned int v38; // r12d
  unsigned int v39; // edx
  unsigned int *v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // ebp
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // r8
  __int64 v46; // rax
  char *v47; // rdx
  int v48; // esi
  unsigned int v49; // ecx
  __int64 v50; // r9
  char *v51; // rcx
  __int64 v52; // r9
  char *v53; // rdi
  char *v54; // r12
  __int64 v55; // rax
  void *v56; // rbx
  __int64 v58; // rax
  void *v59; // rdi
  int v60; // eax
  __int64 v61; // r12
  _QWORD *v62; // rdx
  __int64 v63; // r9
  __int64 v64; // rax
  int v65; // edi
  unsigned int v66; // ecx
  _QWORD *v67; // rsi
  __int64 v68; // rcx
  _QWORD *v69; // r8
  _QWORD *k; // rax
  _QWORD *v71; // r14
  void *v72; // rdi
  unsigned int v73; // eax
  unsigned int v74; // eax
  __int64 *v75; // rbx
  __m128i *v76; // r12
  __int64 v77; // rsi
  __int64 v79; // rdi
  _QWORD *v80; // rdx
  void *v81; // [rsp+0h] [rbp-D8h]
  void *v82; // [rsp+0h] [rbp-D8h]
  __m128i *src; // [rsp+8h] [rbp-D0h]
  _QWORD *v84; // [rsp+18h] [rbp-C0h]
  void *v85; // [rsp+18h] [rbp-C0h]
  _QWORD *v86; // [rsp+20h] [rbp-B8h]
  __m128i *v87; // [rsp+28h] [rbp-B0h]
  char *v88; // [rsp+30h] [rbp-A8h]
  int v89; // [rsp+30h] [rbp-A8h]
  __int64 v90; // [rsp+38h] [rbp-A0h]
  __int64 v91; // [rsp+50h] [rbp-88h] BYREF
  __int64 v92; // [rsp+58h] [rbp-80h]
  __int64 v93; // [rsp+60h] [rbp-78h] BYREF
  __int64 v94; // [rsp+68h] [rbp-70h]
  __int64 v95; // [rsp+70h] [rbp-68h] BYREF
  __int64 v96; // [rsp+78h] [rbp-60h] BYREF
  __int64 v97; // [rsp+80h] [rbp-58h]
  __int64 v98; // [rsp+88h] [rbp-50h] BYREF
  __int64 v99; // [rsp+90h] [rbp-48h]

  v3 = a2;
  v4 = (__int64)a1;
  v90 = *a2;
  if ( !a2[1] )
    goto LABEL_141;
  src = nullptr;
  v5 = a2[1];
  v6 = 0;
  while ( v6 < *(_DWORD *)(v5 - 4) )
  {
    v7 = *(_QWORD *)(v5 + 8LL * v6);
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    if ( src )
    {
      v8 = src[-1].m128i_u32[3];
      if ( v8 == src[-1].m128i_i32[2] )
      {
        v38 = (3 * v8 + 1) >> 1;
        v39 = 8 * v38 + 8;
        if ( 8 * v8 + 8 >= v39 || v8 >= v38 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v95, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v95);
          sub_233E40((__int64)&v95);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        a1 = (__m128i *)((char *)src - 8);
        v40 = (unsigned int *)sub_186B300(&src[-1].m128i_u64[1], v39);
        v41 = v40[1];
        *v40 = v38;
        src = (__m128i *)(v40 + 2);
        LODWORD(v40) = v41;
        v11 = (__m128i *)((char *)src + 8 * v41);
        v5 = v3[1];
        v10 = (_DWORD)v40 + 1;
      }
      else
      {
        v9 = v8;
        v10 = v8 + 1;
        v11 = (__m128i *)((char *)src + 8 * v9);
      }
    }
    else
    {
      a1 = (__m128i *)&qword_18;
      v80 = (_QWORD *)sub_186B270(0x18u);
      *v80 = 2;
      v5 = v3[1];
      v10 = 1;
      v11 = (__m128i *)(v80 + 1);
      src = v11;
    }
    a2 = (__int64 *)src;
    v11->m128i_i64[0] = v7;
    ++v6;
    src[-1].m128i_i32[3] = v10;
    if ( !v5 )
      goto LABEL_10;
  }
  if ( !src )
  {
LABEL_141:
    if ( (unsigned int)sub_180B130(a1) > 9 )
    {
      src = nullptr;
      goto LABEL_143;
    }
    return 1;
  }
LABEL_10:
  v12 = src[-1].m128i_u32[3];
  v88 = &src->m128i_i8[v12 * 8];
  if ( &src->m128i_i8[v12 * 8] == (__int8 *)src )
    goto LABEL_37;
  _BitScanReverse64(&v13, (v12 * 8) >> 3);
  sub_35DBF0(src, &src->m128i_i64[v12], 2LL * (int)v13, v4);
  if ( (unsigned __int64)v12 <= 16 )
  {
    a2 = &src->m128i_i64[v12];
    a1 = src;
    sub_35D5E0(src->m128i_i8, v88, v4);
    goto LABEL_37;
  }
  v87 = src + 8;
  sub_35D5E0(src->m128i_i8, src[8].m128i_i8, v4);
  do
  {
    v14 = (__int64 *)v87;
    v15 = v87->m128i_i64[0];
    while ( 1 )
    {
      v16 = *(v14 - 1);
      v17 = *(unsigned int *)(v4 + 80);
      v96 = 0;
      v98 = 1;
      v18 = *(_QWORD **)(v4 + 72);
      v19 = *(_DWORD *)(v16 + 12);
      v20 = v17 - 1;
      v95 = v16;
      v97 = 0;
      v17 *= 40;
      v21 = (_QWORD *)((char *)v18 + v17);
      v99 = 0;
      v22 = 40LL * (v19 & v20);
      v23 = &v18[(unsigned __int64)v22 / 8];
      if ( v22 != v17 )
      {
        for ( i = &v18[(unsigned __int64)v22 / 8]; v21 != i; i += 5 )
        {
          v25 = (_QWORD *)*i;
          if ( *i > 1u )
          {
            if ( *((_DWORD *)v25 + 3) == v19 && (_QWORD *)v16 == v25 )
            {
              v25 = i;
              goto LABEL_21;
            }
          }
          else if ( !v25 )
          {
            goto LABEL_21;
          }
        }
      }
      if ( v18 == v23 )
      {
LABEL_69:
        v25 = nullptr;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v25 = (_QWORD *)*v18;
            if ( *v18 > 1u )
              break;
            if ( !v25 )
              goto LABEL_21;
            v18 += 5;
            if ( v23 == v18 )
              goto LABEL_69;
          }
          if ( *((_DWORD *)v25 + 3) == v19 && (_QWORD *)v16 == v25 )
            break;
          v18 += 5;
          if ( v23 == v18 )
            goto LABEL_69;
        }
        v25 = v18;
      }
LABEL_21:
      v26 = qword_1C7F2C0;
      v84 = v25;
      sub_182CBA0(qword_1C7F2C0, &v96);
      sub_182CBA0(v26, &v98);
      v27 = *(unsigned int *)(v4 + 80);
      v28 = *(_QWORD **)(v4 + 72);
      v96 = 0;
      v95 = v15;
      v98 = 1;
      v29 = v27 - 1;
      v30 = *(_DWORD *)(v15 + 12);
      v97 = 0;
      v31 = 40 * v27;
      v99 = 0;
      v32 = 40LL * (v30 & v29);
      v33 = &v28[(unsigned __int64)v32 / 8];
      if ( v32 != v31 )
      {
        for ( j = &v28[(unsigned __int64)v32 / 8]; &v28[(unsigned __int64)v31 / 8] != j; j += 5 )
        {
          v35 = (_QWORD *)*j;
          if ( *j > 1u )
          {
            if ( *((_DWORD *)v35 + 3) == v30 && (_QWORD *)v15 == v35 )
            {
              v35 = j;
              goto LABEL_28;
            }
          }
          else if ( !v35 )
          {
            goto LABEL_28;
          }
        }
      }
      if ( v28 == v33 )
      {
LABEL_78:
        v35 = nullptr;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v35 = (_QWORD *)*v28;
            if ( *v28 > 1u )
              break;
            if ( !v35 )
              goto LABEL_28;
            v28 += 5;
            if ( v33 == v28 )
              goto LABEL_78;
          }
          if ( *((_DWORD *)v35 + 3) == v30 && (_QWORD *)v15 == v35 )
            break;
          v28 += 5;
          if ( v33 == v28 )
            goto LABEL_78;
        }
        v35 = v28;
      }
LABEL_28:
      v86 = v84;
      v85 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v96);
      sub_182CBA0(v85, &v98);
      a1 = (__m128i *)qword_1C7F2C0;
      a2 = v86 + 1;
      if ( (*((_BYTE *)v86 + 28) & 1) != 0
        || *((_DWORD *)v86 + 6) != 1
        || (*((_BYTE *)v35 + 28) & 1) != 0
        || *((_DWORD *)v35 + 6) != 1 )
      {
        LOBYTE(v36) = sub_1848D40(qword_1C7F2C0, a2, v35 + 1);
        goto LABEL_31;
      }
      if ( (*((_BYTE *)v86 + 12) & 1) == 0 && (*((_BYTE *)v35 + 12) & 1) == 0 )
        break;
      v36 = (unsigned int)sub_182C7B0(qword_1C7F2C0, a2, v35 + 1) >> 31;
LABEL_31:
      if ( !(_BYTE)v36 )
        goto LABEL_84;
LABEL_32:
      v37 = *--v14;
      v14[1] = v37;
    }
    if ( *((_DWORD *)v86 + 2) < *((_DWORD *)v35 + 2) )
      goto LABEL_32;
LABEL_84:
    v87 = (__m128i *)((char *)v87 + 8);
    *v14 = v15;
  }
  while ( v88 != (char *)v87 );
LABEL_37:
  if ( (unsigned int)sub_180B130(a1) <= 9 )
    goto LABEL_38;
LABEL_143:
  if ( (unsigned __int8)sub_186A530() )
  {
    sub_186A4C0();
    sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v79 = std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_186A500(v79, "\n");
    if ( !src )
      return 1;
  }
  else
  {
    sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( !src )
      return 1;
  }
LABEL_38:
  v42 = 1;
  v89 = 0;
  if ( !src[-1].m128i_i32[3] )
    goto LABEL_51;
  while ( 2 )
  {
    LODWORD(v44) = v89;
    while ( 2 )
    {
      v45 = *(_QWORD *)(v3[1] + 8LL * (unsigned int)v44);
      v46 = *(unsigned int *)(v4 + 80);
      v96 = 0;
      v98 = 1;
      v47 = *(char **)(v4 + 72);
      v48 = *(_DWORD *)(v45 + 12);
      v49 = v46 - 1;
      v95 = v45;
      v97 = 0;
      v46 *= 40;
      v99 = 0;
      v50 = 5LL * (v48 & v49);
      v51 = &v47[v46];
      v52 = 8 * v50;
      v53 = &v47[v52];
      if ( v52 == v46 )
      {
LABEL_53:
        while ( v53 != v47 )
        {
          v58 = *(_QWORD *)v47;
          if ( *(_QWORD *)v47 > 1u )
          {
            if ( *(_DWORD *)(v58 + 12) == v48 && v45 == v58 )
            {
              v54 = v47;
              goto LABEL_87;
            }
          }
          else if ( !v58 )
          {
            break;
          }
          v47 += 40;
        }
LABEL_50:
        v56 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v96);
        sub_182CBA0(v56, &v98);
        v93 = 1;
        v91 = 0;
        v92 = 0;
        v94 = 0;
        BUG();
      }
      v54 = &v47[v52];
      while ( 2 )
      {
        v55 = *(_QWORD *)v54;
        if ( *(_QWORD *)v54 <= 1u )
        {
          if ( !v55 )
            goto LABEL_50;
          goto LABEL_47;
        }
        if ( *(_DWORD *)(v55 + 12) != v48 || v45 != v55 )
        {
LABEL_47:
          v54 += 40;
          if ( v51 == v54 )
            goto LABEL_53;
          continue;
        }
        break;
      }
LABEL_87:
      v81 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v96);
      sub_182CBA0(v81, &v98);
      v59 = qword_1C7F2C0;
      v91 = 0;
      v92 = 0;
      v93 = 1;
      v94 = 0;
      if ( (v54[12] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v91, v54 + 8);
      else
        LODWORD(v91) = *((_DWORD *)v54 + 2);
      if ( (v54[28] & 1) != 0 )
      {
        sub_182C690(v59, &v93, v54 + 24);
      }
      else
      {
        v60 = *((_DWORD *)v54 + 6);
        BYTE4(v93) &= ~1u;
        LODWORD(v93) = v60;
      }
      v44 = (unsigned int)(v44 + 1);
      v61 = 8 * v44;
      if ( (unsigned int)v44 >= src[-1].m128i_i32[3] )
      {
LABEL_105:
        v72 = qword_1C7F2C0;
        goto LABEL_106;
      }
      while ( 2 )
      {
        v62 = *(_QWORD **)(v4 + 72);
        v63 = *(_QWORD *)(v3[1] + v61);
        v64 = *(unsigned int *)(v4 + 80);
        v96 = 0;
        v98 = 1;
        v65 = *(_DWORD *)(v63 + 12);
        v66 = v64 - 1;
        v95 = v63;
        v97 = 0;
        v64 *= 40;
        v67 = (_QWORD *)((char *)v62 + v64);
        v99 = 0;
        v68 = 40LL * (v65 & v66);
        v69 = &v62[(unsigned __int64)v68 / 8];
        if ( v68 != v64 )
        {
          for ( k = &v62[(unsigned __int64)v68 / 8]; v67 != k; k += 5 )
          {
            v71 = (_QWORD *)*k;
            if ( *k > 1u )
            {
              if ( *((_DWORD *)v71 + 3) == v65 && (_QWORD *)v63 == v71 )
              {
                v71 = k;
                goto LABEL_99;
              }
            }
            else if ( !v71 )
            {
              goto LABEL_99;
            }
          }
        }
        if ( v62 == v69 )
        {
LABEL_122:
          v71 = nullptr;
        }
        else
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v71 = (_QWORD *)*v62;
              if ( *v62 > 1u )
                break;
              if ( !v71 )
                goto LABEL_99;
              v62 += 5;
              if ( v69 == v62 )
                goto LABEL_122;
            }
            if ( *((_DWORD *)v71 + 3) == v65 && (_QWORD *)v63 == v71 )
              break;
            v62 += 5;
            if ( v69 == v62 )
              goto LABEL_122;
          }
          v71 = v62;
        }
LABEL_99:
        v82 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v96);
        sub_182CBA0(v82, &v98);
        v72 = qword_1C7F2C0;
        if ( (v91 & 0x100000000LL) != 0 || (*((_BYTE *)v71 + 12) & 1) != 0 )
        {
          v72 = qword_1C7F2C0;
          if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, &v91, v71 + 1) )
            goto LABEL_105;
        }
        else if ( (_DWORD)v91 != *((_DWORD *)v71 + 2) )
        {
          goto LABEL_106;
        }
        if ( (v93 & 0x100000000LL) == 0 && (*((_BYTE *)v71 + 28) & 1) == 0 )
        {
          if ( (_DWORD)v93 != *((_DWORD *)v71 + 6) )
            goto LABEL_105;
LABEL_110:
          LODWORD(v44) = v44 + 1;
          v61 += 8;
          if ( (unsigned int)v44 >= src[-1].m128i_i32[3] )
            goto LABEL_105;
          continue;
        }
        break;
      }
      if ( !(unsigned int)sub_182C7B0(v72, &v93, v71 + 3) )
        goto LABEL_110;
      v72 = qword_1C7F2C0;
LABEL_106:
      sub_182CBA0(v72, &v91);
      sub_182CBA0(v72, &v93);
      v73 = 20 * (v44 - v89);
      if ( v73 < (unsigned int)v44 )
        v73 = v44;
      if ( v73 < src[-1].m128i_i32[3] )
        continue;
      break;
    }
    v89 = v44;
    v74 = sub_E60CB0(*(std::ios_base **)(v4 + 8), v44, (int)src);
    v42 = v74;
    v43 = src[-1].m128i_u32[3];
    if ( v42 == 1 && (unsigned int)v44 < (unsigned int)v43 )
      continue;
    break;
  }
  v75 = (__int64 *)src;
  v76 = (__m128i *)((char *)src + 8 * v43);
  if ( src < v76 )
  {
    do
    {
      v77 = *v75;
      if ( *v75 )
      {
        if ( (*(_DWORD *)(v77 + 8))-- == 1 )
          sub_15D7BC0(v90, v77);
      }
      ++v75;
    }
    while ( v75 < (__int64 *)v76 );
  }
LABEL_51:
  sub_186B220(&src[-1].m128i_u64[1]);
  return v42;
}

