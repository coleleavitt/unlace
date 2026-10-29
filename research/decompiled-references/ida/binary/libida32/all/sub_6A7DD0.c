unsigned __int64 __fastcall sub_6A7DD0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // rdx
  char v7; // al
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  void *v10; // rdi
  bool v12; // zf
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  int *v16; // r8
  __int64 v17; // rax
  const char *v18; // r14
  const char *v19; // r15
  unsigned int v20; // ecx
  char v21; // r14
  int *v22; // rbp
  int *v23; // r12
  int *v24; // r15
  const char *v25; // rsi
  int *v26; // r14
  const char *v27; // rdi
  int v28; // eax
  int *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rdx
  int v35; // ebp
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  unsigned __int64 v39; // rbp
  size_t v40; // r8
  int *v41; // rdi
  unsigned int v42; // esi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r14
  __int64 v45; // rax
  const char *v46; // rsi
  const char *v47; // rdi
  unsigned __int64 v48; // r15
  __int64 v49; // r14
  int *v50; // rbx
  int *v51; // rbp
  const char *v52; // rsi
  int *v53; // r12
  const char *v54; // rdi
  int v55; // eax
  int *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rbp
  const char *v60; // rdx
  __int64 v61; // rax
  int *v62; // r15
  __int64 v63; // r15
  __int64 v64; // r14
  int *v65; // rbx
  int *v66; // rbp
  const char *v67; // rsi
  int *v68; // r12
  const char *v69; // rdi
  int v70; // eax
  int *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  const char *v74; // rsi
  const char *v75; // rdi
  int v76; // eax
  int *v77; // rax
  __int64 v78; // rax
  const char *v79; // rsi
  const char *v80; // rdi
  int v81; // eax
  const char *v82; // rsi
  const char *v83; // rdi
  int v84; // eax
  int *v85; // rax
  __int64 v86; // rax
  const char *v87; // rsi
  const char *v88; // rdi
  int v89; // eax
  int *v90; // rbp
  int *v91; // rbp
  const void *v92; // r15
  void *v93; // rax
  __int64 v94; // [rsp+0h] [rbp-138h]
  unsigned __int64 v95; // [rsp+10h] [rbp-128h]
  char v96; // [rsp+18h] [rbp-120h]
  int *v97; // [rsp+18h] [rbp-120h]
  _QWORD *v98; // [rsp+18h] [rbp-120h]
  __int64 v99; // [rsp+20h] [rbp-118h]
  __int64 v101; // [rsp+30h] [rbp-108h]
  unsigned __int64 v102; // [rsp+38h] [rbp-100h]
  unsigned __int64 v103; // [rsp+38h] [rbp-100h]
  unsigned __int64 v104; // [rsp+38h] [rbp-100h]
  unsigned __int64 v105; // [rsp+38h] [rbp-100h]
  unsigned __int64 v106; // [rsp+38h] [rbp-100h]
  int *v107; // [rsp+38h] [rbp-100h]
  unsigned __int64 v108; // [rsp+38h] [rbp-100h]
  int *v109; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v110; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v111; // [rsp+40h] [rbp-F8h]
  int *v112; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v113; // [rsp+40h] [rbp-F8h]
  __int64 v114; // [rsp+48h] [rbp-F0h]
  __int64 v115; // [rsp+48h] [rbp-F0h]
  __int64 v116; // [rsp+50h] [rbp-E8h]
  char v117; // [rsp+5Eh] [rbp-DAh]
  __int64 v118; // [rsp+60h] [rbp-D8h] BYREF
  unsigned __int64 v119; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v120[2]; // [rsp+70h] [rbp-C8h] BYREF
  int v121; // [rsp+80h] [rbp-B8h] BYREF
  void *v122; // [rsp+88h] [rbp-B0h]
  int *v123; // [rsp+90h] [rbp-A8h]
  int *v124; // [rsp+98h] [rbp-A0h]
  __int128 v125; // [rsp+A0h] [rbp-98h]
  __int64 v126; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v127; // [rsp+B8h] [rbp-80h] BYREF
  int v128; // [rsp+C0h] [rbp-78h] BYREF
  int *v129; // [rsp+C8h] [rbp-70h]
  int *v130; // [rsp+D0h] [rbp-68h]
  int *v131; // [rsp+D8h] [rbp-60h]
  __int128 v132; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v133; // [rsp+F8h] [rbp-40h]

  v3 = a1;
  v4 = *a2;
  v133 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(v4 + 1672);
  v121 = 0;
  v123 = &v121;
  v124 = &v121;
  LOBYTE(v4) = *(_BYTE *)(a1 + 28);
  v122 = nullptr;
  v7 = v4 & 0x3F;
  v125 = 0;
  v120[0] = a3;
  if ( v7 != 45 )
    goto LABEL_8;
  if ( *(_BYTE *)(v6 + 8) || !*(_QWORD *)(a1 + 40) )
    goto LABEL_99;
  v59 = 0;
  do
  {
    while ( sub_6A77D0((char *)v120, a1, v59) != -1 )
    {
      if ( ++v59 >= *(_QWORD *)(a1 + 40) )
        goto LABEL_98;
    }
    v60 = haystack;
    v61 = *(_QWORD *)(a1 + 32) + 32 * v59;
    if ( *(_QWORD *)(v61 + 8) )
      v60 = *(const char **)v61;
    sub_633EC0(a2, a2[1], v60, 0, nullptr);
    ++v59;
  }
  while ( v59 < *(_QWORD *)(a1 + 40) );
