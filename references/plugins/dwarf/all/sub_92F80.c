__int64 __fastcall sub_92F80(__int64 *a1, __int64 a2, __int64 a3, int *a4)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r13
  const char *v13; // rdi
  __int64 v14; // r12
  const char *v15; // rsi
  unsigned int v16; // r13d
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // rbp
  __int64 *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdi
  const char *v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rsi
  char v27; // r15
  bool v28; // r13
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdi
  int v32; // eax
  int v33; // r13d
  unsigned int *v34; // r15
  __int64 v35; // r8
  char v36; // al
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *segm_by_name; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 *v43; // rsi
  unsigned __int64 *v44; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned __int64 v47; // r10
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r15
  unsigned __int64 v51; // rax
  unsigned int v52; // r10d
  __int64 v53; // rdx
  __int64 v54; // r8
  unsigned int v55; // r10d
  int v56; // eax
  __int64 v57; // rsi
  __int64 v58; // rdi
  const char *v59; // rcx
  unsigned __int64 v60; // r15
  unsigned __int64 v61; // r13
  __int64 v62; // rax
  unsigned __int64 v63; // r15
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  char *v66; // rsi
  __int64 v67; // rcx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  int v71; // eax
  unsigned __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // r11
  __int64 v75; // rax
  __int64 *v76; // rax
  __int64 v77; // r11
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rax
  bool v81; // zf
  int v82; // eax
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // [rsp+10h] [rbp-3C8h]
  unsigned __int64 v86; // [rsp+18h] [rbp-3C0h]
  void *v87; // [rsp+20h] [rbp-3B8h]
  unsigned __int64 v88; // [rsp+20h] [rbp-3B8h]
  unsigned int v89; // [rsp+20h] [rbp-3B8h]
  unsigned int v90; // [rsp+20h] [rbp-3B8h]
  __int64 *v91; // [rsp+20h] [rbp-3B8h]
  unsigned __int64 v92; // [rsp+28h] [rbp-3B0h]
  unsigned __int64 v93; // [rsp+28h] [rbp-3B0h]
  unsigned __int64 v94; // [rsp+38h] [rbp-3A0h]
  unsigned int *v95; // [rsp+38h] [rbp-3A0h]
  unsigned __int64 v96; // [rsp+38h] [rbp-3A0h]
  unsigned __int8 v97; // [rsp+40h] [rbp-398h]
  __int64 v98; // [rsp+40h] [rbp-398h]
  int v99; // [rsp+40h] [rbp-398h]
  unsigned int v100; // [rsp+48h] [rbp-390h]
  char v101; // [rsp+48h] [rbp-390h]
  int v102; // [rsp+50h] [rbp-388h]
  unsigned int v103; // [rsp+50h] [rbp-388h]
  unsigned int v104; // [rsp+50h] [rbp-388h]
  unsigned int v105; // [rsp+50h] [rbp-388h]
  unsigned int v106; // [rsp+58h] [rbp-380h]
  unsigned __int64 v107; // [rsp+58h] [rbp-380h]
  unsigned __int16 v108; // [rsp+64h] [rbp-374h]
  bool v109; // [rsp+66h] [rbp-372h]
  char v110; // [rsp+67h] [rbp-371h]
  __int64 v111; // [rsp+68h] [rbp-370h]
  unsigned __int64 v112; // [rsp+70h] [rbp-368h]
  char v113; // [rsp+78h] [rbp-360h]
  bool v114; // [rsp+8Fh] [rbp-349h] BYREF
  __int64 v115; // [rsp+90h] [rbp-348h] BYREF
  __int64 v116; // [rsp+98h] [rbp-340h] BYREF
  void *s; // [rsp+A0h] [rbp-338h] BYREF
  __int128 v118; // [rsp+A8h] [rbp-330h]
  __int64 *v119; // [rsp+C0h] [rbp-318h] BYREF
  __int128 v120; // [rsp+C8h] [rbp-310h]
  __int64 v121; // [rsp+E0h] [rbp-2F8h] BYREF
  __int128 v122; // [rsp+E8h] [rbp-2F0h]
  __int64 v123; // [rsp+100h] [rbp-2D8h] BYREF
  __int128 v124; // [rsp+108h] [rbp-2D0h]
  _BYTE v125[32]; // [rsp+120h] [rbp-2B8h] BYREF
  __int64 v126; // [rsp+140h] [rbp-298h]
  __int64 v127; // [rsp+148h] [rbp-290h]
  __int64 v128[4]; // [rsp+170h] [rbp-268h] BYREF
  unsigned int *v129; // [rsp+190h] [rbp-248h]
  __int64 v130; // [rsp+198h] [rbp-240h]
  char v131; // [rsp+218h] [rbp-1C0h]
  __int64 v132; // [rsp+240h] [rbp-198h]
  __int64 v133; // [rsp+248h] [rbp-190h]
  __int64 v134; // [rsp+2F8h] [rbp-E0h]
  __int64 v135; // [rsp+300h] [rbp-D8h]
  char v136; // [rsp+31Ch] [rbp-BCh]
  char v137; // [rsp+31Dh] [rbp-BBh]
  __int16 v138; // [rsp+328h] [rbp-B0h]
  unsigned __int16 v139; // [rsp+32Ah] [rbp-AEh]
  __int64 v140; // [rsp+360h] [rbp-78h]
  __int64 v141; // [rsp+368h] [rbp-70h]
  __int64 v142; // [rsp+378h] [rbp-60h]
  unsigned __int64 v143; // [rsp+398h] [rbp-40h]

  v143 = __readfsqword(0x28u);
  if ( (debug & 0x400000) != 0 )
    sub_88B80((__int64)"Relocating section %llu (%s).\n", a2, *(const char **)(a1[13] + 120 * (a2 - 1) + 16));
  v7 = a1[39];
  if ( !v7 )
    goto LABEL_195;
  v8 = a1[38];
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = v8 + 72 * v9;
    if ( a2 == *(_QWORD *)(v11 + 64) )
      break;
    v10 = (unsigned int)(v10 + 1);
    v9 = (int)v10;
    if ( (int)v10 >= v7 )
      goto LABEL_195;
  }
  if ( !v11 )
  {
LABEL_195:
    if ( !under_debugger )
      interr(721);
    BUG();
  }
  v12 = *a1;
  if ( !*a1 || *(_DWORD *)(v12 + 8) != 1 )
  {
    sub_1D740((__int64)"Invalid input source.\n", v8, v10);
    return 1;
  }
  v13 = src;
  if ( *(_QWORD *)(v12 + 24) )
    v13 = *(const char **)(v12 + 16);
  v14 = open_linput(v13, 0);
  if ( !v14 )
  {
    v24 = src;
    if ( *(_QWORD *)(v12 + 24) )
      v24 = *(const char **)(v12 + 16);
    sub_1D740((__int64)"Couldn't open file: %s.\n", v24);
    return 1;
  }
  sub_17FA0((__int64)v125, v14, 0);
  if ( !(unsigned __int8)sub_18180((__int64)v125)
    || !(unsigned __int8)sub_186E0((__int64)v125)
    || !(unsigned __int8)sub_20BC0((__int64)v125) )
  {
    v15 = src;
    if ( *(_QWORD *)(v12 + 24) )
      v15 = *(const char **)(v12 + 16);
    sub_1D740((__int64)"Invalid ELF file: %s.\n", v15);
    goto LABEL_17;
  }
  if ( !v131 || !v130 || v138 != 1 )
  {
    if ( (debug & 0x400000) != 0 )
      sub_88B80((__int64)"File is not relocatable; skipping relocations.\n");
    v16 = 0;
    goto LABEL_18;
  }
  v25 = sub_19010((__int64)v128, 14);
  v26 = v25;
  if ( !v25 || (v86 = sub_19030((__int64)v128, v25)) == 0 )
  {
    sub_1D740((__int64)"No symtab section.\n", v26);
LABEL_65:
    *a4 = 232;
LABEL_17:
    v16 = 1;
    goto LABEL_18;
  }
  v85 = sub_19060((__int64)v128, a2, &v114);
  if ( !v85 )
  {
    sub_1D740((__int64)"No relsec section.\n");
    goto LABEL_65;
  }
  s = nullptr;
  v27 = v136;
  v118 = 0;
  v28 = v114;
  v97 = (v137 != 2) + 1;
  v110 = v136;
  v108 = v139;
  qlseek(v134, *(_QWORD *)(v85 + 24) + v135, 0);
  v123 = 0;
  v124 = 0;
  sub_22C60(v128, &v123, v85);
  if ( v27 == 2 )
  {
    v87 = sub_7F440;
    v29 = 16;
    if ( v28 )
    {
      v87 = sub_7F4B0;
      v29 = 24;
    }
  }
  else
  {
    v87 = sub_7EC50;
    v29 = 8;
    if ( v28 )
    {
      v87 = sub_7EC90;
      v29 = 12;
    }
  }
  v92 = v29;
  if ( v29 != *(_QWORD *)(v85 + 56) )
    goto LABEL_57;
  v94 = sub_19610(v128, v85);
  if ( !v94 )
  {
    v31 = v123;
    if ( !v123 )
      goto LABEL_69;
    goto LABEL_68;
  }
  v60 = v94 / v92;
  v61 = v94 % v92;
  if ( v94 % v92 )
  {
LABEL_57:
    v30 = v123;
    *a4 = 216;
    if ( v30 )
    {
      *(_QWORD *)&v124 = 0;
      qfree(v30);
    }
    v16 = 1;
    goto LABEL_60;
  }
  v62 = v118;
  if ( (unsigned __int64)v118 < v60 )
  {
    if ( *((_QWORD *)&v118 + 1) < v60 )
    {
      s = (void *)qvector_reserve(&s, s, v94 / v92, 32);
      v62 = v118;
    }
    memset((char *)s + 32 * v62, 0, 32 * (v60 - v62));
    *(_QWORD *)&v118 = v94 / v92;
  }
  else if ( v60 != (_QWORD)v118 )
  {
    *(_QWORD *)&v118 = v94 / v92;
  }
  memset(s, 0, 32 * v60);
  v31 = v123;
  if ( v94 >= v92 )
  {
    do
    {
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, char *))v87)(
        v31,
        (unsigned int)v61,
        v97,
        v108,
        (char *)s + 32 * v61);
      ++v61;
    }
    while ( v61 < v60 );
    v31 = v123;
  }
  if ( v31 )
  {
LABEL_68:
    *(_QWORD *)&v124 = 0;
    qfree(v31);
  }
