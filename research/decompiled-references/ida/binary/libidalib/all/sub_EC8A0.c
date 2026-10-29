__int64 __fastcall sub_EC8A0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  int *v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t v12; // r9
  __int64 v13; // r8
  size_t v14; // r10
  _BYTE *v15; // rsi
  __int64 v16; // r13
  _BYTE *v17; // rsi
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  const void *v23; // r15
  size_t v24; // rax
  __int64 v25; // r8
  size_t v26; // r13
  size_t v27; // r10
  size_t v28; // rdx
  const char *v29; // rsi
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // r15
  __int64 v33; // rbx
  __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // rax
  const char *v37; // r13
  char *v38; // r15
  size_t v39; // r11
  __int64 v40; // rdi
  __int64 v41; // r8
  __int64 v42; // rsi
  size_t v43; // rdx
  char *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rsi
  char *v47; // r9
  char *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rax
  char *v52; // r9
  char *v53; // r8
  char *v54; // rsi
  unsigned int v55; // ebx
  char *v56; // rax
  bool v57; // r15
  int v58; // r12d
  __int64 debugger_plugins; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r12
  __int64 v66; // r14
  __int64 v67; // rdx
  _QWORD *v68; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  size_t v72; // r9
  unsigned __int64 v73; // r12
  unsigned __int64 v74; // r12
  unsigned __int64 v75; // r12
  unsigned __int64 v76; // r12
  char v77; // bl
  void *v78; // r13
  void *v79; // rdi
  void *v80; // r13
  void *v81; // rdi
  void *v82; // r13
  void *v83; // rdi
  void *v84; // r13
  void *v85; // rdi
  size_t v86; // [rsp+8h] [rbp-3398h]
  __int64 v87; // [rsp+10h] [rbp-3390h]
  size_t v88; // [rsp+10h] [rbp-3390h]
  __int64 v89; // [rsp+18h] [rbp-3388h]
  __int64 v90; // [rsp+20h] [rbp-3380h]
  __int64 v91; // [rsp+20h] [rbp-3380h]
  size_t v92; // [rsp+20h] [rbp-3380h]
  size_t v93; // [rsp+20h] [rbp-3380h]
  __int64 v94; // [rsp+28h] [rbp-3378h]
  unsigned __int8 v95; // [rsp+28h] [rbp-3378h]
  unsigned __int64 v96; // [rsp+28h] [rbp-3378h]
  __int64 v97; // [rsp+30h] [rbp-3370h]
  size_t v98; // [rsp+38h] [rbp-3368h]
  size_t v99; // [rsp+40h] [rbp-3360h]
  size_t v101; // [rsp+48h] [rbp-3358h]
  size_t v102; // [rsp+50h] [rbp-3350h]
  __int32 v103; // [rsp+5Ch] [rbp-3344h]
  void *v104; // [rsp+80h] [rbp-3320h] BYREF
  __int128 v105; // [rsp+88h] [rbp-3318h]
  void *v106; // [rsp+A0h] [rbp-3300h] BYREF
  __int128 v107; // [rsp+A8h] [rbp-32F8h]
  void *dest; // [rsp+C0h] [rbp-32E0h] BYREF
  __int128 v109; // [rsp+C8h] [rbp-32D8h]
  void *src; // [rsp+E0h] [rbp-32C0h] BYREF
  __int128 v111; // [rsp+E8h] [rbp-32B8h]
  __int64 v112; // [rsp+100h] [rbp-32A0h] BYREF
  __int128 v113; // [rsp+108h] [rbp-3298h]
  __int64 v114; // [rsp+120h] [rbp-3280h]
  __int128 v115; // [rsp+128h] [rbp-3278h]
  __int64 v116; // [rsp+140h] [rbp-3260h] BYREF
  __int128 v117; // [rsp+148h] [rbp-3258h]
  unsigned __int8 v118; // [rsp+158h] [rbp-3248h]
  __int64 v119; // [rsp+160h] [rbp-3240h] BYREF
  __int128 v120; // [rsp+168h] [rbp-3238h]
  void *v121; // [rsp+2B0h] [rbp-30F0h]
  unsigned __int64 v122; // [rsp+2B8h] [rbp-30E8h]
  void *v123; // [rsp+2C8h] [rbp-30D8h]
  unsigned __int64 v124; // [rsp+2D0h] [rbp-30D0h]
  __int64 v125; // [rsp+2E0h] [rbp-30C0h]
  void *v126; // [rsp+2E8h] [rbp-30B8h]
  unsigned __int64 v127; // [rsp+2F0h] [rbp-30B0h]
  void *v128; // [rsp+300h] [rbp-30A0h]
  unsigned __int64 v129; // [rsp+308h] [rbp-3098h]
  char v130; // [rsp+318h] [rbp-3088h]
  unsigned __int8 v131; // [rsp+319h] [rbp-3087h]
  _BYTE v132[64]; // [rsp+320h] [rbp-3080h] BYREF
  char v133[4096]; // [rsp+360h] [rbp-3040h] BYREF
  _BYTE v134[4096]; // [rsp+1360h] [rbp-2040h] BYREF
  char v135[4104]; // [rsp+2360h] [rbp-1040h] BYREF
  unsigned __int64 v136; // [rsp+3368h] [rbp-38h]

  v136 = __readfsqword(0x28u);
  v118 = 1;
  v104 = nullptr;
  v106 = nullptr;
  dest = nullptr;
  v116 = 0;
  v105 = 0;
  v107 = 0;
  v109 = 0;
  v117 = 0;
  v103 = sub_BB500(dbg);
  if ( !(unsigned __int8)sub_E5800((__int64 *)&v104, "Host") )
    reg_str_get();
  if ( !(unsigned __int8)sub_E5800((__int64 *)&v106, "Password") )
    reg_str_get();
  sub_E5C30();
  sub_E5CF0(v135);
  sub_E5800((__int64 *)&dest, "Parameters");
  sub_BA360((__int64)&v116);
  v120 = 0;
  v119 = 0;
  v1 = qvector_reserve();
  v119 = v1;
  *(_QWORD *)&v120 = 10;
  *(_QWORD *)v1 = 0x6C69467475706E49LL;
  *(_BYTE *)(v1 + 8) = 101;
  v2 = v119;
  *(_BYTE *)(v119 + 9) = 0;
  v3 = (int *)sub_DEDF0((__int64)&qword_252200, (__int64)&v119);
  if ( v2 )
  {
    *(_QWORD *)&v120 = 0;
    qfree();
  }
  if ( v3 == &dword_252208 )
  {
    if ( dbg_get_input_path() < 0 )
      v134[0] = 0;
  }
  else
  {
    qstrncpy();
  }
  v4 = qword_2521F0;
  if ( qword_2521F0 )
  {
LABEL_10:
    v5 = dbg;
    if ( (*(_BYTE *)(dbg + 32LL) & 1) != 0 )
      goto LABEL_11;
    goto LABEL_117;
  }
  netnode_check();
  v70 = netnode_altval();
  v4 = v70;
  if ( !v70 )
  {
    v4 = (int)reg_int_op();
    goto LABEL_10;
  }
  v5 = dbg;
  qword_2521F0 = v70;
  if ( (*(_BYTE *)(dbg + 32LL) & 1) != 0 )
    goto LABEL_11;
