__int64 __fastcall sub_E6E780(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned int v8; // r14d
  __int64 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v18; // eax
  __int64 v19; // r9
  unsigned int v20; // r14d
  __int64 *v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __m128i v26; // xmm0
  unsigned int v27; // eax
  __int64 v28; // r13
  unsigned int v29; // eax
  __int64 v30; // r9
  __int64 *v31; // r8
  __int64 v32; // r9
  __int64 *v33; // rax
  __int64 v34; // r8
  __int64 *v35; // rax
  __int64 *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  const char *v39; // rsi
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // r8
  __int64 *v44; // rax
  __int64 *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdx
  const char *v48; // rsi
  __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // r9
  unsigned int v53; // r14d
  __int64 *v54; // r8
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 *v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 *v64; // r14
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r14
  __int64 v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rdx
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  unsigned int v74; // eax
  __int64 v75; // r9
  unsigned int v76; // r14d
  __int64 *v77; // r8
  __int64 v78; // rdx
  unsigned __int64 v79; // rax
  unsigned int v80; // eax
  unsigned int v81; // eax
  __int64 v82; // r9
  __int64 *v83; // r8
  __int64 *v84; // rax
  __int64 v85; // rdx
  unsigned __int64 v86; // rdx
  __int64 v87; // rdx
  unsigned __int64 v88; // rax
  unsigned int v89; // eax
  unsigned int v90; // eax
  __int64 v91; // r9
  __int64 *v92; // r8
  __int64 v93; // rdx
  unsigned __int64 v94; // rax
  unsigned int v95; // eax
  __int64 v96; // rdx
  unsigned __int64 v97; // rax
  unsigned int v98; // eax
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  unsigned int v101; // eax
  __int64 v102; // rdx
  unsigned __int64 v103; // rax
  __m128i si128; // xmm0
  unsigned int v105; // eax
  __int64 v106; // [rsp+0h] [rbp-68h]
  __int64 v107; // [rsp+0h] [rbp-68h]
  __int64 v108; // [rsp+0h] [rbp-68h]
  __int64 v109; // [rsp+0h] [rbp-68h]
  int v110; // [rsp+0h] [rbp-68h]
  __int64 v111; // [rsp+0h] [rbp-68h]
  int v112; // [rsp+0h] [rbp-68h]
  __int64 *v113; // [rsp+0h] [rbp-68h]
  __int64 *v114; // [rsp+0h] [rbp-68h]
  __int64 *v115; // [rsp+0h] [rbp-68h]
  __int64 *v116; // [rsp+0h] [rbp-68h]
  int v117; // [rsp+0h] [rbp-68h]
  int v118; // [rsp+0h] [rbp-68h]
  __int64 v119; // [rsp+0h] [rbp-68h]
  __int64 v120; // [rsp+0h] [rbp-68h]
  __int64 v121; // [rsp+0h] [rbp-68h]
  __int64 *v122; // [rsp+8h] [rbp-60h]
  __int64 *v123; // [rsp+8h] [rbp-60h]
  __int64 *v124; // [rsp+8h] [rbp-60h]
  __int64 *v125; // [rsp+18h] [rbp-50h] BYREF
  __int64 *v126[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 8 * v4 + 336) )
    {
      v16 = *(_QWORD *)(a1 + 8 * v4 + 336);
      goto LABEL_17;
    }
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
    if ( (_DWORD)v4 == 2 )
    {
      v74 = sub_2220DF0("setObject", 9);
      v76 = sub_2220F70(v5, "setObject", 9, v74);
      v77 = (__int64 *)(*(_QWORD *)v5 + 8LL * v76);
      if ( *v77 )
      {
        if ( *v77 != -8 )
        {
          sub_965750(v126, v77, 0);
          v43 = *v126[0];
          v44 = *(__int64 **)(*v126[0] + 8);
          if ( v44 )
            goto LABEL_77;
          goto LABEL_69;
        }
        --*(_DWORD *)(v5 + 16);
      }
      v78 = *(_QWORD *)(v5 + 24);
      *(_QWORD *)(v5 + 104) += 26LL;
      v79 = (v78 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v5 + 32) >= v79 + 26 && v78 )
      {
        *(_QWORD *)(v5 + 24) = v79 + 26;
      }
      else
      {
        v116 = v77;
        v79 = sub_962430(v5 + 24, 26, 26, 3, (__int64)v77, v75);
        v77 = v116;
      }
      strcpy((char *)(v79 + 16), "setObject");
      *(_QWORD *)v79 = 9;
      *(_QWORD *)(v79 + 8) = 0;
      *v77 = v79;
      ++*(_DWORD *)(v5 + 12);
      v80 = sub_2221390(v5, v76);
      sub_965750(v126, (__int64 *)(*(_QWORD *)v5 + 8LL * v80), 0);
      v43 = *v126[0];
      v44 = *(__int64 **)(*v126[0] + 8);
      if ( v44 )
      {
LABEL_77:
        v126[0] = v44;
        v28 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
        v81 = sub_2220DF0("atIndex", 7);
        v82 = (unsigned int)sub_2220F70(v28, "atIndex", 7, v81);
        v83 = (__int64 *)(*(_QWORD *)v28 + 8 * v82);
        if ( *v83 )
        {
          if ( *v83 != -8 )
          {
            sub_965750(&v125, v83, 0);
            v84 = v125;
LABEL_80:
            v34 = *v84;
            v35 = *(__int64 **)(*v84 + 8);
            if ( v35 )
              goto LABEL_96;
            v36 = *(__int64 **)(v28 + 120);
            if ( !v36 )
              goto LABEL_84;
            v107 = v34;
            v37 = *v36;
            v38 = 7;
            v39 = "atIndex";
            goto LABEL_83;
          }
          --*(_DWORD *)(v28 + 16);
        }
        v96 = *(_QWORD *)(v28 + 24);
        *(_QWORD *)(v28 + 104) += 24LL;
        v97 = (v96 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v28 + 32) >= v97 + 24 && v96 )
        {
          *(_QWORD *)(v28 + 24) = v97 + 24;
        }
        else
        {
          v122 = v83;
          v110 = v82;
          v97 = sub_962430(v28 + 24, 24, 24, 3, (__int64)v83, v82);
          v83 = v122;
          LODWORD(v82) = v110;
        }
        *(_DWORD *)(v97 + 16) = 1850307681;
        *(_WORD *)(v97 + 20) = 25956;
        *(_BYTE *)(v97 + 22) = 120;
        *(_BYTE *)(v97 + 23) = 0;
        *(_QWORD *)v97 = 7;
        *(_QWORD *)(v97 + 8) = 0;
        *v83 = v97;
        ++*(_DWORD *)(v28 + 12);
        v98 = sub_2221390(v28, (unsigned int)v82);
        sub_965750(&v125, (__int64 *)(*(_QWORD *)v28 + 8LL * v98), 0);
        v84 = v125;
        goto LABEL_80;
      }