LABEL_98:
  v7 = *(_BYTE *)(a1 + 28) & 0x3F;
  if ( v7 == 45 )
  {
LABEL_99:
    v117 = *(_BYTE *)(a3 + 28) & 0x3F;
    if ( v117 != 45 )
      goto LABEL_3;
  }
  else
  {
LABEL_8:
    if ( (v7 & 0xEF) != 0xD || (*(_BYTE *)(a3 + 28) & 0x2F) != 0xD )
      goto LABEL_3;
    v117 = *(_BYTE *)(a3 + 28) & 0x3F;
  }
  v12 = *(_QWORD *)(a1 + 40) == 0;
  v126 = a1;
  v128 = 0;
  v129 = nullptr;
  v130 = &v128;
  v131 = &v128;
  v132 = 0;
  if ( !v12 )
  {
    v13 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v94 = *(_QWORD *)(v3 + 32) + 32 * v13;
        if ( *(_DWORD *)(v94 + 24) == -1 )
          goto LABEL_53;
        v14 = sub_6A77D0((char *)v120, v3, v13);
        if ( v14 != -1 )
        {
          v15 = v120[0];
          v95 = v14;
          if ( (*(_BYTE *)(v120[0] + 28) & 0x3F) != 0x2D )
            break;
          v15 = *(_QWORD *)(v120[0] + 112);
          if ( *(_QWORD *)(v15 + 8 * v14) == *(_QWORD *)(*(_QWORD *)(v3 + 112) + 8 * v13) )
            break;
        }
        v43 = sub_698A40(v120, v3, v13, v15, (__int64)v16);
        v44 = v43;
        if ( v43 != -1 )
        {
          v95 = v43;
          v45 = sub_6A77D0((char *)&v126, a3, v43);
          if ( v45 == -1 )
            break;
          if ( (*(_BYTE *)(v126 + 28) & 0x3F) == 0x2D )
          {
            v15 = *(_QWORD *)(v126 + 112);
            if ( *(_QWORD *)(v15 + 8 * v45) != *(_QWORD *)(*(_QWORD *)(a3 + 112) + 8 * v44) )
              break;
          }
        }
        sub_69F1A0(v3, (__int64)a2, v13++);
        if ( v13 >= *(_QWORD *)(v3 + 40) )
          goto LABEL_54;
      }
      v101 = *(_QWORD *)(a3 + 32) + 32 * v95;
      v17 = *(_QWORD *)(v101 + 8);
      if ( !*(_QWORD *)(v94 + 8) )
        break;
      v18 = *(const char **)v94;
      if ( v17 )
        goto LABEL_61;
      if ( !*v18 )
        goto LABEL_37;
      v19 = haystack;
      v20 = *(_DWORD *)(v94 + 24);
