/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43020
// Address: 0x00043020

//----- (00043020) --------------------------------------------------------
void __fastcall sub_43020(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // r6
  int v11; // r1
  int v12; // r7
  int v13; // r5
  char *v14; // r0
  char *v15; // r4
  int v16; // r1
  int v17; // r0
  _DWORD *v18; // r5
  unsigned int utf8_char; // r0
  unsigned int v20; // r5
  int v21; // r2
  int v22; // r3
  unsigned int v23; // r2
  int v24; // r3
  unsigned int v25; // r7
  int v26; // r4
  int v27; // r5
  unsigned int v28; // r0
  int v29; // r6
  int v30; // r0
  char *v31; // r0
  int v32; // r1
  char *v33; // r5
  int v34; // r6
  char *v35; // r0
  int v36; // r2
  char *v37; // r7
  char *v38; // r4
  int v39; // r0
  unsigned int v40; // r2
  unsigned __int8 **v41; // r0
  int v42; // r0
  int v43; // r0
  char *v44; // r2
  unsigned __int8 *v45; // r0
  char *v46; // r1
  unsigned int v47; // r0
  int v48; // r5
  char *v49; // r7
  int v50; // r0
  int v51; // r0
  int v52; // r1
  char *v53; // r4
  int v54; // r0
  int v55; // r4
  unsigned __int8 *v56; // r3
  int v57; // r0
  unsigned __int8 *v58; // r1
  _DWORD *v59; // r4
  int v60; // r5
  int v61; // r0
  char *v62; // r7
  int v63; // r5
  const char **v64; // r4
  int v65; // r0
  const char **v66; // r2
  int v67; // r6
  unsigned __int8 *v68; // r5
  int v69; // r0
  int v70; // r7
  char *v71; // r0
  unsigned int v72; // r3
  int v73; // r0
  unsigned int v74; // r5
  int v75; // r0
  int v76; // r0
  int v77; // r0
  int v78; // r4
  int v79; // r7
  int v80; // r0
  int v81; // r0
  int v82; // r0
  unsigned int v83; // r4
  int v84; // r4
  int v85; // r0
  _DWORD *v86; // r4
  int v87; // r7
  int v88; // r0
  int v89; // r5
  int v90; // r0
  unsigned int v91; // r1
  unsigned int v92; // r2
  char *v93; // r0
  int v94; // r0
  int v95; // r3
  int v96; // r0
  int v97; // r4
  int v98; // r0
  bool v99; // cf
  int v100; // [sp+4h] [bp-8Ch]
  int v101; // [sp+8h] [bp-88h]
  unsigned __int8 *v102; // [sp+8h] [bp-88h]
  int v103; // [sp+Ch] [bp-84h]
  unsigned __int8 *v104; // [sp+Ch] [bp-84h]
  int v105; // [sp+10h] [bp-80h]
  int v106; // [sp+14h] [bp-7Ch]
  size_t v107; // [sp+18h] [bp-78h]
  int v108; // [sp+20h] [bp-70h]
  int v109; // [sp+20h] [bp-70h]
  const char *haystack; // [sp+24h] [bp-6Ch]
  unsigned __int8 **v111; // [sp+2Ch] [bp-64h]
  const char **v112; // [sp+30h] [bp-60h]
  int v113; // [sp+30h] [bp-60h]
  int v114; // [sp+34h] [bp-5Ch]
  unsigned __int8 *v115; // [sp+38h] [bp-58h]
  unsigned int v116; // [sp+3Ch] [bp-54h]
  int v117; // [sp+3Ch] [bp-54h]
  _BYTE *v118; // [sp+40h] [bp-50h]
  unsigned __int8 **v119; // [sp+44h] [bp-4Ch]
  unsigned __int8 **v120; // [sp+48h] [bp-48h]
  unsigned __int8 *v122; // [sp+50h] [bp-40h]
  _BYTE *v123; // [sp+54h] [bp-3Ch]
  unsigned __int8 *v124; // [sp+58h] [bp-38h]
  _DWORD *v125; // [sp+5Ch] [bp-34h]
  int v126; // [sp+60h] [bp-30h]
  unsigned int v127; // [sp+64h] [bp-2Ch]
  int v128; // [sp+64h] [bp-2Ch]
  unsigned int v129; // [sp+64h] [bp-2Ch]
  const char *s1; // [sp+68h] [bp-28h]
  char v131; // [sp+70h] [bp-20h]
  int v132; // [sp+70h] [bp-20h]
  unsigned __int8 *v133; // [sp+70h] [bp-20h]
  char *s; // [sp+78h] [bp-18h] BYREF
  char *v135; // [sp+7Ch] [bp-14h] BYREF
  int v136; // [sp+80h] [bp-10h]
  int v137; // [sp+84h] [bp-Ch]
  unsigned __int8 *v138; // [sp+88h] [bp-8h] BYREF

  s = *(char **)a3;
  haystack = s;
  if ( !s )
    sub_43962(0, a2, a3, a4, v100, v101, v103, v105, v106);
  v10 = a2;
  v107 = *(_DWORD *)(a3 + 4);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a2 + 20))(a2, 0);
  *(_DWORD *)(a1 + 88) = s;
  *(_DWORD *)(a1 + 92) = haystack;
  v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v125 = (_DWORD *)a1;
  v126 = v10;
  if ( v11 >= 1 )
  {
    v12 = v11 & 0xF;
    if ( (v11 & 0xF) != 0 )
    {
      v131 = v11;
      v125[24] = v125[16];
      v13 = v125[11] + 24 * (v12 - 1);
      v14 = strstr(haystack, *(const char **)(v13 + 12));
      if ( v14 )
      {
        v15 = v14;
        v16 = *(_DWORD *)(v13 + 16);
        v17 = (int)&v14[v16 - 1];
        if ( v16 )
          v15 = (char *)v17;
        s = v15;
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v10 + 20))(v10, 0);
        a1 = (int)v125;
        v125[24] = v125[15];
      }
      else
      {
        v15 = (char *)&haystack[strlen(haystack)];
        s = v15;
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v10 + 20))(v10, v12);
        a1 = (int)v125;
      }
      sub_42DA4(a1, v10, (unsigned int)v15, *(_DWORD *)(a1 + 64));
      if ( (v131 & 0x10) == 0 )
        goto LABEL_18;
    }
    else
    {
      v15 = (char *)haystack;
      a1 = (int)v125;
      if ( (v11 & 0x10) == 0 )
      {
LABEL_18:
        v120 = (unsigned __int8 **)(a1 + 96);
        goto LABEL_19;
      }
    }
    v15 += strlen(v15);
    s = v15;
    sub_42DA4(a1, v10, (unsigned int)v15, *(_DWORD *)(a1 + 72));
    v18 = (_DWORD *)(a1 + 72);
    if ( *(v15 - 1) == *(_BYTE *)(a1 + 104) )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v10 + 20))(v10, 16);
    else
      v18 = (_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 96) = *v18;
    goto LABEL_18;
  }
  *(_DWORD *)(a1 + 96) = 0;
  v120 = (unsigned __int8 **)(a1 + 96);
  v15 = (char *)haystack;
