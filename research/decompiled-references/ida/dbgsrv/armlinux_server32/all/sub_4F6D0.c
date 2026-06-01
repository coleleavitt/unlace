/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F6D0
// Address: 0x0004F6D0

//----- (0004F6D0) --------------------------------------------------------
int __fastcall sub_4F6D0(unsigned __int8 **a1, int a2, unsigned __int8 *a3, _DWORD *a4)
{
  unsigned __int8 **v4; // r4
  int v5; // r0
  unsigned __int8 *v7; // r1
  unsigned __int8 *v9; // r7
  int v10; // r5
  bool v11; // zf
  unsigned __int8 *v12; // r7
  unsigned int v13; // r0
  int v14; // r11
  unsigned __int8 *v15; // r10
  bool v16; // zf
  char v17; // r3
  unsigned __int8 *v18; // r1
  int v19; // r3
  int v20; // r0
  int v21; // r3
  unsigned int v22; // r0
  unsigned __int8 *v23; // r1
  unsigned __int8 *v24; // r7
  unsigned __int8 *v25; // r3
  unsigned __int8 *v26; // r1
  unsigned __int8 *v27; // r2
  unsigned __int8 *v28; // r3
  unsigned __int8 *v29; // r6
  int v30; // r3
  int v32; // r3
  int v33; // r5
  unsigned __int8 *v34; // r3
  unsigned int v35; // r0
  unsigned __int8 *v36; // r3
  int v37; // r0
  int v38; // r1
  unsigned __int8 *v39; // r3
  unsigned int v40; // r3
  char *i; // r5
  int v42; // r3
  int v43; // r6
  int v44; // r6
  int v45; // r9
  int v46; // r10
  unsigned int v47; // r6
  void *v48; // r1
  int v49; // r6
  char v50; // r9
  int v51; // r10
  unsigned int v52; // r5
  void *v53; // r1
  char v54; // r0
  int v55; // r5
  char v56; // r9
  unsigned int v57; // r10
  void *v58; // r1
  int v59; // r2
  __int16 v60; // r3
  bool v61; // zf
  bool v62; // zf
  unsigned __int8 *v63; // r2
  unsigned __int8 **v64; // r8
  unsigned __int8 *v65; // r9
  int v66; // r4
  int v67; // r7
  int v68; // r3
  unsigned __int8 *v69; // r5
  char v70; // r0
  unsigned __int8 *v71; // r5
  int v72; // r6
  unsigned __int8 *v73; // r5
  _BOOL4 v74; // r0
  int v75; // r3
  unsigned __int8 *v76; // r6
  unsigned int v77; // r5
  char v78; // r0
  bool v79; // zf
  unsigned __int8 *v80; // r5
  unsigned int v81; // r3
  size_t v82; // r5
  unsigned __int8 *v83; // r3
  int v84; // r5
  _BOOL4 v85; // r0
  int v86; // r9
  char v87; // r8
  unsigned __int8 *v88; // r6
  unsigned __int64 j; // r10
  int v90; // r9
  int v91; // r7
  char v92; // r3
  unsigned __int8 *v93; // r2
  unsigned int v94; // r3
  int v95; // r5
  int v96; // r1
  unsigned __int8 *v97; // r11
  int v98; // r3
  bool v99; // cf
  unsigned __int8 *v100; // r2
  bool v101; // zf
  unsigned int v102; // r2
  int v103; // r5
  unsigned int v104; // r5
  int v105; // r3
  int v106; // r7
  int v108; // [sp+0h] [bp-1Ch]
  unsigned __int64 v109; // [sp+0h] [bp-1Ch]
  unsigned int v110; // [sp+8h] [bp-14h]
  unsigned __int8 *v111; // [sp+8h] [bp-14h]
  int v112; // [sp+8h] [bp-14h]
  bool v113; // [sp+10h] [bp-Ch]
  int v114; // [sp+14h] [bp-8h]

  v4 = a1;
  v5 = *((unsigned __int8 *)a1 + 76);
  v7 = v4[1];
  v4[2] = v7;
  v4[3] = nullptr;
  if ( v5 )
  {
    while ( 1 )
    {
LABEL_28:
      if ( *v7 == 42 )
      {
        v4[1] = v7 + 1;
        v19 = v7[1];
        if ( v19 == 47 )
        {
          if ( ((unsigned int)v4[162] & 1) != 0 )
            goto LABEL_32;
        }
        else if ( v19 == 41 && ((unsigned int)v4[162] & 2) != 0 )
        {
LABEL_32:
          v7 += 2;
          *((_BYTE *)v4 + 76) = 0;
          goto LABEL_2;
        }
      }
      else
      {
        if ( !*v7 )
          goto LABEL_61;
        v4[1] = v7 + 1;
      }
      v7 = v4[1];
    }
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_2:
      v9 = v7 + 1;
      v4[1] = v7 + 1;
      v10 = *v7;
      v11 = v10 == 32;
      if ( v10 != 32 )
        v11 = v10 == 9;
      if ( !v11 && !sub_4B1C0(*v7) )
        break;
LABEL_41:
      v7 = v9;
    }
    if ( a4 )
      *a4 = v4[39];
    if ( !v10 )
      goto LABEL_61;
    if ( v10 == 47 )
      break;
    if ( v10 == 59 )
    {
      if ( ((unsigned int)v4[162] & 8) == 0 )
        goto LABEL_12;
LABEL_61:
      if ( a3 == v4[8] )
      {
        v39 = v4[1];
        if ( !*(v39 - 1) )
          v4[1] = v39 - 1;
        *(_WORD *)(a2 + 12) = 1;
        return 0;
      }
      sub_4B8A4(v4);
      v7 = v4[1];
    }
    else
    {
      LOBYTE(v21) = v10 + 0x80;
      if ( (unsigned __int8)(v10 + 0x80) > 0x7Eu )
      {
LABEL_12:
        v12 = v4[1];
        v13 = v10 & 0xFFFFFF80;
        v14 = v10;
        v15 = v12 - 1;
        v4[3] = v12 - 1;
        if ( (v10 & 0xFFFFFF80) == 0 )
          goto LABEL_36;
        goto LABEL_13;
      }
      v22 = (unsigned int)v4[8];
      if ( !v22 )
      {
        v38 = v10;
        goto LABEL_77;
      }
      v21 = (char)v21;
      v23 = v4[7];
      if ( (unsigned int)(char)v21 >= *(_DWORD *)&v23[28 * (_DWORD)v4[10] + 4] )
        goto LABEL_40;
      v24 = *(unsigned __int8 **)(*(_DWORD *)&v23[28 * (_DWORD)v4[10]] + 12 * v21);
      if ( !v24 || !*v24 )
        goto LABEL_40;
      if ( v22 + 1 > (unsigned int)v4[9] )
      {
        v23 = (unsigned __int8 *)sub_78018((int)(v4 + 7), v23, v22 + 1, 0x1Cu);
        v22 = (unsigned int)v4[8];
        v4[7] = v23;
      }
      v25 = &v23[28 * v22];
      *(_DWORD *)v25 = 0;
      *((_DWORD *)v25 + 1) = 0;
      *((_DWORD *)v25 + 2) = 0;
      v26 = *v4;
      ++v4[8];
      *((_DWORD *)v25 + 3) = v26;
      v7 = v24;
      *((_DWORD *)v25 + 4) = v4[1];
      v27 = v4[10];
      *((_DWORD *)v25 + 5) = 0;
      *((_DWORD *)v25 + 6) = v27;
      v28 = *(unsigned __int8 **)&v4[7][28 * (_DWORD)v4[10] + 24];
      *v4 = v24;
      v4[1] = v24;
      v4[10] = v28;
    }
  }
  v12 = v4[1];
  if ( *v12 == 47 && ((unsigned int)v4[162] & 4) != 0 )
    goto LABEL_61;
  v14 = 47;
  v15 = v12 - 1;
  v4[3] = v12 - 1;