LABEL_19:
      sub_69E970(a2, v18, v19, v20);
      v21 = *(_BYTE *)(a3 + 28);
      if ( (v21 & 0x3F) == 0x2D )
        v99 = v101;
      else
        v99 = *(_QWORD *)(a3 + 136) + (v95 << 7) + 16;
      v22 = v129;
      if ( !v129 )
        goto LABEL_74;
      v102 = v13;
      v109 = v129;
      v23 = v129;
      v24 = &v128;
      v96 = *(_BYTE *)(a3 + 28);
      v116 = *(_QWORD *)(v99 + 8);
      while ( 1 )
      {
        v30 = *((_QWORD *)v23 + 5);
        if ( !v116 )
          break;
        v25 = *(const char **)v99;
        v26 = v23;
        v27 = haystack;
        if ( v30 )
          goto LABEL_24;
LABEL_25:
        v28 = strcmp(v27, v25);
        v29 = *((int **)v23 + 2);
        v23 = *((int **)v23 + 3);
        if ( v28 >= 0 )
        {
          v24 = v26;
          v23 = v29;
        }
        if ( !v23 )
        {
          v21 = v96;
          v13 = v102;
          v16 = v24;
          v22 = v109;
          goto LABEL_70;
        }
      }
      if ( v30 )
      {
LABEL_32:
        v25 = haystack;
LABEL_24:
        v27 = *((const char **)v23 + 4);
        v26 = v23;
        goto LABEL_25;
      }
      while ( 1 )
      {
        v31 = *((_QWORD *)v23 + 2);
        if ( !v31 )
          break;
        v24 = v23;
        v23 = *((int **)v23 + 2);
        if ( *(_QWORD *)(v31 + 40) )
          goto LABEL_32;
      }
      v62 = v23;
      v21 = v96;
      v22 = v109;
      v13 = v102;
      v16 = v62;
LABEL_70:
      if ( v16 == &v128 )
        goto LABEL_74;
      if ( *((_QWORD *)v16 + 5) )
      {
        v46 = *((const char **)v16 + 4);
        v47 = haystack;
        if ( !v116 )
          goto LABEL_73;
        goto LABEL_89;
      }
      v46 = haystack;
      if ( !v116 )
        goto LABEL_34;
LABEL_89:
      v47 = *(const char **)v99;
LABEL_73:
      v97 = v16;
      if ( strcmp(v47, v46) >= 0 )
      {
        v16 = v97;
LABEL_34:
        v15 = *((_QWORD *)v16 + 7);
        goto LABEL_35;
      }