LABEL_117:
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree();
    v104 = nullptr;
    *((_QWORD *)&v105 + 1) = 0;
  }
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    qfree();
    v106 = nullptr;
    *((_QWORD *)&v107 + 1) = 0;
  }
  v5 = dbg;
LABEL_11:
  if ( v5 && (unsigned int)sub_9E1E0() )
    qword_252250 = dbg;
  src = nullptr;
  v111 = 0;
  if ( (_QWORD)v117 )
  {
    v6 = v116;
    v7 = v117 - 1;
    v8 = v116 + 24 * v117;
    if ( v116 == v8 )
    {
      if ( (_QWORD)v117 == 1 )
        goto LABEL_35;
    }
    else
    {
      v9 = v116;
      do
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( v10 )
          v7 = v7 + v10 - 1;
        v9 += 24;
      }
      while ( v8 != v9 );
      if ( !v7 )
      {
        do
        {
LABEL_31:
          v16 = v111;
          if ( (unsigned __int64)v111 > 1 )
          {
            v17 = src;
            v18 = v111 - 1;
            v19 = v111 + 1;
            if ( *((_QWORD *)&v111 + 1) < (unsigned __int64)(v111 + 1) )
            {
              v90 = v111 - 1;
              v94 = v111 + 1;
              src = (void *)qvector_reserve();
              v18 = v90;
              v17 = src;
              v19 = v94;
            }
            *(_QWORD *)&v111 = v19;
            v17[v16] = 0;
            *((_BYTE *)src + v18) = 59;
          }
          v11 = *(_QWORD *)(v6 + 8);
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v11 != 1 )
            {
              v13 = v111;
              v14 = v11 - 1;
              if ( (_QWORD)v111 )
              {
                v13 = v111 - 1;
                v14 = v12 + v111 - 1;
                v11 += v111 - 1;
              }
              v15 = src;
              if ( *((_QWORD *)&v111 + 1) < v11 )
              {
                v86 = v14;
                v87 = v13;
                v92 = v12;
                v96 = v11;
                src = (void *)qvector_reserve();
                v14 = v86;
                v15 = src;
                v13 = v87;
                v12 = v92;
                v11 = v96;
              }
              *(_QWORD *)&v111 = v11;
              v15[v14] = 0;
              memcpy((char *)src + v13, *(const void **)v6, v12);
            }
          }
          v6 += 24;
        }
        while ( v8 != v6 );
        goto LABEL_35;
      }
    }
    src = (void *)qvector_reserve();
    v6 = v116;
    v8 = v116 + 24 * v117;
    if ( v8 == v116 )
      goto LABEL_35;
    goto LABEL_31;
  }
