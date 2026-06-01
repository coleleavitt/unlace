void __fastcall sub_11A1640(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 *v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __m128i *v8; // rbx
  __int64 v9; // rax
  bool v10; // zf
  bool v11; // r14
  char v12; // r12
  char v13; // r13
  char **v14; // rbp
  void ***v15; // r9
  char *v16; // rcx
  void **v17; // rdx
  char v18; // al
  void **v19; // rax
  bool v20; // dl
  __int64 v21; // rsi
  int v22; // r13d
  const void **v23; // r12
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // r13
  size_t v27; // r14
  _QWORD *v28; // rax
  void *v29; // r14
  _BYTE *v30; // r15
  const void *v31; // r13
  __int64 v32; // rbp
  unsigned __int64 v33; // rbx
  size_t v34; // rdx
  int v35; // eax
  __int64 v36; // rbx
  char *v37; // r13
  char *v38; // rdi
  char *v39; // r14
  void **v40; // r13
  void **v41; // r12
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // r14
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  __int64 *v47; // r14
  __int64 v48; // r12
  __m128i v49; // xmm1
  __int64 v50; // rbp
  __m128i *v51; // r13
  __int64 v52; // rsi
  __m128i v53; // xmm1
  __int64 *v54; // rbp
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 *v57; // r14
  __int64 v58; // r13
  __m128i *v59; // r12
  __int64 v60; // rsi
  unsigned int v61; // eax
  int v62; // ecx
  const char *v63; // rsi
  bool v64; // dl
  __int64 v65; // rax
  __int64 *v66; // r15
  char *v67; // r12
  char *v68; // r13
  unsigned int v69; // r14d
  __int64 v70; // rbp
  void *v71; // rdi
  size_t v72; // rax
  __int64 v73; // rax
  char *v74; // rbp
  __int64 v75; // r13
  __int64 v76; // r14
  __int64 v77; // r15
  __int64 v78; // rax
  __int64 *v79; // rbp
  char *v80; // r12
  char *i; // r15
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rax
  void **v87; // rcx
  unsigned __int64 v88; // r8
  __m128i *v89; // r13
  __m128i *v90; // r14
  void *v91; // r15
  __int64 v92; // r12
  unsigned __int64 v93; // rbp
  void *v94; // rbx
  __int64 v95; // rax
  __m128i *v96; // rdx
  __m128i *v97; // rbp
  unsigned int v98; // r12d
  __m128i *v99; // rax
  __int64 v100; // rsi
  __m128i *v101; // rax
  void **v102; // r13
  void **v103; // r12
  __m128i v105; // [rsp+10h] [rbp-1D8h] BYREF
  void **v106; // [rsp+20h] [rbp-1C8h]
  __int64 *v107; // [rsp+28h] [rbp-1C0h]
  char *v108; // [rsp+30h] [rbp-1B8h]
  __int64 v109; // [rsp+38h] [rbp-1B0h]
  void **v110; // [rsp+40h] [rbp-1A8h]
  void ***v111; // [rsp+48h] [rbp-1A0h]
  __int64 *v112; // [rsp+50h] [rbp-198h]
  __int64 *v113; // [rsp+58h] [rbp-190h]
  const void **v114; // [rsp+60h] [rbp-188h] BYREF
  __int64 v115; // [rsp+68h] [rbp-180h]
  void *v116; // [rsp+80h] [rbp-168h] BYREF
  size_t v117; // [rsp+88h] [rbp-160h]
  _BYTE v118[16]; // [rsp+90h] [rbp-158h] BYREF
  void *s2[2]; // [rsp+A0h] [rbp-148h] BYREF
  int v120; // [rsp+B0h] [rbp-138h]
  void *v121; // [rsp+B8h] [rbp-130h]
  __m128i si128; // [rsp+F0h] [rbp-F8h] BYREF
  __int128 v123; // [rsp+100h] [rbp-E8h] BYREF
  int v124; // [rsp+110h] [rbp-D8h]
  __int64 v125; // [rsp+180h] [rbp-68h] BYREF
  int v126; // [rsp+188h] [rbp-60h] BYREF
  void *v127; // [rsp+190h] [rbp-58h]
  int *v128; // [rsp+198h] [rbp-50h]
  int *v129; // [rsp+1A0h] [rbp-48h]
  __int64 v130; // [rsp+1A8h] [rbp-40h]

  v4 = (__int64 *)a4;
  v109 = a1;
  v5 = *(_QWORD *)(a1 + 24);
  LODWORD(v112) = a3;
  LODWORD(v108) = *(_DWORD *)(v5 + 48) - 41;
  sub_118C390(v5, a2, a4);
  v6 = sub_10DE660(a2, 0xCC7u, 0xCC6u);
  if ( v6 )
  {
    v7 = v6;
    sub_10DC5D0((__int64)v4, (__int64)"--show-includes");
    if ( (unsigned __int8)sub_21B9810(v7, 3271) )
      sub_10DC5D0((__int64)v4, (__int64)"-sys-header-deps");
  }
  if ( (unsigned __int8)sub_21B7850(a2, 2059, 2064, 0) )
    sub_10DC5D0((__int64)v4, (__int64)"-fno-rtti-data");
  v8 = &si128;
  if ( (unsigned int)v108 > 1 && (unsigned __int8)sub_21B7850(a2, 2075, 2066, 1) )
  {
    sub_10DC5D0((__int64)v4, (__int64)"-stack-protector");
    LOWORD(v124) = 266;
    si128.m128i_i32[0] = 2;
    v86 = sub_10DA6C0(a2, (__int64)&si128);
    sub_10DC5D0((__int64)v4, v86);
  }
  v105.m128i_i8[8] = 0;
  v9 = *(_QWORD *)(v109 + 24);
  v10 = *(_DWORD *)(v9 + 60) == 15;
  v107 = *(__int64 **)(v9 + 8);
  if ( v10 )
  {
    v85 = *(_DWORD *)(v9 + 64);
    v105.m128i_i8[8] = 1;
    if ( v85 != 27 )
      v105.m128i_i8[8] = v85 == 0;
  }
  v106 = s2;
  sub_21B7150(s2, a2, 330);
  v105.m128i_i64[0] = (__int64)s2[1];
  if ( s2[0] == s2[1] )
  {
    v13 = 0;
    v12 = 0;
    v11 = 0;
LABEL_215:
    if ( (unsigned __int8)sub_21B7850(a2, 2089, 2087, 0) )
    {
      v11 = 1;
      v13 = 1;
    }
    goto LABEL_31;
  }
  v113 = v4;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = (char **)s2[0];
  do
  {
    v15 = (void ***)v14[1];
    if ( v15 )
    {
      v16 = *v14;
      v17 = nullptr;
      v18 = **v14;
      if ( v18 == 99 )
      {
        while ( 1 )
        {
          v19 = (void **)((char *)v17 + 1);
          v11 = 1;
          if ( (char *)v17 + 1 < v14[1] )
          {
            v20 = *((_BYTE *)v17 + (_QWORD)v16 + 1) == 45;
            v11 = !v20;
            v19 = (void **)((char *)v19 + v20);
          }
LABEL_19:
          v17 = v19;
          if ( v15 == (void ***)v19 )
            break;
          v16 = *v14;
          v18 = *((_BYTE *)v19 + (_QWORD)*v14);
          if ( v18 != 99 )
            goto LABEL_15;
        }
      }
      else
      {
LABEL_15:
        if ( v18 == 115 )
        {
          v19 = (void **)((char *)v17 + 1);
          if ( (char *)v17 + 1 < v14[1] && *((_BYTE *)v17 + (_QWORD)v16 + 1) == 45 )
          {
            v19 = (void **)((char *)v17 + 2);
            v13 = 0;
          }
          else
          {
            v12 = 0;
            v13 = 1;
          }
          goto LABEL_19;
        }
        if ( v18 == 97 )
        {
          v19 = (void **)((char *)v17 + 1);
          if ( (char *)v17 + 1 < v14[1] && *((_BYTE *)v17 + (_QWORD)v16 + 1) == 45 )
          {
            v19 = (void **)((char *)v17 + 2);
            v12 = 0;
          }
          else if ( v105.m128i_i8[8] )
          {
            v12 = 1;
            v13 = 0;
          }
          else
          {
            v21 = *v107;
            v111 = v15;
            v12 = 0;
            v110 = (void **)((char *)v17 + 1);
            sub_FC70B0((__int64)&si128, v21, 0, 611);
            sub_1188FA0((unsigned __int8 **)&si128, (__int64)"/EHa");
            sub_AEC220((unsigned __int8 **)&si128, *v14, (signed __int64)v14[1]);
            sub_AEA040((__int64)&si128);
            v19 = v110;
            v15 = v111;
          }
          goto LABEL_19;
        }
        sub_FC70B0((__int64)&si128, *v107, 0, 400);
        sub_1188FA0((unsigned __int8 **)&si128, (__int64)"/EH");
        sub_AEC220((unsigned __int8 **)&si128, *v14, (signed __int64)v14[1]);
        sub_AEA040((__int64)&si128);
      }
    }
    v14 += 4;
  }
  while ( (char **)v105.m128i_i64[0] != v14 );
  v4 = v113;
  if ( s2[1] == s2[0] )
    goto LABEL_215;
LABEL_31:
  if ( sub_10DCD30(a2, 0x887u) )
  {
    sub_9B4A30((void ***)v106);
LABEL_33:
    sub_12CCC80((unsigned int)v112);
    goto LABEL_34;
  }
  sub_9B4A30((void ***)v106);
  if ( (unsigned int)v108 > 1 )
  {
    if ( v13 )
    {
      if ( !(unsigned __int8)sub_12CCC80((unsigned int)v112) )
        goto LABEL_199;
    }
    else
    {
      if ( !v12 )
        goto LABEL_33;
      if ( !(unsigned __int8)sub_12CCC80((unsigned int)v112) )
      {
        sub_10DC5D0((__int64)v4, (__int64)"-fexceptions");
        goto LABEL_221;
      }
    }
    sub_10DC5D0((__int64)v4, (__int64)"-fcxx-exceptions");
LABEL_199:
    sub_10DC5D0((__int64)v4, (__int64)"-fexceptions");
    if ( !v12 )
      goto LABEL_200;
LABEL_221:
    sub_10DC5D0((__int64)v4, (__int64)"-fasync-exceptions");
  }
LABEL_200:
  if ( (unsigned __int8)sub_12CCC80((unsigned int)v112) && v13 && v11 )
    sub_10DC5D0((__int64)v4, (__int64)"-fexternc-nounwind");
LABEL_34:
  if ( sub_10DCD30(a2, 0x16Du) )
  {
    sub_10DC5D0((__int64)v4, (__int64)"-E");
    sub_10DC5D0((__int64)v4, (__int64)"-P");
  }
  if ( (unsigned __int8)sub_21B7850(a2, 3529, 3530, 0) )
    sub_10DC5D0((__int64)v4, (__int64)"-fno-dllexport-inlines");
  if ( (unsigned __int8)sub_21B7850(a2, 3546, 3547, 0) )
    sub_10DC5D0((__int64)v4, (__int64)"-fno-wchar");
  if ( sub_10DCD30(a2, 0x887u) )
  {
    v111 = (void ***)&v114;
    v22 = *(_DWORD *)(*(_QWORD *)(v109 + 24) + 48LL);
    sub_21B7150(&v114, a2, 126);
    v23 = v114;
    v105.m128i_i64[0] = v115;
    if ( v114 == (const void **)v115 )
    {
LABEL_80:
      sub_10DC5D0((__int64)v4, (__int64)"-fno-rtti");
      if ( (unsigned __int8)sub_21B7850(a2, 2064, 2059, 0) )
      {
        sub_FC70B0((__int64)v8, *v107, 0, 323);
        sub_1188FA0((unsigned __int8 **)v8, (__int64)"/GR");
        sub_1188FA0((unsigned __int8 **)v8, (__int64)"/kernel");
        sub_AEA040((__int64)v8);
      }
      sub_9B4A30(v111);
      goto LABEL_83;
    }
    v126 = 0;
    si128.m128i_i64[0] = (__int64)&v123;
    si128.m128i_i64[1] = 0x400000000LL;
    v128 = &v126;
    v129 = &v126;
    v24 = 0;
    v127 = nullptr;
    v130 = 0;
    if ( v22 != 37 )
    {
LABEL_43:
      v112 = v4;
      v110 = &v116;
      v105.m128i_i64[1] = (__int64)v8;
      if ( !v24 )
      {
LABEL_44:
        v25 = si128.m128i_i64[0];
        v26 = si128.m128i_i64[0] + 32LL * si128.m128i_u32[2];
        if ( si128.m128i_i64[0] == v26 )
          goto LABEL_48;
        v27 = (size_t)v23[1];
        while ( *(_QWORD *)(v25 + 8) != v27 || v27 && memcmp(*(const void **)v25, *v23, v27) )
        {
          v25 += 32;
          if ( v26 == v25 )
            goto LABEL_48;
        }
        if ( v26 == v25 )
        {
LABEL_48:
          sub_FC70B0((__int64)v106, *v107, 0, 323);
          sub_1189430(v110, "/arch:");
          v28 = sub_9EE560(v110, *v23, (size_t)v23[1]);
          sub_AEC220((unsigned __int8 **)v106, (_BYTE *)*v28, v28[1]);
          sub_1188FA0((unsigned __int8 **)v106, (__int64)"/kernel");
          if ( v116 != v110 + 2 )
            operator delete(v116);
          sub_AEA040((__int64)v106);
        }
        v23 += 4;
        if ( v23 == (const void **)v105.m128i_i64[0] )
          goto LABEL_68;
        goto LABEL_52;
      }
LABEL_53:
      v29 = v127;
      if ( !v127 )
        goto LABEL_48;
      v30 = v23[1];
      v31 = *v23;
      v32 = v105.m128i_i64[1] + 152;
      while ( 1 )
      {
        v33 = *((_QWORD *)v29 + 5);
        v34 = (size_t)v30;
        if ( v33 <= (unsigned __int64)v30 )
          v34 = *((_QWORD *)v29 + 5);
        if ( v34 )
        {
          v35 = memcmp(*((const void **)v29 + 4), v31, v34);
          if ( v35 )
            goto LABEL_63;
        }
        v36 = v33 - (_QWORD)v30;
        if ( v36 > 0x7FFFFFFF )
        {
LABEL_64:
          v32 = (__int64)v29;
          v29 = *((void **)v29 + 2);
          if ( !v29 )
          {
LABEL_65:
            if ( v32 == v105.m128i_i64[1] + 152 || sub_9C4B50((__int64)v23, v32 + 32) < 0 )
              goto LABEL_48;
            v23 += 4;
            if ( v23 == (const void **)v105.m128i_i64[0] )
            {
LABEL_68:
              v4 = v112;
              v8 = (__m128i *)v105.m128i_i64[1];
              goto LABEL_69;
            }
LABEL_52:
            if ( !v130 )
              goto LABEL_44;
            goto LABEL_53;
          }
        }
        else
        {
          if ( v36 < (__int64)0xFFFFFFFF80000000LL )
            goto LABEL_55;
          v35 = v36;
LABEL_63:
          if ( v35 >= 0 )
            goto LABEL_64;
LABEL_55:
          v29 = *((void **)v29 + 3);
          if ( !v29 )
            goto LABEL_65;
        }
      }
    }
    sub_1189430(v106, "IA32");
    if ( v130 )
    {
      sub_11A14A0((__int64)&v125, (__m128i *)v106);
      v87 = (void **)s2[0];
LABEL_228:
      if ( v87 != v106 + 2 )
        operator delete(v87);
      v23 = v114;
      v105.m128i_i64[0] = v115;
      if ( (const void **)v115 != v114 )
      {
        v24 = v130;
        goto LABEL_43;
      }
LABEL_69:
      v37 = (char *)v127;
      if ( v127 )
      {
        while ( 1 )
        {
          sub_F7EAE0((__int64)v8[9].m128i_i64, *((_QWORD **)v37 + 3));
          v38 = *((char **)v37 + 4);
          v39 = *((char **)v37 + 2);
          if ( v38 == v37 + 48 )
          {
            operator delete(v37);
            if ( !v39 )
              break;
          }
          else
          {
            operator delete(v38);
            operator delete(v37);
            if ( !v39 )
              break;
          }
          v37 = v39;
        }
      }
      v40 = (void **)si128.m128i_i64[0];
      v41 = (void **)(si128.m128i_i64[0] + 32LL * si128.m128i_u32[2]);
      if ( (void **)si128.m128i_i64[0] != v41 )
      {
        do
        {
          while ( 1 )
          {
            v41 -= 4;
            if ( *v41 == v41 + 2 )
              break;
            operator delete(*v41);
            if ( v40 == v41 )
              goto LABEL_77;
          }
        }
        while ( v40 != v41 );
LABEL_77:
        v41 = (void **)si128.m128i_i64[0];
      }
      if ( v41 != (void **)&v8[1] )
        free(v41);
      goto LABEL_80;
    }
    v88 = si128.m128i_u32[2];
    v89 = (__m128i *)si128.m128i_i64[0];
    v90 = (__m128i *)(si128.m128i_i64[0] + 32LL * si128.m128i_u32[2]);
    if ( (__m128i *)si128.m128i_i64[0] == v90 )
    {
      if ( si128.m128i_u32[2] > 3uLL )
      {
LABEL_260:
        si128.m128i_i32[2] = 0;
        sub_11A14A0((__int64)v8[9].m128i_i64, (__m128i *)v106);
        v87 = (void **)s2[0];
        goto LABEL_228;
      }
    }
    else
    {
      v91 = s2[1];
      v105.m128i_i64[0] = (__int64)v4;
      v92 = si128.m128i_i64[0];
      v105.m128i_i64[1] = (__int64)&si128;
      v93 = si128.m128i_u32[2];
      v94 = s2[0];
      while ( *(void **)(v92 + 8) != v91 || v91 && memcmp(*(const void **)v92, v94, (size_t)v91) )
      {
        v92 += 32;
        if ( v90 == (__m128i *)v92 )
        {
          v88 = v93;
          v8 = (__m128i *)v105.m128i_i64[1];
          v4 = (__int64 *)v105.m128i_i64[0];
          if ( v88 <= 3 )
            goto LABEL_251;
LABEL_237:
          v105.m128i_i64[0] = (__int64)v4;
          do
          {
            v95 = sub_1110010((__m128i *)v8[9].m128i_i64, &v8[9].m128i_i64[1], (__int64)v89);
            v97 = v96;
            if ( v96 )
            {
              if ( v95 || v96 == (__m128i *)&v8[9].m128i_u64[1] )
                v98 = 1;
              else
                v98 = (unsigned int)sub_9C4B50((__int64)v89, (__int64)v96[2].m128i_i64) >> 31;
              v99 = (__m128i *)operator new(0x40u);
              v99[2].m128i_i64[0] = (__int64)v99[3].m128i_i64;
              if ( (__m128i *)v89->m128i_i64[0] == &v89[1] )
              {
                v99[3] = _mm_loadu_si128(v89 + 1);
              }
              else
              {
                v99[2].m128i_i64[0] = v89->m128i_i64[0];
                v99[3].m128i_i64[0] = v89[1].m128i_i64[0];
              }
              v99[2].m128i_i64[1] = v89->m128i_i64[1];
              v89->m128i_i64[0] = (__int64)v89[1].m128i_i64;
              v89->m128i_i64[1] = 0;
              v89[1].m128i_i8[0] = 0;
              std::_Rb_tree_insert_and_rebalance(v98, v99, v97, &v8[9].m128i_u64[1]);
              ++v130;
            }
            v89 += 2;
          }
          while ( v90 != v89 );
          v102 = (void **)si128.m128i_i64[0];
          v4 = (__int64 *)v105.m128i_i64[0];
          v103 = (void **)(si128.m128i_i64[0] + 32LL * si128.m128i_u32[2]);
          while ( v102 != v103 )
          {
            while ( 1 )
            {
              v103 -= 4;
              if ( *v103 == v103 + 2 )
                break;
              operator delete(*v103);
              if ( v102 == v103 )
                goto LABEL_260;
            }
          }
          goto LABEL_260;
        }
      }
      v88 = v93;
      v87 = (void **)v94;
      v8 = (__m128i *)v105.m128i_i64[1];
      v4 = (__int64 *)v105.m128i_i64[0];
      if ( v90 != (__m128i *)v92 )
        goto LABEL_228;
      if ( v88 > 3 )
        goto LABEL_237;
    }
LABEL_251:
    v100 = v88 + 1;
    v101 = (__m128i *)v106;
    if ( v88 + 1 > si128.m128i_u32[3] )
    {
      if ( v89 > (__m128i *)v106 || v90 <= (__m128i *)v106 )
      {
        sub_A8C1F0((__int64)v8, v100);
        v101 = (__m128i *)v106;
        v90 = (__m128i *)(si128.m128i_i64[0] + 32LL * si128.m128i_u32[2]);
      }
      else
      {
        sub_A8C1F0((__int64)v8, v100);
        v101 = (__m128i *)(si128.m128i_i64[0] + (char *)v106 - (char *)v89);
        v90 = (__m128i *)(32LL * si128.m128i_u32[2] + si128.m128i_i64[0]);
      }
    }
    v90->m128i_i64[0] = (__int64)v90[1].m128i_i64;
    if ( (__m128i *)v101->m128i_i64[0] == &v101[1] )
    {
      v90[1] = _mm_loadu_si128(v101 + 1);
    }
    else
    {
      v90->m128i_i64[0] = v101->m128i_i64[0];
      v90[1].m128i_i64[0] = v101[1].m128i_i64[0];
    }
    v90->m128i_i64[1] = v101->m128i_i64[1];
    v101->m128i_i64[0] = (__int64)v101[1].m128i_i64;
    v101->m128i_i64[1] = 0;
    v101[1].m128i_i8[0] = 0;
    v87 = (void **)s2[0];
    ++si128.m128i_i32[2];
    goto LABEL_228;
  }
LABEL_83:
  v42 = sub_10DCD30(a2, 0xD3Cu);
  v43 = sub_10DCD30(a2, 0xD3Bu);
  v44 = v43;
  if ( v42 && v43 )
  {
    sub_FC70B0((__int64)v8, *v107, 0, 323);
    sub_21B5FF0(&v116, v42, a2);
    sub_AEC220((unsigned __int8 **)v8, v116, v117);
    sub_21B5FF0(v106, v44, a2);
    sub_AEC220((unsigned __int8 **)v8, (_BYTE *)s2[0], (signed __int64)s2[1]);
    if ( s2[0] != v106 + 2 )
      operator delete(s2[0]);
    if ( v116 != v118 )
      operator delete(v116);
    sub_AEA040((__int64)v8);
  }
  else if ( !v42 )
  {
    goto LABEL_86;
  }
  v75 = sub_10DCD30(a2, 0xD3Eu);
  v76 = sub_10DCD30(a2, 0xD3Du);
  v77 = sub_10DCD30(a2, 0xD3Fu);
  if ( v75 )
  {
    v78 = v75;
    if ( !v77 )
      v77 = v76;
  }
  else
  {
    v78 = v76;
    if ( !v77 )
      goto LABEL_205;
  }
  if ( v77 != 0 && v78 != 0 )
  {
    v105.m128i_i64[0] = v78;
    if ( v77 != v78 )
    {
      sub_FC70B0((__int64)v8, *v107, 0, 323);
      sub_21B5FF0(&v116, v105.m128i_i64[0], a2);
      sub_AEC220((unsigned __int8 **)v8, v116, v117);
      sub_21B5FF0(v106, v77, a2);
      sub_AEC220((unsigned __int8 **)v8, (_BYTE *)s2[0], (signed __int64)s2[1]);
      if ( s2[0] != v106 + 2 )
        operator delete(s2[0]);
      if ( v116 != v118 )
        operator delete(v116);
      sub_AEA040((__int64)v8);
    }
  }
  if ( v75 )
  {
    sub_10DC5D0((__int64)v4, (__int64)"-fms-memptr-rep=single");
    goto LABEL_86;
  }
LABEL_205:
  if ( v76 )
    sub_10DC5D0((__int64)v4, (__int64)"-fms-memptr-rep=multiple");
  else
    sub_10DC5D0((__int64)v4, (__int64)"-fms-memptr-rep=virtual");
LABEL_86:
  if ( sub_10DCD30(a2, 0xC8Au) )
    sub_10DC5D0((__int64)v4, (__int64)"-regcall4");
  LODWORD(v123) = 2063;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9A30);
  v45 = sub_21B6DA0(a2, v8, 5);
  v46 = *(_QWORD *)(a2 + 8);
  v120 = 2063;
  v124 = 2063;
  v47 = (__int64 *)(v46 + 8LL * (unsigned int)v45);
  v48 = v46 + 8 * HIDWORD(v45);
  *(__m128i *)s2 = _mm_load_si128((const __m128i *)&xmmword_23A9A30);
  v105.m128i_i64[0] = v48;
  v123 = *(_OWORD *)s2;
  v49 = (__m128i)_mm_loadh_ps((const double *)v105.m128i_i64);
  si128 = v49;
  if ( v47 != (__int64 *)v48 )
  {
    v105.m128i_i64[0] = (__int64)v4;
    do
    {
      v50 = *v47;
      v51 = v8;
      if ( *v47 )
      {
        do
        {
          v52 = v51[1].m128i_u32[0];
          if ( !(_DWORD)v52 )
            break;
          if ( (unsigned __int8)sub_21B9810(v50, v52) )
          {
            v4 = (__int64 *)v105.m128i_i64[0];
            v105.m128i_i64[0] = v48;
            v49 = (__m128i)_mm_loadh_ps((const double *)v105.m128i_i64);
            goto LABEL_96;
          }
          v51 = (__m128i *)((char *)v51 + 4);
        }
        while ( (__m128i *)((char *)v8[1].m128i_i64 + 4) != v51 );
      }
      si128.m128i_i64[0] = (__int64)++v47;
    }
    while ( (__int64 *)v48 != v47 );
    v4 = (__int64 *)v105.m128i_i64[0];
    v105.m128i_i64[0] = v48;
    v53 = _mm_loadl_epi64(&v105);
    v49 = _mm_unpacklo_epi64(v53, v53);
  }
