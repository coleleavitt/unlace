__int64 __fastcall sub_788F00(__int64 (__fastcall *a1)(__int64, __int64), __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r13
  int v6; // r11d
  _BYTE *v7; // rax
  const char *v8; // rbx
  char v9; // al
  int v12; // r15d
  int v13; // r14d
  __int64 result; // rax
  const char *v15; // r13
  __int64 v16; // rax
  char *v17; // rbx
  __int64 v18; // r9
  char v19; // al
  char *v20; // rdx
  char *v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned int v24; // ecx
  size_t v25; // rax
  size_t v26; // rdx
  _BYTE *v27; // rbx
  __int64 v28; // r11
  size_t v29; // r8
  unsigned int v30; // edi
  size_t v31; // rbx
  char v32; // al
  char *v33; // rbx
  char v34; // al
  unsigned int v35; // edx
  char *v36; // rbx
  char *v37; // r15
  char *v38; // rbx
  char v39; // al
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // ecx
  __int64 v44; // rcx
  char v45; // al
  int i; // r8d
  __int64 v47; // rdx
  size_t v48; // rax
  unsigned __int64 v49; // rbx
  char *v50; // rax
  unsigned __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rcx
  char v54; // al
  char v55; // dl
  size_t v56; // rax
  size_t v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rdx
  size_t v60; // rbx
  size_t v62; // rax
  unsigned int v63; // [rsp+0h] [rbp-488h]
  char v64; // [rsp+0h] [rbp-488h]
  char v65; // [rsp+0h] [rbp-488h]
  char v66; // [rsp+0h] [rbp-488h]
  __int64 v67; // [rsp+0h] [rbp-488h]
  char v68; // [rsp+0h] [rbp-488h]
  char v69; // [rsp+0h] [rbp-488h]
  char v70; // [rsp+0h] [rbp-488h]
  char v71; // [rsp+0h] [rbp-488h]
  int v72; // [rsp+0h] [rbp-488h]
  char v73; // [rsp+0h] [rbp-488h]
  __int64 v74; // [rsp+8h] [rbp-480h]
  __int64 v75; // [rsp+10h] [rbp-478h]
  char *v76; // [rsp+18h] [rbp-470h]
  int v77; // [rsp+18h] [rbp-470h]
  int v78; // [rsp+18h] [rbp-470h]
  int v79; // [rsp+18h] [rbp-470h]
  char v80; // [rsp+18h] [rbp-470h]
  int v81; // [rsp+18h] [rbp-470h]
  int v82; // [rsp+18h] [rbp-470h]
  unsigned int v83; // [rsp+18h] [rbp-470h]
  int v84; // [rsp+18h] [rbp-470h]
  int v85; // [rsp+18h] [rbp-470h]
  int v86; // [rsp+20h] [rbp-468h]
  unsigned int v87; // [rsp+20h] [rbp-468h]
  __int64 v88; // [rsp+20h] [rbp-468h]
  int v89; // [rsp+20h] [rbp-468h]
  __int64 v90; // [rsp+20h] [rbp-468h]
  __int64 v91; // [rsp+20h] [rbp-468h]
  char v92; // [rsp+20h] [rbp-468h]
  int v93; // [rsp+20h] [rbp-468h]
  unsigned int v94; // [rsp+20h] [rbp-468h]
  __int64 v95; // [rsp+20h] [rbp-468h]
  char v96; // [rsp+28h] [rbp-460h]
  __int64 v97; // [rsp+28h] [rbp-460h]
  char v98; // [rsp+28h] [rbp-460h]
  __int64 v99; // [rsp+28h] [rbp-460h]
  __int64 v100; // [rsp+28h] [rbp-460h]
  int v101; // [rsp+28h] [rbp-460h]
  char v102; // [rsp+28h] [rbp-460h]
  int v103; // [rsp+30h] [rbp-458h]
  __int64 v104; // [rsp+30h] [rbp-458h]
  size_t v105; // [rsp+30h] [rbp-458h]
  size_t v106; // [rsp+30h] [rbp-458h]
  __int64 v107; // [rsp+30h] [rbp-458h]
  char v108; // [rsp+30h] [rbp-458h]
  char v109; // [rsp+30h] [rbp-458h]
  __int64 v110; // [rsp+30h] [rbp-458h]
  int v111; // [rsp+30h] [rbp-458h]
  __int64 v112; // [rsp+38h] [rbp-450h]
  size_t v113; // [rsp+38h] [rbp-450h]
  int v114; // [rsp+38h] [rbp-450h]
  int v115; // [rsp+38h] [rbp-450h]
  char s[1024]; // [rsp+40h] [rbp-448h] BYREF
  _BYTE v117[8]; // [rsp+440h] [rbp-48h] BYREF
  unsigned __int64 v118; // [rsp+448h] [rbp-40h]

  v4 = *(_QWORD *)(a4 + 8);
  v118 = __readfsqword(0x28u);
  v5 = a4;
  if ( (int)v4 <= 0
    || (v6 = v4, v74 = a3 + 32, !*(_QWORD *)(a3 + 16))
    || (v7 = *(_BYTE **)(a3 + 8), v8 = v7 + 1, (v9 = *v7) == 0) )
  {
    v16 = 0;
    goto LABEL_11;
  }
  v63 = 0;
  v12 = 0;
  v75 = a4;
  v13 = v6;
  while ( 2 )
  {
    if ( v9 != 37 )
    {
      result = a1(a2, (unsigned int)v9);
      if ( (_DWORD)result )
        return result;
      ++v12;
      v15 = v8;
      goto LABEL_8;
    }
    v17 = (char *)(v8 + 1);
    v18 = 0;
    while ( 1 )
    {
      v19 = *(v17 - 1);
      v20 = v17 - 1;
      if ( v19 == 43 )
      {
        v18 = (unsigned int)v18 | 2;
        goto LABEL_17;
      }
      if ( v19 > 43 )
        break;
      if ( v19 == 32 )
      {
        v18 = (unsigned int)v18 | 4;
      }
      else
      {
        if ( v19 != 35 )
        {
          v21 = v17 - 1;
          if ( v19 != 42 )
            goto LABEL_32;
          if ( --v13 > 0 )
          {
            v87 = v18;
            result = idcv_long(v74);
            if ( (_DWORD)result )
              return result;
            v41 = *(_QWORD *)(v74 + 8);
            v20 = v17 - 1;
            a4 = v74 + 32;
            v18 = v87;
            v63 = v41;
            v74 += 32;
            if ( (int)v41 < 0 )
            {
              v18 = v87 | 1;
              v63 = -(int)v41;
            }
          }
          else if ( v63 )
          {
            return 1531;
          }
          v22 = v63;
          v21 = v20 + 1;
          v63 = 0;
          v23 = (unsigned __int8)v20[1];
          goto LABEL_53;
        }
        v18 = (unsigned int)v18 | 8;
      }
LABEL_17:
      ++v17;
    }
    if ( v19 == 45 )
    {
      v18 = (unsigned int)v18 | 1;
      goto LABEL_17;
    }
    if ( v19 == 48 )
    {
      v21 = v17;
      if ( (v18 & 1) == 0 )
        v18 = (unsigned int)v18 | 0x10;
      v19 = *v17;
LABEL_32:
      v24 = v19;
      LODWORD(v22) = -1;
      if ( (unsigned int)v19 > 0x7F )
      {
LABEL_33:
        v103 = v22;
        v96 = v18;
        v25 = strlen(v21);
        LOBYTE(v18) = v96;
        v26 = 0;
        v27 = (_BYTE *)v25;
        v28 = v25;
        LODWORD(v22) = v103;
        v76 = (char *)&byte_22F0C30;
        v15 = &byte_22F0C30;
        goto LABEL_34;
      }
    }
    else
    {
      v24 = v19;
      v21 = v17 - 1;
    }
    v22 = 0xFFFFFFFFLL;
    while ( 1 )
    {
      a4 = v24 - 48;
      if ( (unsigned int)a4 > 9 )
        break;
      v40 = 0;
      if ( (_DWORD)v22 != -1 )
        v40 = 10 * v22;
      v24 = *++v21;
      v22 = (unsigned int)((char)(v19 - 48) + v40);
      v19 = v24;
      if ( v24 > 0x7F )
        goto LABEL_33;
    }
    v23 = (unsigned __int8)*v21;
LABEL_53:
    if ( (_BYTE)v23 != 46 )
    {
      v28 = -1;
      goto LABEL_59;
    }
    v34 = v21[1];
    if ( v34 != 42 )
    {
      v35 = v34;
      ++v21;
      if ( (unsigned int)v34 > 0x7F )
        goto LABEL_33;
      v28 = 0;
      while ( v35 - 48 <= 9 )
      {
        ++v21;
        v28 = (char)(v34 - 48) + 10 * v28;
        v35 = *v21;
        v34 = *v21;
        if ( v35 > 0x7F )
          goto LABEL_33;
      }
      v23 = (unsigned __int8)*v21;
LABEL_59:
      if ( (unsigned __int8)(v23 - 70) <= 0x26u )
      {
        a4 = 0x4400000141LL;
        if ( _bittest64(&a4, (unsigned int)(v23 - 70)) )
          v23 = (unsigned __int8)*++v21;
      }
      v15 = v21 + 1;
      switch ( (char)v23 )
      {
        case '%':
          s[0] = 37;
          goto LABEL_147;
        case 'E':
        case 'G':
        case 'e':
        case 'f':
        case 'g':
          if ( --v13 <= 0 )
          {
            if ( v63 == 1531 )
              goto LABEL_181;
            v42 = 0;
          }
          else
          {
            v78 = v22;
            v64 = v18;
            v88 = v28;
            result = idcv_float(v74);
            LOBYTE(v18) = v64;
            LODWORD(v22) = v78;
            if ( (_DWORD)result )
              goto LABEL_180;
            v28 = v88;
            v42 = v74 + 8;
            v74 += 32;
          }
          if ( (unsigned int)(v22 + 1) <= 1 )
          {
            v44 = 15;
            LODWORD(v22) = 0;
          }
          else
          {
            v43 = 0;
            if ( v28 >= 0 )
              v43 = v28;
            v44 = ((_DWORD)v22 << 8) | (v43 << 16) | 0xFu;
          }
          v79 = v22;
          v65 = v18;
          realtoasc(s, 1024, v42, v44);
          v45 = s[0];
          v21 = s;
          for ( i = v79; v45 == 32; ++v21 )
            v45 = v21[1];
          if ( v45 == 45 )
          {
            ++v21;
            v47 = 1;
            v76 = "-";
          }
          else
          {
            v47 = 1;
            v76 = "+";
            if ( (v65 & 2) == 0 )
            {
              v76 = " ";
              if ( (v65 & 4) == 0 )
              {
                v47 = 0;
                v76 = (char *)&byte_22F0C30;
              }
            }
          }
          v114 = i;
          v108 = v65;
          v99 = v47;
          v48 = strlen(v21);
          v26 = v99;
          v63 = 0;
          LOBYTE(v18) = v108;
          LODWORD(v22) = v114;
          v27 = (_BYTE *)v48;
          v28 = v48;
          goto LABEL_34;
        case 'X':
        case 'x':
          v49 = 16;
          v76 = (char *)&byte_22F0C30;
          if ( (v18 & 8) != 0 )
          {
            a4 = (__int64)"0X";
            v50 = "0x";
            if ( (_BYTE)v23 != 120 )
              v50 = "0X";
            v76 = v50;
          }
          goto LABEL_99;
        case 'a':
          if ( --v13 > 0 )
          {
            v95 = v28;
            v84 = v22;
            v72 = v18;
            result = idcv_long(v74);
            if ( (_DWORD)result )
              return result;
            v59 = *(_QWORD *)(v74 + 8);
            LODWORD(v18) = v72;
            LODWORD(v22) = v84;
            v28 = v95;
            v74 += 32;
          }
          else
          {
            if ( v63 )
              return 1531;
            v59 = 0;
          }
          v91 = v28;
          v82 = v22;
          v69 = v18;
          if ( off_2C7C658 )
            off_2C7C658(s, 1024, v59);
          else
            qsnprintf((unsigned int)s, 1024, (unsigned int)"%a", v59, v22, v18);
          v57 = strlen(s);
          LOBYTE(v18) = v69;
          LODWORD(v22) = v82;
          v21 = s;
          v28 = v91;
          v58 = v57;
LABEL_135:
          v27 = (_BYTE *)v28;
          if ( v28 < v57 )
          {
            v63 = 0;
            v26 = 0;
          }
          else
          {
            v27 = (_BYTE *)v57;
            v28 = v58;
            v26 = 0;
            v63 = 0;
          }
          v76 = (char *)&byte_22F0C30;
          goto LABEL_34;
        case 'b':
          v49 = 2;
          v76 = "0b";
          if ( (v18 & 8) == 0 )
            goto LABEL_128;
          goto LABEL_99;
        case 'c':
          if ( --v13 <= 0 )
          {
            s[0] = 0;
            if ( v63 == 1531 )
              goto LABEL_181;
            v63 = 0;
            v26 = 0;
            v27 = (_BYTE *)(&dword_0 + 1);
            v76 = (char *)&byte_22F0C30;
            v28 = 1;
            v21 = s;
            goto LABEL_34;
          }
          v85 = v22;
          v73 = v18;
          result = idcv_long(v74);
          LOBYTE(v18) = v73;
          LODWORD(v22) = v85;
          if ( !(_DWORD)result )
          {
            v63 = 0;
            s[0] = *(_QWORD *)(v74 + 8);
            v74 += 32;
LABEL_147:
            v26 = 0;
            v27 = (_BYTE *)(&dword_0 + 1);
            v28 = 1;
            v76 = (char *)&byte_22F0C30;
            v21 = s;
            goto LABEL_34;
          }
          s[0] = 0;
          if ( (_DWORD)result != 1531 )
            return result;
          goto LABEL_181;
        case 'd':
        case 'i':
          if ( --v13 <= 0 )
          {
            if ( v63 != 1531 )
            {
              if ( (v18 & 2) != 0 )
              {
                if ( !v28 )
                {
LABEL_103:
                  v26 = 0;
                  v27 = nullptr;
                  v21 = nullptr;
                  v63 = 0;
                  v76 = (char *)&byte_22F0C30;
                  goto LABEL_34;
                }
                v76 = "+";
              }
              else
              {
                v63 = v18 & 4;
                if ( (v18 & 4) != 0 )
                {
                  if ( !v28 )
                  {
                    v63 = 0;
LABEL_179:
                    v26 = 0;
                    v27 = nullptr;
                    v21 = nullptr;
                    v76 = (char *)&byte_22F0C30;
                    goto LABEL_34;
                  }
                  v76 = " ";
                }
                else
                {
                  if ( !v28 )
                    goto LABEL_179;
                  v76 = (char *)&byte_22F0C30;
                }
              }
              v49 = 10;
              v51 = 0;
              goto LABEL_110;
            }
          }
          else
          {
            v52 = v74;
            if ( *(_BYTE *)v74 == 2 )
              goto LABEL_108;
            v100 = v28;
            v89 = v22;
            v80 = v18;
            v66 = v23;
            result = idcv_int64(v74);
            LOBYTE(v23) = v66;
            LOBYTE(v18) = v80;
            LODWORD(v22) = v89;
            v28 = v100;
            if ( !(_DWORD)result )
            {
              v52 = v74;
LABEL_108:
              v53 = *(_QWORD *)(v52 + 8);
              v74 = v52 + 32;
              v51 = v53;
              if ( v53 >= 0 )
              {
                v63 = v18 & 2;
                if ( (v18 & 2) != 0 )
                {
                  v27 = (_BYTE *)(v28 | v53);
                  if ( !(v28 | v53) )
                  {
                    a4 = 0;
                    v26 = 0;
                    v28 = 0;
                    v63 = 0;
                    v21 = nullptr;
                    v76 = (char *)&byte_22F0C30;
                    goto LABEL_34;
                  }
                  v49 = 10;
                  v76 = "+";
                }
                else if ( (v18 & 4) != 0 )
                {
                  a4 = v28 | v53;
                  v27 = (_BYTE *)a4;
                  if ( !a4 )
                    goto LABEL_211;
                  v49 = 10;
                  v76 = " ";
                }
                else
                {
                  a4 = v28 | v53;
                  v27 = (_BYTE *)a4;
                  if ( !a4 )
                  {
LABEL_211:
                    v26 = 0;
                    v28 = 0;
                    v21 = nullptr;
                    v76 = (char *)&byte_22F0C30;
                    goto LABEL_34;
                  }
                  v49 = 10;
                  v76 = (char *)&byte_22F0C30;
                }
              }
              else
              {
                v49 = 10;
                v76 = "-";
                v51 = -v53;
              }
LABEL_110:
              v54 = 39;
              if ( (_BYTE)v23 == 88 )
                v54 = 7;
              v21 = v117;
              while ( 1 )
              {
                v55 = v51 % v49 + 48;
                if ( v55 > 57 )
                  v55 += v54;
                *--v21 = v55;
                if ( v51 < v49 )
                  break;
                v51 /= v49;
              }
              if ( v28 > 1024 )
                v28 = 1024;
              if ( v28 <= v117 - v21 )
              {
                v111 = v22;
                v27 = (_BYTE *)(v117 - v21);
                v102 = v18;
                v56 = strlen(v76);
                v63 = 0;
                v28 = v117 - v21;
                LOBYTE(v18) = v102;
                LODWORD(v22) = v111;
              }
              else
              {
                v115 = v22;
                v27 = (_BYTE *)v28;
                v109 = v18;
                v67 = v28;
                memset(&v117[-v28], 48, v28 - (v117 - v21));
                v56 = strlen(v76);
                v21 = &v117[-v67];
                v28 = v67;
                v63 = 0;
                LOBYTE(v18) = v109;
                LODWORD(v22) = v115;
              }
              v26 = v56;
              goto LABEL_34;
            }
LABEL_180:
            if ( (_DWORD)result != 1531 )
              return result;
          }
LABEL_181:
          v26 = 0;
          v76 = (char *)&byte_22F0C30;
LABEL_171:
          v74 += 32;
          v27 = &byte_5;
          v28 = 5;
          v63 = 1531;
          v21 = "<obj>";
LABEL_34:
          v29 = (int)v22 - v26 - (_QWORD)v27;
          if ( (v18 & 0x10) == 0 )
          {
            if ( (v18 & 1) == 0 )
            {
              v30 = 32;
              goto LABEL_37;
            }
            v32 = *v76;
LABEL_44:
            if ( !v32 )
              goto LABEL_64;
            goto LABEL_45;
          }
          v38 = v76;
          v39 = *v76;
          if ( !*v76 )
          {
            if ( (v18 & 1) != 0 )
              goto LABEL_64;
            v30 = 48;
            goto LABEL_37;
          }
          v98 = v18;
          v107 = v28;
          v113 = v29;
          do
          {
            ++v38;
            result = a1(a2, (unsigned int)v39);
            if ( (_DWORD)result )
              return result;
            v39 = *v38;
          }
          while ( *v38 );
          v28 = v107;
          v12 = (_DWORD)v38 + v12 - (_DWORD)v76;
          v29 = v113;
          if ( (v98 & 1) == 0 )
          {
            v76 = v38;
            v30 = 48;
LABEL_37:
            a4 = v29 - 1;
            v31 = v29 - 1;
            if ( (__int64)(v29 - 1) < 0 )
            {
              --v29;
              v32 = *v76;
              goto LABEL_44;
            }
            v104 = v28;
            v112 = v29 - 1;
            while ( 1 )
            {
              result = a1(a2, v30);
              if ( (_DWORD)result )
                return result;
              v29 = v31 - 1;
              if ( !v31 )
                break;
              --v31;
            }
            a4 = v112;
            v32 = *v76;
            v28 = v104;
            v12 += v112 + 1;
            if ( !*v76 )
            {
              if ( v104 - 1 < 0 )
                break;
              goto LABEL_65;
            }
LABEL_45:
            v33 = v76;
            v97 = v28;
            v105 = v29;
            do
            {
              ++v33;
              result = a1(a2, (unsigned int)v32);
              if ( (_DWORD)result )
                return result;
              v32 = *v33;
            }
            while ( *v33 );
            v28 = v97;
            v29 = v105;
            v12 = v12 + (_DWORD)v33 - (_DWORD)v76;
          }
LABEL_64:
          if ( v28 - 1 < 0 )
            goto LABEL_154;
LABEL_65:
          v86 = v12;
          v36 = v21;
          v77 = (_DWORD)v21 + v28;
          v37 = &v21[v28];
          v106 = v29;
          do
          {
            result = a1(a2, (unsigned int)*v36++);
            if ( (_DWORD)result )
              return result;
          }
          while ( v37 != v36 );
          v29 = v106;
          v12 = v77 - (_DWORD)v21 + v86;
LABEL_154:
          v60 = v29 - 1;
          if ( (__int64)(v29 - 1) >= 0 )
          {
            while ( 1 )
            {
              result = a1(a2, 32);
              if ( (_DWORD)result )
                return result;
              ++v12;
              if ( v60-- == 0 )
                goto LABEL_8;
            }
          }
          break;
        case 'o':
          v49 = 8;
          v76 = "0";
          if ( (v18 & 8) == 0 )
LABEL_128:
            v76 = (char *)&byte_22F0C30;
          goto LABEL_99;
        case 's':
          if ( --v13 <= 0 )
            goto LABEL_187;
          v81 = v22;
          v68 = v18;
          v90 = v28;
          result = idcv_string(v74, v21, v23, a4, v22, v18);
          LOBYTE(v18) = v68;
          LODWORD(v22) = v81;
          if ( (_DWORD)result )
            goto LABEL_180;
          v28 = v90;
          v21 = (char *)haystack;
          if ( *(_QWORD *)(v74 + 16) )
            v21 = *(char **)(v74 + 8);
          if ( v21 )
          {
            v57 = strlen(v21);
            v74 += 32;
            LOBYTE(v18) = v68;
            LODWORD(v22) = v81;
            v58 = v57;
            v28 = v90;
          }
          else
          {
            v74 += 32;
LABEL_187:
            v58 = 6;
            v57 = 6;
            v21 = "(null)";
          }
          goto LABEL_135;
        case 'u':
          v49 = 10;
          v76 = (char *)&byte_22F0C30;
LABEL_99:
          if ( --v13 <= 0 )
          {
            if ( v63 == 1531 )
              goto LABEL_170;
            if ( !v28 )
              goto LABEL_103;
            v51 = 0;
          }
          else
          {
            if ( *(_BYTE *)v74 == 2 )
            {
              v51 = *(_QWORD *)(v74 + 8);
              v74 += 32;
              a4 = v51 | v28;
              if ( v51 | v28 )
                goto LABEL_110;
              v28 = 0;
              goto LABEL_103;
            }
            v110 = v28;
            v101 = v22;
            v92 = v18;
            v70 = v23;
            result = idcv_int64(v74);
            LOBYTE(v23) = v70;
            LOBYTE(v18) = v92;
            LODWORD(v22) = v101;
            v28 = v110;
            if ( (_DWORD)result )
            {
              if ( (_DWORD)result != 1531 )
                return result;
LABEL_170:
              v93 = v22;
              v71 = v18;
              v62 = strlen(v76);
              LOBYTE(v18) = v71;
              LODWORD(v22) = v93;
              v26 = v62;
              goto LABEL_171;
            }
            v51 = *(_QWORD *)(v74 + 8);
            a4 = v51 | v110;
            if ( !(v51 | v110) )
            {
              v63 = 0;
              v28 = 0;
              v74 += 32;
              goto LABEL_179;
            }
            v74 += 32;
          }
          goto LABEL_110;
        default:
          goto LABEL_33;
      }
LABEL_8:
      v9 = *v15;
      v8 = v15 + 1;
      if ( !*v15 )
      {
        v5 = v75;
        v16 = v12;
LABEL_11:
        *(_QWORD *)(v5 + 8) = v16;
        return 0;
      }
      continue;
    }
    break;
  }
  if ( --v13 > 0 )
  {
    v94 = v22;
    v83 = v18;
    result = idcv_long(v74);
    if ( !(_DWORD)result )
    {
      v28 = *(_QWORD *)(v74 + 8);
      v18 = v83;
      v22 = v94;
      v74 += 32;
      goto LABEL_165;
    }
  }
  else
  {
    if ( !v63 )
    {
      v28 = 0;
LABEL_165:
      v23 = (unsigned __int8)v21[2];
      v63 = 0;
      v21 += 2;
      goto LABEL_59;
    }
    return 1531;
  }
  return result;
}
