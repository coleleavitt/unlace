__int64 __fastcall sub_61FB40(_QWORD *a1, char *a2, char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r8
  char *v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  char *v10; // r15
  _BYTE *v11; // rbx
  _QWORD *v12; // r10
  char *v13; // r11
  char *v14; // rbp
  __int64 v15; // rbx
  char *v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  int *v19; // rbx
  int *v20; // rdi
  char *v22; // r12
  _BYTE *v23; // rax
  char v24; // dl
  int v25; // ecx
  char *v26; // r14
  char *v27; // r13
  unsigned int v28; // edi
  char v29; // bp
  char *v30; // r13
  char *v31; // rbp
  unsigned int v32; // edi
  char v33; // bl
  int v34; // ebp
  char *v35; // rax
  char *i; // rdx
  char *v37; // rsi
  _BYTE *v38; // rdx
  _BYTE *v39; // rdi
  int v40; // edi
  char *v41; // rax
  size_t v42; // rax
  const char *v43; // rbp
  size_t v44; // rbx
  char *v45; // rbp
  char *v46; // rdx
  char *v47; // rbx
  unsigned int v48; // edi
  char v49; // bp
  unsigned int v50; // eax
  unsigned __int64 v51; // xmm0_8
  _BYTE *v52; // rdx
  char v53; // al
  int v54; // edi
  char *v55; // rdi
  char *v56; // rcx
  char v57; // al
  char *v58; // rbp
  char *v59; // r14
  unsigned int v60; // edi
  char v61; // bl
  char *v62; // rbp
  char *v63; // rax
  char *v64; // r12
  unsigned __int64 v65; // r13
  unsigned int v66; // edi
  char v67; // bl
  char *v68; // rax
  char *v69; // rcx
  char v70; // al
  char *v71; // rbp
  char *v72; // r14
  _BYTE *v73; // r15
  unsigned int v74; // edi
  char v75; // bl
  int v76; // eax
  char *v77; // rbp
  char *v78; // r15
  unsigned int v79; // edi
  char v80; // bl
  __int64 v81; // rax
  __int64 v82; // rsi
  char *v83; // rbp
  _BYTE *v84; // r15
  unsigned int v85; // edi
  char v86; // bl
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rax
  size_t v90; // r12
  _QWORD *v91; // r8
  char *v92; // rax
  char *j; // rdx
  char *v94; // rsi
  _BYTE *v95; // rdx
  _BYTE *v96; // rdi
  int v97; // edi
  char *v98; // rdi
  __int64 v99; // [rsp+0h] [rbp-C8h]
  _QWORD *v100; // [rsp+0h] [rbp-C8h]
  _QWORD *v101; // [rsp+0h] [rbp-C8h]
  _QWORD *v102; // [rsp+8h] [rbp-C0h]
  _BYTE *v103; // [rsp+18h] [rbp-B0h]
  _BYTE *v104; // [rsp+18h] [rbp-B0h]
  _BYTE *v105; // [rsp+18h] [rbp-B0h]
  char *v106; // [rsp+18h] [rbp-B0h]
  char *v107; // [rsp+18h] [rbp-B0h]
  char *v108; // [rsp+18h] [rbp-B0h]
  char *v109; // [rsp+18h] [rbp-B0h]
  char *v110; // [rsp+18h] [rbp-B0h]
  _BYTE *v111; // [rsp+18h] [rbp-B0h]
  char *v112; // [rsp+18h] [rbp-B0h]
  char *v113; // [rsp+18h] [rbp-B0h]
  _BYTE *v114; // [rsp+20h] [rbp-A8h]
  char *v115; // [rsp+20h] [rbp-A8h]
  _BYTE *v116; // [rsp+28h] [rbp-A0h]
  int v117; // [rsp+34h] [rbp-94h]
  int v118; // [rsp+34h] [rbp-94h]
  int v119; // [rsp+34h] [rbp-94h]
  char *v120; // [rsp+38h] [rbp-90h]
  void *v121; // [rsp+40h] [rbp-88h] BYREF
  __int128 v122; // [rsp+48h] [rbp-80h]
  char v123[15]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v124[25]; // [rsp+6Fh] [rbp-59h] BYREF
  unsigned __int64 v125; // [rsp+88h] [rbp-40h]

  v6 = a1;
  v7 = a2;
  v8 = a3 - a2;
  v9 = a1[12];
  v125 = __readfsqword(0x28u);
  v10 = a3;
  if ( v9 < a3 - a2 )
  {
    v88 = a1[11];
    if ( a1[13] < v8 )
    {
      v89 = qvector_reserve(a1 + 11, v88, v8, 1);
      v6 = a1;
      v88 = v89;
      a1[11] = v89;
      v9 = a1[12];
    }
    v101 = v6;
    memset((void *)(v88 + v9), 0, v8 - v9);
    v6 = v101;
    v101[12] = v8;
  }
  else if ( v8 != v9 )
  {
    a1[12] = v8;
  }
  v11 = (_BYTE *)v6[11];
  if ( v7 >= v10 )
    goto LABEL_8;
  v116 = nullptr;
  v12 = v6;
  v13 = v124;
LABEL_6:
  if ( v7 >= v10 )
  {
LABEL_7:
    v6 = v12;
    goto LABEL_8;
  }
  v102 = v12;
  v22 = v13;
  while ( 1 )
  {
    if ( *v7 == 59 || !*v7 )
    {
      v12 = v102;
      v13 = v22;
      goto LABEL_49;
    }
    while ( *v7 == 32 )
    {
      if ( v10 == ++v7 )
        goto LABEL_46;
    }
    if ( *v7 == 10 )
    {
      v12 = v102;
      v13 = v22;
      if ( v7 >= v10 )
        goto LABEL_7;
LABEL_49:
      while ( *v7 != 10 )
      {
        if ( v10 == ++v7 )
          goto LABEL_6;
      }
      v7 += v7 < v10;
      goto LABEL_6;
    }
    if ( (int)v10 - (int)v7 <= 10 )
      break;
    if ( strncmp(v7, "DECLARATION", 0xBu) )
      goto LABEL_52;
    v7 += 11;
    if ( v7 >= v10 )
    {
      v6 = v102;
      if ( v116 )
LABEL_241:
        sub_378D50();
      *v11 = 0;
      goto LABEL_8;
    }
    do
    {
      if ( *v7 != 32 )
      {
        if ( v116 )
          goto LABEL_241;
        if ( v7 >= v10 )
          goto LABEL_293;
        while ( *v7 == 32 )
        {
          if ( v10 == ++v7 )
            goto LABEL_293;
        }
        if ( v7 >= v10 )
        {
LABEL_293:
          *v11 = 0;
          v6 = v102;
          goto LABEL_8;
        }
        v23 = v11;
        while ( 1 )
        {
LABEL_36:
          v24 = *v7;
          a4 = (__int64)v23++;
          if ( *v7 == 10 )
            goto LABEL_44;
          if ( v7 >= v10 - 1 )
            break;
          if ( v24 != 92 )
            break;
          v25 = v7[1];
          if ( v25 != 61 && v25 != 110 )
            break;
          v7 += 2;
          if ( v25 != 61 )
          {
            *(v23 - 1) = 10;
            if ( v7 >= v10 )
            {
LABEL_43:
              a4 = (__int64)v23;
              goto LABEL_44;
            }
            while ( *v7 == 32 )
            {
              if ( v10 == ++v7 )
              {
                a4 = (__int64)v23;
                goto LABEL_44;
              }
            }
            goto LABEL_35;
          }
          *(v23 - 1) = 61;
          if ( v7 >= v10 )
            goto LABEL_43;
        }
        *(v23 - 1) = v24;
        ++v7;
LABEL_35:
        if ( v7 >= v10 )
          goto LABEL_43;
        goto LABEL_36;
      }
      ++v7;
    }
    while ( v10 != v7 );
    if ( v116 )
      goto LABEL_241;
    a4 = (__int64)v11;
LABEL_44:
    *(_BYTE *)a4 = 0;
    v116 = v11;
    v11 = (_BYTE *)(a4 + 1);
LABEL_45:
    if ( v7 >= v10 )
      goto LABEL_46;
  }
  if ( (int)v10 - (int)v7 <= 8 )
    goto LABEL_75;
LABEL_52:
  if ( strncmp(v7, "ALIGNMENT", 9u) )
  {
LABEL_75:
    v99 = (__int64)(v102 + 1);
    if ( *((_BYTE *)v102 + 136) )
    {
      v81 = v102[15];
      v82 = v102[14];
      if ( v102[16] < (unsigned __int64)(v81 + 1) )
      {
        v87 = qvector_reserve(v102 + 14, v82, v81 + 1, 48);
        v102[14] = v87;
        v82 = v87;
        v81 = v102[15];
      }
      v99 = v82 + 48 * v81;
      *(_DWORD *)v99 = 0;
      *(_QWORD *)(v99 + 8) = 0;
      *(_QWORD *)(v99 + 16) = 0;
      *(_DWORD *)(v99 + 40) = 0;
      *(_OWORD *)(v99 + 24) = 0;
      ++v102[15];
    }
    v30 = v7;
    *(_QWORD *)(v99 + 8) = 0;
    *(_QWORD *)(v99 + 16) = -1;
    *(_DWORD *)(v99 + 40) = 0;
    *(_OWORD *)(v99 + 24) = 0;
    if ( v7 >= v10 )
      goto LABEL_283;
    do
    {
      if ( *v30 == 10 )
        break;
      ++v30;
    }
    while ( v10 != v30 );
    v120 = &v30[v30 < v10];
    if ( v7 >= v30 )
    {
      v7 = &v30[v30 < v10];
LABEL_283:
      v123[0] = 0;
      v120 = v7;
      *(_DWORD *)v99 = strtol(v123, nullptr, 10);
      goto LABEL_115;
    }
    v103 = v11;
    v31 = v123;
    do
    {
      v32 = *v7;
      v33 = *v7;
      if ( v32 > 0x7F )
        break;
      if ( !isalnum(v32) )
        break;
      ++v7;
      *v31++ = v33;
      if ( v7 >= v30 )
        break;
    }
    while ( v31 < v22 );
    *v31 = 0;
    v11 = v103;
    *(_DWORD *)v99 = strtol(v123, nullptr, 10);
    if ( v7 >= v30 )
      goto LABEL_115;
    while ( 1 )
    {
      do
      {
        if ( *v7 != 32 )
          break;
        ++v7;
      }
      while ( v7 != v30 );
      v34 = (_DWORD)v30 - (_DWORD)v7;
      if ( (int)v30 - (int)v7 <= 4 )
      {
LABEL_125:
        v41 = v7;
        do
        {
          if ( v41 >= v30 )
            break;
          ++v41;
        }
        while ( *(v41 - 1) );
        v42 = v41 - v7;
        v121 = nullptr;
        v43 = haystack;
        v122 = 0;
        v44 = v42;
        if ( !v42 )
          goto LABEL_129;
        v90 = v42 + 1;
        if ( v42 == -1 )
        {
          memmove(nullptr, v7, 0xFFFFFFFFFFFFFFFFLL);
          *((char *)v121 - 1) = 0;
          if ( (_QWORD)v122 )
            v43 = (const char *)v121;
          goto LABEL_288;
        }
        v121 = (void *)qvector_reserve(&v121, 0, v42 + 1, 1);
        *(_QWORD *)&v122 = v90;
        memmove(v121, v7, v44);
        *((_BYTE *)v121 + v44) = 0;
        if ( (_QWORD)v122 )
          v43 = (const char *)v121;
        if ( v44 > 0x1D )
        {
LABEL_288:
          qstrncpy(v123, v43, 25);
          qstrncat(v123, "(...)", 30);
        }
        else
        {
LABEL_129:
          qstrncpy(v123, v43, 30);
        }
        if ( v121 )
        {
          *(_QWORD *)&v122 = 0;
          qfree(v121);
        }
        sub_378D50();
      }
      if ( !strncmp(v7, "Name=", 5u) )
      {
        v35 = v7 + 5;
        if ( v7 + 5 < v30 )
        {
          do
          {
            if ( *v35 != 32 )
              break;
            ++v35;
          }
          while ( v35 != v30 );
        }
        for ( i = v35; ; ++i )
        {
          v7 = i;
          if ( i < v30 )
          {
            a4 = (unsigned __int8)*i;
            if ( (_BYTE)a4 != 10 && (_BYTE)a4 != 61 )
              continue;
          }
          if ( *(i - 1) != 92 )
            break;
        }
        v37 = v30;
        if ( i < v30 )
        {
          v37 = i;
          if ( *i == 61 )
          {
            if ( v35 < i )
            {
              while ( 1 )
              {
                v55 = v7--;
                a4 = (unsigned __int8)*v7;
                if ( (_BYTE)a4 == 32 )
                  break;
                if ( v35 >= v7 )
                  goto LABEL_205;
              }
              if ( v35 >= v7 )
              {
LABEL_205:
                v37 = v55;
                goto LABEL_186;
              }
              do
                v37 = v7--;
              while ( *v7 == 32 && v35 < v7 );
LABEL_186:
              v7 = v55;
            }
            else
            {
              v37 = i + 1;
              v7 = i + 1;
            }
          }
        }
        v38 = v11;
        v39 = v11;
        if ( v35 >= v37 )
        {
LABEL_113:
          *v39 = 0;
          *(_QWORD *)(v99 + 8) = v11;
          v11 = v39 + 1;
          goto LABEL_114;
        }
        while ( 1 )
        {
          a4 = (unsigned __int8)*v35;
          v39 = v38++;
          if ( (_BYTE)a4 == 10 )
            goto LABEL_113;
          if ( v35 >= v37 - 1 )
            break;
          if ( (_BYTE)a4 != 92 )
            break;
          v40 = v35[1];
          if ( v40 != 61 && v40 != 110 )
            break;
          v35 += 2;
          if ( v40 == 61 )
          {
            *(v38 - 1) = 61;
            if ( v35 >= v37 )
              goto LABEL_112;
          }
          else
          {
            *(v38 - 1) = 10;
            if ( v35 >= v37 )
            {
LABEL_112:
              v39 = v38;
              goto LABEL_113;
            }
            while ( *v35 == 32 )
            {
              if ( v37 == ++v35 )
              {
                v39 = v38;
                goto LABEL_113;
              }
            }
LABEL_104:
            if ( v35 >= v37 )
              goto LABEL_112;
          }
        }
        *(v38 - 1) = a4;
        ++v35;
        goto LABEL_104;
      }
      if ( v34 <= 7 )
        break;
      if ( !strncmp(v7, "Comment=", 8u) )
      {
        v7 += 8;
        if ( v7 >= v30 )
          goto LABEL_244;
        while ( *v7 == 32 )
        {
          if ( ++v7 == v30 )
            goto LABEL_244;
        }
        if ( v7 >= v30 )
        {
LABEL_244:
          *v11 = 0;
          *(_QWORD *)(v99 + 24) = v11++;
LABEL_115:
          if ( !*((_BYTE *)v102 + 136) )
          {
            if ( v116 )
              *(_QWORD *)(v99 + 32) = v116;
            *((_BYTE *)v102 + 136) = 1;
          }
          v7 = v120;
          goto LABEL_45;
        }
        a4 = (__int64)v11;
        v52 = v11 + 1;
        while ( 2 )
        {
          v53 = *v7;
          if ( *v7 == 10 )
          {
LABEL_172:
            *(_BYTE *)a4 = 0;
            *(_QWORD *)(v99 + 24) = v11;
            v11 = v52;
            goto LABEL_114;
          }
          if ( v7 >= v30 - 1 || v53 != 92 )
            goto LABEL_161;
          v54 = v7[1];
          if ( v54 == 10 )
          {
LABEL_169:
            v7 += 2;
            if ( v7 >= v30 )
              goto LABEL_172;
            while ( *v7 == 32 )
            {
              if ( ++v7 == v30 )
                goto LABEL_172;
            }
          }
          else
          {
            if ( v54 == 110 )
            {
              *(_BYTE *)a4 = 10;
              a4 = (__int64)v52++;
              goto LABEL_169;
            }
LABEL_161:
            *(_BYTE *)a4 = v53;
            ++v7;
            a4 = (__int64)v52++;
          }
          if ( v7 >= v30 )
            goto LABEL_172;
          continue;
        }
      }
      if ( v34 == 8 )
      {
        if ( !strncmp(v7, "Args=", 5u) )
          goto LABEL_188;
LABEL_122:
        if ( !strncmp(v7, "Drops=", 6u) )
          goto LABEL_224;
        if ( v34 == 6 )
          goto LABEL_124;
        goto LABEL_139;
      }
      if ( !strncmp(v7, "TypeInfo=", 9u) )
      {
        v92 = v7 + 9;
        if ( v7 + 9 < v30 )
        {
          do
          {
            if ( *v92 != 32 )
              break;
            ++v92;
          }
          while ( v92 != v30 );
        }
        for ( j = v92; ; ++j )
        {
          v7 = j;
          if ( j < v30 )
          {
            a4 = (unsigned __int8)*j;
            if ( (_BYTE)a4 != 61 && (_BYTE)a4 != 10 )
              continue;
          }
          if ( *(j - 1) != 92 )
            break;
        }
        v94 = v30;
        if ( j < v30 )
        {
          v94 = j;
          if ( *j == 61 )
          {
            if ( v92 < j )
            {
              while ( 1 )
              {
                v98 = v7--;
                a4 = (unsigned __int8)*v7;
                if ( (_BYTE)a4 == 32 )
                  break;
                if ( v92 >= v7 )
                  goto LABEL_335;
              }
              if ( v92 >= v7 )
              {
LABEL_335:
                v94 = v98;
                goto LABEL_334;
              }
              do
                v94 = v7--;
              while ( *v7 == 32 && v92 < v7 );
LABEL_334:
              v7 = v98;
            }
            else
            {
              v94 = j + 1;
              v7 = j + 1;
            }
          }
        }
        v95 = v11;
        v96 = v11;
        if ( v92 >= v94 )
        {
LABEL_318:
          *v96 = 0;
          *(_QWORD *)(v99 + 32) = v11;
          v11 = v96 + 1;
          goto LABEL_114;
        }
        while ( 1 )
        {
LABEL_310:
          a4 = (unsigned __int8)*v92;
          v96 = v95++;
          if ( (_BYTE)a4 == 10 )
            goto LABEL_318;
          if ( v92 >= v94 - 1 )
            break;
          if ( (_BYTE)a4 != 92 )
            break;
          v97 = v92[1];
          if ( v97 != 61 && v97 != 110 )
            break;
          v92 += 2;
          if ( v97 != 61 )
          {
            *(v95 - 1) = 10;
            if ( v92 >= v94 )
            {
LABEL_317:
              v96 = v95;
              goto LABEL_318;
            }
            while ( *v92 == 32 )
            {
              if ( v94 == ++v92 )
              {
                v96 = v95;
                goto LABEL_318;
              }
            }
            goto LABEL_309;
          }
          *(v95 - 1) = 61;
          if ( v92 >= v94 )
            goto LABEL_317;
        }
        *(v95 - 1) = a4;
        ++v92;
LABEL_309:
        if ( v92 >= v94 )
          goto LABEL_317;
        goto LABEL_310;
      }
      if ( !strncmp(v7, "Args=", 5u) )
      {
LABEL_188:
        v56 = v7 + 5;
        v57 = *((_BYTE *)v102 + 136);
        if ( v7 + 5 < v30 )
        {
          while ( *v56 == 32 )
          {
            if ( ++v56 == v30 )
              goto LABEL_216;
          }
          if ( !v57 )
          {
            v58 = v123;
            if ( v56 < v30 )
            {
              v105 = v11;
              v59 = v56;
              do
              {
                v60 = *v59;
                v61 = *v59;
                if ( v60 > 0x7F )
                  break;
                if ( !isalnum(v60) )
                  break;
                ++v59;
                *v58++ = v61;
                if ( v59 >= v30 )
                  break;
              }
              while ( v58 < v22 );
              v11 = v105;
              v56 = v59;
            }
            goto LABEL_198;
          }
          v62 = v123;
          v7 = v56;
          v118 = *((_DWORD *)v102 + 19);
          if ( v56 < v30 )
          {
            v107 = v56;
            v63 = v22;
            v64 = v30;
            v114 = v11;
            v65 = (unsigned __int64)v63;
            do
            {
              v66 = *v7;
              v67 = *v7;
              if ( v66 > 0x7F )
                break;
              if ( !isalnum(v66) )
                break;
              ++v7;
              *v62++ = v67;
              if ( v7 >= v64 )
                break;
            }
            while ( (unsigned __int64)v62 < v65 );
            v68 = (char *)v65;
            v56 = v107;
            v11 = v114;
            v30 = v64;
            v22 = v68;
          }
LABEL_211:
          *v62 = 0;
          v108 = v56;
          v50 = strtol(v123, nullptr, 10);
          a4 = (__int64)v108;
          if ( (v50 & v118) != 0 )
            sub_378D50();
        }
        else
        {
LABEL_216:
          v58 = v123;
          if ( v57 )
          {
            v62 = v123;
            v7 = v56;
            v118 = *((_DWORD *)v102 + 19);
            goto LABEL_211;
          }
LABEL_198:
          *v58 = 0;
          v106 = v56;
          v50 = strtol(v123, nullptr, 10);
          v7 = v106;
        }
        *(_DWORD *)(v99 + 16) = v50;
        if ( !*((_BYTE *)v102 + 136) )
          goto LABEL_114;
LABEL_200:
        if ( v50 == -1 )
          return 2;
        goto LABEL_114;
      }
      if ( !strncmp(v7, "Drops=", 6u) )
      {
LABEL_224:
        v69 = v7 + 6;
        v70 = *((_BYTE *)v102 + 136);
        if ( v7 + 6 < v30 )
        {
          while ( *v69 == 32 )
          {
            if ( ++v69 == v30 )
              goto LABEL_260;
          }
          if ( !v70 )
          {
            v71 = v123;
            if ( v69 < v30 )
            {
              v109 = v10;
              v72 = v69;
              v73 = v11;
              do
              {
                v74 = *v72;
                v75 = *v72;
                if ( v74 > 0x7F )
                  break;
                if ( !isalnum(v74) )
                  break;
                ++v72;
                *v71++ = v75;
                if ( v72 >= v30 )
                  break;
              }
              while ( v71 < v22 );
              v11 = v73;
              v10 = v109;
              v69 = v72;
            }
            goto LABEL_234;
          }
          v77 = v123;
          v7 = v69;
          v119 = *((_DWORD *)v102 + 19);
          if ( v69 < v30 )
          {
            v111 = v11;
            v115 = v10;
            v78 = v69;
            do
            {
              v79 = *v7;
              v80 = *v7;
              if ( v79 > 0x7F )
                break;
              if ( !isalnum(v79) )
                break;
              ++v7;
              *v77++ = v80;
              if ( v7 >= v30 )
                break;
            }
            while ( v77 < v22 );
            v69 = v78;
            v11 = v111;
            v10 = v115;
          }
LABEL_252:
          *v77 = 0;
          v112 = v69;
          v50 = strtol(v123, nullptr, 10);
          a4 = (__int64)v112;
          if ( (v50 & v119) != 0 )
            sub_378D50();
        }
        else
        {
LABEL_260:
          v71 = v123;
          if ( v70 )
          {
            v77 = v123;
            v7 = v69;
            v119 = *((_DWORD *)v102 + 19);
            goto LABEL_252;
          }
LABEL_234:
          *v71 = 0;
          v110 = v69;
          v50 = strtol(v123, nullptr, 10);
          v7 = v110;
        }
        *(_DWORD *)(v99 + 20) = v50;
        if ( !*((_BYTE *)v102 + 136) )
          goto LABEL_114;
        goto LABEL_200;
      }
LABEL_139:
      if ( !strncmp(v7, "Pascal=", 7u) )
      {
        v45 = v7 + 7;
        v117 = *((_DWORD *)v102 + 19);
        if ( v7 + 7 < v30 )
        {
          while ( *v45 == 32 )
          {
            if ( ++v45 == v30 )
              goto LABEL_336;
          }
          v46 = v123;
          v7 = v45;
          if ( v45 < v30 )
          {
            v104 = v11;
            v47 = v123;
            do
            {
              v48 = *v7;
              v49 = *v7;
              if ( v48 > 0x7F )
                break;
              if ( !isalnum(v48) )
                break;
              ++v7;
              *v47++ = v49;
              if ( v7 >= v30 )
                break;
            }
            while ( v47 < v22 );
            v46 = v47;
            v11 = v104;
          }
        }
        else
        {
LABEL_336:
          v46 = v123;
          v7 = v45;
        }
        *v46 = 0;
        v50 = strtol(v123, nullptr, 10);
        v51 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v50), 224).m128i_u64[0];
        if ( (v50 & v117) != 0 )
          sub_378D50();
        *(_QWORD *)(v99 + 16) = v51;
        goto LABEL_200;
      }
LABEL_124:
      if ( strncmp(v7, "flags=", 6u) )
        goto LABEL_125;
      v7 += 6;
      if ( v7 >= v30 )
        goto LABEL_284;
      while ( *v7 == 32 )
      {
        if ( ++v7 == v30 )
          goto LABEL_284;
      }
      if ( v7 >= v30 )
      {
LABEL_284:
        v123[0] = 0;
        *(_DWORD *)(v99 + 40) = strtol(v123, nullptr, 16);
        goto LABEL_115;
      }
      v83 = v123;
      v113 = v10;
      v84 = v11;
      do
      {
        v85 = *v7;
        v86 = *v7;
        if ( v85 > 0x7F )
          break;
        if ( !isalnum(v85) )
          break;
        ++v7;
        *v83++ = v86;
        if ( v7 >= v30 )
          break;
      }
      while ( v83 < v124 );
      *v83 = 0;
      v11 = v84;
      v10 = v113;
      *(_DWORD *)(v99 + 40) = strtol(v123, nullptr, 16);
LABEL_114:
      if ( v7 >= v30 )
        goto LABEL_115;
    }
    if ( !strncmp(v7, "Args=", 5u) )
      goto LABEL_188;
    if ( v34 == 5 )
      goto LABEL_125;
    goto LABEL_122;
  }
  v26 = v7 + 9;
  if ( v26 >= v10 )
  {
LABEL_245:
    v91 = v102;
    if ( *((_DWORD *)v102 + 19) != 1 )
      goto LABEL_246;
LABEL_243:
    v100 = v91;
    v123[0] = 0;
    v76 = strtol(v123, nullptr, 10);
    v6 = v100;
    *((_DWORD *)v100 + 19) = v76 - 1;
    goto LABEL_8;
  }
  while ( *v26 == 32 )
  {
    if ( v10 == ++v26 )
      goto LABEL_245;
  }
  if ( *((_DWORD *)v102 + 19) != 1 )