LABEL_36:
  v13 = isalpha(v14);
  if ( v13 )
  {
LABEL_37:
    if ( v10 == 76 )
    {
      v32 = *v12;
      if ( v32 == 34 )
      {
        v4[1] = v12 + 1;
        *(_BYTE *)(a2 + 20) = 1;
LABEL_82:
        v40 = *(_DWORD *)(a2 + 8);
        *(_WORD *)(a2 + 12) = 4;
        *(_DWORD *)(a2 + 4) = 0;
        if ( v40 < 0x400 )
          *(_DWORD *)a2 = sub_78018(a2, *(void **)a2, 0x400u, 1u);
        for ( i = (char *)v4[1]; ; i = (char *)v4[1] )
        {
          while ( 1 )
          {
            v42 = (unsigned __int8)*i;
            if ( v42 == 34 )
            {
LABEL_95:
              v4[1] = (unsigned __int8 *)(i + 1);
              return 0;
            }
LABEL_86:
            if ( !v42 )
            {
LABEL_123:
              v37 = 24;
              return sub_70B98(v37);
            }
            if ( v42 == 92 )
              break;
            v4[1] = (unsigned __int8 *)(i + 1);
            v49 = *(_DWORD *)(a2 + 4);
            v50 = *i;
            v51 = v49 - 1;
            v52 = v49 + 1;
            if ( !v49 )
            {
              v49 = 1;
              v52 = 2;
              v51 = 0;
            }
            v53 = *(void **)a2;
            if ( *(_DWORD *)(a2 + 8) < v52 )
            {
              v53 = sub_78018(a2, v53, v52, 1u);
              *(_DWORD *)a2 = v53;
            }
            *(_DWORD *)(a2 + 4) = v52;
            *((_BYTE *)v53 + v51) = v50;
            *(_BYTE *)(*(_DWORD *)a2 + v49) = 0;
            i = (char *)v4[1];
          }
          v43 = (unsigned int)v4[48] & 0x10;
          if ( v43 )
          {
            if ( !i[1] )
              goto LABEL_123;
            v44 = *(_DWORD *)(a2 + 4);
            if ( v44 )
            {
              v45 = v44 - 1;
              v46 = v44 + 1;
              v47 = v44 + 2;
            }
            else
            {
              v45 = 0;
              v46 = 2;
              v47 = 3;
            }
            v48 = *(void **)a2;
            if ( *(_DWORD *)(a2 + 8) < v47 )
            {
              v48 = sub_78018(a2, v48, v47, 1u);
              *(_DWORD *)a2 = v48;
            }
            *(_DWORD *)(a2 + 4) = v47;
            *((_BYTE *)v48 + v46) = 0;
            *(_WORD *)(*(_DWORD *)a2 + v45) = *(_WORD *)i;
            i = (char *)(v4[1] + 2);
            v4[1] = (unsigned __int8 *)i;
            v42 = (unsigned __int8)*i;
            if ( v42 == 34 )
              goto LABEL_95;
            goto LABEL_86;
          }
          v4[1] = (unsigned __int8 *)(i + 1);
          v54 = sub_6BBEC(v4 + 1);
          v55 = *(_DWORD *)(a2 + 4);
          v56 = v54;
          if ( v55 )
          {
            v43 = v55 - 1;
            v57 = v55 + 1;
          }
          else
          {
            v55 = 1;
            v57 = 2;
          }
          v58 = *(void **)a2;
          if ( *(_DWORD *)(a2 + 8) < v57 )
          {
            v58 = sub_78018(a2, v58, v57, 1u);
            *(_DWORD *)a2 = v58;
          }
          *(_DWORD *)(a2 + 4) = v57;
          *((_BYTE *)v58 + v43) = v56;
          *(_BYTE *)(*(_DWORD *)a2 + v55) = 0;
        }
      }
      if ( v32 == 39 )
      {
        v4[1] = v12 + 1;
        *(_BYTE *)(a2 + 20) = 1;
        goto LABEL_66;
      }
    }
    v20 = sub_4F5D0((int *)v4, 0, a2);
    if ( v20 == -1 )
      return sub_70B7C();
    if ( v20 != 1 )
      return 0;
LABEL_40:
    v9 = v4[1];
    goto LABEL_41;
  }
