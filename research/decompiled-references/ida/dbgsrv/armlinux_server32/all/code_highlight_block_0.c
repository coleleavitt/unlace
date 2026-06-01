/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: code_highlight_block_0
// Address: 0x00041BA8

//----- (00041BA8) --------------------------------------------------------
void __fastcall code_highlight_block_0(int a1, int a2, int a3)
{
  size_t v5; // r1
  int (*v6)(); // r2
  unsigned __int8 *v7; // r5
  int (*v8)(); // r3
  unsigned int v9; // r0
  unsigned int v10; // r5
  int v11; // r8
  char *v12; // r6
  int v13; // r5
  int v14; // r7
  unsigned int v15; // r2
  unsigned __int8 *v16; // r3
  char *v17; // r3
  char *v18; // r7
  int v19; // r0
  char *v20; // r8
  char *v21; // r5
  int v22; // t1
  int v23; // r0
  char *v24; // r8
  unsigned int v25; // r2
  unsigned int v26; // r0
  bool v27; // cc
  int v28; // r5
  char *v29; // r5
  unsigned int v30; // r0
  bool v31; // cc
  int v32; // r1
  int v33; // r5
  char *v34; // r3
  int *v35; // r5
  int *v36; // r8
  int v37; // t1
  int (*v38)(); // r3
  int v39; // r3
  int v40; // r3
  int v41; // r0
  char *v42; // r2
  int v43; // r3
  int v44; // r0
  int v45; // r3
  int v46; // r9
  const char ***v47; // r8
  int v48; // r4
  int v49; // r7
  const char *v50; // r6
  int v51; // r5
  const char **v52; // r11
  const char *v53; // t1
  char *v54; // r5
  int v55; // r8
  __int64 v56; // r2
  int v57; // r9
  int v58; // r8
  char *v59; // r2
  int v60; // t1
  int (*v61)(); // r3
  int v62; // r5
  int v63; // r0
  char v64; // r5
  int v65; // r0
  unsigned int v66; // r0
  size_t v67; // r0
  int v68; // r3
  unsigned __int8 *v69; // r0
  int v70; // r2
  int v71; // r3
  int v72; // r0
  char *v73; // r0
  unsigned int v74; // r0
  char *v75; // r0
  int v76; // r9
  int v77; // r8
  unsigned int v78; // r0
  int v79; // r0
  int v80; // r9
  int v81; // r3
  unsigned int v82; // r0
  unsigned int v83; // r0
  unsigned int v84; // r0
  int i; // r8
  int v87; // [sp+10h] [bp-7Ch]
  char *src; // [sp+14h] [bp-78h]
  int v89; // [sp+18h] [bp-74h]
  _BOOL4 v90; // [sp+18h] [bp-74h]
  int v91; // [sp+18h] [bp-74h]
  size_t n; // [sp+1Ch] [bp-70h]
  char *v93; // [sp+24h] [bp-68h]
  unsigned int v94; // [sp+24h] [bp-68h]
  int v95; // [sp+28h] [bp-64h]
  int v96; // [sp+28h] [bp-64h]
  int v97; // [sp+2Ch] [bp-60h]
  char *s1; // [sp+38h] [bp-54h] BYREF
  const char **v99; // [sp+3Ch] [bp-50h]
  unsigned __int8 *v100; // [sp+40h] [bp-4Ch] BYREF
  unsigned __int8 *v101; // [sp+44h] [bp-48h] BYREF
  char *v102; // [sp+48h] [bp-44h] BYREF
  char *v103; // [sp+4Ch] [bp-40h] BYREF
  char *v104; // [sp+50h] [bp-3Ch] BYREF
  char *v105; // [sp+54h] [bp-38h] BYREF
  char *v106; // [sp+58h] [bp-34h] BYREF
  char *v107; // [sp+5Ch] [bp-30h] BYREF
  char *v108; // [sp+60h] [bp-2Ch] BYREF
  char *v109; // [sp+64h] [bp-28h] BYREF
  char *v110; // [sp+68h] [bp-24h] BYREF
  char *v111; // [sp+6Ch] [bp-20h] BYREF
  char *v112; // [sp+70h] [bp-1Ch] BYREF
  char *v113; // [sp+74h] [bp-18h] BYREF
  char *v114; // [sp+78h] [bp-14h] BYREF
  int v115; // [sp+7Ch] [bp-10h]
  int v116; // [sp+80h] [bp-Ch]

  src = *(char **)a3;
  s1 = src;
  if ( !src )
    return;
  v5 = *(_DWORD *)(a3 + 4);
  v6 = *(int (**)())(*(_DWORD *)a2 + 20);
  n = v5;
  if ( v6 == nullsub_4 )
  {
    v7 = (unsigned __int8 *)src;
  }
  else
  {
    ((void (__fastcall *)(int, _DWORD))v6)(a2, 0);
    v7 = (unsigned __int8 *)s1;
  }
  *(_DWORD *)(a1 + 88) = v7;
  *(_DWORD *)(a1 + 92) = v7;
  v8 = *(int (**)())(*(_DWORD *)a2 + 12);
  if ( v8 != sub_41890 )
  {
    v63 = ((int (__fastcall *)(int))v8)(a2);
    v64 = v63;
    if ( v63 > 0 )
    {
      if ( (v63 & 0xF) != 0 )
        sub_41AB4((_DWORD *)a1, a2, (v63 & 0xF) - 1, (const char **)&s1);
      if ( (v64 & 0x10) != 0 )
        sub_41B44(a1, a2, (const char **)&s1);
      v7 = (unsigned __int8 *)s1;
      goto LABEL_7;
    }
    v7 = (unsigned __int8 *)s1;
  }
  *(_DWORD *)(a1 + 96) = 0;
LABEL_7:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        v100 = v7;
        v9 = sub_70290(&v100);
        v10 = v9;
        if ( v9 <= 0x7F )
        {
          if ( isspace(v9) )
            goto LABEL_93;
          if ( !v10 )
          {
            if ( *(char **)(a1 + 92) != s1 )
              sub_418B8(a1, a2, s1, *(_DWORD *)(a1 + 96));
            return;
          }
        }
        v11 = *(_DWORD *)(a1 + 48);
        v12 = s1;
        if ( v11 )
        {
          v13 = *(_DWORD *)(a1 + 44);
          v14 = 0;
          while ( 1 )
          {
            v15 = *(_DWORD *)(v13 + 4);
            if ( v15 > 1 && !strncmp(v12, *(const char **)v13, v15 - 1) )
              break;
            ++v14;
            v13 += 24;
            if ( v14 == v11 )
              goto LABEL_15;
          }
          sub_418B8(a1, a2, v12, *(_DWORD *)(a1 + 96));
          v44 = *(_DWORD *)(v13 + 4);
          if ( v44 )
            --v44;
          s1 += v44;
          sub_41AB4((_DWORD *)a1, a2, v14, (const char **)&s1);
          v16 = (unsigned __int8 *)s1;
        }
        else
        {
LABEL_15:
          v16 = (unsigned __int8 *)v12;
        }
        v101 = v16;
        if ( *(unsigned __int8 *)(a1 + 105) == sub_70290(&v101) )
        {
          v17 = *(char **)(a1 + 92);
          v18 = s1;
          if ( v17 == *(char **)a3 || v17 == s1 )
          {
LABEL_95:
            sub_418B8(a1, a2, v18, *(_DWORD *)(a1 + 96));
            sub_41B44(a1, a2, (const char **)&s1);
            v7 = (unsigned __int8 *)s1;
            continue;
          }
          v19 = (unsigned __int8)*v17;
          if ( (v19 & 0x80) == 0 )
          {
            v20 = *(char **)(a1 + 92);
            v21 = s1 - 1;
            do
            {
              if ( !isspace(v19) )
                break;
              if ( v21 == v20 )
                goto LABEL_95;
              v22 = (unsigned __int8)*++v20;
              v19 = v22;
            }
            while ( (v22 & 0x80) == 0 );
          }
        }
        else
        {
          v18 = s1;
        }
        break;
      }
      v102 = v18;
      v23 = sub_70290((unsigned __int8 **)&v102);
      if ( *(unsigned __int8 *)(a1 + 102) != v23 )
      {
        v24 = s1;
        if ( *(unsigned __int8 *)(a1 + 100) == v23 )
          goto LABEL_61;
        v25 = *(_DWORD *)(a1 + 36);
        if ( v25 > 1 && !strncmp(s1, *(const char **)(a1 + 32), v25 - 1) )
        {
          sub_418B8(a1, a2, v24, *(_DWORD *)(a1 + 96));
          v67 = strlen(s1);
          v68 = *(_DWORD *)(a1 + 64);
          s1 += v67;
          sub_418B8(a1, a2, s1, v68);
          v7 = (unsigned __int8 *)s1;
          *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 60);
          continue;
        }
        v114 = v24;
        v26 = sub_70290((unsigned __int8 **)&v114);
        v27 = v26 > 0x5F;
        if ( v26 != 95 )
          v27 = (v26 & 0xFFFFFFDF) - 65 > 0x19;
        v28 = !v27;
        if ( v27 )
        {
          v87 = v28;
        }
        else
        {
          do
          {
            v29 = v114;
            v30 = sub_70290((unsigned __int8 **)&v114);
            v31 = v30 > 0x5F;
            if ( v30 != 95 )
              v31 = (v30 & 0xFFFFFFDF) - 65 > 0x19;
            v32 = !v31;
          }
          while ( !v31 || v30 - 48 <= 9 );
          v87 = v29 - v24;
          if ( v29 != v24 )
          {
            v114 = (char *)v32;
            v115 = v32;
            v116 = v32;
            v33 = v87 + 1;
            if ( v87 == -1 )
            {
              v34 = nullptr;
            }
            else
            {
              v114 = (char *)sub_78018((int)&v114, (void *)v32, v87 + 1, 1u);
              memset(&v114[v115], 0, v33 - v115);
              v115 = v87 + 1;
              v34 = v114;
            }
            v34[v87] = 0;
            sub_7968C(v114, (unsigned __int8 *)s1, v33);
            v35 = *(int **)(a1 + 76);
            v36 = &v35[*(_DWORD *)(a1 + 80)];
            v89 = *(_DWORD *)(a1 + 96);
            v99 = (const char **)v89;
            if ( v35 != v36 )
            {
              do
              {
                v37 = *v35++;
                v38 = *(int (**)())(*(_DWORD *)v37 + 12);
              }
              while ( (v38 == sub_4189C || !v38()) && v36 != v35 );
              v39 = *(_DWORD *)(a1 + 96);
              v89 = (int)v99;
              if ( (const char **)v39 != v99 )
                goto LABEL_54;
            }
            v45 = *(_DWORD *)(a1 + 24);
            if ( v45 )
            {
              v46 = 0;
              v95 = a1;
              v97 = a2;
              v47 = *(const char ****)(a1 + 20);
              v48 = v115;
              v49 = v45;
              v93 = v12;
              while ( 1 )
              {
                v50 = v48 ? v114 : (const char *)&dword_8DB98;
                v51 = (int)&(*v47)[(_DWORD)v47[1]];
                if ( *v47 != (const char **)v51 )
                  break;
LABEL_135:
                ++v46;
                v47 += 4;
                if ( v46 == v49 )
                {
                  v12 = v93;
                  a1 = v95;
                  a2 = v97;
                  goto LABEL_77;
                }
              }
              v52 = *v47;
              while ( 1 )
              {
                v53 = *v52++;
                if ( !strcmp(v50, v53) )
                  break;
                if ( (const char **)v51 == v52 )
                  goto LABEL_135;
              }
              v12 = v93;
              a1 = v95;
              a2 = v97;
              v99 = v47[3];
              if ( v99 != (const char **)v89 )
              {
                v39 = v89;
LABEL_54:
                sub_418B8(a1, a2, s1, v39);
                s1 += v87;
                sub_418B8(a1, a2, s1, (int)v99);
                if ( v114 )
                {
                  v115 = 0;
                  sub_77F70(v114);
                }
                goto LABEL_56;
              }
            }
LABEL_77:
            if ( v114 )
            {
              v115 = 0;
              sub_77F70(v114);
            }
          }
        }
        v54 = s1;
        if ( !s1 )
          goto LABEL_82;
        v104 = s1;
        v55 = sub_70290((unsigned __int8 **)&v104);
        if ( !v55 )
          goto LABEL_81;
        v114 = nullptr;
        v115 = 0;
        v116 = 0;
        if ( !n
          || (n != -1 ? (v75 = (char *)sub_78018((int)&v114, nullptr, n + 1, 1u), v114 = v75) : (v75 = nullptr),
              v115 = n + 1,
              memmove(v75, src, n),
              v114[n] = 0,
              v69 = (unsigned __int8 *)v114,
              !v115) )
        {
          v69 = (unsigned __int8 *)&dword_8DB98;
        }
        v94 = sub_7052C(v69) + 1;
        if ( (unsigned int)(v55 - 48) <= 9 )
        {
          v90 = 0;
          goto LABEL_118;
        }
        if ( ((v55 - 43) & 0xFFFFFFFD) != 0 )
        {
          v90 = v55 == 46;
        }
        else
        {
          if ( v54 == src )
          {
            v90 = v55 == 46;
            goto LABEL_118;
          }
          v107 = v54;
          sub_70394(nullptr, (unsigned int *)&v107, (unsigned int)src);
          v74 = sub_70290((unsigned __int8 **)&v107);
          v90 = v55 == 46;
          if ( (v74 & 0xFFFFFFDF) - 65 > 0x19 && sub_418A0(v74) )
          {
LABEL_118:
            v106 = v54;
            sub_704D8((unsigned __int8 **)&v106, 1);
            v72 = sub_70290((unsigned __int8 **)&v106);
            if ( v55 == 48 )
            {
              if ( (v72 & 0xFFFFFFDF) == 0x58 )
              {
                v105 = v54;
                sub_704D8((unsigned __int8 **)&v105, 2);
                v83 = sub_70290((unsigned __int8 **)&v105);
                if ( (v83 & 0xFFFFFFDF) - 65 > 0x19 && sub_418A0(v83) )
                  goto LABEL_121;
                v76 = 2;
                v96 = 1;
LABEL_140:
                if ( v94 <= v76 )
                {
                  v91 = v76;
                  v73 = v114;
                  goto LABEL_164;
                }
                goto LABEL_141;
              }
            }
            else if ( ((v55 - 43) & 0xFFFFFFFD) == 0 || (v55 & 0xFFFFFFDF) == 0x45 )
            {
              if ( v94 <= 1 )
                goto LABEL_121;
              v108 = v54;
              sub_704D8((unsigned __int8 **)&v108, 1);
              v84 = sub_70290((unsigned __int8 **)&v108);
              if ( (v84 & 0xFFFFFFDF) - 65 <= 0x19 )
              {
                v96 = 0;
              }
              else
              {
                v96 = sub_418A0(v84);
                if ( v96 )
                  goto LABEL_121;
              }
              v76 = 1;
LABEL_141:
              v77 = 0;
              while ( 1 )
              {
                v109 = v54;
                if ( v76 > 0 )
                {
                  sub_704D8((unsigned __int8 **)&v109, v76);
                }
                else if ( v76 )
                {
                  if ( !under_debugger )
                    sub_78C64(1834);
LABEL_182:
                  __und(0xFFu);
                }
                v78 = sub_70290((unsigned __int8 **)&v109);
                if ( (v78 & 0xFFFFFFDF) - 65 > 0x19 && sub_418A0(v78) )
                {
LABEL_175:
                  v73 = v114;
                  v91 = v76;
                  if ( v114 )
                  {
LABEL_176:
                    v115 = 0;
                    sub_77F70(v73);
                  }
                  v54 = s1;
                  if ( v91 )
                  {
LABEL_178:
                    sub_418B8(a1, a2, v54, *(_DWORD *)(a1 + 96));
                    sub_704D8((unsigned __int8 **)&s1, v91);
                    sub_418B8(a1, a2, s1, 7);
                    v7 = (unsigned __int8 *)s1;
                    goto LABEL_7;
                  }
LABEL_82:
                  v56 = *(_QWORD *)(a1 + 76);
                  if ( (_DWORD)v56 == (_DWORD)v56 + 4 * HIDWORD(v56) )
                    goto LABEL_90;
                  v57 = 4 * HIDWORD(v56) - 4 + v56;
                  v58 = v56 - 4;
                  v59 = v54;
                  while ( 2 )
                  {
                    while ( 2 )
                    {
                      v60 = *(_DWORD *)(v58 + 4);
                      v58 += 4;
                      v61 = *(int (**)())(*(_DWORD *)v60 + 8);
                      if ( v61 == sub_41898 )
                      {
LABEL_84:
                        if ( v58 == v57 )
                          goto LABEL_89;
                        continue;
                      }
                      break;
                    }
                    v62 = v61();
                    if ( v62 <= 0 )
                    {
                      v59 = s1;
                      goto LABEL_84;
                    }
                    sub_418B8(a1, a2, s1, *(_DWORD *)(a1 + 96));
                    sub_704D8((unsigned __int8 **)&s1, v62);
                    sub_418B8(a1, a2, s1, (int)v114);
                    v59 = s1;
                    *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 60);
                    if ( v58 != v57 )
                      continue;
                    break;
                  }
LABEL_89:
                  v54 = v59;
LABEL_90:
                  if ( v87 )
                  {
                    v7 = (unsigned __int8 *)&v54[v87];
                    s1 = (char *)v7;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v103 = v54;
                      v66 = sub_70290((unsigned __int8 **)&v103);
                      if ( (v66 & 0xFFFFFFDF) - 65 > 0x19 )
                      {
                        if ( sub_418A0(v66) )
                          break;
                      }
                      v65 = sub_70290((unsigned __int8 **)&s1);
                      v54 = s1;
                      if ( v65 == -1 )
                        v54 = ++s1;
                    }
                    v7 = (unsigned __int8 *)s1;
                  }
                  if ( v12 != (char *)v7 )
                    goto LABEL_7;
LABEL_93:
                  if ( sub_70290((unsigned __int8 **)&s1) == -1 )
                  {
                    v7 = (unsigned __int8 *)++s1;
                    goto LABEL_7;
                  }
LABEL_56:
                  v7 = (unsigned __int8 *)s1;
                  goto LABEL_7;
                }
                v110 = v54;
                if ( v76 > 0 )
                  sub_704D8((unsigned __int8 **)&v110, v76);
                v79 = sub_70290((unsigned __int8 **)&v110);
                if ( (unsigned int)(v79 - 48) <= 9 || v96 && (v79 & 0xFFFFFFDF) - 65 <= 5 )
                {
                  ++v76;
                }
                else if ( v79 == 46 )
                {
                  if ( v90 )
                    goto LABEL_121;
                  ++v76;
                  v90 = 1;
                }
                else
                {
                  if ( v77 || (v79 & 0xFFFFFFDF) != 0x45 )
                  {
                    v71 = v79 == 76;
                    if ( !v76 )
                      v71 = 0;
                    if ( v71 )
                    {
                      v91 = v76 + 1;
                      if ( v94 <= v76 + 1 )
                        goto LABEL_158;
                      v112 = v54;
                      if ( v91 <= 0 )
                      {
                        if ( !under_debugger )
                          sub_78C64(1834);
                        goto LABEL_182;
                      }
                      sub_704D8((unsigned __int8 **)&v112, v91);
                      v82 = sub_70290((unsigned __int8 **)&v112);
                      if ( v82 - 97 <= 0x19 || v82 - 65 <= 0x19 )
                      {
LABEL_121:
                        v73 = v114;
                        goto LABEL_122;
                      }
                      v71 = sub_418A0(v82);
                      if ( !v71 )
                        goto LABEL_170;
LABEL_158:
                      v80 = v76 - 1;
                      v113 = v54;
                      if ( v80 > 0 )
                      {
                        sub_704D8((unsigned __int8 **)&v113, v80);
                      }
                      else if ( v80 )
                      {
                        for ( i = 0; i > v80; --i )
                          sub_70394(nullptr, (unsigned int *)&v113, (unsigned int)src);
                      }
                      v81 = sub_70290((unsigned __int8 **)&v113);
                      v73 = v114;
                      if ( (unsigned int)(v81 - 48) <= 9 )
                      {
LABEL_164:
                        if ( v73 )
                          goto LABEL_176;
                        v54 = s1;
                        goto LABEL_178;
                      }
                      if ( v96 )
                      {
                        if ( (v81 & 0xFFFFFFDF) - 65 <= 5 )
                          goto LABEL_164;
LABEL_122:
                        if ( v73 )
                        {
                          v71 = 0;
                          goto LABEL_124;
                        }
                      }
                      else if ( v114 )
                      {
                        v115 = 0;
                        sub_77F70(v114);
                        v54 = s1;
                        goto LABEL_82;
                      }
                    }
                    else
                    {
LABEL_170:
                      v73 = v114;
                      if ( v114 )
                      {
LABEL_124:
                        v115 = v71;
                        sub_77F70(v73);
                      }
                    }
LABEL_81:
                    v54 = s1;
                    goto LABEL_82;
                  }
                  v111 = v54;
                  if ( v76 + 1 <= 0 )
                  {
                    if ( !under_debugger )
                      sub_78C64(1834);
                    goto LABEL_182;
                  }
                  sub_704D8((unsigned __int8 **)&v111, v76 + 1);
                  if ( ((sub_70290((unsigned __int8 **)&v111) - 43) & 0xFFFFFFFD) != 0 )
                    ++v76;
                  else
                    v76 += 2;
                  v77 = 1;
                }
                if ( v76 >= v94 )
                  goto LABEL_175;
              }
            }
            v76 = 1;
            v96 = 0;
            goto LABEL_140;
          }
        }
        v70 = v90;
        if ( (v55 & 0xFFFFFFDF) == 0x45 )
          v70 = v90 | 1;
        v71 = v70;
        if ( !v70 )
          goto LABEL_170;
        goto LABEL_118;
      }
      break;
    }
    v24 = s1;
LABEL_61:
    v40 = *(_DWORD *)(a1 + 96);
    *(_BYTE *)(a1 + 56) = v23;
    sub_418B8(a1, a2, v24, v40);
    v41 = sub_70290((unsigned __int8 **)&s1);
    v42 = s1;
    v43 = *(unsigned __int8 *)(a1 + 56);
    if ( v41 == -1 )
      v42 = ++s1;
    v7 = sub_41A3C(a1, a2, (unsigned __int8 *)v42, v43);
    s1 = (char *)v7;
    if ( v7 )
      continue;
    break;
  }
}
// 421D6: conditional instruction was optimized away because r9.4==0
// 41894: using guessed type int nullsub_4();
// 8DB98: using guessed type int dword_8DB98;
// D6C20: using guessed type char under_debugger;