LABEL_19:
  v119 = (unsigned __int8 **)(a1 + 60);
  v115 = (unsigned __int8 *)(a1 + 100);
  v123 = (_BYTE *)(a1 + 56);
  v118 = (_BYTE *)(a1 + 104);
  v111 = (unsigned __int8 **)(a1 + 72);
  v122 = (unsigned __int8 *)(a1 + 102);
  v124 = (unsigned __int8 *)(a1 + 105);
  while ( 1 )
  {
    v135 = v15;
    utf8_char = get_utf8_char((unsigned __int8 **)&v135);
    if ( utf8_char < 0x80 )
      break;
    s1 = s;
LABEL_27:
    v23 = *(_DWORD *)(a1 + 48);
    if ( v23 )
    {
      v24 = *(_DWORD *)(a1 + 44);
      v25 = 1;
      v26 = 16;
      v127 = v23;
      while ( 1 )
      {
        v27 = v24 + v26 - 4;
        v28 = *(_DWORD *)(v24 + v26 - 12);
        if ( v28 >= 2 )
        {
          v29 = v24;
          v30 = strncmp(s1, *(const char **)(v24 + v26 - 16), v28 - 1);
          v24 = v29;
          v23 = v127;
          if ( !v30 )
            break;
        }
        v26 += 24;
        v99 = v25++ >= v23;
        if ( v99 )
        {
          v31 = (char *)s1;
          v10 = v126;
          a1 = (int)v125;
          goto LABEL_43;
        }
      }
      sub_42DA4((int)v125, v126, (unsigned int)s1, v125[24]);
      v32 = *(_DWORD *)(v27 - 8);
      v33 = s;
      if ( v32 )
        v33 = &s[v32 - 1];
      s = v33;
      v125[24] = v125[16];
      v34 = v125[11];
      v35 = strstr(v33, *(const char **)(v34 + v26 - 4));
      if ( v35 )
      {
        v36 = *(_DWORD *)(v34 + v26);
        if ( v36 )
          v35 = &v35[v36 - 1];
        s = v35;
        v10 = v126;
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v126 + 20))(v126, 0);
        *v120 = *v119;
      }
      else
      {
        s = &v33[strlen(v33)];
        v10 = v126;
        (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v126 + 20))(v126, v25);
      }
      a1 = (int)v125;
      sub_42DA4((int)v125, v10, (unsigned int)s, v125[16]);
      v31 = s;
    }
    else
    {
      v31 = (char *)s1;
    }