LABEL_13:
  v16 = v10 == 36;
  if ( v10 != 36 )
    v16 = v10 == 95;
  v17 = v16;
  if ( v16 )
    goto LABEL_37;
  v110 = v13;
  v113 = v17;
  if ( !strchr("?(),.[\\]`{};~@", v14) )
  {
    if ( strchr("!%&*+-/<=>^|:", v14) )
    {
      *(_WORD *)(a2 + 12) = v10;
      v18 = v4[1];
      v59 = *v18;
      if ( v59 == 61 )
      {
        v60 = (_WORD)v14 << 8;
LABEL_127:
        *(_WORD *)(a2 + 12) = v60 + 61;
        v36 = v4[1];
        goto LABEL_128;
      }
      if ( (v10 & 0xFD) == 0x3C )
      {
        if ( v59 == v10 )
        {
          *(_WORD *)(a2 + 12) = v10 + ((_WORD)v14 << 8);
          v63 = v4[1] + 1;
          v4[1] = v63;
          if ( *v63 != 61 )
            return 0;
          v60 = *(_WORD *)(a2 + 12);
          goto LABEL_127;
        }
      }
      else
      {
        v61 = v10 == 124;
        if ( v10 != 124 )
          v61 = v10 == 38;
        if ( !v61 && ((v10 - 43) & 0xFD) != 0 && v10 != 58 )
        {
          v62 = v10 == 47;
          if ( v10 == 47 )
            v62 = v59 == 42;
          if ( !v62 || ((unsigned int)v4[162] & 1) == 0 )
            return 0;
LABEL_24:
          v7 = v18 + 1;
          v4[1] = v7;
          v4[2] = v7;
          *((_BYTE *)v4 + 76) = 1;
          v4[3] = nullptr;
          goto LABEL_28;
        }
        if ( v59 == v10 )
        {
          *(_WORD *)(a2 + 12) = v59 + ((_WORD)v14 << 8);
          ++v4[1];
          return 0;
        }
      }
      if ( v10 == 45 && v59 == 62 )
      {
        *(_WORD *)(a2 + 12) = 11582;
        ++v4[1];
      }
      return 0;
    }
    if ( v110 || (unsigned int)(v10 - 48) > 9 )
    {
      if ( v10 != 34 )
      {
        if ( v10 != 39 )
        {
          if ( v10 == 35 && (v38 = *v12, (v38 ^ 0x80u) <= 0x7E) )
          {
            v22 = (unsigned int)v4[8];
            if ( v22 )
            {
              v4[1] = v12 + 1;
              v102 = *(_DWORD *)(a2 + 8);
              v103 = *v12;
              *(_WORD *)(a2 + 12) = 4;
              *(_BYTE *)(a2 + 20) = 0;
              v104 = v103 ^ 0x80;
              *(_DWORD *)(a2 + 4) = 0;
              if ( v102 < 0x400 )
                *(_DWORD *)a2 = sub_78018(a2, *(void **)a2, 0x400u, 1u);
              sub_4BAC0(v4, (void **)a2, v104, (int)v4[10]);
              return 0;
            }
          }
          else
          {
            v38 = v10;
            v22 = 0;
          }
LABEL_77:
          sub_70BC0(v22, v38);
          v37 = 27;
          return sub_70B98(v37);
        }
LABEL_66:
        v33 = 0;
        *(_DWORD *)(a2 + 16) = 0;
        *(_WORD *)(a2 + 12) = 5;
        do
        {
          v34 = v4[1];
          if ( *v34 == 39 )
          {
            if ( v33 )
            {
              v4[1] = v34 + 1;
              if ( v33 == 1 )
                *(_DWORD *)(a2 + 16) = *(unsigned __int8 *)(a2 + 16);
              return 0;
            }
LABEL_73:
            v37 = 26;
            return sub_70B98(v37);
          }
          ++v33;
          if ( !*v34 )
            goto LABEL_73;
          v4[1] = v34 + 1;
          v35 = *v34;
          if ( v35 == 92 )
            v35 = sub_6BBEC(v4 + 1);
          *(_DWORD *)(a2 + 16) = v35 | (*(_DWORD *)(a2 + 16) << 8);
        }
        while ( v33 != 4 );
        v36 = v4[1];
        if ( *v36 != 39 )
          goto LABEL_73;
LABEL_128:
        v4[1] = v36 + 1;
        return 0;
      }
      *(_BYTE *)(a2 + 20) = 0;
      goto LABEL_82;
    }
    v29 = v4[48];
    if ( ((unsigned __int8)v29 & 1) != 0 )
      goto LABEL_133;
LABEL_171:
    if ( v10 != 48 )
    {
      v86 = 10;
LABEL_173:
      v114 = a2;
      v87 = (char)v29;
      v88 = v15;
      for ( j = v14 - 48; ; j = j * v86 + (int)(v77 - 48) )
      {
        v77 = *v12;
        if ( (v77 & 0x80) != 0 || !isxdigit(*v12) )
          break;
        v4[1] = v12 + 1;
        if ( v77 > 0x39 && v86 == 10 || v77 > 0x37 && v86 == 8 || v77 > 0x31 && v86 == 2 )
        {
          v96 = v77;
          goto LABEL_206;
        }
        if ( v77 > 0x39 )
        {
          if ( v77 > 0x60 )
            LOBYTE(v77) = v77 - 32;
          v77 = (unsigned __int8)(v77 - 7);
        }
        v12 = v4[1];
      }
      v109 = j;
      v15 = v88;
      v112 = 1;
      v90 = v86 != 10;
      v91 = 0;
      v92 = v77 & 0xDF;
      while ( 1 )
      {
        while ( v92 == 85 )
        {
          v90 = 1;
          v112 = 0;
          v100 = v4[1] + 1;
          v4[1] = v100;
          v77 = *v100;
          v92 = v77 & 0xDF;
        }
        if ( v92 != 76 )
          break;
        if ( v91 )
          goto LABEL_161;
        v93 = v4[1];
        v4[1] = v93 + 1;
        v77 = v93[1];
        v92 = v77 & 0xDF;
        if ( (v77 & 0xFFFFFFDF) == 0x4C )
        {
          v4[1] = v93 + 2;
          v91 = 1;
          v77 = v93[2];
          v92 = v77 & 0xDF;
        }
      }
      v97 = v4[1];
      if ( tolower(*v97) != 105 )
      {
LABEL_208:
        if ( (v87 & 8) == 0 )
        {
          v101 = HIDWORD(v109) == 0;
          if ( !HIDWORD(v109) )
            v101 = 1;
          if ( !v101 )
          {
            *(_BYTE *)(v114 + 20) = 0;
LABEL_220:
            *(_WORD *)(v114 + 12) = 8;
            *(_QWORD *)(v114 + 24) = v109;
            goto LABEL_155;
          }
LABEL_219:
          *(_BYTE *)(v114 + 20) = v113;
          if ( !v91 )
          {
            *(_WORD *)(v114 + 12) = 3;
            *(_DWORD *)(v114 + 16) = v109;
            goto LABEL_155;
          }
          goto LABEL_220;
        }
        if ( !v91 )
        {
          v98 = v112;
          if ( v109 > 0x7FFFFFFF )
            v98 = 0;
          if ( v98 )
          {
            v98 = 0;
            v90 = -1;
            goto LABEL_218;
          }
          v99 = HIDWORD(v109) != 0;
          if ( HIDWORD(v109) == 1 )
            v99 = 1;
          if ( !v99 && v90 )
          {
            v90 = 1;
LABEL_218:
            v91 = v98;
            v113 = v90 != -1;
            goto LABEL_219;
          }
        }
        if ( (v109 & 0x8000000000000000LL) == 0LL )
          v98 = v112;
        else
          v98 = 0;
        if ( v98 )
          v90 = -1;
        else
          v98 = 1;
        goto LABEL_218;
      }
      v105 = v97[1];
      if ( v105 == 51 )
      {
        if ( v97[2] != 50 )
          goto LABEL_208;
        v106 = 1;
      }
      else
      {
        if ( v105 != 54 || v97[2] != 52 )
          goto LABEL_208;
        v106 = 0;
      }
      v91 = v106 ^ 1;
      v4[1] = v97 + 3;
      v77 = v97[3];
      goto LABEL_208;
    }
    v94 = *v12;
    if ( v94 == 88 )
      goto LABEL_197;
    if ( v94 <= 0x58 )
    {
      if ( v94 != 66 )
        goto LABEL_201;
    }
    else if ( v94 != 98 )
    {
      if ( v94 == 120 )
      {
LABEL_197:
        v4[1] = v12 + 1;
        v95 = v12[1];
        if ( (v95 & 0x80) == 0 && isxdigit(v12[1]) )
        {
          ++v12;
          v86 = 16;
          goto LABEL_173;
        }
        sub_70BC0(0, v95);
        v37 = 20;
        ++v4[1];
        return sub_70B98(v37);
      }
LABEL_201:
      v86 = 8;
      goto LABEL_173;
    }
    v4[1] = v12 + 1;
    v96 = v12[1];
    if ( (unsigned int)(v96 - 48) <= 1 )
    {
      ++v12;
      v86 = 2;
      goto LABEL_173;
    }
LABEL_206:
    sub_70BC0(0, v96);
    v37 = 20;
    return sub_70B98(v37);
  }
  *(_WORD *)(a2 + 12) = v10;
  if ( v10 != 46 )
  {
    if ( v10 != 40 )
      return 0;
    v18 = v4[1];
    if ( *v18 != 42 || ((unsigned int)v4[162] & 2) == 0 )
      return 0;
    goto LABEL_24;
  }
  v29 = v4[48];
  v12 = v4[1];
  if ( ((unsigned __int8)v29 & 1) == 0
    || (v30 = *v12, (v30 & 0x80) != 0)
    || (unsigned int)(v30 - 48) > 9
    || (v15 = v12 - 1, v12 - 1 > *v4) && sub_4B820(*(v12 - 2)) )
  {
    if ( *v12 == 46 && v12[1] == 46 )
    {
      v4[1] = v12 + 2;
      *(_WORD *)(a2 + 12) = 11868;
    }
    return 0;
  }
  v14 = 46;