LABEL_35:
  v112 = 0;
  v113 = 0;
  v95 = v118;
  v114 = 0;
  v115 = 0;
  v20 = qvector_reserve();
  v114 = v20;
  *(_QWORD *)&v115 = 26;
  *(__m128i *)v20 = _mm_load_si128((const __m128i *)&xmmword_1D3350);
  v21 = v114;
  *(__m128i *)(v20 + 9) = _mm_load_si128((const __m128i *)&xmmword_1D3360);
  v22 = dbg;
  *(_BYTE *)(v21 + 25) = 0;
  v23 = *(const void **)(v22 + 8);
  if ( v23 )
  {
    v91 = v115;
    v24 = strlen(*(const char **)(v22 + 8));
    v25 = v91;
    v26 = v24;
    v27 = v24;
    if ( v91 )
    {
      v25 = v91 - 1;
      v27 = v24 + v91 - 1;
    }
    v28 = v27 + 1;
    if ( *((_QWORD *)&v115 + 1) < v27 + 1 )
    {
      v88 = v27;
      v89 = v25;
      v93 = v27 + 1;
      v114 = qvector_reserve();
      v27 = v88;
      v21 = v114;
      v25 = v89;
      v28 = v93;
    }
    *(_QWORD *)&v115 = v28;
    *(_BYTE *)(v21 + v27) = 0;
    memmove((void *)(v25 + v114), v23, v26);
    v23 = *(const void **)(dbg + 8LL);
  }
  v29 = s1;
  if ( (_QWORD)v115 )
    v29 = (const char *)v114;
  sub_D8640(
    (__int64)&v119,
    v29,
    (const char *)v23,
    v103,
    (const void **)&v104,
    (__int64)&v106,
    v133,
    (size_t)v134,
    v135,
    (__int64)&dest,
    (__int64)&src,
    v4,
    v118,
    a1);
  if ( !v132[24] )
    goto LABEL_82;
  v31 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
          203,
          0,
          &v119,
          &v112,
          &callui,
          v30);
  if ( v31 )
  {
    if ( v31 == 1 )
    {
      v73 = v124;
      if ( v124 > 1 )
      {
        v84 = v123;
        v85 = v104;
        if ( *((_QWORD *)&v105 + 1) < v124 )
        {
          v104 = (void *)qvector_reserve();
          v85 = v104;
        }
        *(_QWORD *)&v105 = v73;
        memmove(v85, v84, v73 - 1);
        *((char *)v104 + v73 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v105 = 0;
      }
      v74 = v127;
      if ( v127 > 1 )
      {
        v82 = v126;
        v83 = v106;
        if ( *((_QWORD *)&v107 + 1) < v127 )
        {
          v106 = (void *)qvector_reserve();
          v83 = v106;
        }
        *(_QWORD *)&v107 = v74;
        memmove(v83, v82, v74 - 1);
        *((char *)v106 + v74 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v107 = 0;
      }
      qstrncpy();
      qstrncpy();
      qstrncpy();
      v75 = v122;
      if ( v122 > 1 )
      {
        v80 = v121;
        v81 = dest;
        if ( *((_QWORD *)&v109 + 1) < v122 )
        {
          dest = (void *)qvector_reserve();
          v81 = dest;
        }
        *(_QWORD *)&v109 = v75;
        memmove(v81, v80, v75 - 1);
        *((char *)dest + v75 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v109 = 0;
      }
      v76 = v129;
      if ( v129 > 1 )
      {
        v78 = v128;
        v79 = src;
        if ( *((_QWORD *)&v111 + 1) < v129 )
        {
          src = (void *)qvector_reserve();
          v79 = src;
        }
        *(_QWORD *)&v111 = v76;
        memmove(v79, v78, v76 - 1);
        *((char *)src + v76 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v111 = 0;
      }
      LODWORD(v4) = v125;
      v77 = v130;
      v95 = v131;
      if ( a1 )
        sub_BB6A0(a1, (__int64)v132);
      if ( v77 )
      {
        if ( (v103 & 2) != 0 )
          reg_str_set();
        if ( (v103 & 4) != 0 )
          reg_str_set();
        reg_int_op();
      }
      goto LABEL_47;
    }
    if ( v31 != -1 )
    {
LABEL_47:
      sub_EC600(v134);
      if ( v116 )
      {
        v32 = v117;
        if ( (_QWORD)v117 )
        {
          v33 = 0;
          v34 = v116;
          do
          {
            v35 = (_QWORD *)(v34 + 24 * v33);
            if ( *v35 )
            {
              v35[1] = 0;
              qfree();
              v34 = v116;
            }
            ++v33;
          }
          while ( v32 != v33 );
        }
        *(_QWORD *)&v117 = 0;
        qfree();
        v116 = 0;
        *((_QWORD *)&v117 + 1) = 0;
      }
      v36 = v111;
      if ( (_QWORD)v111 )
      {
        v37 = (const char *)src;
        v38 = (char *)src + v111 - 1;
        if ( src >= v38 )
          goto LABEL_69;
        do
        {
          v44 = strchr(v37, 59);
          v45 = v117;
          v46 = v116;
          v47 = v44;
          v48 = v44;
          if ( !v44 )
            v47 = v38;
          v72 = v47 - v37;
          if ( *((_QWORD *)&v117 + 1) < (unsigned __int64)(v117 + 1) )
          {
            v102 = v72;
            v116 = qvector_reserve();
            v45 = v117;
            v46 = v116;
            v72 = v102;
          }
          v39 = v72;
          v40 = v46 + 24 * v45;
          *(_OWORD *)(v40 + 8) = 0;
          *(_QWORD *)v40 = 0;
          *(_QWORD *)&v117 = v117 + 1;
          v41 = *(_QWORD *)(v40 + 8);
          if ( v41 )
          {
            --v41;
            v39 = v72 + v41;
          }
          v42 = *(_QWORD *)v40;
          v43 = v39 + 1;
          if ( v39 != -1 )
          {
            v97 = v41;
            v98 = v72;
            v99 = v39;
            v101 = v39 + 1;
            v71 = qvector_reserve();
            v41 = v97;
            v42 = v71;
            v72 = v98;
            v39 = v99;
            *(_QWORD *)v40 = v71;
            v43 = v101;
          }
          *(_QWORD *)(v40 + 8) = v43;
          *(_BYTE *)(v42 + v39) = 0;
          memmove((void *)(*(_QWORD *)v40 + v41), v37, v72);
          if ( !v48 )
            break;
          v37 = v48 + 1;
        }
        while ( v48 + 1 < v38 );
        v36 = v111;
        if ( (_QWORD)v111 )
        {
LABEL_69:
          if ( v36 != 1 && *((char *)src + v36 - 2) == 59 )
          {
            v49 = v117;
            v50 = v116;
            if ( *((_QWORD *)&v117 + 1) < (unsigned __int64)(v117 + 1) )
            {
              v116 = qvector_reserve();
              v49 = v117;
              v50 = v116;
            }
            v51 = v50 + 24 * v49;
            *(_QWORD *)v51 = 0;
            *(_OWORD *)(v51 + 8) = 0;
            *(_QWORD *)&v117 = v117 + 1;
          }
        }
      }
      if ( (v103 & 0x200) != 0 )
        v118 = v95;
      v52 = (char *)s1;
      if ( (_QWORD)v107 )
        v52 = (char *)v106;
      v53 = (char *)s1;
      if ( (_QWORD)v105 )
        v53 = (char *)v104;
      v54 = (char *)s1;
      if ( (_QWORD)v109 )
        v54 = (char *)dest;
      sub_E7C40(v133, v54, &v116, v135, v53, v52, v4);
LABEL_82:
      v55 = 1;
      goto LABEL_83;
    }
    if ( (unsigned __int64)v113 > 1 && a1 )
      sub_BB6A0(a1, (__int64)&v112);
  }
  v55 = 0;
LABEL_83:
  sub_BDA70(&v119);
  if ( v114 )
  {
    *(_QWORD *)&v115 = 0;
    qfree();
  }
  if ( v112 )
  {
    *(_QWORD *)&v113 = 0;
    qfree();
  }
  if ( src )
  {
    *(_QWORD *)&v111 = 0;
    qfree();
  }
  if ( (_BYTE)v55 )
  {
    v56 = &byte_252100;
    if ( (_QWORD)v105 )
      v56 = (char *)v104;
    v57 = *v56 != 0;
    v58 = *(_DWORD *)(dbg + 16LL);
    debugger_plugins = get_debugger_plugins();
    if ( debugger_plugins )
    {
      v62 = (_QWORD *)v119;
      v63 = 0;
      while ( 1 )
      {
        v64 = v62[1];
        if ( v58 == *(_DWORD *)(v64 + 16) && v57 == (*(_BYTE *)(v64 + 32) & 1) )
          break;
        ++v63;
        v62 += 2;
        if ( debugger_plugins == v63 )
          goto LABEL_100;
      }
      if ( v62 && v64 != dbg )
        sub_E7D10(v62, 1, v63, v64, v60, v61);
    }
LABEL_100:
    dword_2526BC |= 1u;
  }
  if ( v116 )
  {
    v65 = v117;
    if ( (_QWORD)v117 )
    {
      v66 = 0;
      v67 = v116;
      do
      {
        v68 = (_QWORD *)(v67 + 24 * v66);
        if ( *v68 )
        {
          v68[1] = 0;
          qfree();
          v67 = v116;
        }
        ++v66;
      }
      while ( v65 != v66 );
    }
    *(_QWORD *)&v117 = 0;
    qfree();
  }
  if ( dest )
  {
    *(_QWORD *)&v109 = 0;
    qfree();
  }
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    qfree();
  }
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree();
  }
  return v55;
}