LABEL_43:
    v135 = v31;
    if ( get_utf8_char((unsigned __int8 **)&v135) == *v124 )
    {
      v37 = *(char **)(a1 + 92);
      v38 = s;
      if ( v37 == *(char **)a3 )
      {
LABEL_49:
        v37 = v38;
      }
      else if ( v37 != s )
      {
        while ( 1 )
        {
          v39 = (unsigned __int8)*v37;
          if ( *v37 < 0 )
            break;
          ++v37;
          if ( !isspace(v39) )
            break;
          if ( v38 == v37 )
            goto LABEL_49;
        }
        a1 = (int)v125;
        goto LABEL_55;
      }
      v40 = (unsigned int)v37;
      a1 = (int)v125;
      sub_42DA4((int)v125, v10, v40, v125[24]);
      s += strlen(s);
      sub_42DA4(a1, v10, (unsigned int)s, *(_DWORD *)(a1 + 72));
      v41 = v119;
      if ( *(s - 1) == *v118 )
      {
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v10 + 20))(v10, 16);
        v41 = v111;
      }
      *v120 = *v41;
      v15 = s;
    }
    else
    {
      v38 = s;
LABEL_55:
      v135 = v38;
      v42 = get_utf8_char((unsigned __int8 **)&v135);
      if ( v42 == *v122 || v42 == *v115 )
      {
        *v123 = v42;
        sub_42DA4(a1, v10, (unsigned int)s, *(_DWORD *)(a1 + 96));
        v43 = get_utf8_char((unsigned __int8 **)&s);
        v44 = s;
        if ( v43 == -1 )
          v44 = ++s;
        v45 = sub_42EB8(a1, v10, (unsigned __int8 *)v44, (unsigned __int8)*v123);
        s = (char *)v45;
        if ( !v45 )
          goto LABEL_60;
LABEL_20:
        v15 = s;
      }
      else
      {
        v47 = *(_DWORD *)(a1 + 36);
        v48 = a1;
        v49 = s;
        if ( v47 >= 2 && !strncmp(s, *(const char **)(v48 + 32), v47 - 1) )
        {
          sub_42DA4(v48, v10, (unsigned int)v49, *(_DWORD *)(v48 + 96));
          s += strlen(s);
          sub_42DA4(v48, v10, (unsigned int)s, *(_DWORD *)(v48 + 64));
          *(_DWORD *)(v48 + 96) = *(_DWORD *)(v48 + 60);
          a1 = v48;
          v15 = s;
        }
        else
        {
          v135 = v49;
          v50 = get_utf8_char((unsigned __int8 **)&v135);
          if ( v50 == 95 || (v50 & 0xFFFFFFDF) - 65 <= 0x19 )
          {
            do
            {
              do
              {
                v53 = v135;
                v54 = get_utf8_char((unsigned __int8 **)&v135);
              }
              while ( (unsigned int)(v54 - 48) < 0xA );
            }
            while ( v54 == 95 || (v54 & 0xFFFFFFDF) - 65 < 0x1A );
            v55 = v53 - v49;
            v51 = 0;
            v52 = 1;
            if ( !v55 )
              goto LABEL_94;
            v136 = 0;
            v135 = nullptr;
            v137 = 0;
            v135 = (char *)qvector_reserve((int)&v135, nullptr, v55 + 1, 1u);
            memset(&v135[v136], 0, v55 + 1 - v136);
            v136 = v55 + 1;
            v132 = 0;
            v135[v55] = 0;
            qstrncpy((unsigned int)v135, (unsigned __int8 *)s, v55 + 1);
            a1 = (int)v125;
            v56 = (unsigned __int8 *)v125[24];
            v138 = v56;
            v57 = 4 * v125[20];
            v58 = v56;
            v108 = v55;
            if ( v57 )
            {
              v59 = (_DWORD *)v125[19];
              v60 = v57 - 4;
              do
              {
                v61 = (*(int (__fastcall **)(_DWORD, unsigned __int8 **, char **))(*(_DWORD *)*v59 + 12))(
                        *v59,
                        &v138,
                        &v135)
                    | (v60 == 0);
                v60 -= 4;
                ++v59;
              }
              while ( !v61 );
              v56 = *v120;
              v58 = v138;
              v55 = v108;
              if ( *v120 != v138 )
                goto LABEL_89;
            }
            v116 = v125[6];
            if ( v116 )
            {
              v104 = v56;
              v102 = v58;
              if ( v136 )
                v62 = v135;
              else
                v62 = &byte_B3CBE;
              v128 = v125[5];
              v63 = 0;
              while ( 1 )
              {
                v64 = *(const char ***)(v128 + 16 * v63);
                v65 = *(_DWORD *)(v128 + 16 * v63 + 4);
                v66 = &v64[v65];
                if ( 4 * v65 )
                {
                  v112 = &v64[v65];
                  v67 = 4 * v65;
                  while ( strcmp(v62, *v64) )
                  {
                    v67 -= 4;
                    ++v64;
                    if ( !v67 )
                      goto LABEL_87;
                  }
                  v66 = v112;
                }
                if ( v64 != v66 )
                  break;
LABEL_87:
                if ( ++v63 >= v116 )
                {
                  v10 = v126;
                  a1 = (int)v125;
                  v55 = v108;
                  v56 = v104;
                  v58 = v102;
                  goto LABEL_89;
                }
              }
              v138 = *(unsigned __int8 **)(v128 + 16 * v63 + 12);
              v10 = v126;
              a1 = (int)v125;
              v55 = v108;
              v56 = v104;
              if ( v104 == v138 )
              {
LABEL_91:
                if ( v135 )
                {
                  v136 = 0;
                  qfree(v135);
                  v137 = 0;
                  v135 = nullptr;
                }
                v52 = 0;
                v51 = v55;
                if ( v132 )
                  goto LABEL_20;
                goto LABEL_94;
              }
            }
            else
            {
LABEL_89:
              if ( v56 == v58 )
                goto LABEL_91;
            }
            sub_42DA4(a1, v10, (unsigned int)s, (int)v56);
            s += v55;
            v132 = 2;
            sub_42DA4(a1, v10, (unsigned int)s, (int)v138);
            goto LABEL_91;
          }
          v51 = 0;
          v52 = 1;
LABEL_94:
          v117 = v52;
          v113 = v51;
          v68 = (unsigned __int8 *)s;
          if ( !s )
            goto LABEL_158;
          v135 = s;
          v69 = get_utf8_char((unsigned __int8 **)&v135);
          if ( !v69 )
            goto LABEL_158;
          v70 = v69;
          sub_266B8(&v135, haystack, v107);
          v133 = v68;
          if ( v136 )
            v71 = v135;
          else
            v71 = &byte_B3CBE;
          v129 = qustrlen((unsigned __int8 *)v71) + 1;
          if ( (unsigned int)(v70 - 48) >= 0xA )
          {
            v72 = 0;
            switch ( v70 )
            {
              case '+':
              case '-':
                if ( v68 != (unsigned __int8 *)haystack )
                {
                  v138 = v68;
                  prev_utf8_char(nullptr, (unsigned int *)&v138, (unsigned int)haystack);
                  v73 = get_utf8_char(&v138);
                  v72 = 0;
                  if ( v73 == 46 || (unsigned int)(v73 - 48) < 0xA || (v73 & 0xFFFFFFDF) - 65 < 0x1A )
                    goto LABEL_154;
                }
                break;
              case ',':
              case '/':
              case ':':
              case ';':
              case '<':
              case '=':
              case '>':
              case '?':
              case '@':
              case 'A':
              case 'B':
              case 'C':
              case 'D':
                goto LABEL_154;
              case '.':
              case 'E':
                break;
              default:
                v72 = 0;
                if ( v70 == 101 )
                  break;
                goto LABEL_154;
            }
          }
          v138 = v68;
          v109 = v70 == 46;
          v74 = 1;
          skip_utf8(&v138, 1);
          v75 = get_utf8_char(&v138) | 0x20;
          if ( v70 == 48 && v75 == 120 )
          {
            v138 = v133;
            v74 = 2;
            skip_utf8(&v138, 2);
            v76 = get_utf8_char(&v138);
            v114 = 0;
            if ( v76 != 46 && (unsigned int)(v76 - 48) >= 0xA )
            {
              v72 = 0;
              if ( (v76 & 0xFFFFFFDF) - 65 > 0x19 )
                goto LABEL_154;
            }
          }
          else
          {
            v72 = 0;
            if ( (unsigned int)(v70 - 43) <= 0x1A && ((1 << (v70 - 43)) & 0x4000005) != 0 || (v114 = 1, v70 == 101) )
            {
              if ( v129 < 2 )
                goto LABEL_154;
              v138 = v133;
              v74 = 1;
              skip_utf8(&v138, 1);
              v77 = get_utf8_char(&v138);
              if ( v77 == 46 || (unsigned int)(v77 - 48) < 0xA )
              {
                v114 = 1;
              }
              else
              {
                v114 = 1;
                v72 = 0;
                if ( (v77 & 0xFFFFFFDF) - 65 > 0x19 )
                  goto LABEL_154;
              }
            }
          }
          if ( v74 >= v129 )
          {
            v72 = v74;
            goto LABEL_154;
          }
          v78 = 1;
          v72 = v74;
          while ( 2 )
          {
            while ( 2 )
            {
              v79 = v72;
              while ( 1 )
              {
                v138 = v133;
                if ( v79 < 1 )
                {
                  if ( v79 < 0 )
                  {
                    if ( !under_debugger )
                      interr(1834);
LABEL_198:
                    __debugbreak();
                  }
                }
                else
                {
                  skip_utf8(&v138, v79);
                }
                v80 = get_utf8_char(&v138);
                if ( v80 != 46 && (unsigned int)(v80 - 48) >= 0xA && (v80 & 0xFFFFFFDF) - 65 > 0x19 )
                {
                  v72 = v79;
                  goto LABEL_154;
                }
                v138 = v133;
                if ( v79 >= 1 )
                  skip_utf8(&v138, v79);
                v81 = get_utf8_char(&v138);
                if ( !(((unsigned int)(v81 - 48) < 0xA) | v114) )
                  break;
                if ( (unsigned int)(v81 - 48) > 9 )
                  goto LABEL_141;
LABEL_139:
                v72 = ++v79;
                if ( v79 >= v129 )
                  goto LABEL_154;
              }
              if ( (v81 & 0xFFFFFFDF) - 65 < 6 )
                goto LABEL_139;
LABEL_141:
              if ( v81 == 46 )
              {
                v72 = 0;
                if ( v109 << 31 )
                  goto LABEL_154;
                v72 = v79 + 1;
                v109 = 1;
                if ( v79 + 1 >= v129 )
                {
                  v72 = v79 + 1;
                  goto LABEL_154;
                }
                continue;
              }
              break;
            }
            if ( !((~v78 | ((v81 | 0x20) - 101 - ((v81 | 0x20) - 102 + ((v81 | 0x20) == 101)))) << 31) )
            {
              v138 = v133;
              if ( v79 + 1 < 1 )
              {
                if ( !under_debugger )
                  interr(1834);
                goto LABEL_198;
              }
              skip_utf8(&v138, v79 + 1);
              v82 = get_utf8_char(&v138);
              if ( v82 == 43 || (v72 = v79 + 1, v82 == 45) )
                v72 = v79 + 2;
              v78 = 0;
              if ( v72 >= v129 )
                goto LABEL_154;
              continue;
            }
            break;
          }
          if ( !v79 || v81 != 76 )
            goto LABEL_189;
          v95 = v79 + 1;
          if ( v79 + 1 < v129 )
          {
            v138 = v133;
            if ( v95 < 1 )
            {
              if ( !under_debugger )
                interr(1834);
              goto LABEL_198;
            }
            skip_utf8(&v138, v79 + 1);
            v96 = get_utf8_char(&v138);
            if ( v96 == 46 )
              goto LABEL_189;
            if ( (unsigned int)(v96 - 48) < 0xA )
              goto LABEL_189;
            v95 = v79 + 1;
            if ( (v96 & 0xFFFFFFDF) - 65 < 0x1A )
              goto LABEL_189;
          }
          v97 = v95;
          v138 = v133;
          if ( v79 - 1 >= 1 )
            skip_utf8(&v138, v79 - 1);
          v98 = get_utf8_char(&v138);
          v99 = v114 | ((unsigned int)(v98 - 48) < 0xA) ? (unsigned int)(v98 - 48) >= 0xA : (v98 & 0xFFFFFFDF) - 65 >= 6;
          v72 = v97;
          if ( v99 )
LABEL_189:
            v72 = 0;
LABEL_154:
          if ( v135 )
          {
            v83 = v72;
            v136 = 0;
            qfree(v135);
            v137 = 0;
            v135 = nullptr;
            v72 = v83;
          }
          if ( !v72 )
          {
LABEL_158:
            v85 = v125[20];
            if ( 4 * v85 )
            {
              v86 = (_DWORD *)v125[19];
              v87 = 4 * v85;
              do
              {
                v88 = (*(int (__fastcall **)(_DWORD, char **, char *))(*(_DWORD *)*v86 + 8))(*v86, &v135, s);
                if ( v88 >= 1 )
                {
                  v89 = v88;
                  sub_42DA4((int)v125, v126, (unsigned int)s, v125[24]);
                  skip_utf8((unsigned __int8 **)&s, v89);
                  sub_42DA4((int)v125, v126, (unsigned int)s, (int)v135);
                  v125[24] = v125[15];
                  v10 = v126;
                }
                v87 -= 4;
                ++v86;
              }
              while ( v87 );
            }
            if ( v117 )
            {
              v135 = s;
              v90 = get_utf8_char((unsigned __int8 **)&v135);
              v91 = (v90 & 0xFFFFFFDF) - 65;
              v92 = v90 - 48;
              a1 = (int)v125;
              if ( v90 == 46 )
                goto LABEL_167;
              while ( v92 < 0xA || v91 <= 0x19 )
              {
                do
                {
LABEL_167:
                  if ( get_utf8_char((unsigned __int8 **)&s) == -1 )
                    v93 = ++s;
                  else
                    v93 = s;
                  v135 = v93;
                  v94 = get_utf8_char((unsigned __int8 **)&v135);
                  v91 = (v94 & 0xFFFFFFDF) - 65;
                  v92 = v94 - 48;
                }
                while ( v94 == 46 );
              }
            }
            else
            {
              s += v113;
              a1 = (int)v125;
            }
            if ( s1 != s )
              goto LABEL_20;
LABEL_23:
            if ( get_utf8_char((unsigned __int8 **)&s) == -1 )
              ++s;
            goto LABEL_20;
          }
          a1 = (int)v125;
          v84 = v72;
          sub_42DA4((int)v125, v10, (unsigned int)s, v125[24]);
          skip_utf8((unsigned __int8 **)&s, v84);
          sub_42DA4((int)v125, v10, (unsigned int)s, 7);
          v15 = s;
        }
      }
    }
  }
  v20 = utf8_char;
  if ( isspace((unsigned __int8)utf8_char) )
    goto LABEL_23;
  s1 = s;
  if ( v20 )
    goto LABEL_27;
  v45 = *(unsigned __int8 **)(a1 + 92);
  v46 = s;
  if ( s != (char *)v45 )
    v45 = (unsigned __int8 *)sub_42DA4(a1, v10, (unsigned int)s, *(_DWORD *)(a1 + 96));
LABEL_60:
  sub_43962((int)v45, (int)v46, v21, v22, a5, a6, a7, a8, a9);
}
// 4356E: the cases 48, 49, 50, 51, 52, 53, 54, 55, 56, 57 were optimized away because r7.4 is in (1..2F|>=3Au)
// 43040: variable 'v100' is possibly undefined
// 43040: variable 'v101' is possibly undefined
// 43040: variable 'v103' is possibly undefined
// 43040: variable 'v105' is possibly undefined
// 43040: variable 'v106' is possibly undefined
// 43044: variable 'a2' is possibly undefined
// 4335E: variable 'v46' is possibly undefined
// 4335E: variable 'v21' is possibly undefined
// 4335E: variable 'v22' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