LABEL_133:
  v108 = a2;
  v111 = v12;
  v64 = v4;
  v65 = v15;
  v66 = 0;
  v67 = v10;
  while ( 2 )
  {
    v68 = *v65;
    v69 = v65 + 1;
    if ( (v68 & 0x80) == 0 && (unsigned int)(v68 - 48) <= 9 )
    {
LABEL_142:
      v65 = v69;
      continue;
    }
    break;
  }
  if ( v68 == 46 )
  {
    if ( v66 )
    {
LABEL_143:
      v4 = v64;
LABEL_144:
      for ( v4[1] = v15; ; v4[1] = v73 )
      {
        v71 = v4[1];
        v72 = *v71;
        v73 = v71 + 1;
        v74 = sub_4B820(v72);
        if ( v72 != 46 && !v74 )
          break;
      }
      v37 = 21;
      return sub_70B98(v37);
    }
    v66 = 1;
    goto LABEL_142;
  }
  v70 = toupper(*v65);
  if ( v70 == 69 )
  {
    v11 = (v66 & 2) == 0;
    v66 |= 2u;
    if ( !v11 )
      goto LABEL_143;
    if ( ((v65[1] - 43) & 0xFD) == 0 )
      v69 = v65 + 2;
    goto LABEL_142;
  }
  v75 = v66;
  v10 = v67;
  v4 = v64;
  v12 = v111;
  a2 = v108;
  if ( !v75 )
    goto LABEL_171;
  if ( v70 == 76 || v70 == 70 )
  {
    v84 = v65[1];
    v85 = sub_4B820(v84);
    if ( v84 == 46 || v85 )
      goto LABEL_144;
  }
  v4[1] = v15;
  if ( sub_72238(v4 + 1, (_DWORD *)(v108 + 24)) != 1 )
  {
    v37 = 22;
    return sub_70B98(v37);
  }
  *(_WORD *)(v108 + 12) = 7;
  v76 = v4[1];
  v77 = *v76;
  v78 = toupper(v77);
  if ( v78 == 70 || v78 == 76 )
  {
    v4[1] = v76 + 1;
    v77 = v76[1];
  }
LABEL_155:
  if ( ((unsigned int)v4[48] & 2) != 0 )
  {
    if ( sub_4B820(v77) )
      goto LABEL_161;
    v79 = v77 == 39;
    if ( v77 != 39 )
      v79 = v77 == 34;
    if ( v79 || v77 == 46 )
    {
LABEL_161:
      v37 = 23;
      return sub_70B98(v37);
    }
  }
  v80 = v4[1];
  v81 = (unsigned int)v4[6];
  v4[5] = nullptr;
  v82 = v80 - v15;
  if ( v82 + 1 > v81 )
    v4[4] = (unsigned __int8 *)sub_78018((int)(v4 + 4), v4[4], v82 + 1, 1u);
  v83 = v4[4];
  v4[5] = (unsigned __int8 *)(v82 + 1);
  v83[v82] = 0;
  memmove(v4[4], v15, v82);
  return 0;
}
// 4FE62: masking with 0x1 was optimized away because %var_14.4 <= 0x1
// 4FEDA: masking with 0x1 was optimized away because %var_14.4 <= 0x1
