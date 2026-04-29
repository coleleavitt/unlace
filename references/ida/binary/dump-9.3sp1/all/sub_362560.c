__int64 __fastcall sub_362560(__int64 *a1, __int64 a2, char a3, char a4, double a5, double a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *exception; // r15
  int v9; // eax
  const char *v10; // rax
  size_t v11; // rbx
  void *v12; // rax
  void *v13; // rsi
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  _QWORD *func; // rax
  _QWORD *v19; // r13
  unsigned int v20; // r13d
  __int64 *v22; // r14
  int v23; // eax
  int v24; // eax
  char v25; // r12
  int v26; // r12d
  __int64 v27; // rsi
  __int64 *v28; // r12
  const __m128i *v29; // rax
  __int64 v30; // rdx
  __m128i v31; // xmm0
  __int64 v32; // rdx
  int v33; // r15d
  bool v34; // zf
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // r15
  __int64 *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // r15
  __int64 *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // r13
  __int64 *v49; // rcx
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rbx
  __int64 v54; // r13
  __int64 *v55; // rax
  __int64 v56; // rdi
  __int64 *v57; // rdx
  __int64 *v58; // rcx
  __int64 *v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // r8
  __int64 *v62; // r14
  __int64 v63; // r12
  __int64 i; // rbx
  __int64 *v65; // rdx
  __int64 v66; // rdi
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 *v69; // r14
  __int64 v70; // r12
  __int64 v71; // rbx
  __int64 *v72; // rax
  __int64 v73; // rdi
  _BYTE *v74; // rax
  const char *v75; // r8
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rbx
  __int64 v79; // r13
  __int64 *v80; // rcx
  __int64 v81; // rdi
  __int64 v82; // rdi
  __int64 v83; // rdx
  __int64 v84; // rbx
  __int64 v85; // r13
  __int64 *v86; // rax
  __int64 v87; // rdi
  __int64 *v88; // rax
  int v89; // esi
  size_t v90; // rdx
  _BYTE *v91; // rsi
  __int64 v92; // r9
  size_t v93; // r8
  void *v94; // rax
  __int64 v95; // [rsp+8h] [rbp-188h]
  __int64 v96; // [rsp+8h] [rbp-188h]
  size_t v97; // [rsp+8h] [rbp-188h]
  __int64 *v98; // [rsp+10h] [rbp-180h]
  __int64 *v99; // [rsp+10h] [rbp-180h]
  __int64 v100; // [rsp+10h] [rbp-180h]
  __int64 v101; // [rsp+18h] [rbp-178h]
  __int64 v102; // [rsp+18h] [rbp-178h]
  __int64 *v103; // [rsp+18h] [rbp-178h]
  __int64 *v104; // [rsp+18h] [rbp-178h]
  __int64 *v105; // [rsp+18h] [rbp-178h]
  __int64 *v106; // [rsp+18h] [rbp-178h]
  __int64 *v107; // [rsp+18h] [rbp-178h]
  __int64 *v108; // [rsp+18h] [rbp-178h]
  __int64 v109; // [rsp+18h] [rbp-178h]
  __int64 v110; // [rsp+18h] [rbp-178h]
  __int64 v111; // [rsp+18h] [rbp-178h]
  __int64 nsec_stamp; // [rsp+30h] [rbp-160h]
  __int64 v114; // [rsp+38h] [rbp-158h]
  __int64 *v115; // [rsp+40h] [rbp-150h] BYREF
  __int64 v116; // [rsp+48h] [rbp-148h]
  _QWORD *v117; // [rsp+60h] [rbp-130h] BYREF
  __int64 v118; // [rsp+68h] [rbp-128h]
  __int128 v119; // [rsp+70h] [rbp-120h]
  __int64 v120; // [rsp+80h] [rbp-110h] BYREF
  __int64 v121; // [rsp+88h] [rbp-108h]
  void *src; // [rsp+90h] [rbp-100h]
  size_t n[3]; // [rsp+98h] [rbp-F8h]
  void *v124; // [rsp+B0h] [rbp-E0h] BYREF
  _BYTE v125[24]; // [rsp+B8h] [rbp-D8h]
  int v126; // [rsp+D0h] [rbp-C0h]
  __int64 v127; // [rsp+D8h] [rbp-B8h]
  char v128; // [rsp+E0h] [rbp-B0h]
  char v129; // [rsp+E1h] [rbp-AFh]
  __int64 v130; // [rsp+E8h] [rbp-A8h]
  char v131[96]; // [rsp+F0h] [rbp-A0h] BYREF
  unsigned __int64 v132; // [rsp+158h] [rbp-38h]

  v132 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 100) == 3 )
    return 1;
  v14 = *(_QWORD *)(a2 + 32);
  v15 = a2;
  *(_QWORD *)(*a1 + 408) = v14;
  func = (_QWORD *)get_func();
  v19 = func;
  if ( !func || *func != v14 )
  {
    *(_DWORD *)(a2 + 100) = 4;
    return 2;
  }
  show_auto();
  if ( (*(_DWORD *)(*a1 + 1336) & 4) == 0 && !sub_13DCA0(*(_QWORD *)(*a1 + 112), v14) )
  {
    qtime64();
    qstrftime64();
    v124 = nullptr;
    *(_OWORD *)v125 = 0;
    v74 = (_BYTE *)qvector_reserve((__int64)&v124, 0, 4, 1);
    v124 = v74;
    *(_QWORD *)v125 = 4;
    *(_WORD *)v74 = 11822;
    v74[2] = 46;
    v131[32] = 0;
    *((_BYTE *)v124 + 3) = 0;
    v75 = (const char *)*(unsigned int *)(a2 + 112);
    if ( (int)v75 <= 0 )
      goto LABEL_91;
    v120 = 0;
    if ( !(unsigned __int8)sub_3810A0(*a1, v14, &v120, 2) )
    {
LABEL_137:
      qstpncpy();
      qsnprintf();
      clear_tinfo_t();
      v75 = (const char *)*(unsigned int *)(v15 + 112);
LABEL_91:
      sub_6D0A0(
        (__int64)"%s decompiling %a size=%08a times=%d%s%s\n",
        v131,
        0.0,
        a6,
        v14,
        *(const char **)(v15 + 40),
        v75);
      if ( v124 )
      {
        *(_QWORD *)v125 = 0;
        qfree((__int64)v124);
      }
      goto LABEL_7;
    }
    sub_32B7F0((__int64 *)&v124, (__int64)&v120, nullptr);
    v90 = *(_QWORD *)v125;
    v91 = v124;
    if ( *(_QWORD *)v125 )
    {
      v92 = *(_QWORD *)v125 + 1LL;
      v93 = *(_QWORD *)v125 - 1LL;
      if ( *(_QWORD *)&v125[8] >= (unsigned __int64)(*(_QWORD *)v125 + 1LL) )
        goto LABEL_134;
    }
    else
    {
      if ( *(_QWORD *)&v125[8] > 1u )
      {
        *(_QWORD *)v125 = 2;
        *((_BYTE *)v124 + 1) = 0;
LABEL_136:
        *(_BYTE *)v124 = 32;
        goto LABEL_137;
      }
      v93 = 0;
      v92 = 2;
    }
    v97 = v93;
    v100 = v92;
    v94 = (void *)qvector_reserve((__int64)&v124, (__int64)v124, v92, 1);
    v93 = v97;
    v124 = v94;
    v91 = v94;
    v92 = v100;
    v90 = v97 + 1;
LABEL_134:
    *(_QWORD *)v125 = v92;
    v91[v90] = 0;
    if ( v93 )
      memmove((char *)v124 + 1, v124, v93);
    goto LABEL_136;
  }