LABEL_69:
  v32 = 234;
  if ( !*(_QWORD *)(v86 + 56) )
  {
LABEL_108:
    *a4 = v32;
    v16 = 1;
    goto LABEL_60;
  }
  v109 = v114;
  v88 = sub_19610(v128, v86);
  v93 = v88 % *(_QWORD *)(v86 + 56);
  if ( v93 )
  {
    v32 = 231;
    goto LABEL_108;
  }
  v33 = 0;
  v34 = v129;
  v119 = nullptr;
  v123 = 0;
  *((_QWORD *)&v124 + 1) = 0;
  v95 = &v129[16 * v130];
  v120 = 0;
  if ( v129 == v95 )
    goto LABEL_83;
  do
  {
    *(_QWORD *)&v124 = 0;
    sub_20500(v128, &v123, v34);
    if ( (unsigned __int64)v124 <= 1 )
    {
LABEL_73:
      LODWORD(v35) = v33 + 1;
      goto LABEL_74;
    }
    v36 = validate_name(&v123, 6, 1);
    v35 = (unsigned int)(v33 + 1);
    if ( v36 )
    {
      segm_by_name = (__int64 *)get_segm_by_name(v123, 6, v37, v38, v35);
      if ( !segm_by_name )
        goto LABEL_73;
      v40 = *segm_by_name;
      v41 = (unsigned int)(v33 + 1);
      v121 = -1;
      LODWORD(v35) = v33 + 1;
      v98 = v40;
      v42 = v120;
      if ( v41 >= (unsigned __int64)v120 )
      {
        v43 = v119;
        if ( (unsigned __int64)v120 < v41 )
        {
          if ( &v121 < v119 || &v121 >= &v119[*((_QWORD *)&v120 + 1)] )
          {
            if ( *((_QWORD *)&v120 + 1) < v41 )
            {
              v119 = (__int64 *)qvector_reserve(&v119, v119, v41, 8);
              v43 = v119;
              LODWORD(v35) = v33 + 1;
              v42 = v120;
              v41 = (unsigned int)(v33 + 1);
            }
            while ( v42 < v41 )
            {
              v43[v42] = v121;
              v43 = v119;
              ++v42;
            }
          }
          else
          {
            if ( *((_QWORD *)&v120 + 1) < v41 )
            {
              v119 = (__int64 *)qvector_reserve(&v119, v119, v41, 8);
              v43 = v119;
              LODWORD(v35) = v33 + 1;
              v42 = v120;
              v41 = (unsigned int)(v33 + 1);
            }
            while ( v42 < v41 )
            {
              v43[v42] = -1;
              v43 = v119;
              ++v42;
            }
          }
          *(_QWORD *)&v120 = v41;
        }
      }
      else
      {
        *(_QWORD *)&v120 = (unsigned int)(v33 + 1);
        v43 = v119;
      }
      v43[v33] = v98;
    }
LABEL_74:
    v34 += 16;
    v33 = v35;
  }
  while ( v95 != v34 );
  if ( v123 )
  {
    *(_QWORD *)&v124 = 0;
    qfree(v123);
  }