LABEL_74:
      v15 = *((_QWORD *)&v132 + 1);
      v98 = (_QWORD *)v126;
      if ( (*(_BYTE *)(v126 + 28) & 0x2F) != 0xD )
      {
        if ( *((_QWORD *)&v132 + 1) >= *(_QWORD *)(v126 + 40) )
          goto LABEL_38;
        while ( 2 )
        {
          v63 = v98[4] + 32 * v15;
          if ( !v22 )
          {
            v16 = &v128;
            goto LABEL_137;
          }
          v64 = *(_QWORD *)(v98[4] + 32 * v15 + 8);
          v115 = v3;
          v65 = v22;
          v104 = v13;
          v111 = v15;
          v66 = &v128;
LABEL_114:
          v72 = *((_QWORD *)v65 + 5);
          if ( v64 )
          {
            v67 = *(const char **)v63;
            v68 = v65;
            v69 = haystack;
            if ( v72 )
              goto LABEL_110;
          }
          else
          {
            if ( !v72 )
            {
              while ( 1 )
              {
                v73 = *((_QWORD *)v65 + 2);
                if ( !v73 )
                  break;
                v66 = v65;
                v65 = *((int **)v65 + 2);
                if ( *(_QWORD *)(v73 + 40) )
                  goto LABEL_118;
              }
              v91 = v65;
              v13 = v104;
              v15 = v111;
              v3 = v115;
              v16 = v91;
LABEL_132:
              if ( v16 == &v128 )
                goto LABEL_137;
              if ( *((_QWORD *)v16 + 5) )
              {
                v82 = *((const char **)v16 + 4);
                v83 = haystack;
                if ( v64 )
                  goto LABEL_135;
LABEL_136:
                v113 = v15;
                v107 = v16;
                v84 = strcmp(v83, v82);
                v16 = v107;
                v15 = v113;
                if ( v84 < 0 )
                {
LABEL_137:
                  v108 = v15;
                  v118 = v63;
                  v85 = (int *)sub_6A7670(&v127, (char *)v16, &v118);
                  v15 = v108;
                  v16 = v85;
                }
              }
              else
              {
                v82 = haystack;
                if ( v64 )
                {
LABEL_135:
                  v83 = *(const char **)v63;
                  goto LABEL_136;
                }
              }
              *((_QWORD *)v16 + 7) = v15;
              v86 = *(_QWORD *)(v63 + 8);
              if ( *(_QWORD *)(v99 + 8) )
              {
                v87 = *(const char **)v99;
                v88 = haystack;
                if ( !v86 )
                  goto LABEL_140;
                goto LABEL_150;
              }
              if ( v86 )
              {
                v87 = haystack;
LABEL_150:
                v88 = *(const char **)v63;
LABEL_140:
                v89 = strcmp(v88, v87);
                v15 = *((_QWORD *)&v132 + 1);
                if ( v89 )
                {
                  v15 = *((_QWORD *)&v132 + 1) + 1LL;
                  *((_QWORD *)&v132 + 1) = v15;
                  if ( v15 >= v98[5] )
                    goto LABEL_37;
                  v22 = v129;
                  continue;
                }
LABEL_35:
                if ( v15 != -1 && v15 != v13 )
                {
                  v15 = *(_QWORD *)(v3 + 32) + 32 * v15;
                  *(_DWORD *)(v15 + 24) = -1;
                }
                goto LABEL_37;
              }
LABEL_157:
              v15 = *((_QWORD *)&v132 + 1);
              goto LABEL_35;
            }
LABEL_118:
            v67 = haystack;
LABEL_110:
            v69 = *((const char **)v65 + 4);
            v68 = v65;
          }
          break;
        }
        v70 = strcmp(v69, v67);
        v71 = *((int **)v65 + 2);
        v65 = *((int **)v65 + 3);
        if ( v70 >= 0 )
        {
          v66 = v68;
          v65 = v71;
        }
        if ( !v65 )
        {
          v13 = v104;
          v15 = v111;
          v16 = v66;
          v3 = v115;
          goto LABEL_132;
        }
        goto LABEL_114;
      }
      if ( *((_QWORD *)&v132 + 1) >= *(_QWORD *)(v126 + 144) )
        goto LABEL_38;
      while ( 2 )
      {
        v48 = v98[17] + (v15 << 7);
        if ( !v22 )
        {
          v16 = &v128;
          goto LABEL_125;
        }
        v49 = *(_QWORD *)(v98[17] + (v15 << 7) + 24);
        v114 = v3;
        v50 = v22;
        v103 = v13;
        v110 = v15;
        v51 = &v128;
        while ( 2 )
        {
          v57 = *((_QWORD *)v50 + 5);
          if ( v49 )
          {
            v52 = *(const char **)(v48 + 16);
            v53 = v50;
            v54 = haystack;
            if ( v57 )
              goto LABEL_79;
            goto LABEL_80;
          }
          if ( v57 )
          {
LABEL_87:
            v53 = v50;
            v52 = haystack;
LABEL_79:
            v54 = *((const char **)v50 + 4);
LABEL_80:
            v55 = strcmp(v54, v52);
            v56 = *((int **)v50 + 2);
            v50 = *((int **)v50 + 3);
            if ( v55 >= 0 )
            {
              v51 = v53;
              v50 = v56;
            }
            if ( !v50 )
            {
              v13 = v103;
              v15 = v110;
              v16 = v51;
              v3 = v114;
              goto LABEL_120;
            }
            continue;
          }
          break;
        }
        while ( 1 )
        {
          v58 = *((_QWORD *)v50 + 2);
          if ( !v58 )
            break;
          v51 = v50;
          v50 = *((int **)v50 + 2);
          if ( *(_QWORD *)(v58 + 40) )
            goto LABEL_87;
        }
        v90 = v50;
        v13 = v103;
        v15 = v110;
        v3 = v114;
        v16 = v90;
LABEL_120:
        if ( v16 == &v128 )
          goto LABEL_125;
        if ( *((_QWORD *)v16 + 5) )
        {
          v74 = *((const char **)v16 + 4);
          v75 = haystack;
          if ( v49 )
            goto LABEL_123;
LABEL_124:
          v112 = v16;
          v105 = v15;
          v76 = strcmp(v75, v74);
          v15 = v105;
          v16 = v112;
          if ( v76 < 0 )
          {
LABEL_125:
            v106 = v15;
            v119 = v48 + 16;
            v77 = (int *)sub_6A7670(&v127, (char *)v16, (__int64 *)&v119);
            v15 = v106;
            v16 = v77;
          }
        }
        else
        {
          v74 = haystack;
          if ( v49 )
          {
LABEL_123:
            v75 = *(const char **)(v48 + 16);
            goto LABEL_124;
          }
        }
        *((_QWORD *)v16 + 7) = v15;
        v78 = *(_QWORD *)(v48 + 24);
        if ( *(_QWORD *)(v99 + 8) )
        {
          v79 = *(const char **)v99;
          v80 = haystack;
          if ( !v78 )
            goto LABEL_128;
          goto LABEL_145;
        }
        if ( !v78 )
          goto LABEL_157;
        v79 = haystack;
LABEL_145:
        v80 = *(const char **)(v48 + 16);
LABEL_128:
        v81 = strcmp(v80, v79);
        v15 = *((_QWORD *)&v132 + 1);
        if ( !v81 )
          goto LABEL_35;
        v15 = *((_QWORD *)&v132 + 1) + 1LL;
        *((_QWORD *)&v132 + 1) = v15;
        if ( v15 < v98[18] )
        {
          v22 = v129;
          continue;
        }
        break;
      }