LABEL_96:
  si128 = v49;
  if ( v47 == (__int64 *)v48 )
    goto LABEL_112;
  v105.m128i_i64[1] = (__int64)v4;
  v54 = (__int64 *)v48;
  v105.m128i_i64[0] = (__int64)v8[1].m128i_i64 + 4;
LABEL_98:
  v55 = *v47;
  v56 = *(_QWORD *)(*v47 + 16);
  if ( !v56 )
    v56 = *v47;
  v57 = v47 + 1;
  *(_BYTE *)(v56 + 44) |= 1u;
  for ( si128.m128i_i64[0] = (__int64)v57; v54 != v57; si128.m128i_i64[0] = (__int64)v57 )
  {
    v58 = *v57;
    v59 = v8;
    if ( *v57 )
    {
      do
      {
        v60 = v59[1].m128i_u32[0];
        if ( !(_DWORD)v60 )
          break;
        if ( (unsigned __int8)sub_21B9810(v58, v60) )
        {
          v47 = (__int64 *)si128.m128i_i64[0];
          if ( v54 != (__int64 *)si128.m128i_i64[0] )
            goto LABEL_98;
          goto LABEL_106;
        }
        v59 = (__m128i *)((char *)v59 + 4);
      }
      while ( v59 != (__m128i *)v105.m128i_i64[0] );
    }
    ++v57;
  }