LABEL_83:
  v112 = v88 / *(_QWORD *)(v86 + 56);
  if ( !(_DWORD)v118 )
  {
    v16 = 0;
    goto LABEL_105;
  }
  v16 = 0;
  v111 = (unsigned int)v118;
  v99 = 0;
  while ( 2 )
  {
    v44 = (unsigned __int64 *)((char *)s + 32 * v93);
    if ( !v44[1] )
      goto LABEL_103;
    if ( v44[2] >= v112 )
      goto LABEL_96;
    v123 = 0;
    v124 = 0;
    v45 = *v44;
    v46 = v44[3];
    v47 = v44[1];
    v48 = v44[2];
    v96 = v45;
    v115 = v46;
    v89 = v48;
    if ( v108 == 243 && (unsigned int)(v47 - 60) <= 1 )
    {
      ++v99;
      goto LABEL_103;
    }
    v100 = v47;
    v49 = qlseek(v134, 0, 1);
    v50 = v49 - v135;
    if ( v110 != 2 )
    {
      if ( v89 >= sub_19610(v128, v86) >> 4 )
        goto LABEL_234;
      v52 = v100;
      v53 = 16LL * v89;
LABEL_90:
      v90 = v52;
      qlseek(v134, *(_QWORD *)(v86 + 24) + v53 + v135, 0);
      if ( (int)sub_18330((__int64)v125, (__int64)&v123) < 0 )
      {
        v56 = 211;
        goto LABEL_95;
      }
      qlseek(v134, v50 + v135, 0);
      v55 = v90;
      if ( v108 <= 0x3Eu )
      {
        if ( v108 > 1u )
        {
          switch ( v108 )
          {
            case 2u:
            case 0x12u:
              if ( v90 == 54 )
                goto LABEL_186;
              if ( v90 == 23 )
                goto LABEL_127;
              goto LABEL_124;
            case 3u:
              if ( v90 == 1 || v90 == 32 )
                goto LABEL_127;
              goto LABEL_124;
            case 8u:
              if ( v90 == 18 )
                goto LABEL_186;
              goto LABEL_172;
            case 0x14u:
              goto LABEL_126;
            case 0x15u:
              if ( v90 == 38 )
                goto LABEL_186;
LABEL_126:
              if ( v90 == 1 )
                goto LABEL_127;
              goto LABEL_124;
            case 0x28u:
LABEL_172:
              if ( v90 == 2 )
                goto LABEL_127;
              goto LABEL_124;
            case 0x2Du:
              goto LABEL_122;
            case 0x32u:
              if ( v90 == 39 )
                goto LABEL_186;
              if ( v90 == 101 )
                goto LABEL_127;
              goto LABEL_124;
            case 0x3Eu:
              if ( v90 == 10 || v90 == 21 )
                goto LABEL_127;
              if ( v90 == 1 )
                goto LABEL_186;
              goto LABEL_124;
            default:
              goto LABEL_124;
          }
        }
        goto LABEL_124;
      }
      switch ( v108 )
      {
        case 0xC3u:
LABEL_122:
          if ( v90 != 1 && v90 != 4 )
            goto LABEL_124;
          break;
        case 0xF3u:
          switch ( v90 )
          {
            case 1u:
            case 0x23u:
            case 0x27u:
            case 0x38u:
              goto LABEL_127;
            case 2u:
            case 0x24u:
            case 0x28u:
              goto LABEL_186;
            case 0x21u:
            case 0x25u:
            case 0x36u:
              v63 = 1;
              goto LABEL_128;
            case 0x22u:
            case 0x26u:
            case 0x37u:
              v63 = 2;
              goto LABEL_128;
            default:
              goto LABEL_124;
          }
        case 0xB7u:
          if ( v90 != 258 && v90 != 283 )
          {
            if ( v90 != 257 )
            {
LABEL_124:
              *a4 = 211;
              goto LABEL_96;
            }
LABEL_186:
            v63 = 8;
LABEL_128:
            v64 = *(unsigned int *)(v11 + 48);
            if ( v96 >= v64 || v64 < v96 + v63 )
              goto LABEL_124;
            v101 = v137;
            v91 = (__int64 *)(*(_QWORD *)(v11 + 56) + v96);
            if ( !v109 )
            {
              qmemcpy(&v115, v91, v63);
              if ( v101 == 2 )
              {
                v105 = v55;
                swap_value(&v115, &v115, (unsigned int)v63);
                v55 = v105;
              }
            }
            v65 = 11;
            v66 = (char *)HIWORD(v123);
            v116 = 0;
            v102 = HIWORD(v123);
            v67 = HIWORD(v123);
            v68 = BYTE4(v123) & 0xF;
            v113 = BYTE4(v123);
            if ( _bittest64(&v65, v68) )
            {
              if ( !HIWORD(v123) )
              {
                if ( (_QWORD)v120 )
                {
                  v74 = *v119;
                  if ( *v119 != -1 )
                    goto LABEL_155;
                }
                goto LABEL_165;
              }
              v69 = (unsigned int)HIWORD(v123) - 1;
              if ( v69 < a1[14] )
              {
                v70 = a1[13] + 120 * v69;
                if ( *(_QWORD *)(v70 + 24) )
                {
                  v103 = HIWORD(v123);
                  v66 = ".debug_";
                  v106 = v55;
                  v71 = strncmp(*(const char **)(v70 + 16), ".debug_", 7u);
                  v67 = v103;
                  v55 = v106;
                  if ( !v71 )
                  {
                    v116 = v115;
                    if ( (v113 & 0xE) == 0 )
                      v116 = v124 + v115;
                    if ( v108 == 243 )
                    {
                      v72 = (unsigned int)v63;
                      v121 = 0;
                      qmemcpy(&v121, v91, (unsigned int)v63);
                      if ( v106 > 0x24 )
                      {
                        if ( v106 - 37 <= 3 )
                          v116 -= v121;
                      }
                      else if ( v106 > 0x20 )
                      {
                        v116 += v121;
                      }
                      goto LABEL_140;
                    }
                    goto LABEL_139;
                  }
                }
              }
              v73 = (unsigned __int16)v67;
              if ( (unsigned __int16)v67 >= (unsigned __int64)v120 )
                goto LABEL_145;
LABEL_143:
              v65 = (__int64)v119;
              v74 = v119[v73];
              if ( v74 != -1 )
                goto LABEL_155;
LABEL_144:
              if ( (_WORD)v67 )
              {
LABEL_145:
                if ( (_WORD)v67 != 0xFFF2 )
                  goto LABEL_146;
                v104 = v55;
                v76 = (__int64 *)get_segm_by_name("common", v66, v65, v67, v54);
                goto LABEL_153;
              }
LABEL_165:
              v104 = v55;
              v76 = (__int64 *)get_segm_by_name("extern", v66, v65, v67, v54);
LABEL_153:
              v55 = v104;
              if ( !v76 )
                goto LABEL_146;
              v74 = *v76;
              if ( *v76 == -1 )
                goto LABEL_146;
LABEL_155:
              v72 = (unsigned int)v63;
              v77 = v124 + v115 + v74;
              v116 = v77;
              if ( v108 == 243 )
              {
                v121 = 0;
                qmemcpy(&v121, v91, (unsigned int)v63);
                if ( v55 > 0x24 )
                {
                  if ( v55 - 37 <= 3 )
                    v116 = v77 - v121;
                }
                else if ( v55 > 0x20 )
                {
                  v116 = v77 + v121;
                }
              }
              goto LABEL_140;
            }
            if ( (_BYTE)v68 != 6 )
            {
              v73 = HIWORD(v123);
              if ( HIWORD(v123) >= (unsigned __int64)v120 )
                goto LABEL_144;
              goto LABEL_143;
            }
            v107 = v124;
            if ( v138 != 1 )
            {
              v116 = v124;
LABEL_139:
              v72 = (unsigned int)v63;
              goto LABEL_140;
            }
            if ( !*((_DWORD *)a1 + 70) )
            {
              *((_DWORD *)a1 + 70) = 1;
              netnode_check(&v121, "$ tls", 0, 0);
              if ( (unsigned __int8)netnode_exist(&v121) )
              {
                v78 = netnode_altval(v121, 0, 65);
                v79 = v121;
                a1[27] = v78 - 1;
                v80 = netnode_altval(v79, -1, 65);
                v81 = a1[27] == -1;
                a1[28] = v80;
                if ( !v81 )
                {
                  if ( v80 )
                  {
                    *((_DWORD *)a1 + 70) = 2;
                    a1[30] = netnode_altval(v121, -2, 65);
                    v82 = netnode_altval(v121, -3, 65);
                    v81 = a1[30] == 0;
                    *((_DWORD *)a1 + 62) = v82;
                    if ( !v81 )
                      *((_BYTE *)a1 + 252) = 1;
                    a1[32] = netnode_altval(v121, -4, 65);
                    a1[33] = netnode_altval(v121, -5, 65);
                    v83 = netnode_altval(v121, -6, 65);
                    v81 = a1[33] == 0;
                    *((_DWORD *)a1 + 68) = v83;
                    if ( !v81 )
                      *((_BYTE *)a1 + 276) = 1;
                  }
                }
              }
            }
            if ( *((_DWORD *)a1 + 70) == 2 )
            {
              if ( *((_BYTE *)a1 + 252) && v102 == *((_DWORD *)a1 + 62) )
              {
                if ( v107 < a1[30] )
                {
                  v84 = a1[29] + a1[27] + v107;
LABEL_225:
                  v116 = v84;
                  v72 = (unsigned int)v63;
                  if ( v84 != -1 )
                  {
LABEL_140:
                    qmemcpy(v91, &v116, v72);
                    if ( v101 == 2 )
                      swap_value(v91, v91, (unsigned int)v63);
                    goto LABEL_103;
                  }
LABEL_146:
                  v75 = *(_QWORD *)(v11 + 8);
                  if ( *(_QWORD *)(v11 + 16) < (unsigned __int64)(v75 + 1) )
                  {
                    *(_QWORD *)v11 = qvector_reserve(v11, *(_QWORD *)v11, v75 + 1, 8);
                    v75 = *(_QWORD *)(v11 + 8);
                  }
                  *(_QWORD *)(*(_QWORD *)v11 + 8 * v75) = v96;
                  ++*(_QWORD *)(v11 + 8);
                  *a4 = 212;
                  goto LABEL_96;
                }
              }
              else if ( *((_BYTE *)a1 + 276) && v102 == *((_DWORD *)a1 + 68) && v107 < a1[33] )
              {
                v84 = a1[32] + a1[27] + v107;
                goto LABEL_225;
              }
            }
            v116 = -1;
            goto LABEL_146;
          }
          break;
        default:
          goto LABEL_124;
      }
LABEL_127:
      v63 = 4;
      goto LABEL_128;
    }
    v51 = sub_19610(v128, v86);
    v52 = v100;
    v53 = 24LL * v89;
    if ( v89 < v51 / 0x18 )
      goto LABEL_90;
LABEL_234:
    v56 = 213;
LABEL_95:
    v57 = v135;
    v58 = v134;
    *a4 = v56;
    qlseek(v58, v50 + v57, 0);
LABEL_96:
    v121 = 0;
    v123 = 0;
    v122 = 0;
    v124 = 0;
    sub_20500(v128, &v121, (unsigned int *)v85);
    v59 = src;
    if ( (_QWORD)v122 )
      v59 = (const char *)v121;
    sub_20160(
      &v123,
      (__int64)"The DWARF plugin couldn't apply all DWARF relocation entries (#%d in section %s)",
      v93,
      v59);
    sub_16F70();
    if ( v123 )
    {
      *(_QWORD *)&v124 = 0;
      qfree(v123);
    }
    if ( v121 )
    {
      *(_QWORD *)&v122 = 0;
      qfree(v121);
    }
    v16 = 1;
LABEL_103:
    if ( v111 != ++v93 )
      continue;
    break;
  }
  if ( v99 > 0 )
  {
    v123 = 0;
    v124 = 0;
    sub_20500(v128, &v123, (unsigned int *)v85);
    sub_17110((__int64)"DWARF: Skipped %d relocation entries in %s (debug-only, not affecting code/data).\n");
    if ( v123 )
    {
      *(_QWORD *)&v124 = 0;
      qfree(v123);
    }
  }
LABEL_105:
  if ( v119 )
  {
    *(_QWORD *)&v120 = 0;
    qfree(v119);
  }
LABEL_60:
  if ( s )
  {
    *(_QWORD *)&v118 = 0;
    qfree(s);
  }
LABEL_18:
  if ( v142 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v142 + 8LL))(v142);
  if ( v140 )
  {
    v141 = 0;
    qfree(v140);
  }
  v17 = v132;
  if ( v132 )
  {
    v18 = v133;
    if ( v133 )
    {
      v19 = 0;
      do
      {
        v20 = (__int64 *)(v17 + 96 * v19);
        v21 = v20[3];
        if ( v21 )
        {
          v20[4] = 0;
          qfree(v21);
        }
        v22 = *v20;
        if ( *v20 )
        {
          v20[1] = 0;
          qfree(v22);
        }
        ++v19;
        v17 = v132;
      }
      while ( v18 != v19 );
    }
    v133 = 0;
    qfree(v17);
  }
  if ( v129 )
  {
    v130 = 0;
    qfree(v129);
  }
  if ( v126 )
  {
    v127 = 0;
    qfree(v126);
  }
  close_linput(v14);
  return v16;
}