LABEL_69:
      v45 = *(__int64 **)(v5 + 120);
      if ( v45 )
      {
        v108 = v43;
        v46 = *v45;
        v47 = 9;
        v48 = "setObject";
LABEL_43:
        v44 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(v46 + 16))(v45, v48, v47);
        v43 = v108;
        *(_QWORD *)(v108 + 8) = v44;
        if ( v44 )
          goto LABEL_77;
      }
LABEL_44:
      v49 = *(_QWORD *)(v5 + 24);
      *(_QWORD *)(v5 + 104) += 24LL;
      v44 = (__int64 *)((v49 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_QWORD *)(v5 + 32) >= (unsigned __int64)(v44 + 3) && v49 )
      {
        *(_QWORD *)(v5 + 24) = v44 + 3;
      }
      else
      {
        v119 = v43;
        v44 = (__int64 *)sub_962430(v5 + 24, 24, 24, 3, v43, v22);
        v43 = v119;
      }
      v50 = *v44 & 0xFFFFF80000000000LL;
      v44[1] = 0;
      *v44 = v50 | 0x1FFFC05;
      *(_QWORD *)(v43 + 8) = v44;
      v44[2] = v43;
      goto LABEL_77;
    }
    if ( (unsigned int)v4 <= 2 )
    {
      if ( (_DWORD)v4 == 1 )
      {
        v18 = sub_2220DF0("insertObject", 12);
        v20 = sub_2220F70(v5, "insertObject", 12, v18);
        v21 = (__int64 *)(*(_QWORD *)v5 + 8LL * v20);
        if ( *v21 )
        {
          if ( *v21 != -8 )
          {
            sub_965750(v126, v21, 0);
            v23 = v126[0];
            goto LABEL_40;
          }
          --*(_DWORD *)(v5 + 16);
        }
        v40 = *(_QWORD *)(v5 + 24);
        *(_QWORD *)(v5 + 104) += 29LL;
        v41 = (v40 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v5 + 32) >= v41 + 29 && v40 )
        {
          *(_QWORD *)(v5 + 24) = v41 + 29;
        }
        else
        {
          v114 = v21;
          v41 = sub_962430(v5 + 24, 29, 29, 3, (__int64)v21, v19);
          v21 = v114;
        }
        strcpy((char *)(v41 + 16), "insertObject");
        *(_QWORD *)v41 = 12;
        *(_QWORD *)(v41 + 8) = 0;
        *v21 = v41;
        ++*(_DWORD *)(v5 + 12);
        v42 = sub_2221390(v5, v20);
        sub_965750(v126, (__int64 *)(*(_QWORD *)v5 + 8LL * v42), 0);
        v23 = v126[0];
LABEL_40:
        v43 = *v23;
        v44 = *(__int64 **)(*v23 + 8);
        if ( v44 )
          goto LABEL_77;
        v45 = *(__int64 **)(v5 + 120);
        if ( v45 )
        {
          v108 = v43;
          v46 = *v45;
          v47 = 12;
          v48 = "insertObject";
          goto LABEL_43;
        }
        goto LABEL_44;
      }