LABEL_246:
    sub_378D50();
  if ( v26 >= v10 )
  {
    v91 = v102;
    goto LABEL_243;
  }
  while ( *v26 == 32 )
  {
    if ( v10 == ++v26 )
      goto LABEL_242;
  }
  if ( v26 >= v10 )
  {
LABEL_242:
    v91 = v102;
    goto LABEL_243;
  }
  v27 = v123;
  do
  {
    v28 = *v26;
    v29 = *v26;
    if ( v28 > 0x7F )
      break;
    if ( !isalnum(v28) )
      break;
    ++v26;
    *v27++ = v29;
    if ( v26 >= v10 )
      break;
  }
  while ( v27 < v22 );
  *v27 = 0;
  *((_DWORD *)v102 + 19) = strtol(v123, nullptr, 10) - 1;
  if ( v26 < v10 )
  {
    while ( *v26 != 10 )
    {
      if ( v10 == ++v26 )
        goto LABEL_46;
    }
    if ( v26 < v10 )
    {
      v7 = v26 + 1;
      goto LABEL_45;
    }
LABEL_46:
    v6 = v102;
  }
  else
  {
    v6 = v102;
  }
LABEL_8:
  v14 = (char *)v6[14];
  v15 = 48LL * v6[15];
  v16 = &v14[v15];
  if ( v14 == &v14[v15] )
    return 0;
  v17 = 0xAAAAAAAAAAAAAAABLL * (v15 >> 4);
  if ( v17 )
  {
    _BitScanReverse64(&v18, v17);
    sub_61F830(v6[14], (unsigned __int64)v16, 2LL * (int)v18, a4, (__int64)v6, a6);
    if ( v15 > 768 )
    {
      v19 = (int *)(v14 + 768);
      sub_61BF10(v14, v14 + 768);
      do
      {
        v20 = v19;
        v19 += 12;
        sub_61BE80(v20);
      }
      while ( v16 != (char *)v19 );
      return 0;
    }
  }
  else
  {
    sub_61F830(v6[14], (unsigned __int64)v16, -2, a4, (__int64)v6, a6);
  }
  sub_61BF10(v14, v16);
  return 0;
}