LABEL_106:
  v4 = (__int64 *)v105.m128i_i64[1];
  v61 = *(_DWORD *)(*(_QWORD *)v55 + 40LL);
  v62 = *(_DWORD *)(*(_QWORD *)(v109 + 24) + 48LL);
  if ( v61 == 2065 )
  {
    v63 = "-fdefault-calling-conv=fastcall";
    v64 = v62 == 37;
    goto LABEL_111;
  }
  if ( v61 <= 0x811 )
  {
    if ( v61 == 2007 )
    {
      v63 = "-fdefault-calling-conv=cdecl";
      if ( (unsigned int)v108 > 1 )
        goto LABEL_180;
    }
    else if ( v61 == 2063 )
    {
      v63 = "-fdefault-calling-conv=regcall";
      if ( (unsigned int)(v62 - 37) <= 1 )
        goto LABEL_180;
    }
  }
  else
  {
    if ( v61 != 2084 )
    {
      if ( v61 != 2094 )
        goto LABEL_112;
      v63 = "-fdefault-calling-conv=stdcall";
      v64 = v62 == 37;
LABEL_111:
      if ( !v64 )
        goto LABEL_112;
      goto LABEL_180;
    }
    v63 = "-fdefault-calling-conv=vectorcall";
    if ( (unsigned int)(v62 - 37) <= 1 )
LABEL_180:
      sub_10DC5D0(v105.m128i_i64[1], (__int64)v63);
  }