LABEL_57:
      v61 = sub_2220DF0("addObject", 9);
      v62 = (unsigned int)sub_2220F70(v5, "addObject", 9, v61);
      v64 = (__int64 *)(*(_QWORD *)v5 + 8 * v62);
      if ( *v64 )
      {
        if ( *v64 != -8 )
        {
          sub_965750(v126, v64, 0);
          v67 = *v126[0];
          v68 = *(_QWORD *)(*v126[0] + 8);
          if ( v68 )
            goto LABEL_102;
          goto LABEL_60;
        }
        --*(_DWORD *)(v5 + 16);
      }
      v93 = *(_QWORD *)(v5 + 24);
      *(_QWORD *)(v5 + 104) += 26LL;
      v94 = (v93 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v5 + 32) >= v94 + 26 && v93 )
      {
        *(_QWORD *)(v5 + 24) = v94 + 26;
      }
      else
      {
        v112 = v62;
        v94 = sub_962430(v5 + 24, 26, 26, 3, v62, v63);
        LODWORD(v62) = v112;
      }
      strcpy((char *)(v94 + 16), "addObject");
      *(_QWORD *)v94 = 9;
      *(_QWORD *)(v94 + 8) = 0;
      *v64 = v94;
      ++*(_DWORD *)(v5 + 12);
      v95 = sub_2221390(v5, (unsigned int)v62);
      sub_965750(v126, (__int64 *)(*(_QWORD *)v5 + 8LL * v95), 0);
      v67 = *v126[0];
      v68 = *(_QWORD *)(*v126[0] + 8);
      if ( v68 )
        goto LABEL_102;