LABEL_7:
  v22 = (__int64 *)(v15 + 8);
  v118 = 0;
  v117 = v19;
  *(_QWORD *)(v15 + 16) = 0;
  v124 = &off_4DFFB8;
  v23 = *(_DWORD *)(v15 + 112);
  *(_QWORD *)v125 = 0;
  ++v23;
  v128 = 0;
  v126 = 0;
  v127 = 0;
  v129 = 0;
  v130 = v15 + 8;
  *(_DWORD *)(v15 + 112) = v23;
  v119 = 0;
  *(_OWORD *)&v125[8] = 0;
  if ( v23 > 49 )
  {
    if ( !under_debugger )
      sub_383060(50016);
    goto LABEL_146;
  }
  v24 = a4 == 0 ? 98 : 96;
  v25 = *(_BYTE *)(*a1 + 1336);
  *(_OWORD *)n = 0;
  v120 = 0;
  v121 = -1;
  src = nullptr;
  v26 = v24 | ((v25 & 0x10) == 0);
  nsec_stamp = get_nsec_stamp();
  v27 = *a1;
  if ( a3 )
  {
    sub_14CD30((__int64 *)&v115, v27, &v117, (__int64)&v124, &v120, v26);
    v28 = v115;
    if ( v115 && !*((_DWORD *)v115 + 26) )
    {
      sub_258970(v115);
      v77 = v28[23];
      if ( v77 )
      {
        if ( v28[24] )
        {
          v110 = v15;
          v78 = 0;
          v79 = v28[24];
          do
          {
            v80 = (__int64 *)(v77 + 24 * v78);
            v81 = *v80;
            if ( *v80 )
            {
              v80[1] = 0;
              qfree(v81);
              v77 = v28[23];
            }
            ++v78;
          }
          while ( v79 != v78 );
          v15 = v110;
        }
        v28[24] = 0;
        qfree(v77);
      }
      v82 = v28[20];
      if ( v82 )
      {
        v28[21] = 0;
        qfree(v82);
      }
      v83 = v28[16];
      if ( v83 )
      {
        if ( v28[17] )
        {
          v111 = v15;
          v84 = 0;
          v85 = v28[17];
          do
          {
            v86 = (__int64 *)(v83 + 32 * v84);
            v87 = *v86;
            if ( *v86 )
            {
              v86[1] = 0;
              qfree(v87);
              v83 = v28[16];
            }
            ++v84;
          }
          while ( v85 != v84 );
          v15 = v111;
        }
        v28[17] = 0;
        qfree(v83);
      }
      sub_255050((__int64)(v28 + 2));
      j__qfree((__int64)v28);
    }
    v20 = 1;
    goto LABEL_12;
  }
  sub_14CDC0((__int64 *)&v115, *(_QWORD *)(v27 + 112), &v117, &v120, v26);
  v28 = v115;
  if ( !v115 )
  {
    v88 = *(__int64 **)v15;
    if ( *(_QWORD *)v15 )
    {
      v89 = *((_DWORD *)v88 + 26);
      v20 = v89 - 1;
      *((_DWORD *)v88 + 26) = v89 - 1;
      if ( v89 == 1 )
      {
        v58 = *(__int64 **)v15;
        if ( *(_QWORD *)v15 )
          goto LABEL_69;
      }
      else
      {
        *(_QWORD *)v15 = 0;
      }
    }
    v20 = 0;
    goto LABEL_12;
  }
  if ( !*((_DWORD *)v115 + 26) )
  {
    sub_258970(v115);
    v46 = v28[23];
    if ( v46 )
    {
      if ( v28[24] )
      {
        v101 = v15;
        v47 = 0;
        v48 = v28[24];
        do
        {
          v49 = (__int64 *)(v46 + 24 * v47);
          v50 = *v49;
          if ( *v49 )
          {
            v49[1] = 0;
            qfree(v50);
            v46 = v28[23];
          }
          ++v47;
        }
        while ( v48 != v47 );
        v15 = v101;
      }
      v28[24] = 0;
      qfree(v46);
    }
    v51 = v28[20];
    if ( v51 )
    {
      v28[21] = 0;
      qfree(v51);
    }
    v52 = v28[16];
    if ( v52 )
    {
      if ( v28[17] )
      {
        v102 = v15;
        v53 = 0;
        v54 = v28[17];
        do
        {
          v55 = (__int64 *)(v52 + 32 * v53);
          v56 = *v55;
          if ( *v55 )
          {
            v55[1] = 0;
            qfree(v56);
            v52 = v28[16];
          }
          ++v53;
        }
        while ( v54 != v53 );
        v15 = v102;
      }
      v28[17] = 0;
      qfree(v52);
    }
    sub_255050((__int64)(v28 + 2));
    j__qfree((__int64)v28);
  }
  v57 = *(__int64 **)v15;
  if ( !*(_QWORD *)v15
    || (v34 = *((_DWORD *)v57 + 26) == 1, --*((_DWORD *)v57 + 26), !v34)
    || (v58 = *(__int64 **)v15, v20 = 1, !*(_QWORD *)v15) )
  {
    *(_QWORD *)v15 = v28;
    v20 = 1;
LABEL_122:
    ++*((_DWORD *)v28 + 26);
    goto LABEL_12;
  }