LABEL_37:
      v21 = *(_BYTE *)(a3 + 28);
LABEL_38:
      if ( (v21 & 0x2F) != 0xD )
        goto LABEL_53;
      v32 = *(_QWORD *)(v3 + 136) + (v13 << 7);
      v33 = *(_QWORD *)(a3 + 136) + (v95 << 7);
      if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(v32 + 64), *(_QWORD *)(v33 + 64), 0, v15, v16) )
        goto LABEL_44;
      v34 = 2304;
      if ( _bittest64(&v34, *(_QWORD *)(v32 + 72) & 0xFLL) )
      {
        v35 = sub_69AA70(*(_QWORD **)(qword_2CA1698 + 1480), 0, *(_DWORD *)(v32 + 84));
        v36 = 2304;
        if ( _bittest64(&v36, *(_QWORD *)(v33 + 72) & 0xFLL) )
          goto LABEL_42;
        v37 = -1;
        goto LABEL_43;
      }
      if ( _bittest64(&v34, *(_QWORD *)(v33 + 72) & 0xFLL) )
      {
        v35 = -1;
LABEL_42:
        v37 = sub_69AA70(*(_QWORD **)(qword_2CA1698 + 1480), 0, *(_DWORD *)(v33 + 84));
LABEL_43:
        if ( v35 != v37 )
        {
LABEL_44:
          sub_69AB60((__int64)a2, *(_DWORD *)(v94 + 24), v32);
          sub_69AC30((__int64)a2, *(_DWORD *)(v94 + 24), v33);
        }
      }
      if ( *(_BYTE *)(v3 + 28) == *(_BYTE *)(a3 + 28) )
      {
        v38 = *(_QWORD *)v32;
        if ( *(_QWORD *)(v33 + 8) == *(_QWORD *)(v32 + 8) )
        {
          if ( v117 == 29 || *(_QWORD *)v33 == v38 )
          {
            *(__m128i *)(v32 + 72) = _mm_loadu_si128((const __m128i *)(v33 + 72));
            *(__m128i *)(v32 + 88) = _mm_loadu_si128((const __m128i *)(v33 + 88));
            *(_DWORD *)(v32 + 104) = *(_DWORD *)(v33 + 104);
            goto LABEL_47;
          }
        }
        else
        {
LABEL_47:
          if ( *(_QWORD *)v33 == v38 || v117 == 29 )
            goto LABEL_49;
        }
        sub_69E750(a2, *(_DWORD *)(v94 + 24), 0);
        v42 = *(_DWORD *)(v101 + 24);
        if ( *(_DWORD *)(v94 + 24) != v42 )
          sub_69E750(a2, v42, 0);
      }