LABEL_60:
      v69 = *(_QWORD *)(v5 + 120);
      if ( !v69
        || (v68 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v69 + 16LL))(
                    v69,
                    "addObject",
                    9),
            (*(_QWORD *)(v67 + 8) = v68) == 0) )
      {
        v70 = *(_QWORD *)(v5 + 24);
        *(_QWORD *)(v5 + 104) += 24LL;
        v71 = (v70 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v5 + 32) >= v71 + 24 && v70 )
        {
          *(_QWORD *)(v5 + 24) = v71 + 24;
          v72 = (v70 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v72 = sub_962430(v5 + 24, 24, 24, 3, v65, v66);
          v71 = v72 & 0xFFFFFFFFFFFFFFF8LL;
        }
        v73 = *(_QWORD *)v72 & 0xFFFFF80000000000LL;
        *(_QWORD *)(v72 + 8) = 0;
        *(_QWORD *)v72 = v73 | 0x1FFFC05;
        *(_QWORD *)(v67 + 8) = v72;
        *(_QWORD *)(v72 + 16) = v67;
        goto LABEL_103;
      }
LABEL_102:
      v71 = v68 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_103:
      v16 = v71 | 2;
      goto LABEL_104;
    }
    if ( (_DWORD)v4 == 3 )
    {
      v51 = sub_2220DF0("setObject", 9);
      v53 = sub_2220F70(v5, "setObject", 9, v51);
      v54 = (__int64 *)(*(_QWORD *)v5 + 8LL * v53);
      if ( *v54 )
      {
        if ( *v54 != -8 )
        {
          sub_965750(v126, v54, 0);
          v56 = *v126[0];
          v57 = *(__int64 **)(*v126[0] + 8);
          if ( v57 )
            goto LABEL_93;
LABEL_51:
          v58 = *(_QWORD *)(v5 + 120);
          if ( !v58
            || (v109 = v56,
                v57 = (__int64 *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v58 + 16LL))(
                                   v58,
                                   "setObject",
                                   9),
                v56 = v109,
                (*(_QWORD *)(v109 + 8) = v57) == 0) )
          {
            v59 = *(_QWORD *)(v5 + 24);
            *(_QWORD *)(v5 + 104) += 24LL;
            v57 = (__int64 *)((v59 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( *(_QWORD *)(v5 + 32) >= (unsigned __int64)(v57 + 3) && v59 )
            {
              *(_QWORD *)(v5 + 24) = v57 + 3;
            }
            else
            {
              v121 = v56;
              v57 = (__int64 *)sub_962430(v5 + 24, 24, 24, 3, v56, v55);
              v56 = v121;
            }
            v60 = *v57 & 0xFFFFF80000000000LL;
            v57[1] = 0;
            *v57 = v60 | 0x1FFFC05;
            *(_QWORD *)(v56 + 8) = v57;
            v57[2] = v56;
          }
LABEL_93:
          v126[0] = v57;
          v28 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
          v90 = sub_2220DF0("atIndexedSubscript", 18);
          v91 = (unsigned int)sub_2220F70(v28, "atIndexedSubscript", 18, v90);
          v92 = (__int64 *)(*(_QWORD *)v28 + 8 * v91);
          if ( *v92 )
          {
            if ( *v92 != -8 )
            {
              sub_965750(&v125, v92, 0);
              v34 = *v125;
              v35 = *(__int64 **)(*v125 + 8);
              if ( v35 )
                goto LABEL_96;
              goto LABEL_120;
            }
            --*(_DWORD *)(v28 + 16);
          }
          v102 = *(_QWORD *)(v28 + 24);
          *(_QWORD *)(v28 + 104) += 35LL;
          v103 = (v102 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v28 + 32) >= v103 + 35 && v102 )
          {
            *(_QWORD *)(v28 + 24) = v103 + 35;
          }
          else
          {
            v123 = v92;
            v117 = v91;
            v103 = sub_962430(v28 + 24, 35, 35, 3, (__int64)v92, v91);
            v92 = v123;
            LODWORD(v91) = v117;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_2384F10);
          strcpy((char *)(v103 + 32), "pt");
          *(_QWORD *)v103 = 18;
          *(__m128i *)(v103 + 16) = si128;
          *(_QWORD *)(v103 + 8) = 0;
          *v92 = v103;
          ++*(_DWORD *)(v28 + 12);
          v105 = sub_2221390(v28, (unsigned int)v91);
          sub_965750(&v125, (__int64 *)(*(_QWORD *)v28 + 8LL * v105), 0);
          v34 = *v125;
          v35 = *(__int64 **)(*v125 + 8);
          if ( v35 )
            goto LABEL_96;
LABEL_120:
          v36 = *(__int64 **)(v28 + 120);
          if ( !v36 )
          {
LABEL_84:
            v85 = *(_QWORD *)(v28 + 24);
            *(_QWORD *)(v28 + 104) += 24LL;
            v35 = (__int64 *)((v85 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( *(_QWORD *)(v28 + 32) >= (unsigned __int64)(v35 + 3) && v85 )
            {
              *(_QWORD *)(v28 + 24) = v35 + 3;
            }
            else
            {
              v111 = v34;
              v35 = (__int64 *)sub_962430(v28 + 24, 24, 24, 3, v34, v32);
              v34 = v111;
            }
            v86 = *v35 & 0xFFFFF80000000000LL;
            v35[1] = 0;
            *v35 = v86 | 0x1FFFC05;
            *(_QWORD *)(v34 + 8) = v35;
            v35[2] = v34;
            goto LABEL_96;
          }
          v107 = v34;
          v37 = *v36;
          v38 = 18;
          v39 = "atIndexedSubscript";
          goto LABEL_83;
        }
        --*(_DWORD *)(v5 + 16);
      }
      v87 = *(_QWORD *)(v5 + 24);
      *(_QWORD *)(v5 + 104) += 26LL;
      v88 = (v87 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v5 + 32) >= v88 + 26 && v87 )
      {
        *(_QWORD *)(v5 + 24) = v88 + 26;
      }
      else
      {
        v113 = v54;
        v88 = sub_962430(v5 + 24, 26, 26, 3, (__int64)v54, v52);
        v54 = v113;
      }
      strcpy((char *)(v88 + 16), "setObject");
      *(_QWORD *)v88 = 9;
      *(_QWORD *)(v88 + 8) = 0;
      *v54 = v88;
      ++*(_DWORD *)(v5 + 12);
      v89 = sub_2221390(v5, v53);
      sub_965750(v126, (__int64 *)(*(_QWORD *)v5 + 8LL * v89), 0);
      v56 = *v126[0];
      v57 = *(__int64 **)(*v126[0] + 8);
      if ( v57 )
        goto LABEL_93;
      goto LABEL_51;
    }
    if ( (_DWORD)v4 != 4 )
      goto LABEL_57;
    v6 = sub_2220DF0("replaceObjectAtIndex", 20);
    v8 = sub_2220F70(v5, "replaceObjectAtIndex", 20, v6);
    v9 = (__int64 *)(*(_QWORD *)v5 + 8LL * v8);
    if ( !*v9 )
      goto LABEL_25;
    if ( *v9 == -8 )
    {
      --*(_DWORD *)(v5 + 16);
LABEL_25:
      v24 = *(_QWORD *)(v5 + 24);
      *(_QWORD *)(v5 + 104) += 37LL;
      v25 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v5 + 32) >= v25 + 37 && v24 )
      {
        *(_QWORD *)(v5 + 24) = v25 + 37;
      }
      else
      {
        v115 = v9;
        v25 = sub_962430(v5 + 24, 37, 37, 3, (__int64)v9, v7);
        v9 = v115;
      }
      v26 = _mm_load_si128((const __m128i *)&xmmword_2384F20);
      strcpy((char *)(v25 + 32), "ndex");
      *(__m128i *)(v25 + 16) = v26;
      *(_QWORD *)v25 = 20;
      *(_QWORD *)(v25 + 8) = 0;
      *v9 = v25;
      ++*(_DWORD *)(v5 + 12);
      v27 = sub_2221390(v5, v8);
      sub_965750(v126, (__int64 *)(*(_QWORD *)v5 + 8LL * v27), 0);
      v11 = *v126[0];
      v12 = *(__int64 **)(*v126[0] + 8);
      if ( v12 )
        goto LABEL_29;
      goto LABEL_10;
    }
    sub_965750(v126, v9, 0);
    v11 = *v126[0];
    v12 = *(__int64 **)(*v126[0] + 8);
    if ( v12 )
      goto LABEL_29;