LABEL_69:
  v103 = v58;
  sub_258970(v58);
  v59 = v103;
  v60 = v103[23];
  if ( v60 )
  {
    v61 = v103[24];
    if ( v61 )
    {
      v104 = v22;
      v62 = v59;
      v98 = v28;
      v63 = v61;
      v95 = v15;
      for ( i = 0; i != v63; ++i )
      {
        v65 = (__int64 *)(v60 + 24 * i);
        v66 = *v65;
        if ( *v65 )
        {
          v65[1] = 0;
          qfree(v66);
          v60 = v62[23];
        }
      }
      v59 = v62;
      v28 = v98;
      v22 = v104;
      v15 = v95;
    }
    v59[24] = 0;
    v105 = v59;
    qfree(v60);
    v59 = v105;
  }
  v67 = v59[20];
  if ( v67 )
  {
    v59[21] = 0;
    v106 = v59;
    qfree(v67);
    v59 = v106;
  }
  v68 = v59[16];
  if ( v68 )
  {
    if ( v59[17] )
    {
      v107 = v22;
      v69 = v59;
      v99 = v28;
      v70 = v59[17];
      v96 = v15;
      v71 = 0;
      do
      {
        v72 = (__int64 *)(v68 + 32 * v71);
        v73 = *v72;
        if ( *v72 )
        {
          v72[1] = 0;
          qfree(v73);
          v68 = v69[16];
        }
        ++v71;
      }
      while ( v70 != v71 );
      v59 = v69;
      v28 = v99;
      v22 = v107;
      v15 = v96;
    }
    v59[17] = 0;
    v108 = v59;
    qfree(v68);
    v59 = v108;
  }
  v109 = (__int64)v59;
  sub_255050((__int64)(v59 + 2));
  j__qfree(v109);
  *(_QWORD *)v15 = v28;
  if ( v28 )
    goto LABEL_122;