LABEL_49:
      if ( v32 + 16 == v33 + 16 )
      {
LABEL_53:
        if ( ++v13 >= *(_QWORD *)(v3 + 40) )
          goto LABEL_54;
      }
      else
      {
        v39 = *(_QWORD *)(v33 + 24);
        if ( !v39 || (v40 = v39 - 1, v39 == 1) )
        {
          *(_QWORD *)(v32 + 24) = 0;
          goto LABEL_53;
        }
        v92 = *(const void **)(v33 + 16);
        v93 = *(void **)(v32 + 16);
        if ( *(_QWORD *)(v32 + 32) < v39 )
        {
          v93 = (void *)qvector_reserve(v32 + 16, *(_QWORD *)(v32 + 16), v39, 1);
          *(_QWORD *)(v32 + 16) = v93;
          v40 = v39 - 1;
        }
        *(_QWORD *)(v32 + 24) = v39;
        ++v13;
        memmove(v93, v92, v40);
        *(_BYTE *)(*(_QWORD *)(v32 + 16) + v39 - 1) = 0;
        if ( v13 >= *(_QWORD *)(v3 + 40) )
        {
LABEL_54:
          v41 = v129;
          goto LABEL_55;
        }
      }
    }
    v18 = haystack;
    if ( !v17 )
      goto LABEL_37;
LABEL_61:
    v19 = *(const char **)v101;
    if ( !strcmp(*(const char **)v101, v18) )
      goto LABEL_37;
    v20 = *(_DWORD *)(v94 + 24);
    goto LABEL_19;
  }
  v41 = nullptr;
LABEL_55:
  sub_697F90((int *)v41);
LABEL_3:
  v8 = v122;
  if ( v122 )
  {
    do
    {
      v9 = v8;
      sub_697F90((_QWORD *)v8[3]);
      v10 = (void *)v8[4];
      v8 = (_QWORD *)v8[2];
      if ( v10 )
      {
        v9[5] = 0;
        qfree(v10);
      }
      operator delete(v9, 0x40u);
    }
    while ( v8 );
  }
  return v133 - __readfsqword(0x28u);
}

