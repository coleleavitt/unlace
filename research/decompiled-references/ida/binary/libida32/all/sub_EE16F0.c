void __fastcall sub_EE16F0(_QWORD *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  char *v7; // r13
  __int64 v9; // rdi
  unsigned __int16 v10; // ax
  __int64 v11; // rbx
  __int64 v12; // rbp
  size_t v13; // r14
  _QWORD *v14; // r15
  __int64 v15; // r13
  size_t v16; // rax
  void *v17; // rdi
  __int64 *v18; // rdi
  __int64 v19; // rbx
  char *v20; // rax
  size_t v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  char *v24; // rax
  size_t v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  __int64 v28; // rdi
  const char *v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  unsigned __int64 v35; // rsi
  __int64 *v36; // rbx
  const char *v37; // rbp
  __int64 v38; // r13
  __int64 v39; // r14
  __int64 v40; // r15
  size_t v41; // rax
  __int64 v42; // rbx
  const char *v43; // rax
  size_t v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdi
  __int16 v53; // si
  __int64 v54; // rdx
  unsigned __int16 *v55; // r8
  unsigned __int16 *v56; // rsi
  unsigned int v57; // eax
  __int64 v58; // rsi
  __int64 v59; // rdi
  _BYTE *v60; // rax
  __int64 v61; // rbx
  _BYTE *v62; // rax
  __int64 v63; // rdi
  _BYTE *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // r13
  size_t v69; // rax
  __int64 v70; // rsi
  void *v71; // rax
  __int64 v72; // rdi
  _BYTE *v73; // rax
  char *v74; // r15
  __int64 v75; // r14
  size_t v76; // rax
  size_t v77; // rax
  char v78; // al
  __int64 v79; // rdi
  _BYTE *v80; // rax
  int v81; // r15d
  __int64 v82; // rbp
  __int64 v83; // rdi
  _BYTE *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  _BYTE *v87; // rdx
  const char *v88; // rax
  __int64 v89; // rax
  int v90; // eax
  __int64 v91; // rdi
  __int64 v92; // r14
  __int64 i; // r15
  __int64 v94; // rbx
  __int64 v95; // rax
  __int64 v96; // rbx
  const void *v97; // rax
  size_t v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rbx
  char *v101; // rbx
  char *v102; // rbp
  __int64 v103; // rsi
  void *v104; // rax
  __int64 v105; // rdi
  int *v106; // r13
  int v107; // eax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rbx
  _BYTE *v111; // rax
  const char *v112; // rax
  size_t v113; // rdx
  __int64 v114; // rsi
  __int64 v115; // rdi
  _BYTE *v116; // rax
  const char *v117; // rax
  __int64 v118; // rax
  _BYTE *v119; // rdx
  __int64 v120; // rdi
  _BYTE *v121; // rax
  __int64 v122; // rax
  __int64 v123; // rbp
  const char *v124; // rax
  size_t v125; // rdx
  _BYTE *v126; // rax
  __int64 v127; // rbx
  const void *v128; // rax
  size_t v129; // rdx
  size_t v130; // rax
  __int64 v131; // rdi
  _BYTE *v132; // rax
  __int64 v133; // r15
  __int64 v134; // r13
  __int64 v135; // rsi
  __int64 v136; // rax
  __int64 v137; // rdi
  _BYTE *v138; // rax
  __int64 v139; // rbx
  __int64 *v140; // r14
  __int64 v141; // r15
  void **v142; // rax
  void *v143; // rax
  __int64 v144; // rsi
  __int64 v145; // [rsp+0h] [rbp-B8h]
  __int64 v146; // [rsp+0h] [rbp-B8h]
  __int64 v147; // [rsp+0h] [rbp-B8h]
  __int64 v148; // [rsp+8h] [rbp-B0h]
  __int64 v149; // [rsp+8h] [rbp-B0h]
  int v150; // [rsp+10h] [rbp-A8h]
  __int64 v151; // [rsp+18h] [rbp-A0h]
  __int64 v152; // [rsp+28h] [rbp-90h] BYREF
  void *v153[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v154; // [rsp+40h] [rbp-78h] BYREF
  __int64 v155; // [rsp+50h] [rbp-68h] BYREF
  __int64 v156; // [rsp+58h] [rbp-60h]
  __int16 v157; // [rsp+70h] [rbp-48h]

  v7 = a2;
  v9 = a1[2];
  if ( v9 && (*(unsigned __int8 (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v9 + 16LL))(v9, a2, *a1) )
    return;
  v10 = *(_WORD *)a2 & 0x1FF;
  if ( v10 > 0x75u )
  {
    if ( v10 <= 0x77u )
    {
      switch ( (*((_WORD *)a2 + 1) >> 3) & 0x3F )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x20:
LABEL_10:
          sub_EE7890(a1, a2);
          return;
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
LABEL_11:
          sub_EE7920(a1, a2);
          return;
        default:
          a3 = (*((_WORD *)a2 + 1) >> 3) & 0x3F;
          break;
      }
    }
  }
  else if ( v10 == 4 )
  {
LABEL_5:
    sub_EE4890(a1, a2);
    return;
  }
  while ( 2 )
  {
    switch ( v10 )
    {
      case 0u:
        sub_EEDFA0(a1, a2);
        return;
      case 1u:
        sub_EEC980(a1, a2);
        return;
      case 2u:
        sub_EE9CF0(a1, a2);
        return;
      case 3u:
        sub_EE4800(a1, a2);
        return;
      case 4u:
        goto LABEL_5;
      case 5u:
        sub_EE49A0(a1, a2);
        return;
      case 6u:
        v88 = (const char *)sub_10A90D0((unsigned __int8)(*((_WORD *)a2 + 1) >> 3));
        v89 = sub_971800(*a1, v88);
        sub_971800(v89, "(");
        v90 = *((_DWORD *)a2 + 1);
        if ( v90 )
        {
          v91 = *a1;
          v92 = (unsigned int)(v90 - 1);
          for ( i = 0; ; ++i )
          {
            v153[0] = **(void ***)&a2[56 * ((((unsigned __int8)BYTE3(*(_QWORD *)a2) >> 3) ^ 1) & 1) + 24 + 8 * i];
            v157 = 257;
            sub_F50AF0(v153, v91, a1 + 3, &v155, 0);
            if ( i == v92 )
              break;
            v91 = *a1;
            if ( (_DWORD)i != -1 )
            {
              sub_971800(v91, ", ");
              v91 = *a1;
            }
          }
        }
        sub_971800(*a1, ")");
        return;
      case 7u:
        v94 = *a1;
        v95 = sub_C71DD0((__int64)a2);
        sub_B4EFB0(v95, v94);
        return;
      case 8u:
        goto LABEL_268;
      case 9u:
        sub_BD4D30((__int64)a2, *a1);
        return;
      case 0xAu:
        sub_EE8B80(a1, a2);
        return;
      case 0xBu:
        v96 = *a1;
        sub_BD7120((__int64)a2);
        v99 = sub_9717A0(v96, v97, v98);
        sub_971800(v99, "()");
        return;
      case 0xCu:
        v100 = sub_971800(*a1, "sizeof...(");
        sub_B4EFB0(*((_QWORD *)a2 + 4), v100);
        sub_971800(v100, ")");
        return;
      case 0xDu:
        sub_EE4AF0(a1, a2);
        return;
      case 0xEu:
        sub_EE0160(a1, (__int64)a2);
        return;
      case 0xFu:
        sub_971800(*a1, "requires ");
        if ( *((_DWORD *)a2 + 4) )
        {
          v139 = 8LL * *((unsigned int *)a2 + 4);
          v140 = (__int64 *)(a2 + 48);
          sub_971800(*a1, "(");
          do
          {
            v141 = *v140;
            sub_B93BC0(*v140, *a1, (const __m128i *)(a1 + 3), *((_DWORD *)a1 + 2), 0);
            if ( v141 != *(_QWORD *)&a2[v139 + 40] )
              sub_971800(*a1, ", ");
            ++v140;
          }
          while ( &a2[v139 + 48] != (char *)v140 );
          sub_971800(*a1, ") ");
        }
        sub_971800(*a1, "{ ");
        v101 = &a2[8 * *((unsigned int *)a2 + 4) + 48];
        v102 = &v101[8 * *((unsigned int *)a2 + 5)];
        if ( v101 == v102 )
          goto LABEL_305;
        while ( 1 )
        {
          v106 = *(int **)v101;
          v107 = **(_DWORD **)v101;
          if ( !v107 )
          {
            if ( v106[4] == 1 )
            {
              sub_971800(*a1, "<<error-type>>");
            }
            else
            {
              v103 = *a1;
              v104 = *(void **)(*((_QWORD *)v106 + 1) & 0xFFFFFFFFFFFFFFF8LL);
              v157 = 257;
              v153[0] = v104;
              sub_F50AF0(v153, v103, a1 + 3, &v155, 0);
            }
            v105 = *a1;
            goto LABEL_212;
          }
          if ( (unsigned int)(v107 - 1) <= 1 )
            break;
          sub_971800(*a1, "requires ");
          if ( *((_BYTE *)v106 + 24) )
          {
            sub_971800(*a1, "<<error-expression>>");
            v105 = *a1;
          }
          else
          {
            if ( !*((_QWORD *)v106 + 1) )
            {
              sub_EE0C80(a1);
LABEL_342:
              v105 = *a1;
              goto LABEL_212;
            }
            sub_EE16F0(a1);
            v105 = *a1;
          }
LABEL_212:
          v101 += 8;
          sub_971800(v105, "; ");
          if ( v102 == v101 )
          {
LABEL_305:
            sub_971800(*a1, "}");
            return;
          }
        }
        if ( v107 == 2 )
          sub_971800(*a1, "{ ");
        if ( v106[10] == 1 )
        {
          sub_971800(*a1, "<<error-expression>>");
        }
        else if ( (*((_QWORD *)v106 + 1) & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          sub_EE16F0(a1);
        }
        else
        {
          sub_EE0C80(a1);
        }
        v105 = *a1;
        if ( *v106 != 2 )
          goto LABEL_212;
        sub_971800(v105, " }");
        if ( v106[4] )
          sub_971800(*a1, " noexcept");
        v105 = *a1;
        if ( (*((_QWORD *)v106 + 3) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_212;
        sub_971800(v105, " -> ");
        v108 = *((_QWORD *)v106 + 3);
        if ( (v108 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          if ( (v108 & 4) != 0 )
          {
            sub_971800(*a1, "<<error-type>>");
          }
          else
          {
            v109 = sub_BEB460((_QWORD *)v106 + 3);
            sub_A31650(*(__int64 **)(v109 + 8), *a1, a1 + 3);
          }
          v105 = *a1;
          goto LABEL_212;
        }
        goto LABEL_342;
      case 0x10u:
        v36 = (__int64 *)(a2 + 32);
        v37 = &byte_22CD811;
        sub_971800(*a1, "<recovery-expr>(");
        v38 = (__int64)&a2[8 * *((unsigned int *)a2 + 6) + 32];
        if ( a2 + 32 != (char *)v38 )
        {
          do
          {
            v39 = *a1;
            v40 = *v36;
            v41 = j__strlen(v37);
            sub_9717A0(v39, v37, v41);
            if ( v40 )
              sub_EE16F0(a1);
            else
              sub_971800(*a1, "<null expr>");
            ++v36;
            v37 = ", ";
          }
          while ( (__int64 *)v38 != v36 );
        }
        v120 = *a1;
        v126 = *(_BYTE **)(*a1 + 32LL);
        if ( (unsigned __int64)v126 >= *(_QWORD *)(*a1 + 24LL) )
          goto LABEL_340;
        *(_QWORD *)(v120 + 32) = v126 + 1;
        *v126 = 41;
        return;
      case 0x11u:
        if ( *((_QWORD *)a2 + 2) )
          goto LABEL_268;
        goto LABEL_292;
      case 0x12u:
        v42 = *a1;
        v43 = sub_BD4480(((unsigned __int8)a2[2] >> 3) & 0xF);
        sub_9717A0(v42, v43, v44);
        return;
      case 0x13u:
        sub_EE4B90(a1, a2);
        return;
      case 0x14u:
        sub_EE4C50(a1, a2);
        return;
      case 0x15u:
        if ( *((_QWORD *)a2 + 3) )
          sub_EE16F0(a1);
        else
          sub_EE0C80(a1);
        sub_971800(*a1, "...[");
        if ( *((_QWORD *)a2 + 4) )
          sub_EE16F0(a1);
        else
          sub_EE0C80(a1);
        sub_971800(*a1, "]");
        return;
      case 0x16u:
        if ( *((_QWORD *)a2 + 3) )
          sub_EE16F0(a1);
        else
          sub_EE0C80(a1);
        sub_971800(*a1, "...");
        return;
      case 0x17u:
        if ( !(unsigned __int8)sub_C71B10((__int64)a2) )
        {
          if ( *((_QWORD *)a2 + 7) )
            sub_EE16F0(a1);
          else
            sub_EE0C80(a1);
          a2 = (char *)"->";
          if ( (*(_DWORD *)v7 & 0x100000) == 0 )
            a2 = ".";
          sub_971800(*a1, a2);
        }
        v49 = *((_QWORD *)v7 + 5);
        if ( v49 )
        {
          a2 = (char *)*a1;
          sub_E6C510(v49, *a1, (const __m128i *)(a1 + 3), 0, 1);
        }
        if ( (*(_QWORD *)v7 & 0x80000LL) != 0 )
        {
          v45 = *(unsigned __int16 *)v7;
          LOWORD(v45) = v45 & 0x1FF;
          v50 = 8LL * *((unsigned int *)v7 + 1);
          v51 = (__int64)((_WORD)v45 == 24 ? &v7[v50 + 64] : &v7[v50 + 80]);
          if ( *(_DWORD *)(v51 + 8) )
          {
            a2 = "template ";
            sub_971800(*a1, "template ");
          }
        }
        sub_B62D60(*a1, (__int64)a2, v45, v46, v47, v48, *((_QWORD *)v7 + 2));
        v52 = *(_QWORD *)v7;
        if ( (*(_QWORD *)v7 & 0x80000) == 0 )
          return;
        v53 = *(_WORD *)v7 & 0x1FF;
        v54 = 8LL * *((unsigned int *)v7 + 1);
        v55 = (unsigned __int16 *)(v53 == 24 ? &v7[v54 + 64] : &v7[v54 + 80]);
        if ( !*(_DWORD *)v55 )
          return;
        if ( (v52 & 0x80000) == 0 )
          goto LABEL_120;
        if ( v53 != 24 )
        {
          if ( *(_DWORD *)&v7[v54 + 80] )
          {
            v56 = (unsigned __int16 *)&v7[16 * ((v52 & 0x80000) != 0) + 80 + v54];
            goto LABEL_121;
          }
LABEL_120:
          v56 = nullptr;
          goto LABEL_121;
        }
        if ( !*(_DWORD *)&v7[v54 + 64] )
          goto LABEL_120;
        v56 = (unsigned __int16 *)&v7[16 * ((v52 & 0x80000) != 0) + 64 + v54];
LABEL_121:
        v57 = 0;
        if ( (v52 & 0x80000) != 0 )
          v57 = *((_DWORD *)v55 + 3);
        sub_F55640(*a1, v56, v57, a1 + 3, 0);
        return;
      case 0x18u:
        sub_EE0770(a1, a2, a3, a4, a5, a6);
        return;
      case 0x19u:
        v63 = *a1;
        v64 = *(_BYTE **)(*a1 + 32LL);
        if ( (unsigned __int64)v64 >= *(_QWORD *)(*a1 + 24LL) )
        {
          sub_2257CD0(v63, 42);
        }
        else
        {
          *(_QWORD *)(v63 + 32) = v64 + 1;
          *v64 = 42;
        }
        return;
      case 0x1Au:
      case 0x24u:
      case 0x3Cu:
      case 0x3Du:
      case 0x4Fu:
      case 0x63u:
        sub_EE47E0(a1, *((_QWORD *)a2 + 2));
        return;
      case 0x1Bu:
        sub_EE4CA0(a1, a2);
        return;
      case 0x1Cu:
        sub_EE4E20(a1, a2);
        return;
      case 0x1Du:
        sub_971800(*a1, "@");
        sub_BD4D30(*((_QWORD *)a2 + 2), *a1);
        return;
      case 0x1Eu:
        sub_971800(*a1, "@selector(");
        v58 = *a1;
        v155 = *((_QWORD *)v7 + 2);
        sub_FBB170(&v155, v58);
        v59 = *a1;
        v60 = *(_BYTE **)(*a1 + 32LL);
        if ( (unsigned __int64)v60 >= *(_QWORD *)(*a1 + 24LL) )
        {
          sub_2257CD0(v59, 41);
        }
        else
        {
          *(_QWORD *)(v59 + 32) = v60 + 1;
          *v60 = 41;
        }
        return;
      case 0x1Fu:
        v61 = sub_971800(*a1, "@protocol(");
        sub_B4EFB0(*((_QWORD *)a2 + 2), v61);
        v62 = *(_BYTE **)(v61 + 32);
        if ( (unsigned __int64)v62 >= *(_QWORD *)(v61 + 24) )
        {
          sub_2257CD0(v61, 41);
        }
        else
        {
          *(_QWORD *)(v61 + 32) = v62 + 1;
          *v62 = 41;
        }
        return;
      case 0x20u:
        sub_EE4E90(a1, a2);
        return;
      case 0x21u:
        sub_971800(*a1, "[");
        v78 = a2[26];
        if ( v78 == 1 )
        {
          if ( *((_QWORD *)a2 + 5) )
            sub_EE16F0(a1);
          else
            sub_EE0C80(a1);
        }
        else if ( v78 )
        {
          if ( (unsigned __int8)v78 <= 3u )
            sub_971800(*a1, "Super");
        }
        else
        {
          v142 = *((void ***)a2 + 5);
          if ( v142 )
            v143 = *v142;
          else
            v143 = nullptr;
          v144 = *a1;
          v153[0] = v143;
          v157 = 257;
          sub_F50AF0(v153, v144, a1 + 3, &v155, 0);
        }
        v79 = *a1;
        v80 = *(_BYTE **)(*a1 + 32LL);
        if ( (unsigned __int64)v80 >= *(_QWORD *)(*a1 + 24LL) )
        {
          sub_2257CD0(v79, 32);
        }
        else
        {
          *(_QWORD *)(v79 + 32) = v80 + 1;
          *v80 = 32;
        }
        v155 = sub_C76ED0((__int64)v7);
        if ( (v155 & 3) == 1 )
        {
          v127 = *a1;
          v128 = (const void *)sub_FBAC60(&v155, 0);
          sub_9717A0(v127, v128, v129);
        }
        else
        {
          v81 = *((unsigned __int16 *)v7 + 12);
          if ( *((_WORD *)v7 + 12) )
          {
            v82 = 0;
            do
            {
              if ( (unsigned int)sub_FBABF0(&v155) > (unsigned int)v82 )
              {
                if ( (_DWORD)v82 )
                {
                  v83 = *a1;
                  v84 = *(_BYTE **)(*a1 + 32LL);
                  if ( (unsigned __int64)v84 >= *(_QWORD *)(*a1 + 24LL) )
                  {
                    sub_2257CD0(v83, 32);
                  }
                  else
                  {
                    *(_QWORD *)(v83 + 32) = v84 + 1;
                    *v84 = 32;
                  }
                }
                if ( sub_FBAC20(&v155, (unsigned int)v82) )
                {
                  v146 = *a1;
                  v85 = sub_FBAC20(&v155, (unsigned int)v82);
                  v86 = sub_9717A0(v146, (const void *)(*(_QWORD *)(v85 + 16) + 16LL), **(unsigned int **)(v85 + 16));
                  v87 = *(_BYTE **)(v86 + 32);
                  if ( (unsigned __int64)v87 >= *(_QWORD *)(v86 + 24) )
                  {
                    sub_2257CD0(v86, 58);
                  }
                  else
                  {
                    *(_QWORD *)(v86 + 32) = v87 + 1;
                    *v87 = 58;
                  }
                }
                else
                {
                  sub_971800(*a1, ":");
                }
              }
              else
              {
                sub_971800(*a1, ", ");
              }
              if ( *(_QWORD *)&v7[8 * v82 + 48] )
                sub_EE16F0(a1);
              else
                sub_EE0C80(a1);
              ++v82;
            }
            while ( v81 != (_DWORD)v82 );
          }
        }
        sub_971800(*a1, "]");
        return;
      case 0x22u:
        sub_EE4FE0(a1, a2);
        return;
      case 0x23u:
        sub_EE5110(a1, a2);
        return;
      case 0x25u:
        sub_971800(*a1, "@encode(");
        v70 = *a1;
        v71 = **((void ***)v7 + 2);
        v157 = 257;
        v153[0] = v71;
        sub_F50AF0(v153, v70, a1 + 3, &v155, 0);
        v72 = *a1;
        v73 = *(_BYTE **)(*a1 + 32LL);
        if ( (unsigned __int64)v73 >= *(_QWORD *)(*a1 + 24LL) )
        {
          sub_2257CD0(v72, 41);
        }
        else
        {
          *(_QWORD *)(v72 + 32) = v73 + 1;
          *v73 = 41;
        }
        return;
      case 0x26u:
        sub_971800(*a1, "@{ ");
        if ( (*((_DWORD *)a2 + 4) & 0x7FFFFFFF) != 0 )
        {
          v74 = a2 + 40;
          v75 = 0;
          v145 = (*((_DWORD *)a2 + 4) & 0x7FFFFFFFu) - 1;
          while ( 1 )
          {
            if ( a2[19] >= 0 )
            {
              sub_EE16F0(a1);
              v148 = *a1;
              v76 = j__strlen(" : ");
              sub_9717A0(v148, " : ", v76);
              sub_EE16F0(a1);
            }
            else
            {
              v150 = *(_DWORD *)&a2[16 * (*((_DWORD *)a2 + 4) & 0x7FFFFFFF) + 40 + 8 * v75];
              sub_EE16F0(a1);
              v149 = *a1;
              v77 = j__strlen(" : ");
              sub_9717A0(v149, " : ", v77);
              sub_EE16F0(a1);
              if ( v150 )
                sub_971800(*a1, "...");
            }
            if ( v145 == v75 )
              break;
            if ( (_DWORD)v75 != -1 )
              sub_971800(*a1, ", ");
            ++v75;
            v74 += 16;
          }
        }
        sub_971800(*a1, " }");
        return;
      case 0x27u:
        sub_971800(*a1, "@");
        sub_EE16F0(a1);
        return;
      case 0x28u:
        v29 = "__objc_yes";
        v30 = *a1;
        if ( !v7[16] )
          v29 = "__objc_no";
        goto LABEL_71;
      case 0x29u:
        sub_971800(*a1, "@available(...)");
        return;
      case 0x2Au:
        sub_971800(*a1, "@[ ");
        v65 = *((unsigned int *)a2 + 4);
        v155 = (__int64)(a2 + 40);
        v156 = 0;
        v66 = (__int64)&a2[8 * v65 + 40];
        v67 = (__int64)(a2 + 40);
LABEL_140:
        if ( v66 != v67 )
          goto LABEL_141;
LABEL_146:
        if ( v156 )
        {
          while ( 1 )
          {
            v68 = *a1;
            v69 = j__strlen(", ");
            sub_9717A0(v68, ", ", v69);
            if ( (v156 & 3) != 0 )
              sub_ECEDF0((__int64)&v155);
            do
            {
              sub_EE16F0(a1);
              if ( (v156 & 3) != 0 )
              {
                if ( (v156 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                  sub_ECEC20((__int64)&v155);
                else
                  sub_ECEA10((unsigned __int64 *)&v155, 1);
                v67 = v155;
                goto LABEL_140;
              }
              v67 = v155 + 8;
              v155 = v67;
              if ( v66 == v67 )
                goto LABEL_146;
LABEL_141:
              ;
            }
            while ( a2 + 40 == (char *)v67 && !v156 );
          }
        }
        sub_971800(*a1, " ]");
        return;
      case 0x2Bu:
        sub_EE5160(a1, a2);
        return;
      case 0x2Cu:
        sub_EE5350(a1, a2);
        return;
      case 0x2Du:
        sub_971800(*a1, "/*no init*/");
        return;
      case 0x2Eu:
        sub_EE5460(a1, a2);
        return;
      case 0x2Fu:
        sub_EE5720(a1, a2);
        return;
      case 0x30u:
        v34 = *((_QWORD *)a2 + 2);
        if ( (v34 & 4) != 0 )
          v35 = *(_QWORD *)((v34 & 0xFFFFFFFFFFFFFFF8LL) + 40);
        else
          v35 = v34 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v35 )
          goto LABEL_268;
        goto LABEL_292;
      case 0x31u:
        sub_EE57D0(a1, a2);
        return;
      case 0x32u:
        sub_EE5840(a1, a2);
        return;
      case 0x33u:
        sub_EECA80(a1, a2);
        return;
      case 0x34u:
        sub_EE08C0((__int64)a1, (unsigned __int64)a2, a7);
        return;
      case 0x35u:
        sub_EEDEE0(a1, a2);
        return;
      case 0x36u:
        sub_EE0640(a1, (__int64)a2);
        return;
      case 0x37u:
        sub_EE58D0(a1, a2);
        return;
      case 0x38u:
        if ( *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) )
          goto LABEL_268;
        goto LABEL_292;
      case 0x39u:
        sub_EE5910(a1, a2);
        return;
      case 0x3Au:
        sub_971800(*a1, "__null");
        return;
      case 0x3Bu:
        sub_B4EFB0(*((_QWORD *)a2 + 2), *a1);
        return;
      case 0x3Eu:
        sub_EE1010((__int64)a1, (unsigned __int64)a2, a7);
        return;
      case 0x3Fu:
        sub_EE0470((__int64)a1, (unsigned __int64)a2, a7);
        return;
      case 0x40u:
        sub_EE5B00(a1, a2);
        return;
      case 0x41u:
        v117 = (const char *)sub_FB2650(*((_DWORD *)a2 + 1) & 0x7FFFFFFF);
        v118 = sub_971800(*a1, v117);
        v119 = *(_BYTE **)(v118 + 32);
        if ( (unsigned __int64)v119 >= *(_QWORD *)(v118 + 24) )
        {
          sub_2257CD0(v118, 40);
        }
        else
        {
          *(_QWORD *)(v118 + 32) = v119 + 1;
          *v119 = 40;
        }
        if ( *((_QWORD *)a2 + 3) )
          sub_EE16F0(a1);
        else
          sub_EE0C80(a1);
        v120 = *a1;
        v121 = *(_BYTE **)(*a1 + 32LL);
        if ( (unsigned __int64)v121 >= *(_QWORD *)(*a1 + 24LL) )
        {
LABEL_340:
          sub_2257CD0(v120, 41);
        }
        else
        {
          *(_QWORD *)(v120 + 32) = v121 + 1;
          *v121 = 41;
        }
        return;
      case 0x42u:
        sub_EE0220(a1, (__int64)a2);
        return;
      case 0x43u:
        sub_EE5B50(a1, a2);
        return;
      case 0x44u:
        sub_EE5BF0(a1, a2);
        return;
      case 0x45u:
        sub_EE03B0(a1, a2, a3, a4, a5, a6);
        return;
      case 0x46u:
        sub_971800(*a1, "co_await ");
        if ( *((_QWORD *)a2 + 3) )
          goto LABEL_268;
        goto LABEL_292;
      case 0x47u:
        sub_EE3F90(a1, a2);
        return;
      case 0x48u:
        sub_971800(*a1, "co_yield ");
        if ( *((_QWORD *)a2 + 3) )
          goto LABEL_268;
        goto LABEL_292;
      case 0x49u:
        sub_971800(*a1, "co_await ");
        if ( *((_QWORD *)a2 + 3) )
          goto LABEL_268;
        goto LABEL_292;
      case 0x4Au:
        sub_EE5E00(a1, a2);
        return;
      case 0x4Bu:
        v122 = *((_QWORD *)a2 + 2);
        if ( *(_QWORD *)v122 )
        {
          sub_E6C510(*(_QWORD *)v122, *a1, (const __m128i *)(a1 + 3), 0, 1);
          v122 = *((_QWORD *)a2 + 2);
        }
        if ( *(_DWORD *)(v122 + 16) )
        {
          sub_971800(*a1, "template ");
          v122 = *((_QWORD *)a2 + 2);
        }
        v123 = *a1;
        v124 = sub_971A10(*(_QWORD *)(v122 + 48));
        sub_9717A0(v123, v124, v125);
        sub_F55640(
          *a1,
          *(_QWORD *)(*((_QWORD *)a2 + 2) + 64LL) + 16LL,
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 64LL) + 8LL),
          a1 + 3,
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 56LL) + 56LL));
        return;
      case 0x4Cu:
        sub_EE5E90(a1, a2);
        return;
      case 0x4Du:
        sub_EE5F50(a1, a2);
        return;
      case 0x4Eu:
        sub_BD4780(*((_DWORD *)a2 + 4), ((unsigned __int8)a2[2] >> 3) & 7, *a1);
        return;
      case 0x50u:
        v110 = *a1;
        v111 = *(_BYTE **)(*a1 + 32LL);
        if ( (unsigned __int64)v111 >= *(_QWORD *)(*a1 + 24LL) )
        {
          v110 = sub_2257CD0(*a1, 40);
        }
        else
        {
          *(_QWORD *)(v110 + 32) = v111 + 1;
          *v111 = 40;
        }
        v112 = sub_C770E0((__int64)a2);
        sub_9717A0(v110, v112, v113);
        v114 = *a1;
        v153[0] = *((void **)v7 + 1);
        v157 = 257;
        sub_F50AF0(v153, v114, a1 + 3, &v155, 0);
        v115 = *a1;
        v116 = *(_BYTE **)(*a1 + 32LL);
        if ( (unsigned __int64)v116 >= *(_QWORD *)(*a1 + 24LL) )
        {
          sub_2257CD0(v115, 41);
        }
        else
        {
          *(_QWORD *)(v115 + 32) = v116 + 1;
          *v116 = 41;
        }
        if ( !*((_QWORD *)v7 + 2) )
          goto LABEL_292;
        sub_EE16F0(a1);
        return;
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
        sub_EE6000(a1, a2);
        return;
      case 0x56u:
        sub_EE60C0(a1, a2);
        return;
      case 0x57u:
        sub_EE6240(a1, a2);
        return;
      case 0x58u:
        sub_EE6300(a1, a2);
        return;
      case 0x59u:
        sub_EE6470(a1, a2);
        return;
      case 0x5Au:
        sub_EE64D0(a1, a2);
        return;
      case 0x5Bu:
        sub_EE6870(a1, a2);
        return;
      case 0x5Cu:
        sub_EEE3E0(a1, a2);
        return;
      case 0x5Du:
        sub_EE6BE0(a1, a2);
        return;
      case 0x5Eu:
        sub_EE6C50(a1, a2);
        return;
      case 0x5Fu:
        sub_EE6CF0(a1, a2);
        return;
      case 0x60u:
        sub_EE6E40(a1, a2);
        return;
      case 0x61u:
        sub_EE6EE0(a1, a2);
        return;
      case 0x62u:
        sub_971800(*a1, "this");
        return;
      case 0x64u:
        sub_EE01C0(a1, (__int64)a2);
        return;
      case 0x65u:
        sub_EE6F50(a1, a2);
        return;
      case 0x66u:
        sub_EE7020(a1, a2);
        return;
      case 0x67u:
        v11 = (__int64)&a2[8 * *((unsigned int *)a2 + 5) + 48];
        if ( a2 + 48 != (char *)v11 )
        {
          v12 = *a1;
          v13 = j__strlen(", ");
          if ( *((_QWORD *)a2 + 6) )
            sub_EE16F0(a1);
          else
            sub_EE0C80(a1);
          v14 = a2 + 56;
          if ( (char *)v11 != a2 + 56 )
          {
            if ( v13 )
            {
              do
              {
                v17 = *(void **)(v12 + 32);
                if ( v13 <= *(_QWORD *)(v12 + 24) - (_QWORD)v17 )
                {
                  memcpy(v17, ", ", v13);
                  *(_QWORD *)(v12 + 32) += v13;
                }
                else
                {
                  sub_22581D0(v12, ", ", v13);
                }
                if ( *v14 )
                {
                  sub_EE16F0(a1);
                }
                else
                {
                  v147 = *a1;
                  v130 = j__strlen("<null expr>");
                  sub_9717A0(v147, "<null expr>", v130);
                }
                ++v14;
              }
              while ( (_QWORD *)v11 != v14 );
            }
            else
            {
              do
              {
                if ( *v14 )
                {
                  sub_EE16F0(a1);
                }
                else
                {
                  v15 = *a1;
                  v16 = j__strlen("<null expr>");
                  sub_9717A0(v15, "<null expr>", v16);
                }
                ++v14;
              }
              while ( (_QWORD *)v11 != v14 );
            }
          }
        }
        return;
      case 0x68u:
        sub_971800(*a1, "nullptr");
        return;
      case 0x69u:
        sub_971800(*a1, "noexcept(");
        v18 = a1;
        if ( !*((_QWORD *)a2 + 2) )
          goto LABEL_324;
        sub_EE16F0(a1);
        goto LABEL_36;
      case 0x6Au:
        sub_EE7140(a1, a2);
        return;
      case 0x6Bu:
        sub_971800(*a1, "<forwarded>");
        return;
      case 0x6Cu:
        sub_971800(*a1, "(");
        if ( *((_QWORD *)a2 + 5) )
        {
          sub_EE16F0(a1);
          v19 = sub_971800(*a1, " ");
          v20 = sub_BD69E0(*((_DWORD *)a2 + 1));
          v22 = sub_9717A0(v19, v20, v21);
          sub_971800(v22, " ");
        }
        sub_971800(*a1, "...");
        if ( !*((_QWORD *)a2 + 6) )
          goto LABEL_36;
        v23 = sub_971800(*a1, " ");
        v24 = sub_BD69E0(*((_DWORD *)a2 + 1));
        v26 = sub_9717A0(v23, v24, v25);
        sub_971800(v26, " ");
        v18 = a1;
        if ( *((_QWORD *)a2 + 6) )
          sub_EE16F0(a1);
        else
LABEL_324:
          sub_EE0C80(v18);
LABEL_36:
        sub_971800(*a1, ")");
        return;
      case 0x6Du:
        v27 = *((_QWORD *)a2 + 2);
        if ( v27 && !(unsigned __int8)sub_BDA5C0(v27) )
        {
          if ( *((_QWORD *)a2 + 2) )
            sub_EE16F0(a1);
          else
            sub_EE0C80(a1);
          a2 = (char *)"->";
          if ( (*(_QWORD *)v7 & 0x80000LL) == 0 )
            a2 = ".";
          sub_971800(*a1, a2);
        }
        v28 = *((_QWORD *)v7 + 4);
        if ( v28 )
        {
          a2 = (char *)*a1;
          sub_E6C510(v28, *a1, (const __m128i *)(a1 + 3), 0, 1);
        }
        if ( (*(_QWORD *)v7 & 0x100000LL) != 0 && *((_DWORD *)v7 + 20) )
        {
          a2 = "template ";
          sub_971800(*a1, "template ");
        }
        sub_B62D60(*a1, (__int64)a2, a3, a4, a5, a6, *((_QWORD *)v7 + 6));
        if ( (*(_QWORD *)v7 & 0x100000LL) != 0 && *((_DWORD *)v7 + 18) )
          sub_F55640(*a1, &v7[16 * ((*(_QWORD *)v7 & 0x100000LL) != 0) + 72], *((unsigned int *)v7 + 21), a1 + 3, 0);
        return;
      case 0x6Eu:
        if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
          sub_971800(*a1, "::");
        sub_971800(*a1, "delete ");
        if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
          sub_971800(*a1, "[] ");
        if ( *((_QWORD *)a2 + 3) )
LABEL_268:
          sub_EE16F0(a1);
        else
LABEL_292:
          sub_EE0C80(a1);
        return;
      case 0x6Fu:
      case 0x70u:
        return;
      case 0x71u:
        sub_EE7600(a1, a2);
        return;
      case 0x72u:
        sub_EE7730(a1, a2);
        return;
      case 0x73u:
        v29 = "true";
        v30 = *a1;
        if ( (*(_QWORD *)v7 & 0x80000) == 0 )
          v29 = "false";
LABEL_71:
        sub_971800(v30, v29);
        return;
      case 0x74u:
        sub_EE47E0(a1, *((_QWORD *)a2 + 3));
        return;
      case 0x75u:
        v31 = *((_QWORD *)a2 + 2);
        sub_971800(*a1, "^");
        v151 = sub_BD7550((__int64)a2, (__int64)"^", v32, v33);
        if ( *(_BYTE *)(v151 + 16) == 25 )
        {
          sub_971800(*a1, "()");
        }
        else if ( *(_DWORD *)(v31 + 80) || *(char *)(v151 + 19) < 0 )
        {
          v131 = *a1;
          v132 = *(_BYTE **)(*a1 + 32LL);
          if ( (unsigned __int64)v132 >= *(_QWORD *)(*a1 + 24LL) )
          {
            sub_2257CD0(v131, 40);
          }
          else
          {
            *(_QWORD *)(v131 + 32) = v132 + 1;
            *v132 = 40;
          }
          v133 = *(_QWORD *)(v31 + 72);
          v134 = v133 + 8LL * *(unsigned int *)(v31 + 80);
          if ( v133 != v134 )
          {
            while ( 1 )
            {
              sub_B62CC0((__int64)v153, (__int64 *)(*(_QWORD *)v133 + 40LL));
              v135 = *a1;
              v136 = *(_QWORD *)(*(_QWORD *)v133 + 48LL);
              v157 = 260;
              v155 = (__int64)v153;
              v152 = v136;
              sub_F50AF0(&v152, v135, a1 + 3, &v155, 0);
              if ( v153[0] != &v154 )
                operator delete(v153[0]);
              v133 += 8;
              if ( v134 == v133 )
                break;
              if ( *(_QWORD *)(v31 + 72) != v133 )
                sub_971800(*a1, ", ");
            }
          }
          if ( *(char *)(v151 + 19) < 0 )
          {
            if ( *(_DWORD *)(v31 + 80) )
              sub_971800(*a1, ", ");
            sub_971800(*a1, "...");
          }
          v137 = *a1;
          v138 = *(_BYTE **)(*a1 + 32LL);
          if ( (unsigned __int64)v138 >= *(_QWORD *)(*a1 + 24LL) )
          {
            sub_2257CD0(v137, 41);
          }
          else
          {
            *(_QWORD *)(v137 + 32) = v138 + 1;
            *v138 = 41;
          }
        }
        sub_971800(*a1, "{ }");
        return;
      case 0x76u:
        goto LABEL_10;
      case 0x77u:
        goto LABEL_11;
      default:
        continue;
    }
  }
}