LABEL_12:
  v29 = (const __m128i *)*a1;
  v30 = *(_QWORD *)(*a1 + 112);
  if ( !*(_DWORD *)(v30 + 16) && *(_DWORD *)(v30 + 84) == 8 )
  {
    sub_361E50(v15 + 80, (__int64)v28);
    v29 = (const __m128i *)*a1;
  }
  *(__m128i *)(v15 + 48) = _mm_loadu_si128(v29 + 61);
  v31 = _mm_loadu_si128(v29 + 62);
  *(__m128i *)(v15 + 64) = v31;
  v32 = get_nsec_stamp();
  *(_QWORD *)(v15 + 104) = v32 + *(_QWORD *)(v15 + 104) - nsec_stamp;
  if ( a3 )
  {
    if ( v28 )
    {
      v33 = 0;
      v114 = v28[1];
      if ( *(_QWORD *)(v114 + 736) )
      {
        do
        {
          sub_FAAD0(v22);
          ++v33;
        }
        while ( (unsigned __int64)v33 < *(_QWORD *)(v114 + 736) );
      }
      *(_DWORD *)(v15 + 100) = 1;
      goto LABEL_20;
    }
    if ( (unsigned int)~(_DWORD)v120 <= 0x22 )
    {
      ++*((_DWORD *)a1 + ~(_DWORD)v120 + 84);
      sub_3310F0((__int64)&v115, (__int64)&v120, v32);
      sub_6B870(v22);
      if ( v115 )
      {
        v116 = 0;
        qfree((__int64)v115);
      }
      if ( (_DWORD)v120 == -18 )
      {
        v20 = -1;
      }
      else
      {
        if ( (_DWORD)v120 == -1 )
        {
          exception = __cxa_allocate_exception(0x30u);
          *exception = off_4DBCD0;
          v9 = v120;
          exception[3] = 0;
          *((_DWORD *)exception + 2) = v9;
          v10 = (const char *)v121;
          *((_OWORD *)exception + 2) = 0;
          exception[2] = v10;
          v11 = n[0];
          if ( n[0] )
          {
            v12 = (void *)qalloc_or_throw(n[0], (__int64)"#error \"%a: %s (funcsize=%d)\"\n", v6, v7);
            exception[3] = v12;
            v13 = src;
            exception[5] = v11;
            memcpy(v12, v13, v11);
            exception[4] = v11;
          }
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
        }
        if ( (*(_BYTE *)(*a1 + 1336) & 4) == 0 )
        {
          sub_3310F0((__int64)&v115, (__int64)&v120, v76);
          sub_6D0A0((__int64)"%a: %s\n", *(double *)v31.m128i_i64, (const char *)v121);
          if ( v115 )
          {
            v116 = 0;
            qfree((__int64)v115);
          }
        }
        *(_DWORD *)(v15 + 100) = 2;
        v20 = 0;
      }
      goto LABEL_38;
    }
    if ( !under_debugger )
      sub_383060(50017);
LABEL_146:
    BUG();
  }
  if ( v28 )
  {
LABEL_20:
    v34 = (*((_DWORD *)v28 + 26))-- == 1;
    if ( v34 )
    {
      sub_258970(v28);
      v35 = v28[23];
      if ( v35 )
      {
        if ( v28[24] )
        {
          v36 = 0;
          v37 = v28[24];
          do
          {
            v38 = (__int64 *)(v35 + 24 * v36);
            v39 = *v38;
            if ( *v38 )
            {
              v38[1] = 0;
              qfree(v39);
              v35 = v28[23];
            }
            ++v36;
          }
          while ( v37 != v36 );
        }
        v28[24] = 0;
        qfree(v35);
      }
      v40 = v28[20];
      if ( v40 )
      {
        v28[21] = 0;
        qfree(v40);
      }
      v41 = v28[16];
      if ( v41 )
      {
        if ( v28[17] )
        {
          v42 = 0;
          v43 = v28[17];
          do
          {
            v44 = (__int64 *)(v41 + 32 * v42);
            v45 = *v44;
            if ( *v44 )
            {
              v44[1] = 0;
              qfree(v45);
              v41 = v28[16];
            }
            ++v42;
          }
          while ( v43 != v42 );
        }
        v28[17] = 0;
        qfree(v41);
      }
      sub_255050((__int64)(v28 + 2));
      j__qfree((__int64)v28);
    }
  }
LABEL_38:
  if ( src )
  {
    n[0] = 0;
    qfree((__int64)src);
  }
  v124 = &off_4E3638;
  if ( *(_QWORD *)v125 )
  {
    *(_QWORD *)&v125[8] = 0;
    qfree(*(__int64 *)v125);
  }
  if ( v118 )
  {
    *(_QWORD *)&v119 = 0;
    qfree(v118);
  }
  return v20;
}