LABEL_112:
  if ( sub_10DCD30(a2, 0x80Eu) )
    sub_10DC5D0((__int64)v4, (__int64)"-regcall4");
  v65 = sub_10DCD30(a2, 0xD42u);
  if ( v65 )
    sub_21B5A40(v65, a2, v4);
  if ( !sub_10DCD30(a2, 0x25Bu) )
  {
    sub_10DC5D0((__int64)v4, (__int64)"-fdiagnostics-format");
    sub_10DC5D0((__int64)v4, (__int64)"msvc");
  }
  if ( sub_10DCD30(a2, 0x887u) )
    sub_10DC5D0((__int64)v4, (__int64)"-fms-kernel");
  if ( sub_10DCD30(a2, 0xFEu) )
  {
    sub_10DC5D0((__int64)v4, (__int64)"-fwinx64-eh-unwindv2=required");
  }
  else if ( sub_10DCD30(a2, 0xFFu) )
  {
    sub_10DC5D0((__int64)v4, (__int64)"-fwinx64-eh-unwindv2=best-effort");
  }
  sub_10DC500((__int64)v106, a2, 0x821u);
  v66 = v107;
  v107 = v4;
  v67 = (char *)s2[0];
  v68 = (char *)s2[1];
  v105.m128i_i64[0] = (__int64)v121;
  v69 = v120;
  v105.m128i_i64[1] = (__int64)&v116;
  if ( v121 == s2[0] )
    goto LABEL_164;
  do
  {
    v108 = v68 - 16;
    while ( 1 )
    {
      v70 = *(_QWORD *)v67;
      v71 = **(void ***)(*(_QWORD *)v67 + 48LL);
      v116 = v71;
      if ( !v71 )
      {
        v117 = 0;
LABEL_134:
        sub_FC70B0((__int64)v8, *v66, 0, 400);
        sub_AEC220((unsigned __int8 **)v8, *(_BYTE **)(v70 + 24), *(_QWORD *)(v70 + 32));
        sub_AEC220((unsigned __int8 **)v8, v116, v117);
        sub_AEA040((__int64)v8);
        goto LABEL_135;
      }
      v72 = strlen((const char *)v71);
      v117 = v72;
      if ( v72 == 2 )
      {
        if ( !(unsigned int)sub_22462B0(v105.m128i_i64[1], "cf", 2) )
        {
          sub_10DC5D0((__int64)v107, (__int64)"-cfguard");
          goto LABEL_135;
        }
        v72 = v117;
      }
      if ( v72 == 11 )
      {
        if ( !(unsigned int)sub_22462B0(v105.m128i_i64[1], "cf,nochecks", 11) )
        {
          sub_10DC5D0((__int64)v107, (__int64)"-cfguard-no-checks");
          goto LABEL_135;
        }
        v72 = v117;
      }
      if ( v72 == 6 )
      {
        if ( !(unsigned int)sub_22462B0(v105.m128i_i64[1], "ehcont", 6) )
        {
          sub_10DC5D0((__int64)v107, (__int64)"-ehcontguard");
          goto LABEL_135;
        }
        v72 = v117;
        if ( v117 == 3 )
        {
LABEL_171:
          if ( !(unsigned int)sub_22462B0(v105.m128i_i64[1], "cf-", 3) )
            goto LABEL_135;
          if ( v117 != 7 )
            goto LABEL_134;
          goto LABEL_173;
        }
      }
      else if ( v72 == 3 )
      {
        goto LABEL_171;
      }
      if ( v72 != 7 )
        goto LABEL_134;
LABEL_173:
      if ( (unsigned int)sub_22462B0(v105.m128i_i64[1], "ehcont-", 7) )
        goto LABEL_134;
LABEL_135:
      v73 = *(_QWORD *)(v70 + 16);
      if ( !v73 )
        v73 = v70;
      v74 = v67 + 8;
      *(_BYTE *)(v73 + 44) |= 1u;
      if ( v67 + 8 == v68 )
      {
        v74 = v68;
        goto LABEL_142;
      }
      if ( v69 )
        break;
      v74 += 8 * ((unsigned __int64)(v108 - v67) >> 3) + 8;
LABEL_142:
      if ( (char *)v105.m128i_i64[0] == v74 )
        goto LABEL_164;
      v67 = v74;
    }
    while ( !*(_QWORD *)v74 || !(unsigned __int8)sub_21B9810(*(_QWORD *)v74, v69) )
    {
      v74 += 8;
      if ( v68 == v74 )
        goto LABEL_142;
    }
    v67 = v74;
  }
  while ( (char *)v105.m128i_i64[0] != v74 );
LABEL_164:
  v79 = v107;
  sub_21B7150(v106, a2, 1891);
  v80 = (char *)s2[1];
  for ( i = (char *)s2[0]; v80 != i; ++*((_DWORD *)v79 + 2) )
  {
    si128.m128i_i64[0] = (__int64)"-loader-replaceable-function=";
    *(_QWORD *)&v123 = i;
    LOWORD(v124) = 1027;
    v82 = sub_10DA6C0(a2, (__int64)v8);
    v83 = *((unsigned int *)v79 + 2);
    if ( v83 + 1 > (unsigned __int64)*((unsigned int *)v79 + 3) )
    {
      v105.m128i_i64[0] = v82;
      sub_2237220(v79, v79 + 2, v83 + 1, 8);
      v83 = *((unsigned int *)v79 + 2);
      v84 = *v79;
      v82 = v105.m128i_i64[0];
    }
    else
    {
      v84 = *v79;
    }
    i += 32;
    *(_QWORD *)(v84 + 8 * v83) = v82;
  }
  sub_9B4A30((void ***)v106);
}
