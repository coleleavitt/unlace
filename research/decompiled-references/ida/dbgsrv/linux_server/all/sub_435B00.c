/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_435B00
// Address: 0x0000000000435B00

//----- (0000000000435B00) ----------------------------------------------------
__int64 __fastcall sub_435B00(
        __int64 (__fastcall *a1)(__int64, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rax
  __int64 v13; // r13
  int v14; // r11d
  char *v15; // rax
  char *v16; // rbx
  char v17; // al
  int v20; // r15d
  int v21; // r14d
  __int64 result; // rax
  char *v23; // r13
  __int64 v24; // rax
  char *v25; // rbx
  int v26; // r9d
  char v27; // al
  char *v28; // rdx
  char *v29; // rsi
  int v30; // r8d
  int v31; // edx
  unsigned int v32; // ecx
  size_t v33; // rax
  size_t v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // r11
  __int64 v37; // r8
  unsigned int v38; // edi
  __int64 v39; // rbx
  char v40; // al
  char *v41; // rbx
  char v42; // al
  unsigned int v43; // edx
  __int64 v44; // rcx
  char *v45; // rbx
  char *v46; // r15
  char *v47; // rbx
  char v48; // al
  int v49; // edx
  __int64 v50; // rax
  __m128i *v51; // rdx
  int v52; // ecx
  int v53; // ecx
  char v54; // al
  int i; // r8d
  __int64 v56; // rdx
  size_t v57; // rax
  unsigned __int64 v58; // rbx
  const char *v59; // rax
  unsigned __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rcx
  char v63; // al
  char v64; // dl
  size_t v65; // rax
  size_t v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rbx
  size_t v71; // rax
  int v72; // [rsp+0h] [rbp-488h]
  char v73; // [rsp+0h] [rbp-488h]
  char v74; // [rsp+0h] [rbp-488h]
  char v75; // [rsp+0h] [rbp-488h]
  __int64 v76; // [rsp+0h] [rbp-488h]
  char v77; // [rsp+0h] [rbp-488h]
  char v78; // [rsp+0h] [rbp-488h]
  char v79; // [rsp+0h] [rbp-488h]
  char v80; // [rsp+0h] [rbp-488h]
  char v81; // [rsp+0h] [rbp-488h]
  char v82; // [rsp+0h] [rbp-488h]
  __int64 v83; // [rsp+8h] [rbp-480h]
  char *v85; // [rsp+18h] [rbp-470h]
  int v86; // [rsp+18h] [rbp-470h]
  int v87; // [rsp+18h] [rbp-470h]
  int v88; // [rsp+18h] [rbp-470h]
  char v89; // [rsp+18h] [rbp-470h]
  int v90; // [rsp+18h] [rbp-470h]
  int v91; // [rsp+18h] [rbp-470h]
  char v92; // [rsp+18h] [rbp-470h]
  int v93; // [rsp+18h] [rbp-470h]
  int v94; // [rsp+18h] [rbp-470h]
  int v95; // [rsp+20h] [rbp-468h]
  char v96; // [rsp+20h] [rbp-468h]
  __int64 v97; // [rsp+20h] [rbp-468h]
  int v98; // [rsp+20h] [rbp-468h]
  __int64 v99; // [rsp+20h] [rbp-468h]
  __int64 v100; // [rsp+20h] [rbp-468h]
  char v101; // [rsp+20h] [rbp-468h]
  int v102; // [rsp+20h] [rbp-468h]
  int v103; // [rsp+20h] [rbp-468h]
  __int64 v104; // [rsp+20h] [rbp-468h]
  char v105; // [rsp+28h] [rbp-460h]
  __int64 v106; // [rsp+28h] [rbp-460h]
  char v107; // [rsp+28h] [rbp-460h]
  __int64 v108; // [rsp+28h] [rbp-460h]
  __int64 v109; // [rsp+28h] [rbp-460h]
  int v110; // [rsp+28h] [rbp-460h]
  char v111; // [rsp+28h] [rbp-460h]
  int v112; // [rsp+30h] [rbp-458h]
  __int64 v113; // [rsp+30h] [rbp-458h]
  __int64 v114; // [rsp+30h] [rbp-458h]
  __int64 v115; // [rsp+30h] [rbp-458h]
  __int64 v116; // [rsp+30h] [rbp-458h]
  char v117; // [rsp+30h] [rbp-458h]
  char v118; // [rsp+30h] [rbp-458h]
  __int64 v119; // [rsp+30h] [rbp-458h]
  int v120; // [rsp+30h] [rbp-458h]
  int v121; // [rsp+38h] [rbp-450h]
  __int64 v122; // [rsp+38h] [rbp-450h]
  int v123; // [rsp+38h] [rbp-450h]
  int v124; // [rsp+38h] [rbp-450h]
  char s[1024]; // [rsp+40h] [rbp-448h] BYREF
  _BYTE v126[8]; // [rsp+440h] [rbp-48h] BYREF
  unsigned __int64 v127; // [rsp+448h] [rbp-40h]

  v12 = *(_QWORD *)(a4 + 8);
  v127 = __readfsqword(0x28u);
  v13 = a4;
  if ( (int)v12 <= 0
    || (v14 = v12, v83 = a3 + 32, !*(_QWORD *)(a3 + 16))
    || (v15 = *(char **)(a3 + 8), v16 = v15 + 1, (v17 = *v15) == 0) )
  {
    v24 = 0;
    goto LABEL_11;
  }
  v72 = 0;
  v20 = 0;
  v21 = v14;
  while ( 2 )
  {
    if ( v17 != 37 )
    {
      result = a1(a2, (unsigned int)v17);
      if ( (_DWORD)result )
        return result;
      ++v20;
      v23 = v16;
      goto LABEL_8;
    }
    v25 = v16 + 1;
    v26 = 0;
    while ( 1 )
    {
      v27 = *(v25 - 1);
      v28 = v25 - 1;
      if ( v27 == 43 )
      {
        v26 |= 2u;
        goto LABEL_17;
      }
      if ( v27 > 43 )
        break;
      if ( v27 == 32 )
      {
        v26 |= 4u;
      }
      else
      {
        if ( v27 != 35 )
        {
          v29 = v25 - 1;
          if ( v27 != 42 )
            goto LABEL_32;
          if ( --v21 > 0 )
          {
            v96 = v26;
            result = sub_442390(v83, a5, a6, a7, a8, a9, a10, a11, a12);
            if ( (_DWORD)result )
              return result;
            v50 = *(_QWORD *)(v83 + 8);
            v28 = v25 - 1;
            LOBYTE(v26) = v96;
            v72 = v50;
            v83 += 32;
            if ( (int)v50 < 0 )
            {
              LOBYTE(v26) = v96 | 1;
              v72 = -(int)v50;
            }
          }
          else if ( v72 )
          {
            return 1531;
          }
          v30 = v72;
          v29 = v28 + 1;
          v72 = 0;
          v31 = (unsigned __int8)v28[1];
          goto LABEL_53;
        }
        v26 |= 8u;
      }
LABEL_17:
      ++v25;
    }
    if ( v27 == 45 )
    {
      v26 |= 1u;
      goto LABEL_17;
    }
    if ( v27 == 48 )
    {
      v29 = v25;
      if ( (v26 & 1) == 0 )
        LOBYTE(v26) = v26 | 0x10;
      v27 = *v25;
LABEL_32:
      v32 = v27;
      v30 = -1;
      if ( (unsigned int)v27 > 0x7F )
      {
LABEL_33:
        v112 = v30;
        v105 = v26;
        v33 = strlen(v29);
        LOBYTE(v26) = v105;
        v34 = 0;
        v35 = v33;
        v36 = v33;
        v30 = v112;
        v85 = "";
        v23 = "";
        goto LABEL_34;
      }
    }
    else
    {
      v32 = v27;
      v29 = v25 - 1;
    }
    v30 = -1;
    while ( v32 - 48 <= 9 )
    {
      v49 = 0;
      if ( v30 != -1 )
        v49 = 10 * v30;
      v32 = *++v29;
      v30 = (char)(v27 - 48) + v49;
      v27 = v32;
      if ( v32 > 0x7F )
        goto LABEL_33;
    }
    v31 = (unsigned __int8)*v29;
LABEL_53:
    if ( (_BYTE)v31 != 46 )
    {
      v36 = -1;
      goto LABEL_59;
    }
    v42 = v29[1];
    if ( v42 != 42 )
    {
      v43 = v42;
      ++v29;
      if ( (unsigned int)v42 > 0x7F )
        goto LABEL_33;
      v36 = 0;
      while ( v43 - 48 <= 9 )
      {
        ++v29;
        v36 = (char)(v42 - 48) + 10 * v36;
        v43 = *v29;
        v42 = *v29;
        if ( v43 > 0x7F )
          goto LABEL_33;
      }
      v31 = (unsigned __int8)*v29;
LABEL_59:
      if ( (unsigned __int8)(v31 - 70) <= 0x26u )
      {
        v44 = 0x4400000141LL;
        if ( _bittest64(&v44, (unsigned int)(v31 - 70)) )
          LOBYTE(v31) = *++v29;
      }
      v23 = v29 + 1;
      switch ( (char)v31 )
      {
        case '%':
          s[0] = 37;
          goto LABEL_147;
        case 'E':
        case 'G':
        case 'e':
        case 'f':
        case 'g':
          if ( --v21 <= 0 )
          {
            if ( v72 == 1531 )
              goto LABEL_181;
            v51 = nullptr;
          }
          else
          {
            v87 = v30;
            v73 = v26;
            v97 = v36;
            result = sub_442640(v83, a5, a6, a7, a8, a9, a10, a11, a12);
            LOBYTE(v26) = v73;
            v30 = v87;
            if ( (_DWORD)result )
              goto LABEL_180;
            v36 = v97;
            v51 = (__m128i *)(v83 + 8);
            v83 += 32;
          }
          if ( (unsigned int)(v30 + 1) <= 1 )
          {
            v53 = 15;
            v30 = 0;
          }
          else
          {
            v52 = 0;
            if ( v36 >= 0 )
              v52 = v36;
            v53 = (v30 << 8) | (v52 << 16) | 0xF;
          }
          v88 = v30;
          v74 = v26;
          sub_47C900(s, 1024, v51, v53);
          v54 = s[0];
          v29 = s;
          for ( i = v88; v54 == 32; ++v29 )
            v54 = v29[1];
          if ( v54 == 45 )
          {
            ++v29;
            v56 = 1;
            v85 = (char *)"-";
          }
          else
          {
            v56 = 1;
            v85 = (char *)"+";
            if ( (v74 & 2) == 0 )
            {
              v85 = " ";
              if ( (v74 & 4) == 0 )
              {
                v56 = 0;
                v85 = "";
              }
            }
          }
          v123 = i;
          v117 = v74;
          v108 = v56;
          v57 = strlen(v29);
          v34 = v108;
          v72 = 0;
          LOBYTE(v26) = v117;
          v30 = v123;
          v35 = v57;
          v36 = v57;
          goto LABEL_34;
        case 'X':
        case 'x':
          v58 = 16;
          v85 = "";
          if ( (v26 & 8) != 0 )
          {
            v59 = "0x";
            if ( (_BYTE)v31 != 120 )
              v59 = "0X";
            v85 = (char *)v59;
          }
          goto LABEL_99;
        case 'a':
          if ( --v21 > 0 )
          {
            v104 = v36;
            v93 = v30;
            v81 = v26;
            result = sub_442390(v83, a5, a6, a7, a8, a9, a10, a11, a12);
            if ( (_DWORD)result )
              return result;
            v68 = *(_QWORD *)(v83 + 8);
            LOBYTE(v26) = v81;
            v30 = v93;
            v36 = v104;
            v83 += 32;
          }
          else
          {
            if ( v72 )
              return 1531;
            v68 = 0;
          }
          v100 = v36;
          v91 = v30;
          v78 = v26;
          if ( qword_4C5700[3] )
            ((void (__fastcall *)(char *, __int64, __int64))qword_4C5700[3])(s, 1024, v68);
          else
            sub_485490(s, 1024, "%a", a5);
          v66 = strlen(s);
          LOBYTE(v26) = v78;
          v30 = v91;
          v29 = s;
          v36 = v100;
          v67 = v66;
LABEL_135:
          v35 = v36;
          if ( v36 < v66 )
          {
            v72 = 0;
            v34 = 0;
          }
          else
          {
            v35 = v66;
            v36 = v67;
            v34 = 0;
            v72 = 0;
          }
          v85 = "";
          goto LABEL_34;
        case 'b':
          v58 = 2;
          v85 = "0b";
          if ( (v26 & 8) == 0 )
            goto LABEL_128;
          goto LABEL_99;
        case 'c':
          if ( --v21 <= 0 )
          {
            s[0] = 0;
            if ( v72 == 1531 )
              goto LABEL_181;
            v72 = 0;
            v34 = 0;
            v35 = 1;
            v85 = "";
            v36 = 1;
            v29 = s;
            goto LABEL_34;
          }
          v94 = v30;
          v82 = v26;
          result = sub_442390(v83, a5, a6, a7, a8, a9, a10, a11, a12);
          LOBYTE(v26) = v82;
          v30 = v94;
          if ( !(_DWORD)result )
          {
            v72 = 0;
            s[0] = *(_QWORD *)(v83 + 8);
            v83 += 32;
LABEL_147:
            v34 = 0;
            v35 = 1;
            v36 = 1;
            v85 = "";
            v29 = s;
            goto LABEL_34;
          }
          s[0] = 0;
          if ( (_DWORD)result != 1531 )
            return result;
          goto LABEL_181;
        case 'd':
        case 'i':
          if ( --v21 <= 0 )
          {
            if ( v72 != 1531 )
            {
              if ( (v26 & 2) != 0 )
              {
                if ( !v36 )
                {
LABEL_103:
                  v34 = 0;
                  v35 = 0;
                  v29 = nullptr;
                  v72 = 0;
                  v85 = "";
                  goto LABEL_34;
                }
                v85 = (char *)"+";
              }
              else
              {
                v72 = v26 & 4;
                if ( (v26 & 4) != 0 )
                {
                  if ( !v36 )
                  {
                    v72 = 0;
LABEL_179:
                    v34 = 0;
                    v35 = 0;
                    v29 = nullptr;
                    v85 = "";
                    goto LABEL_34;
                  }
                  v85 = " ";
                }
                else
                {
                  if ( !v36 )
                    goto LABEL_179;
                  v85 = "";
                }
              }
              v58 = 10;
              v60 = 0;
              goto LABEL_110;
            }
          }
          else
          {
            v61 = v83;
            if ( *(_BYTE *)v83 == 2 )
              goto LABEL_108;
            v109 = v36;
            v98 = v30;
            v89 = v26;
            v75 = v31;
            result = sub_4424F0(v83, a5, a6, a7, a8, a9, a10, a11, a12);
            LOBYTE(v31) = v75;
            LOBYTE(v26) = v89;
            v30 = v98;
            v36 = v109;
            if ( !(_DWORD)result )
            {
              v61 = v83;
LABEL_108:
              v62 = *(_QWORD *)(v61 + 8);
              v83 = v61 + 32;
              v60 = v62;
              if ( v62 >= 0 )
              {
                v72 = v26 & 2;
                if ( (v26 & 2) != 0 )
                {
                  v35 = v36 | v62;
                  if ( !(v36 | v62) )
                  {
                    v34 = 0;
                    v36 = 0;
                    v72 = 0;
                    v29 = nullptr;
                    v85 = "";
                    goto LABEL_34;
                  }
                  v58 = 10;
                  v85 = (char *)"+";
                }
                else if ( (v26 & 4) != 0 )
                {
                  v35 = v36 | v62;
                  if ( !(v36 | v62) )
                    goto LABEL_211;
                  v58 = 10;
                  v85 = " ";
                }
                else
                {
                  v35 = v36 | v62;
                  if ( !(v36 | v62) )
                  {
LABEL_211:
                    v34 = 0;
                    v36 = 0;
                    v29 = nullptr;
                    v85 = "";
                    goto LABEL_34;
                  }
                  v58 = 10;
                  v85 = "";
                }
              }
              else
              {
                v58 = 10;
                v85 = (char *)"-";
                v60 = -v62;
              }
LABEL_110:
              v63 = 39;
              if ( (_BYTE)v31 == 88 )
                v63 = 7;
              v29 = v126;
              while ( 1 )
              {
                v64 = v60 % v58 + 48;
                if ( v64 > 57 )
                  v64 += v63;
                *--v29 = v64;
                if ( v60 < v58 )
                  break;
                v60 /= v58;
              }
              if ( v36 > 1024 )
                v36 = 1024;
              if ( v36 <= v126 - v29 )
              {
                v120 = v30;
                v35 = v126 - v29;
                v111 = v26;
                v65 = strlen(v85);
                v72 = 0;
                v36 = v126 - v29;
                LOBYTE(v26) = v111;
                v30 = v120;
              }
              else
              {
                v124 = v30;
                v35 = v36;
                v118 = v26;
                v76 = v36;
                memset(&v126[-v36], 48, v36 - (v126 - v29));
                v65 = strlen(v85);
                v29 = &v126[-v76];
                v36 = v76;
                v72 = 0;
                LOBYTE(v26) = v118;
                v30 = v124;
              }
              v34 = v65;
              goto LABEL_34;
            }
LABEL_180:
            if ( (_DWORD)result != 1531 )
              return result;
          }
LABEL_181:
          v34 = 0;
          v85 = "";
LABEL_171:
          v83 += 32;
          v35 = 5;
          v36 = 5;
          v72 = 1531;
          v29 = "<obj>";
LABEL_34:
          v37 = v30 - v34 - v35;
          if ( (v26 & 0x10) == 0 )
          {
            if ( (v26 & 1) == 0 )
            {
              v38 = 32;
              goto LABEL_37;
            }
            v40 = *v85;
LABEL_44:
            if ( !v40 )
              goto LABEL_64;
            goto LABEL_45;
          }
          v47 = v85;
          v48 = *v85;
          if ( !*v85 )
          {
            if ( (v26 & 1) != 0 )
              goto LABEL_64;
            v38 = 48;
            goto LABEL_37;
          }
          v107 = v26;
          v116 = v36;
          v122 = v37;
          do
          {
            ++v47;
            result = a1(a2, (unsigned int)v48);
            if ( (_DWORD)result )
              return result;
            v48 = *v47;
          }
          while ( *v47 );
          v36 = v116;
          v20 = (_DWORD)v47 + v20 - (_DWORD)v85;
          v37 = v122;
          if ( (v107 & 1) == 0 )
          {
            v85 = v47;
            v38 = 48;
LABEL_37:
            v39 = v37 - 1;
            if ( v37 - 1 < 0 )
            {
              --v37;
              v40 = *v85;
              goto LABEL_44;
            }
            v113 = v36;
            v121 = v37 - 1;
            while ( 1 )
            {
              result = a1(a2, v38);
              if ( (_DWORD)result )
                return result;
              v37 = v39 - 1;
              if ( !v39 )
                break;
              --v39;
            }
            v40 = *v85;
            v36 = v113;
            v20 += v121 + 1;
            if ( !*v85 )
            {
              if ( v113 - 1 < 0 )
                break;
              goto LABEL_65;
            }
LABEL_45:
            v41 = v85;
            v106 = v36;
            v114 = v37;
            do
            {
              ++v41;
              result = a1(a2, (unsigned int)v40);
              if ( (_DWORD)result )
                return result;
              v40 = *v41;
            }
            while ( *v41 );
            v36 = v106;
            v37 = v114;
            v20 = v20 + (_DWORD)v41 - (_DWORD)v85;
          }
LABEL_64:
          if ( v36 - 1 < 0 )
            goto LABEL_154;
LABEL_65:
          v95 = v20;
          v45 = v29;
          v86 = (_DWORD)v29 + v36;
          v46 = &v29[v36];
          v115 = v37;
          do
          {
            result = a1(a2, (unsigned int)*v45++);
            if ( (_DWORD)result )
              return result;
          }
          while ( v46 != v45 );
          v37 = v115;
          v20 = v86 - (_DWORD)v29 + v95;
LABEL_154:
          v69 = v37 - 1;
          if ( v37 - 1 >= 0 )
          {
            while ( 1 )
            {
              result = a1(a2, 32);
              if ( (_DWORD)result )
                return result;
              ++v20;
              if ( v69-- == 0 )
                goto LABEL_8;
            }
          }
          break;
        case 'o':
          v58 = 8;
          v85 = "0";
          if ( (v26 & 8) == 0 )
LABEL_128:
            v85 = "";
          goto LABEL_99;
        case 's':
          if ( --v21 <= 0 )
            goto LABEL_187;
          v90 = v30;
          v77 = v26;
          v99 = v36;
          result = sub_441D50(v83, a5, a6, a7, a8, a9, a10, a11, a12);
          LOBYTE(v26) = v77;
          v30 = v90;
          if ( (_DWORD)result )
            goto LABEL_180;
          v36 = v99;
          v29 = (char *)s1;
          if ( *(_QWORD *)(v83 + 16) )
            v29 = *(char **)(v83 + 8);
          if ( v29 )
          {
            v66 = strlen(v29);
            v83 += 32;
            LOBYTE(v26) = v77;
            v30 = v90;
            v67 = v66;
            v36 = v99;
          }
          else
          {
            v83 += 32;
LABEL_187:
            v67 = 6;
            v66 = 6;
            v29 = "(null)";
          }
          goto LABEL_135;
        case 'u':
          v58 = 10;
          v85 = "";
LABEL_99:
          if ( --v21 <= 0 )
          {
            if ( v72 == 1531 )
              goto LABEL_170;
            if ( !v36 )
              goto LABEL_103;
            v60 = 0;
          }
          else
          {
            if ( *(_BYTE *)v83 == 2 )
            {
              v60 = *(_QWORD *)(v83 + 8);
              v83 += 32;
              if ( v60 | v36 )
                goto LABEL_110;
              v36 = 0;
              goto LABEL_103;
            }
            v119 = v36;
            v110 = v30;
            v101 = v26;
            v79 = v31;
            result = sub_4424F0(v83, a5, a6, a7, a8, a9, a10, a11, a12);
            LOBYTE(v31) = v79;
            LOBYTE(v26) = v101;
            v30 = v110;
            v36 = v119;
            if ( (_DWORD)result )
            {
              if ( (_DWORD)result != 1531 )
                return result;
LABEL_170:
              v102 = v30;
              v80 = v26;
              v71 = strlen(v85);
              LOBYTE(v26) = v80;
              v30 = v102;
              v34 = v71;
              goto LABEL_171;
            }
            v60 = *(_QWORD *)(v83 + 8);
            if ( !(v60 | v119) )
            {
              v72 = 0;
              v36 = 0;
              v83 += 32;
              goto LABEL_179;
            }
            v83 += 32;
          }
          goto LABEL_110;
        default:
          goto LABEL_33;
      }
LABEL_8:
      v17 = *v23;
      v16 = v23 + 1;
      if ( !*v23 )
      {
        v13 = a4;
        v24 = v20;
LABEL_11:
        *(_QWORD *)(v13 + 8) = v24;
        return 0;
      }
      continue;
    }
    break;
  }
  if ( --v21 > 0 )
  {
    v103 = v30;
    v92 = v26;
    result = sub_442390(v83, a5, a6, a7, a8, a9, a10, a11, a12);
    if ( !(_DWORD)result )
    {
      v36 = *(_QWORD *)(v83 + 8);
      LOBYTE(v26) = v92;
      v30 = v103;
      v83 += 32;
      goto LABEL_165;
    }
  }
  else
  {
    if ( !v72 )
    {
      v36 = 0;
LABEL_165:
      v31 = (unsigned __int8)v29[2];
      v72 = 0;
      v29 += 2;
      goto LABEL_59;
    }
    return 1531;
  }
  return result;
}
// 435F52: variable 'a9' is possibly undefined
// 435F52: variable 'a10' is possibly undefined
// 4C5700: using guessed type __int64 qword_4C5700[4];
// 4C5718: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
