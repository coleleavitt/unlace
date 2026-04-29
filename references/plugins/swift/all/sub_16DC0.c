__int64 __fastcall sub_16DC0(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rax
  const char *v5; // rsi
  unsigned int type_by_tid; // r14d
  const char *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r13
  size_t v19; // r14
  size_t v20; // r14
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r14
  unsigned __int64 v24; // r14
  __int64 v25; // r15
  unsigned __int64 v26; // rdx
  void *v27; // r9
  char *v28; // rsi
  size_t v29; // r9
  __int64 v30; // r15
  void *v31; // r10
  char *v32; // rsi
  char *v33; // rax
  size_t v34; // r14
  __int64 v35; // r14
  unsigned __int64 v36; // rdx
  __int64 v37; // r15
  char *v38; // rsi
  unsigned __int64 v39; // rdx
  size_t v40; // r15
  __int64 v41; // r14
  void *v42; // r9
  char *v43; // rsi
  unsigned int v44; // ecx
  int v45; // edx
  void *v46; // rdi
  const char *v47; // rdi
  __int64 named_type_tid; // rbx
  unsigned int v49; // r13d
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 *v52; // rcx
  const char *v53; // rdx
  const char *v54; // rsi
  __int64 v55; // rdi
  const char *v56; // rcx
  const char *v57; // rdx
  const char *v58; // rsi
  unsigned int v59; // ecx
  const char *v60; // rcx
  int v61; // edx
  const char *v62; // rdi
  char *v63; // rdi
  __int64 v64; // r14
  __int64 v65; // r13
  char *v66; // rbp
  __int64 v67; // rdi
  __int64 v68; // rdi
  unsigned int *v69; // rax
  __m128i v70; // xmm0
  __int64 v71; // rdi
  __int64 v72; // rbp
  const char *v73; // rbx
  unsigned int *v74; // rax
  unsigned int *v75; // r13
  unsigned int *v76; // rax
  char v77; // cl
  const char *v78; // rsi
  char *v79; // rdi
  __int64 v80; // r12
  __int64 v81; // rbp
  char *v82; // rbx
  __int64 v83; // rdi
  __int64 v84; // rdi
  __m128i v85; // [rsp+0h] [rbp-138h] BYREF
  unsigned int *v86; // [rsp+10h] [rbp-128h]
  __int64 *p_src; // [rsp+18h] [rbp-120h]
  __int64 *v88; // [rsp+20h] [rbp-118h]
  size_t v89; // [rsp+28h] [rbp-110h]
  void *v90; // [rsp+30h] [rbp-108h]
  char **v91; // [rsp+38h] [rbp-100h]
  int v92; // [rsp+40h] [rbp-F8h]
  char v93; // [rsp+46h] [rbp-F2h]
  unsigned __int8 v94; // [rsp+47h] [rbp-F1h]
  __int64 *v95; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v96; // [rsp+58h] [rbp-E0h] BYREF
  __int64 *v97; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v98; // [rsp+68h] [rbp-D0h]
  char *v99; // [rsp+80h] [rbp-B8h] BYREF
  __m128i v100; // [rsp+88h] [rbp-B0h] BYREF
  void *v101; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v102; // [rsp+A8h] [rbp-90h]
  void *src; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v104; // [rsp+C8h] [rbp-70h]
  _BYTE v105[24]; // [rsp+D8h] [rbp-60h] BYREF
  int v106; // [rsp+F0h] [rbp-48h]
  char v107; // [rsp+F4h] [rbp-44h]
  unsigned __int64 v108; // [rsp+F8h] [rbp-40h]

  v86 = a2;
  v108 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a3 + 8);
  if ( !v4 )
    return 0;
  v5 = *(const char **)a3;
  LOBYTE(v3) = v4 != 1 && **(_BYTE **)a3 == 40;
  type_by_tid = v3;
  if ( !(_BYTE)v3 )
    return type_by_tid;
  if ( v5[v4 - 2] != 41 )
    return 0;
  v95 = (__int64 *)&v97;
  v97 = nullptr;
  v96 = 1;
  v98 = 0;
  v94 = sub_8690((__int64 *)&v97, &v96, (__int64)v5, v4 - 2);
  if ( !v94 )
  {
    v10 = s1;
    if ( *(_QWORD *)(a3 + 8) )
      v10 = *(const char **)a3;
    sub_CB10((__int64)"could not parse the tuple type '%s' (at position %u)\n", v10, v96);
    v86[17] = 5;
    goto LABEL_10;
  }
  v100 = 0;
  v91 = &v99;
  v99 = nullptr;
  v99 = (char *)qvector_reserve(&v99, 0, 13, 1);
  v100.m128i_i64[0] = 13;
  strcpy(v99, "Swift::tuple");
  v18 = (__int64)v97;
  LODWORD(p_src) = 0;
  v93 = 0;
  v92 = 0;
  v85.m128i_i32[0] = 0;
  v88 = &v97[7 * v98];
  if ( v97 == v88 )
  {
LABEL_63:
    v47 = s1;
    if ( v100.m128i_i64[0] )
      v47 = v99;
    named_type_tid = get_named_type_tid(v47);
    v101 = nullptr;
    type_by_tid = get_type_by_tid(&v101, named_type_tid);
    if ( !(_BYTE)type_by_tid )
    {
      src = nullptr;
      v104 = 0;
      memset(v105, 0, sizeof(v105));
      v106 = 1;
      LOBYTE(v92) = (_QWORD)v98 != 1 && v85.m128i_i32[0] == v92;
      if ( (_QWORD)v98 )
      {
        v49 = 0;
        v50 = 0;
        v51 = 0;
        p_src = (__int64 *)&src;
        do
        {
          v52 = &v97[7 * v51];
          if ( (unsigned __int64)v52[1] <= 1 )
          {
            v88 = &v97[7 * v51];
            sub_10D20(v52, (__int64)"_%d", v49);
            v52 = v88;
          }
          v50 += (unsigned __int8)sub_132D0(a1, p_src, v86, (__int64)v52, 0, 0) == 0;
          v51 = ++v49;
        }
        while ( v49 < (unsigned __int64)v98 );
        if ( v50 )
        {
          v56 = s1;
          if ( v100.m128i_i64[0] )
            v56 = v99;
          v57 = "s";
          v58 = "";
          if ( v50 != 1 )
          {
            v57 = "";
            v58 = "s";
          }
          sub_CB10((__int64)"the message%s above refer%s to creating a structure with the name %s\n", v58, v57, v56);
        }
      }
      else
      {
        p_src = (__int64 *)&src;
      }
      v59 = v86[1];
      if ( (_BYTE)v92 && (~(-1 << v59) & v85.m128i_i32[0]) != 0 )
        *(_DWORD *)&v105[20] |= 0x40u;
      else
        *(_DWORD *)&v105[16] = 1 << v59;
      create_tinfo(&v101, 13, 13, p_src);
      set_tinfo_property(&v101, 2, 4);
      v60 = s1;
      if ( v100.m128i_i64[0] )
        v60 = v99;
      v61 = save_tinfo(&v101, 0, 0, v60, 5);
      if ( v61 )
      {
        v78 = s1;
        if ( v100.m128i_i64[0] )
          v78 = v99;
        sub_CB10((__int64)"could not add a structure with the name %s retcode %d\n", v78, v61);
        v86[17] = 6;
      }
      else
      {
        v62 = s1;
        if ( v100.m128i_i64[0] )
          v62 = v99;
        named_type_tid = get_named_type_tid(v62);
        type_by_tid = v94;
        if ( !v86[17] )
        {
          v63 = (char *)src;
          if ( src )
          {
            v64 = v104;
            v65 = 0;
            if ( (_QWORD)v104 )
            {
              do
              {
                v66 = &v63[144 * v65];
                clear_tinfo_t();
                v67 = *((_QWORD *)v66 + 5);
                if ( v67 )
                {
                  *((_QWORD *)v66 + 6) = 0;
                  qfree(v67);
                }
                v68 = *((_QWORD *)v66 + 2);
                if ( v68 )
                {
                  *((_QWORD *)v66 + 3) = 0;
                  qfree(v68);
                }
                ++v65;
                v63 = (char *)src;
              }
              while ( v64 != v65 );
            }
            *(_QWORD *)&v104 = 0;
            qfree(v63);
          }
          goto LABEL_113;
        }
      }
      v79 = (char *)src;
      if ( src )
      {
        v80 = v104;
        v81 = 0;
        if ( (_QWORD)v104 )
        {
          do
          {
            v82 = &v79[144 * v81];
            clear_tinfo_t();
            v83 = *((_QWORD *)v82 + 5);
            if ( v83 )
            {
              *((_QWORD *)v82 + 6) = 0;
              qfree(v83);
            }
            v84 = *((_QWORD *)v82 + 2);
            if ( v84 )
            {
              *((_QWORD *)v82 + 3) = 0;
              qfree(v84);
            }
            ++v81;
            v79 = (char *)src;
          }
          while ( v80 != v81 );
        }
        *(_QWORD *)&v104 = 0;
        qfree(v79);
      }
      goto LABEL_121;
    }
    if ( !(unsigned __int8)sub_E0E0(v86, &v101, (__int64)v91)
      || !(unsigned __int8)sub_DE40(v86, v85.m128i_i32[0], (unsigned int)p_src, (__int64)v91, 1, 1) )
    {
LABEL_120:
      type_by_tid = v94;
LABEL_121:
      clear_tinfo_t();
      goto LABEL_88;
    }
LABEL_113:
    v69 = v86;
    v70 = _mm_loadu_si128(&v100);
    v100 = 0;
    v71 = *((_QWORD *)v86 + 4);
    *((_QWORD *)v86 + 2) = named_type_tid;
    v72 = v70.m128i_i64[0];
    v73 = v99;
    *((_QWORD *)v69 + 1) = 1610613760;
    v99 = nullptr;
    if ( v71 )
    {
      *((_QWORD *)v69 + 5) = 0;
      v85 = v70;
      qfree(v71);
      v70 = _mm_load_si128(&v85);
    }
    v74 = v86;
    *((_QWORD *)v86 + 4) = v73;
    v75 = v74 + 6;
    *(__m128i *)(v74 + 10) = v70;
    if ( !v72 )
      v73 = s1;
    if ( v73 )
    {
      *(_QWORD *)&v104 = v73;
      WORD4(v104) = 256;
      src = (void *)get_idati();
      create_tinfo(v75, 61, 61, &src);
    }
    v76 = v86;
    v77 = v93;
    v86[17] = 1;
    *((_BYTE *)v76 + 72) = v77;
    goto LABEL_120;
  }
  while ( 1 )
  {
    src = nullptr;
    v104 = 0;
    v19 = *(_QWORD *)(v18 + 8);
    if ( v19 )
    {
      src = (void *)qalloc_or_throw(*(_QWORD *)(v18 + 8));
      *((_QWORD *)&v104 + 1) = v19;
      memcpy(src, *(const void **)v18, v19);
      *(_QWORD *)&v104 = v19;
    }
    memset(v105, 0, sizeof(v105));
    v20 = *(_QWORD *)(v18 + 32);
    if ( v20 )
    {
      *(_QWORD *)v105 = qalloc_or_throw(*(_QWORD *)(v18 + 32));
      *(_QWORD *)&v105[16] = v20;
      memcpy(*(void **)v105, *(const void **)(v18 + 24), v20);
      *(_QWORD *)&v105[8] = v20;
    }
    v106 = *(_DWORD *)(v18 + 48);
    v107 = *(_BYTE *)(v18 + 52);
    v21 = sub_14470(a1, v105);
    v22 = v21;
    if ( *(_DWORD *)(v21 + 68) != 1 )
      break;
    v23 = *(_QWORD *)(v21 + 40);
    if ( v23 )
      goto LABEL_28;
    while ( 1 )
    {
      if ( under_debugger )
        BUG();
      v21 = interr(30731);
LABEL_28:
      if ( !strcmp(*(const char **)(v21 + 32), "Swift::Void") )
        break;
      if ( *(_QWORD *)(v22 + 8) && v23 != 1 )
      {
        v24 = v104;
        if ( (unsigned __int64)v104 > 1 )
        {
          v25 = v100.m128i_i64[0];
          if ( v100.m128i_i64[0] )
          {
            v26 = v100.m128i_i64[0] + 1;
            v27 = (void *)v100.m128i_i64[0];
            v25 = v100.m128i_i64[0] - 1;
          }
          else
          {
            v26 = 2;
            v27 = &dword_0 + 1;
          }
          v28 = v99;
          if ( v100.m128i_i64[1] < v26 )
          {
            v90 = v27;
            v89 = v26;
            v99 = (char *)qvector_reserve(v91, v99, v26, 1);
            v27 = v90;
            v28 = v99;
            v26 = v89;
          }
          v100.m128i_i64[0] = v26;
          *((_BYTE *)v27 + (_QWORD)v28) = 0;
          v29 = v24 - 1;
          v99[v25] = 95;
          v30 = v100.m128i_i64[0];
          v31 = (void *)(v24 - 1);
          if ( v100.m128i_i64[0] )
          {
            v30 = v100.m128i_i64[0] - 1;
            v31 = (void *)(v29 + v100.m128i_i64[0] - 1);
            v24 += v100.m128i_i64[0] - 1;
          }
          v32 = v99;
          if ( v100.m128i_i64[1] < v24 )
          {
            v90 = v31;
            v89 = v29;
            v99 = (char *)qvector_reserve(v91, v99, v24, 1);
            v31 = v90;
            v32 = v99;
            v29 = v89;
          }
          v100.m128i_i64[0] = v24;
          *((_BYTE *)v31 + (_QWORD)v32) = 0;
          memcpy(&v99[v30], src, v29);
        }
        v33 = (char *)sub_A250(v22);
        v101 = nullptr;
        v102 = 0;
        if ( v33 )
        {
          v90 = v33;
          v34 = strlen(v33);
          v89 = v34 + 1;
          v101 = (void *)qvector_reserve(&v101, 0, v34 + 1, 1);
          *(_QWORD *)&v102 = v34 + 1;
          memmove(v101, v90, v34);
          *((_BYTE *)v101 + v34) = 0;
        }
        sub_83B0((__int64)&v101, "::", "_");
        v35 = v100.m128i_i64[0];
        if ( v100.m128i_i64[0] )
        {
          v36 = v100.m128i_i64[0] + 1;
          v37 = v100.m128i_i64[0];
          v35 = v100.m128i_i64[0] - 1;
        }
        else
        {
          v36 = 2;
          v37 = 1;
        }
        v38 = v99;
        if ( v100.m128i_i64[1] < v36 )
        {
          v89 = v36;
          v99 = (char *)qvector_reserve(v91, v99, v36, 1);
          v36 = v89;
          v38 = v99;
        }
        v100.m128i_i64[0] = v36;
        v38[v37] = 0;
        v99[v35] = 95;
        v39 = v102;
        if ( (_QWORD)v102 )
        {
          v40 = v102 - 1;
          if ( (_QWORD)v102 != 1 )
          {
            v41 = v100.m128i_i64[0];
            v42 = (void *)(v102 - 1);
            if ( v100.m128i_i64[0] )
            {
              v41 = v100.m128i_i64[0] - 1;
              v42 = (void *)(v40 + v100.m128i_i64[0] - 1);
              v39 = v102 + v100.m128i_i64[0] - 1;
            }
            v43 = v99;
            if ( v100.m128i_i64[1] < v39 )
            {
              v90 = v42;
              v89 = v39;
              v99 = (char *)qvector_reserve(v91, v99, v39, 1);
              v42 = v90;
              v43 = v99;
              v39 = v89;
            }
            v100.m128i_i64[0] = v39;
            *((_BYTE *)v42 + (_QWORD)v43) = 0;
            memcpy(&v99[v41], v101, v40);
          }
        }
        v44 = *(_DWORD *)(v22 + 4);
        v45 = *(_DWORD *)v22;
        v92 += *(_DWORD *)v22;
        v85.m128i_i32[0] = v45 + (((1 << v44) + v85.m128i_i32[0] - 1) & -(1 << v44));
        if ( (unsigned int)p_src >= v44 )
          v44 = (unsigned int)p_src;
        LODWORD(p_src) = v44;
        v93 |= *(_BYTE *)(v22 + 72);
        if ( v101 )
        {
          *(_QWORD *)&v102 = 0;
          qfree(v101);
        }
        if ( *(_QWORD *)v105 )
          qfree(*(_QWORD *)v105);
        v46 = src;
        if ( !src )
          goto LABEL_62;
        goto LABEL_61;
      }
    }
    if ( *(_QWORD *)v105 )
      qfree(*(_QWORD *)v105);
    v46 = src;
    if ( !src )
      goto LABEL_62;
LABEL_61:
    qfree(v46);
LABEL_62:
    v18 += 56;
    if ( v88 == (__int64 *)v18 )
      goto LABEL_63;
  }
  sub_10F10((__int64)&v101, v21, (__int64)v105);
  v53 = s1;
  if ( (_QWORD)v102 )
    v53 = (const char *)v101;
  v54 = s1;
  if ( *(_QWORD *)(a3 + 8) )
    v54 = *(const char **)a3;
  sub_CB10((__int64)"could not import the tuple '%s' with an element of %s\n", v54, v53);
  if ( v101 )
  {
    *(_QWORD *)&v102 = 0;
    qfree(v101);
  }
  v55 = *(_QWORD *)v105;
  v86[17] = 9;
  if ( v55 )
    qfree(v55);
  if ( src )
    qfree(src);
  type_by_tid = v94;
LABEL_88:
  if ( v99 )
  {
    v100.m128i_i64[0] = 0;
    qfree(v99);
  }
LABEL_10:
  v11 = (__int64)v97;
  if ( v97 )
  {
    v12 = v98;
    if ( (_QWORD)v98 )
    {
      v13 = 0;
      v14 = 0;
      do
      {
        v15 = (__int64 *)(v11 + v13);
        v16 = *(_QWORD *)(v11 + v13 + 24);
        if ( v16 )
        {
          v15[4] = 0;
          qfree(v16);
        }
        v17 = *v15;
        if ( *v15 )
        {
          v15[1] = 0;
          qfree(v17);
        }
        ++v14;
        v11 = (__int64)v97;
        v13 += 56;
      }
      while ( v12 != v14 );
    }
    *(_QWORD *)&v98 = 0;
    qfree(v11);
  }
  return type_by_tid;
}