LABEL_10:
    v13 = *(_QWORD *)(v5 + 120);
    if ( !v13
      || (v106 = v11,
          v12 = (__int64 *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v13 + 16LL))(
                             v13,
                             "replaceObjectAtIndex",
                             20),
          v11 = v106,
          (*(_QWORD *)(v106 + 8) = v12) == 0) )
    {
      v14 = *(_QWORD *)(v5 + 24);
      *(_QWORD *)(v5 + 104) += 24LL;
      v12 = (__int64 *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_QWORD *)(v5 + 32) >= (unsigned __int64)(v12 + 3) && v14 )
      {
        *(_QWORD *)(v5 + 24) = v12 + 3;
      }
      else
      {
        v120 = v11;
        v12 = (__int64 *)sub_962430(v5 + 24, 24, 24, 3, v11, v10);
        v11 = v120;
      }
      v15 = *v12 & 0xFFFFF80000000000LL;
      v12[1] = 0;
      *v12 = v15 | 0x1FFFC05;
      *(_QWORD *)(v11 + 8) = v12;
      v12[2] = v11;
    }
LABEL_29:
    v126[0] = v12;
    v28 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
    v29 = sub_2220DF0("withObject", 10);
    v30 = (unsigned int)sub_2220F70(v28, "withObject", 10, v29);
    v31 = (__int64 *)(*(_QWORD *)v28 + 8 * v30);
    if ( !*v31 )
      goto LABEL_111;
    if ( *v31 == -8 )
    {
      --*(_DWORD *)(v28 + 16);
LABEL_111:
      v99 = *(_QWORD *)(v28 + 24);
      *(_QWORD *)(v28 + 104) += 27LL;
      v100 = (v99 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v28 + 32) >= v100 + 27 && v99 )
      {
        *(_QWORD *)(v28 + 24) = v100 + 27;
      }
      else
      {
        v124 = v31;
        v118 = v30;
        v100 = sub_962430(v28 + 24, 27, 27, 3, (__int64)v31, v30);
        v31 = v124;
        LODWORD(v30) = v118;
      }
      strcpy((char *)(v100 + 16), "withObject");
      *(_QWORD *)v100 = 10;
      *(_QWORD *)(v100 + 8) = 0;
      *v31 = v100;
      ++*(_DWORD *)(v28 + 12);
      v101 = sub_2221390(v28, (unsigned int)v30);
      sub_965750(&v125, (__int64 *)(*(_QWORD *)v28 + 8LL * v101), 0);
      v33 = v125;
      goto LABEL_32;
    }
    sub_965750(&v125, v31, 0);
    v33 = v125;
LABEL_32:
    v34 = *v33;
    v35 = *(__int64 **)(*v33 + 8);
    if ( v35 )
      goto LABEL_96;
    v36 = *(__int64 **)(v28 + 120);
    if ( !v36 )
      goto LABEL_84;
    v107 = v34;
    v37 = *v36;
    v38 = 10;
    v39 = "withObject";
LABEL_83:
    v35 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(v37 + 16))(v36, v39, v38);
    v34 = v107;
    *(_QWORD *)(v107 + 8) = v35;
    if ( !v35 )
      goto LABEL_84;
LABEL_96:
    v126[1] = v35;
    v16 = sub_FBF4F0(*(_QWORD *)(*(_QWORD *)a1 + 17512LL), 2, v126);
LABEL_104:
    *(_QWORD *)(a1 + 8 * v4 + 336) = v16;
LABEL_17:
    if ( a2 == v16 )
      return (unsigned int)v4 | 0x100000000LL;
    if ( ++v4 == 5 )
      return 0;
  }
}

