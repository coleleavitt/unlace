void __fastcall sub_E5C460(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r15
  char v8; // r12
  unsigned __int64 v10; // rbx
  int v11; // eax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // edi
  __int64 *v17; // rsi
  __int64 v18; // r9
  unsigned int *v19; // r9
  __int64 *v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // r15
  int v23; // eax
  int v24; // eax
  unsigned int *v25; // rsi
  int v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // rdi
  _BYTE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  unsigned int v32; // ecx
  __int64 *v33; // rsi
  __int64 v34; // r9
  void *v35; // r9
  __int64 *v36; // rdx
  __int64 v37; // rax
  _BYTE *v38; // rdx
  int v39; // esi
  int v40; // eax
  __int64 v41; // r9
  int v42; // eax
  unsigned __int64 v43; // r15
  unsigned __int8 v44; // al
  __int64 v45; // rdx
  bool v46; // r13
  __int64 v47; // rdx
  __int64 **v48; // rax
  __int64 *v49; // rdx
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  const char *v52; // rax
  __int64 v53; // rax
  size_t v54; // rax
  unsigned __int8 v55; // al
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rcx
  __int64 v66; // r14
  void *v67; // rcx
  size_t v68; // rbx
  __int64 v69; // r14
  void *v70; // r13
  int v71; // eax
  int v72; // eax
  int v73; // eax
  void *v74; // rdi
  int v75; // esi
  int v76; // eax
  __int64 v77; // r9
  size_t v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r14
  __int64 v84; // r13
  bool v85; // zf
  __int64 v86; // r9
  __int64 *v87; // rax
  int v88; // ecx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  int v92; // esi
  __int64 v93; // rdx
  __int64 *v94; // rax
  int v95; // edx
  __int64 v96; // rdi
  __int64 *v97; // rax
  __int64 *v98; // rax
  __int64 *v99; // rax
  __int64 *v100; // rax
  unsigned __int8 v101; // di
  __int64 *v102; // rbx
  int v103; // eax
  __int64 v104; // rbx
  size_t v105; // rax
  __int64 **v106; // rax
  __int64 **v107; // rax
  __int64 **v108; // rax
  unsigned __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // r13
  size_t v112; // rax
  __int64 v113; // rdi
  char *v114; // rax
  __int64 v115; // rdx
  size_t v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  size_t v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // r13
  unsigned int v124; // r14d
  unsigned __int64 v125; // rax
  __int64 v126; // rdx
  int v127; // r15d
  int v128; // eax
  size_t v129; // rax
  unsigned int v130; // eax
  size_t v131; // rax
  unsigned __int8 v132; // al
  __int32 v133; // edx
  __int64 v134; // rsi
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  size_t v139; // rax
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  size_t v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  __int64 v150; // [rsp+0h] [rbp-3A8h]
  __int64 v151; // [rsp+0h] [rbp-3A8h]
  unsigned int *v152; // [rsp+8h] [rbp-3A0h]
  __int64 *v153; // [rsp+8h] [rbp-3A0h]
  void *v154; // [rsp+10h] [rbp-398h]
  unsigned __int64 v155; // [rsp+10h] [rbp-398h]
  __int64 v156; // [rsp+30h] [rbp-378h]
  __int64 v157; // [rsp+38h] [rbp-370h]
  unsigned __int64 v158; // [rsp+40h] [rbp-368h] BYREF
  __int64 *v159; // [rsp+48h] [rbp-360h] BYREF
  void *v160[2]; // [rsp+50h] [rbp-358h] BYREF
  __int64 v161; // [rsp+60h] [rbp-348h] BYREF
  __m128i v162[2]; // [rsp+70h] [rbp-338h] BYREF
  __int64 v163; // [rsp+90h] [rbp-318h]
  char v164; // [rsp+98h] [rbp-310h]
  int v165; // [rsp+9Ch] [rbp-30Ch]
  void **p_s2; // [rsp+A0h] [rbp-308h]
  void *s2; // [rsp+B0h] [rbp-2F8h] BYREF
  _BYTE n[24]; // [rsp+B8h] [rbp-2F0h] BYREF
  __int64 v169; // [rsp+D0h] [rbp-2D8h]
  char v170; // [rsp+D8h] [rbp-2D0h]
  int v171; // [rsp+DCh] [rbp-2CCh]
  void **p_ptr; // [rsp+E0h] [rbp-2C8h]
  void *ptr; // [rsp+110h] [rbp-298h] BYREF
  __m128i si128; // [rsp+118h] [rbp-290h]
  _BYTE v175[640]; // [rsp+128h] [rbp-280h] BYREF

  v6 = (unsigned __int64)a4;
  v8 = a2;
  v10 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v11 = *(_BYTE *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
  if ( (unsigned int)(v11 - 34) > 5 )
  {
LABEL_12:
    if ( (unsigned int)(v11 - 60) > 1 )
    {
      if ( (unsigned int)(v11 - 41) > 1 )
        goto LABEL_15;
      v150 = *(_QWORD *)(v10 + 128);
      v13 = a2 & 7 | sub_B9C0C0(a2 & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v150 = *(_QWORD *)(v10 + 168);
      v13 = a2 & 7 | sub_B9B550(a2 & 0xFFFFFFFFFFFFFFF8LL);
    }
    if ( v13 )
      goto LABEL_4;
LABEL_15:
    v21 = v6 & 7;
    if ( v21 == 7 )
    {
      v22 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      v23 = 3;
      if ( *(_DWORD *)v22 <= 3u )
        v23 = *(_DWORD *)v22;
      v24 = v23 + 8;
      if ( v24 != 9 )
      {
        if ( v24 == 11 )
        {
LABEL_20:
          ptr = v175;
          si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
          sub_E58770((__int64)a1, v175, 0);
        }
        return;
      }
      sub_971800(a1[1], "?__K");
      if ( *(_DWORD *)v22 == 1 )
      {
        v25 = *(unsigned int **)(*(_QWORD *)(v22 + 16) + 16LL);
LABEL_27:
        sub_E58770((__int64)a1, (_BYTE *)v25 + 16, *v25);
        return;
      }
LABEL_286:
      BUG();
    }
    switch ( v6 & 7 )
    {
      case 1uLL:
      case 2uLL:
        goto LABEL_20;
      case 3uLL:
        if ( v10 != a1[2] && sub_E54D40(a2 & 0xFFFFFFFFFFFFFFF8LL) != a1[2] )
          goto LABEL_30;
        v42 = *((_DWORD *)a1 + 6);
        if ( v42 == 3 )
        {
          sub_971800(a1[1], "?_O");
        }
        else if ( v42 == 4 )
        {
          sub_971800(a1[1], "?_F");
        }
        else
        {
LABEL_30:
          sub_971800(a1[1], "?0");
        }
        return;
      case 4uLL:
        if ( v10 != a1[2] && sub_E54D40(a2 & 0xFFFFFFFFFFFFFFF8LL) != a1[2] )
          goto LABEL_37;
        v26 = *((_DWORD *)a1 + 6);
        if ( v26 == 1 )
        {
          sub_971800(a1[1], "?_D");
        }
        else if ( v26 )
        {
          if ( v26 == 2 )
LABEL_37:
            sub_971800(a1[1], "?1");
          else
            sub_E5DD50();
        }
        else
        {
          sub_971800(a1[1], "?_G");
        }
        return;
      case 5uLL:
        sub_971800(a1[1], "?B");
        return;
      case 6uLL:
        if ( v21 == 6 )
        {
          v27 = *(_DWORD *)(v10 + 24);
          switch ( *(_DWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL) )
          {
            case 1:
              sub_971800(a1[1], "?2");
              break;
            case 2:
              sub_971800(a1[1], "?3");
              break;
            case 3:
              sub_971800(a1[1], "?_U");
              break;
            case 4:
              sub_971800(a1[1], "?_V");
              break;
            case 5:
              sub_971800(a1[1], "?H");
              break;
            case 6:
              sub_971800(a1[1], "?G");
              break;
            case 7:
              sub_971800(a1[1], "?D");
              break;
            case 8:
              sub_971800(a1[1], "?K");
              break;
            case 9:
              sub_971800(a1[1], "?L");
              break;
            case 0xA:
              sub_971800(a1[1], "?T");
              break;
            case 0xB:
              sub_971800(a1[1], "?I");
              break;
            case 0xC:
              sub_971800(a1[1], "?U");
              break;
            case 0xD:
              sub_971800(a1[1], "?S");
              break;
            case 0xE:
              sub_971800(a1[1], "?7");
              break;
            case 0xF:
              sub_971800(a1[1], "?4");
              break;
            case 0x10:
              sub_971800(a1[1], "?M");
              break;
            case 0x11:
              sub_971800(a1[1], "?O");
              break;
            case 0x12:
              sub_971800(a1[1], "?Y");
              break;
            case 0x13:
              sub_971800(a1[1], "?Z");
              break;
            case 0x14:
              sub_971800(a1[1], "?X");
              break;
            case 0x15:
              sub_971800(a1[1], "?_0");
              break;
            case 0x16:
              sub_971800(a1[1], "?_1");
              break;
            case 0x17:
              sub_971800(a1[1], "?_6");
              break;
            case 0x18:
              sub_971800(a1[1], "?_4");
              break;
            case 0x19:
              sub_971800(a1[1], "?_5");
              break;
            case 0x1A:
              sub_971800(a1[1], "?6");
              break;
            case 0x1B:
              sub_971800(a1[1], "?5");
              break;
            case 0x1C:
              sub_971800(a1[1], "?_3");
              break;
            case 0x1D:
              sub_971800(a1[1], "?_2");
              break;
            case 0x1E:
              sub_971800(a1[1], "?8");
              break;
            case 0x1F:
              sub_971800(a1[1], "?9");
              break;
            case 0x20:
              sub_971800(a1[1], "?N");
              break;
            case 0x21:
              sub_971800(a1[1], "?P");
              break;
            case 0x22:
              sub_971800(a1[1], "?__M");
              break;
            case 0x23:
              sub_971800(a1[1], "?V");
              break;
            case 0x24:
              sub_971800(a1[1], "?W");
              break;
            case 0x25:
              sub_971800(a1[1], "?E");
              break;
            case 0x26:
              sub_971800(a1[1], "?F");
              break;
            case 0x27:
              sub_971800(a1[1], "?Q");
              break;
            case 0x28:
              sub_971800(a1[1], "?J");
              break;
            case 0x29:
              sub_971800(a1[1], "?C");
              break;
            case 0x2A:
              sub_971800(a1[1], "?R");
              break;
            case 0x2B:
              sub_971800(a1[1], "?A");
              break;
            case 0x2C:
              v54 = j__strlen("conditional operator");
              sub_E55260((__int64)&ptr, *a1, v27, "conditional operator", v54);
              sub_AC6300((__int64)&ptr);
              break;
            case 0x2D:
              sub_971800(a1[1], "?__L");
              break;
            default:
              return;
          }
        }
        return;
      default:
        v43 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v43 )
        {
          if ( !v10 )
            goto LABEL_154;
          v44 = *(_BYTE *)(v10 + 28) & 0x7F;
          v45 = (unsigned int)v44 - 34;
          if ( (unsigned int)v45 > 5 )
          {
            if ( v44 != 71 )
              goto LABEL_154;
          }
          else
          {
            v45 = *(unsigned __int8 *)(v10 + 29);
            if ( (v45 & 1) != 0 )
            {
              v99 = sub_B68690(a2 & 0xFFFFFFFFFFFFFFF8LL, a2, v45, (__int64)a4, a5, a6);
              v45 = *v99;
              a4 = (__int64 *)(*v99 + 8LL * *((unsigned int *)v99 + 2));
              if ( *v99 < (unsigned __int64)a4 )
              {
                v100 = (__int64 *)*v99;
                while ( 1 )
                {
                  v45 = *v100;
                  if ( *(_WORD *)(*v100 + 36) == 163 )
                    break;
                  if ( a4 == ++v100 )
                    goto LABEL_189;
                }
                if ( a4 == v100 )
                {
LABEL_189:
                  v101 = *(_BYTE *)(v10 + 28) & 0x7F;
                  goto LABEL_190;
                }
LABEL_239:
                LOBYTE(a2) = *(_BYTE *)(v10 + 28);
LABEL_227:
                a2 &= 0x7Fu;
                v47 = v8 & 7;
                if ( (unsigned int)(a2 - 34) > 5 )
                {
                  if ( v47 == 1 )
                    goto LABEL_67;
                  goto LABEL_154;
                }
                v46 = v47 == 1;
                if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
                  goto LABEL_66;
                goto LABEL_62;
              }
              a2 = *(unsigned __int8 *)(v10 + 28);
              v101 = *(_BYTE *)(v10 + 28) & 0x7F;
              if ( (__int64 *)v45 != a4 )
              {
                if ( *(_WORD *)(*a4 + 36) == 163 )
                  goto LABEL_227;
                v107 = (__int64 **)(a4 + 1);
                while ( 1 )
                {
                  a4 = (__int64 *)v107;
                  if ( (__int64 **)v45 == v107 )
                    break;
                  a4 = *v107++;
                  if ( *((_WORD *)a4 + 18) == 163 )
                    goto LABEL_227;
                }
              }
LABEL_190:
              if ( v101 != 71 )
              {
                if ( (unsigned int)v101 - 34 > 5 )
                  goto LABEL_154;
LABEL_192:
                LOBYTE(v45) = *(_BYTE *)(v10 + 29);
LABEL_61:
                v46 = 0;
                v47 = v45 & 1;
                if ( !(_DWORD)v47 )
                  goto LABEL_154;
                goto LABEL_62;
              }
            }
            else if ( v44 != 71 )
            {
              goto LABEL_61;
            }
          }
          v96 = *(_QWORD *)(v10 + 48);
          if ( (*(_BYTE *)(v96 + 29) & 1) == 0 )
            goto LABEL_154;
          v97 = sub_B68690(v96, a2, v45, (__int64)a4, a5, a6);
          v47 = *v97;
          a4 = (__int64 *)(*v97 + 8LL * *((unsigned int *)v97 + 2));
          if ( *v97 >= (unsigned __int64)a4 )
          {
            if ( (__int64 *)v47 == a4 )
              goto LABEL_153;
            if ( *(_WORD *)(*a4 + 36) != 163 )
            {
              v108 = (__int64 **)(a4 + 1);
              while ( 1 )
              {
                a4 = (__int64 *)v108;
                if ( (__int64 **)v47 == v108 )
                  break;
                a4 = *v108++;
                if ( *((_WORD *)a4 + 18) == 163 )
                  goto LABEL_239;
              }
LABEL_181:
              if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 > 5 || (*(_BYTE *)(v10 + 29) & 1) == 0 )
                goto LABEL_154;
              v46 = 0;
LABEL_62:
              v48 = (__int64 **)sub_B68690(v10, a2, v47, (__int64)a4, a5, a6);
              v49 = *v48;
              v50 = (unsigned __int64)&(*v48)[*((unsigned int *)v48 + 2)];
              if ( (unsigned __int64)v49 < v50 )
              {
                a4 = v49;
                while ( *(_WORD *)(*a4 + 36) != 64 )
                {
                  if ( (__int64 *)v50 == ++a4 )
                    goto LABEL_66;
                }
                if ( (__int64 *)v50 == a4 )
                  goto LABEL_66;
LABEL_203:
                while ( 1 )
                {
                  v102 = (__int64 *)*v49;
                  if ( *(_WORD *)(*v49 + 36) == 64 )
                    break;
                  ++v49;
                }
                if ( (*((_BYTE *)v102 + 34) & 0xF0) == 0xF0 )
                  v103 = sub_F83A90(v102);
                else
                  v103 = *((_BYTE *)v102 + 34) >> 4;
                if ( v103 == 12
                  || (v104 = *v102) != 0
                  && (v105 = j__strlen("kernel"), a4 = *(__int64 **)(v104 + 16), v105 == *(_DWORD *)a4)
                  && (!v105 || !memcmp(a4 + 2, "kernel", v105)) )
                {
                  v25 = *(unsigned int **)(v43 + 16);
                  if ( (v8 & 7) == 1 )
                  {
                    if ( !v46 )
                    {
                      a4 = &qword_100 + 5;
                      *(_QWORD *)n = *v25;
                      v52 = "__clang_ocl_kern_imp_";
                      LOWORD(v169) = 261;
                      s2 = v25 + 4;
LABEL_69:
                      v162[0].m128i_i64[0] = (__int64)v52;
                      LOWORD(v163) = 259;
                      sub_A1D840((__m128i *)&ptr, v162, (const __m128i *)&s2, (__int64)a4, a5, a6);
                      sub_222F820(v160, &ptr);
                      sub_E58770((__int64)a1, (_BYTE *)v160[0], (size_t)v160[1]);
                      if ( v160[0] != &v161 )
                        operator delete(v160[0]);
                      return;
                    }
                  }
                  else if ( !v46 )
                  {
                    goto LABEL_27;
                  }
                }
                else
                {
                  v25 = *(unsigned int **)(v43 + 16);
                  if ( !v46 )
                    goto LABEL_27;
                }
LABEL_68:
                v51 = *v25;
                LOWORD(v169) = 261;
                s2 = v25 + 4;
                *(_QWORD *)n = v51;
                v52 = "__device_stub__";
                goto LABEL_69;
              }
              if ( v49 == (__int64 *)v50 )
                goto LABEL_66;
              a4 = *(__int64 **)v50;
              if ( *(_WORD *)(*(_QWORD *)v50 + 36LL) == 64 )
                goto LABEL_203;
              v106 = (__int64 **)(v50 + 8);
              while ( 1 )
              {
                a4 = (__int64 *)v106;
                if ( v49 == (__int64 *)v106 )
                  break;
                a4 = *v106++;
                if ( *((_WORD *)a4 + 18) == 64 )
                  goto LABEL_203;
              }
LABEL_66:
              if ( v46 )
              {
LABEL_67:
                v25 = *(unsigned int **)(v43 + 16);
                goto LABEL_68;
              }
LABEL_154:
              v25 = *(unsigned int **)(v43 + 16);
              goto LABEL_27;
            }
          }
          else
          {
            v98 = (__int64 *)*v97;
            while ( 1 )
            {
              v47 = *v98;
              if ( *(_WORD *)(*v98 + 36) == 163 )
                break;
              if ( a4 == ++v98 )
                goto LABEL_181;
            }
            if ( a4 == v98 )
            {
LABEL_153:
              if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 > 5 )
                goto LABEL_154;
              goto LABEL_192;
            }
          }
          goto LABEL_239;
        }
        v55 = *(_BYTE *)(v10 + 28) & 0x7F;
        if ( v55 == 24 )
        {
          v56 = *(_QWORD *)(v10 + 40);
          if ( (v56 & 7) != 0 || (v56 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          {
            v53 = sub_971800(a1[1], "?A0x");
            v37 = sub_9717A0(v53, *(const void **)(*a1 + 248LL), *(_QWORD *)(*a1 + 256LL));
            v38 = *(_BYTE **)(v37 + 32);
            if ( (unsigned __int64)v38 < *(_QWORD *)(v37 + 24) )
              goto LABEL_47;
            goto LABEL_73;
          }
          v57 = *(_QWORD *)(v10 + 120);
          if ( (v57 & 4) == 0 )
          {
            v58 = v57 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v58 )
            {
LABEL_125:
              v59 = *(_QWORD *)(v58 + 40);
              if ( (v59 & 7) == 0 )
              {
                sub_E58770(
                  (__int64)a1,
                  (_BYTE *)(*(_QWORD *)((v59 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 16LL),
                  **(unsigned int **)((v59 & 0xFFFFFFFFFFFFFFF8LL) + 16));
                return;
              }
              goto LABEL_286;
            }
          }
          goto LABEL_248;
        }
        if ( v55 != 46 )
        {
          v95 = v55;
          if ( (unsigned int)v55 - 40 > 6 )
          {
            if ( v55 == 31 )
            {
              *(_DWORD *)n = 2;
              si128 = _mm_load_si128((const __m128i *)&xmmword_2384EA0);
              s2 = &off_2BC1F40;
              *(_OWORD *)&n[8] = 0;
              p_ptr = &ptr;
              ptr = v175;
              v170 = 0;
              v171 = 1;
              v169 = 0;
              sub_2257B70(&s2, 0, 0, 0);
              (*(void (__fastcall **)(_QWORD, unsigned __int64, void **))(*(_QWORD *)*a1 + 136LL))(*a1, v10, &s2);
              sub_E58770((__int64)a1, ptr, si128.m128i_u64[0]);
              s2 = &unk_2C4C288;
              sub_2257A60(&s2);
              v74 = ptr;
              if ( ptr != v175 )
                goto LABEL_21;
              return;
            }
            if ( v55 == 30 )
            {
              sub_971800(a1[1], "?__N");
              ptr = *(void **)(v10 + 48);
              v109 = sub_6B4E70(&ptr);
              sub_E69770(a1, v109, v10 + 64, 0, 0);
              return;
            }
            v117 = *(_QWORD *)(v10 + 120);
            if ( (v117 & 4) == 0 )
            {
              v58 = v117 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v58 )
                goto LABEL_125;
            }
            if ( (unsigned int)(v95 - 59) <= 2 )
            {
              v118 = *(_QWORD *)(v10 + 128);
              if ( v118 )
              {
                if ( (*(_BYTE *)(v118 + 10) & 0x20) != 0 )
                {
                  v119 = j__strlen("<lambda_");
                  ptr = v175;
                  si128 = _mm_load_si128(xmmword_2384EE0);
                  sub_9FC110(&ptr, "<lambda_", &aLambda_0[v119]);
                  v123 = sub_B733B0(v10);
                  v124 = *(_DWORD *)(*(_QWORD *)(v10 + 128) + 108LL) >> 1;
                  if ( v123 && (*(_BYTE *)(v123 + 28) & 0x7F) == 0x2B )
                  {
                    v125 = *(_QWORD *)(v123 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (*(_QWORD *)(v123 + 16) & 4) != 0 )
                      v125 = *(_QWORD *)v125;
                    v126 = (*(_BYTE *)(v125 + 8) & 0x7Fu) - 34;
                    if ( (unsigned int)v126 <= 5 && v125 != 72 )
                    {
                      v127 = sub_B52330(v125 - 72, (__int64)"<lambda_", v126, v120);
                      v128 = (unsigned __int8)(*(_WORD *)(v123 + 98) >> 4);
                      if ( v128 == 255 )
                        v128 = sub_B50B40(v123);
                      sub_E55160((__int64 *)&s2, (unsigned int)(v127 - v128));
                      sub_9FC110(&ptr, s2, (_BYTE *)s2 + *(_QWORD *)n);
                      if ( s2 != &n[8] )
                        operator delete(s2);
                      v129 = j__strlen("_");
                      sub_9FC110(&ptr, "_", &aObjcMetaclass[v129 + 16]);
                    }
                  }
                  v130 = v124;
                  if ( !v124 )
                  {
                    v133 = *(_DWORD *)(*a1 + 184LL);
                    v134 = *a1 + 176LL;
                    v162[0].m128i_i64[0] = v10;
                    v162[0].m128i_i32[2] = v133;
                    sub_E5C140((__m128i *)&s2, v134, v162[0].m128i_i64, &v162[0].m128i_i32[2], v121, v122);
                    v130 = *((_DWORD *)s2 + 2);
                  }
                  sub_E55160((__int64 *)&s2, v130);
                  sub_9FC110(&ptr, s2, (_BYTE *)s2 + *(_QWORD *)n);
                  if ( s2 != &n[8] )
                    operator delete(s2);
                  v131 = j__strlen(">");
                  sub_9FC110(&ptr, ">", &asc_22F4A90[v131 + 2]);
                  sub_E58770((__int64)a1, ptr, si128.m128i_u64[0]);
                  if ( v123 )
                  {
                    if ( v124 )
                    {
                      v132 = *(_BYTE *)(v123 + 28) & 0x7F;
                      if ( ((unsigned int)v132 - 40 <= 6 || (unsigned int)v132 - 49 <= 2) && v132 != 43 )
                        sub_E5C460(a1, v123, 0, *(_QWORD *)((v123 & 0xFFFFFFFFFFFFFFF8LL) + 40));
                    }
                  }
LABEL_159:
                  v74 = ptr;
                  if ( ptr != v175 )
                    goto LABEL_21;
                  return;
                }
              }
            }
LABEL_248:
            ptr = v175;
            v110 = *a1;
            si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
            v111 = sub_A444B0(*(_QWORD *)(v110 + 8));
            if ( v111 || (v111 = sub_A44490(*(_QWORD *)(*a1 + 8LL))) != 0 )
            {
              v112 = j__strlen("<unnamed-type-");
              sub_9FC110(&ptr, "<unnamed-type-", &aUnnamedType_1[v112]);
              v113 = v111;
            }
            else
            {
              if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x3E
                || (sub_B5AB30(v10, v10, v135, v136, v137, v138), !sub_E56BF0(v10, v10, v141, v142, v143, v144)) )
              {
                v139 = j__strlen("<unnamed-type-$S");
                sub_9FC110(&ptr, "<unnamed-type-$S", &aUnnamedTypeS[v139]);
                v140 = sub_E1AEB0(*a1, v10, 0);
                sub_E55160((__int64 *)&s2, v140 + 1);
                sub_9FC110(&ptr, s2, (_BYTE *)s2 + *(_QWORD *)n);
                if ( s2 != &n[8] )
                  operator delete(s2);
                goto LABEL_251;
              }
              v145 = j__strlen("<unnamed-enum-");
              sub_9FC110(&ptr, "<unnamed-enum-", &aUnnamedEnum[v145]);
              v113 = sub_E56BF0(v10, (__int64)"<unnamed-enum-", v146, v147, v148, v149);
            }
            v114 = (char *)sub_971A10(v113);
            sub_9FC110(&ptr, v114, &v114[v115]);
LABEL_251:
            v116 = j__strlen(">");
            sub_9FC110(&ptr, ">", &asc_22F4A90[v116 + 2]);
LABEL_158:
            sub_E58770((__int64)a1, ptr, si128.m128i_u64[0]);
            goto LABEL_159;
          }
          v10 = sub_F3F530(*(_QWORD *)(*(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFFFF0LL));
        }
        v78 = j__strlen("$S");
        ptr = v175;
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
        sub_9FC110(&ptr, "$S", &aUnnamedTypeS[v78 + 14]);
        v79 = sub_E1AEB0(*a1, v10, 0);
        sub_E55160((__int64 *)&s2, v79 + 1);
        sub_9FC110(&ptr, s2, (_BYTE *)s2 + *(_QWORD *)n);
        if ( s2 != &n[8] )
          operator delete(s2);
        goto LABEL_158;
    }
  }
  v12 = sub_B53DB0(a2 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v12 )
  {
    v11 = *(_BYTE *)(v10 + 28) & 0x7F;
    goto LABEL_12;
  }
  v150 = sub_B53E10(a2 & 0xFFFFFFFFFFFFFFF8LL);
  v13 = a2 & 7 | v12;
LABEL_4:
  if ( (*(_BYTE *)((v13 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) != 0x47 )
  {
    v14 = *((unsigned int *)a1 + 102);
    v15 = a1[49];
    if ( (_DWORD)v14 )
    {
      v16 = (v14 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
      v17 = (__int64 *)(v15 + 16LL * v16);
      v18 = *v17;
      if ( v10 == *v17 )
      {
LABEL_7:
        sub_E09990((__m128 *)&ptr, v17, (__int64 *)(16 * v14 + v15), (__int64)(a1 + 49), 1);
        v19 = (unsigned int *)ptr;
        goto LABEL_8;
      }
      v39 = 1;
      if ( v18 != -4096 )
      {
        do
        {
          v40 = v39 + 1;
          v16 = (v14 - 1) & (v39 + v16);
          v17 = (__int64 *)(v15 + 16LL * v16);
          v41 = *v17;
          if ( v10 == *v17 )
            goto LABEL_7;
          v39 = v40;
        }
        while ( v41 != -4096 );
      }
    }
    sub_E09990(
      (__m128 *)&ptr,
      (__int64 *)(v15 + 16LL * (unsigned int)v14),
      (__int64 *)(v15 + 16LL * (unsigned int)v14),
      (__int64)(a1 + 49),
      1);
    v19 = (unsigned int *)ptr;
LABEL_8:
    v152 = v19;
    v20 = (__int64 *)(a1[49] + 16LL * *((unsigned int *)a1 + 102));
    sub_E09990((__m128 *)&ptr, v20, v20, (__int64)(a1 + 49), 1);
    if ( ptr != v152 )
    {
      sub_2257BD0(a1[1], v152[2]);
      return;
    }
    v30 = *((unsigned int *)a1 + 108);
    v31 = a1[52];
    v153 = a1 + 52;
    if ( (_DWORD)v30 )
    {
      v32 = (v30 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
      v33 = (__int64 *)(v31 + 24LL * v32);
      v34 = *v33;
      if ( v10 == *v33 )
      {
LABEL_44:
        sub_E58340((__m128 *)&ptr, v33, (__int64 *)(v31 + 24 * v30), (__int64)v153, 1);
        v35 = ptr;
        goto LABEL_45;
      }
      v75 = 1;
      if ( v34 != -4096 )
      {
        do
        {
          v76 = v75 + 1;
          v32 = (v30 - 1) & (v32 + v75);
          v33 = (__int64 *)(v31 + 24LL * v32);
          v77 = *v33;
          if ( v10 == *v33 )
            goto LABEL_44;
          v75 = v76;
        }
        while ( v77 != -4096 );
      }
    }
    sub_E58340((__m128 *)&ptr, (__int64 *)(v31 + 24 * v30), (__int64 *)(v31 + 24 * v30), (__int64)v153, 1);
    v35 = ptr;
LABEL_45:
    v154 = v35;
    v36 = (__int64 *)(a1[52] + 24LL * *((unsigned int *)a1 + 108));
    sub_E58340((__m128 *)&ptr, v36, v36, (__int64)v153, 1);
    if ( ptr != v154 )
    {
      v37 = sub_9717A0(a1[1], *((const void **)v154 + 1), *((_QWORD *)v154 + 2));
      v38 = *(_BYTE **)(v37 + 32);
      if ( *(_QWORD *)(v37 + 24) > (unsigned __int64)v38 )
      {
LABEL_47:
        *(_QWORD *)(v37 + 32) = v38 + 1;
        *v38 = 64;
        return;
      }
LABEL_73:
      sub_2257CD0(v37, 64);
      return;
    }
    s2 = &n[16];
    p_s2 = &s2;
    *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_2384D30);
    v162[0].m128i_i64[0] = (__int64)&off_2BC1F40;
    v162[1] = 0;
    v162[0].m128i_i32[2] = 2;
    v164 = 0;
    v165 = 1;
    v163 = 0;
    sub_2257B70(v162, 0, 0, 0);
    sub_E54900((__int64)&ptr, *a1, (__int64)v162);
    sub_E6B4B0(&ptr, v13, a3, v150);
    sub_E58770((__int64)a1, s2, *(size_t *)n);
    v63 = a1[4];
    v64 = 32LL * *((unsigned int *)a1 + 10);
    v157 = v63;
    v65 = v63 + v64;
    v66 = v64 >> 7;
    v156 = v65;
    if ( v66 )
    {
      v155 = v10;
      v67 = s2;
      v151 = v63 + (v66 << 7);
      v68 = *(_QWORD *)n;
      v69 = a1[4];
      v70 = s2;
      do
      {
        if ( v68 == *(_QWORD *)(v69 + 8) && (!v68 || !memcmp(*(const void **)v69, v70, v68)) )
        {
          v10 = v155;
          goto LABEL_143;
        }
        v62 = v69 + 32;
        if ( v68 == *(_QWORD *)(v69 + 40)
          && (!v68 || (v71 = memcmp(*(const void **)(v69 + 32), v70, v68), v62 = v69 + 32, !v71))
          || (v62 = v69 + 64, v68 == *(_QWORD *)(v69 + 72))
          && (!v68 || (v72 = memcmp(*(const void **)(v69 + 64), v70, v68), v62 = v69 + 64, !v72))
          || (v62 = v69 + 96, v68 == *(_QWORD *)(v69 + 104))
          && (!v68 || (v73 = memcmp(*(const void **)(v69 + 96), v70, v68), v62 = v69 + 96, !v73)) )
        {
          v10 = v155;
          v69 = v62;
          goto LABEL_143;
        }
        v69 += 128;
      }
      while ( v151 != v69 );
      v10 = v155;
    }
    else
    {
      v69 = a1[4];
    }
    v80 = (v156 - v69) >> 5;
    if ( v80 != 2 )
    {
      if ( v80 != 3 )
      {
        if ( v80 != 1 )
          goto LABEL_166;
LABEL_165:
        if ( !sub_E548C0((__int64)&s2, v69) )
          goto LABEL_166;
        goto LABEL_143;
      }
      if ( sub_E548C0((__int64)&s2, v69) )
      {
LABEL_143:
        if ( v156 != v69 )
        {
          v160[0] = (void *)v10;
          *(_DWORD *)sub_E5BB70((__int64)(a1 + 49), (__int64 *)v160, v60, (__int64)v67, v61, v62) = (v69 - v157) >> 5;
          goto LABEL_145;
        }
LABEL_166:
        v81 = sub_2221540(a1 + 67, s2, *(_QWORD *)n);
        v158 = v10;
        v83 = v82;
        v84 = v81;
        v85 = (unsigned __int8)sub_E576E0(v153, (__int64 *)&v158, &v159) == 0;
        v87 = v159;
        if ( !v85 )
        {
LABEL_172:
          v94 = v87 + 1;
          *v94 = v84;
          v94[1] = v83;
LABEL_145:
          sub_E56DF0((__int64)&ptr);
          v162[0].m128i_i64[0] = (__int64)&unk_2C4C288;
          sub_2257A60(v162);
          v74 = s2;
          if ( s2 == &n[16] )
            return;
LABEL_21:
          free(v74);
          return;
        }
        v88 = *((_DWORD *)a1 + 106);
        v160[0] = v159;
        v89 = (unsigned int)(v88 + 1);
        v90 = *((unsigned int *)a1 + 108);
        v91 = (unsigned int)(4 * v89);
        v92 = 2 * v90;
        if ( (unsigned int)v91 < 3 * (int)v90 )
        {
          if ( (int)v90 - *((_DWORD *)a1 + 107) - (int)v89 > (unsigned int)v90 >> 3 )
          {
LABEL_169:
            v85 = *v87 == -4096;
            *((_DWORD *)a1 + 106) = v89;
            if ( !v85 )
              --*((_DWORD *)a1 + 107);
            v93 = v158;
            v87[1] = 0;
            v87[2] = 0;
            *v87 = v93;
            goto LABEL_172;
          }
          v92 = *((_DWORD *)a1 + 108);
        }
        sub_E5BCC0((__int64 **)v153, v92, v89, v90, v91, v86);
        sub_E576E0(v153, (__int64 *)&v158, v160);
        LODWORD(v89) = *((_DWORD *)a1 + 106) + 1;
        v87 = (__int64 *)v160[0];
        goto LABEL_169;
      }
      v69 += 32;
    }
    if ( !sub_E548C0((__int64)&s2, v69) )
    {
      v69 += 32;
      goto LABEL_165;
    }
    goto LABEL_143;
  }
  sub_E6B4B0(a1, v13, a3, v150);
  v28 = a1[1];
  v29 = *(_BYTE **)(v28 + 32);
  if ( *(_QWORD *)(v28 + 24) <= (unsigned __int64)v29 )
  {
    sub_2257CD0(v28, 64);
  }
  else
  {
    *(_QWORD *)(v28 + 32) = v29 + 1;
    *v29 = 64;
  }
}

