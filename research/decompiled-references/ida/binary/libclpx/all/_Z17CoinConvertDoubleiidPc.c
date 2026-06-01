void __fastcall CoinConvertDouble(int a1, int a2, double a3, char *a4)
{
  __int64 v4; // rbp
  double v7; // xmm2_8
  int v8; // eax
  int v9; // edx
  bool v10; // zf
  __int64 v11; // rax
  unsigned __int16 v12; // si
  int v13; // edx
  unsigned __int16 v14; // dx
  int v15; // ecx
  char v16; // dl
  unsigned __int16 v17; // si
  unsigned __int16 v18; // cx
  int v19; // edx
  char v20; // si
  unsigned __int16 v21; // si
  unsigned __int16 v22; // cx
  int v23; // edx
  char v24; // si
  unsigned __int16 v25; // cx
  char v26; // di
  unsigned __int16 v27; // dx
  int v28; // eax
  char v29; // si
  char v30; // dl
  bool v31; // cc
  char v32; // al
  int v33; // eax
  char *v34; // rbp
  unsigned int v35; // eax
  double v36; // xmm0_8
  unsigned __int16 v37; // si
  unsigned __int16 v38; // cx
  int v39; // edx
  char v40; // si
  unsigned __int16 v41; // si
  unsigned __int16 v42; // cx
  int v43; // edx
  char v44; // si
  unsigned __int16 v45; // si
  unsigned __int16 v46; // cx
  int v47; // edx
  char v48; // si
  unsigned __int64 v49; // rcx
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // esi
  __int64 v53; // rdi
  __m128i si128; // xmm0
  char *v55; // rax
  int v56; // edi
  __int64 v57; // rsi
  char *v58; // rcx
  char v59; // di
  char v60; // di
  bool v61; // cf
  char v62; // si
  char v63; // di
  char v64; // si
  char v65; // di
  char v66; // di
  char v67; // si
  char v68; // di
  char *v69; // rax
  int v70; // eax
  int v71; // esi
  __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // r11d
  __int64 v76; // rax
  char *v77; // r8
  int v78; // r10d
  unsigned int v79; // ecx
  unsigned int v80; // edx
  char v81; // cl
  int v82; // r9d
  int v83; // r8d
  int v84; // ecx
  char v85; // si
  __int64 v86; // rcx
  unsigned int v87; // r10d
  unsigned int v88; // edx
  char *v89; // rsi
  char *v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdi
  char v93; // di
  char v94; // si
  char v95; // di
  char v96; // di
  char v97; // si
  char v98; // di
  char v99; // di
  char v100; // si
  char v101; // di
  __int64 v102; // rdi
  double v103; // [rsp+0h] [rbp-38h]
  double v104; // [rsp+8h] [rbp-30h]
  char s[32]; // [rsp+18h] [rbp-20h] BYREF

  v4 = a2;
  if ( !a2 )
  {
    v7 = fabs(a3);
    if ( v7 >= 1.0e40 )
    {
      if ( a1 == 2 )
      {
        *a4 = 0;
        goto LABEL_72;
      }
      sprintf(a4, "%12.6g", a3);
LABEL_22:
      if ( *a4 )
      {
        if ( a4[1] )
        {
          if ( a4[2] )
          {
            if ( a4[3] )
            {
              if ( a4[4] )
              {
                if ( a4[5] )
                {
                  if ( a4[6] )
                  {
                    if ( a4[7] )
                    {
                      if ( a4[8] )
                      {
                        if ( a4[9] )
                        {
                          if ( a4[10] )
                          {
                            if ( a4[11] )
                            {
LABEL_34:
                              a4[12] = 0;
                              return;
                            }
                            v4 = 11;
                          }
                          else
                          {
                            v4 = 10;
                          }
                        }
                        else
                        {
                          v4 = 9;
                        }
                      }
                      else
                      {
                        v4 = 8;
                      }
                    }
                    else
                    {
                      v4 = 7;
                    }
                  }
                  else
                  {
                    v4 = 6;
                  }
                }
                else
                {
                  v4 = 5;
                }
              }
              else
              {
                v4 = 4;
              }
            }
            else
            {
              v4 = 3;
            }
          }
          else
          {
            v4 = 2;
          }
        }
        else
        {
          v4 = 1;
        }
      }
LABEL_72:
      v33 = 11 - v4;
      v34 = &a4[v4];
      v35 = v33 + 1;
      if ( v35 >= 8 )
      {
        *(_QWORD *)v34 = 0x2020202020202020LL;
        *(_QWORD *)&v34[v35 - 8] = 0x2020202020202020LL;
        v49 = (unsigned __int64)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v50 = ((_DWORD)v34 - v49 + v35) & 0xFFFFFFF8;
        if ( v50 >= 8 )
        {
          v51 = v50 & 0xFFFFFFF8;
          v52 = 0;
          do
          {
            v53 = v52;
            v52 += 8;
            *(_QWORD *)(v49 + v53) = 0x2020202020202020LL;
          }
          while ( v52 < v51 );
        }
      }
      else if ( (v35 & 4) != 0 )
      {
        *(_DWORD *)v34 = 538976288;
        *(_DWORD *)&v34[v35 - 4] = 538976288;
      }
      else if ( v35 )
      {
        *v34 = 32;
        if ( (v35 & 2) != 0 )
          *(_WORD *)&v34[v35 - 2] = 8224;
      }
      goto LABEL_34;
    }
    if ( a3 < 0.0 )
    {
      v36 = log10(-a3);
      if ( (unsigned int)((int)v36 + 3) <= 9 )
      {
        v104 = a3;
        v103 = v7;
        v9 = 9 - ((int)v36 + 1);
        if ( v9 > 9 )
          v9 = 9;
        goto LABEL_7;
      }
      sprintf(a4, "%13.6g", a3);
    }
    else
    {
      v8 = (int)log10(a3);
      if ( (unsigned int)(v8 + 3) <= 0xB )
      {
        v104 = a3;
        v103 = v7;
        v9 = 10 - v8;
        if ( 10 - v8 > 10 )
          v9 = 10;
LABEL_7:
        sprintf(s, "%%12.%df", v9);
        sprintf(a4, s, v104);
        v7 = v103;
        if ( a4[11] == 48 )
        {
          v10 = a4[10] == 48;
          a4[11] = 32;
          if ( v10 )
          {
            v10 = a4[9] == 48;
            a4[10] = 32;
            if ( v10 )
            {
              v10 = a4[8] == 48;
              a4[9] = 32;
              if ( v10 )
              {
                v10 = a4[7] == 48;
                a4[8] = 32;
                if ( v10 )
                {
                  v10 = a4[6] == 48;
                  a4[7] = 32;
                  if ( v10 )
                  {
                    v10 = a4[5] == 48;
                    a4[6] = 32;
                    if ( v10 )
                    {
                      v10 = a4[4] == 48;
                      a4[5] = 32;
                      if ( v10 )
                      {
                        v10 = a4[3] == 48;
                        a4[4] = 32;
                        if ( v10 )
                        {
                          v10 = a4[2] == 48;
                          a4[3] = 32;
                          if ( v10 )
                          {
                            v10 = a4[1] == 48;
                            a4[2] = 32;
                            if ( v10 )
                            {
                              v10 = *a4 == 48;
                              a4[1] = 32;
                              if ( v10 )
                                *a4 = 32;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_20;
      }
      sprintf(a4, "%13.7g", a3);
    }
    v69 = strchr(a4, 101);
    if ( !v69 )
    {
      if ( (a4[12] & 0xDF) != 0 )
        memmove(a4, a4 + 1, 0xCu);
      a4[12] = 0;
      goto LABEL_20;
    }
    v70 = (_DWORD)v69 - (_DWORD)a4;
    v71 = v70 + 2;
    if ( v70 + 2 <= 13 )
    {
      v72 = v71;
      if ( a4[v71] == 48 )
      {
        v73 = v70 + 3;
        v74 = v73 + (unsigned int)(11 - v70);
        do
        {
          v75 = v73;
          if ( v74 == v73 )
          {
            if ( v71 != (_DWORD)v73 )
              goto LABEL_20;
            goto LABEL_167;
          }
          ++v73;
        }
        while ( a4[v73 - 1] == 48 );
        if ( v71 != v75 )
          goto LABEL_170;
      }
    }
LABEL_167:
    if ( *a4 == 32 )
    {
      v71 = 0;
      v75 = 1;
      v72 = 0;
    }
    else
    {
      v71 = v70 - 1;
      if ( v70 > 13 )
        goto LABEL_20;
      v75 = v70;
      v72 = v71;
    }
LABEL_170:
    v76 = v75;
    if ( v75 + 16LL > v72 && v75 < v72 + 16 || (unsigned int)(14 - v75) <= 0x16 || v75 > 13 )
    {
      v102 = v72 - v75;
      do
      {
        a4[v102 + v76] = a4[v76];
        ++v76;
      }
      while ( (int)v76 <= 13 );
      goto LABEL_20;
    }
    v77 = &a4[v75];
    v78 = 1;
    if ( v75 <= 13 )
      v78 = 14 - v75;
    v79 = 13 - v75;
    v80 = -(int)v77 & 0xF;
    if ( v75 > 13 )
      v79 = 0;
    if ( v80 + 15 > v79 )
      goto LABEL_197;
    if ( !v80 )
    {
      v82 = v71;
      v83 = v75;
      goto LABEL_193;
    }
    v81 = *v77;
    v82 = v71 + 1;
    v83 = v75 + 1;
    a4[v72] = v81;
    if ( v80 != 1 )
    {
      v84 = v71 + 2;
      a4[v82] = a4[v83];
      v83 = v75 + 2;
      if ( v80 == 2 )
        goto LABEL_235;
      v82 = v71 + 3;
      a4[v84] = a4[v83];
      v83 = v75 + 3;
      if ( v80 != 3 )
      {
        v84 = v71 + 4;
        a4[v82] = a4[v83];
        v83 = v75 + 4;
        if ( v80 == 4 )
          goto LABEL_235;
        v82 = v71 + 5;
        a4[v84] = a4[v83];
        v83 = v75 + 5;
        if ( v80 != 5 )
        {
          v84 = v71 + 6;
          a4[v82] = a4[v83];
          v83 = v75 + 6;
          if ( v80 == 6 )
            goto LABEL_235;
          v82 = v71 + 7;
          a4[v84] = a4[v83];
          v83 = v75 + 7;
          if ( v80 != 7 )
          {
            v84 = v71 + 8;
            a4[v82] = a4[v83];
            v83 = v75 + 8;
            if ( v80 == 8 )
              goto LABEL_235;
            v82 = v71 + 9;
            a4[v84] = a4[v83];
            v83 = v75 + 9;
            if ( v80 != 9 )
            {
              v84 = v71 + 10;
              a4[v82] = a4[v83];
              v83 = v75 + 10;
              if ( v80 == 10 )
                goto LABEL_235;
              v82 = v71 + 11;
              a4[v84] = a4[v83];
              v83 = v75 + 11;
              if ( v80 != 11 )
              {
                v84 = v71 + 12;
                a4[v82] = a4[v83];
                v83 = v75 + 12;
                if ( v80 == 12 )
                  goto LABEL_235;
                v82 = v71 + 13;
                a4[v84] = a4[v83];
                v83 = v75 + 13;
                if ( v80 != 13 )
                {
                  v84 = v71 + 14;
                  a4[v82] = a4[v83];
                  v83 = v75 + 14;
                  if ( v80 != 14 )
                  {
                    v82 = v71 + 15;
                    v85 = a4[v83];
                    v83 = v75 + 15;
                    a4[v84] = v85;
                    goto LABEL_193;
                  }
LABEL_235:
                  v82 = v84;
                }
              }
            }
          }
        }
      }
    }
LABEL_193:
    v86 = v80;
    v87 = v78 - v80;
    v88 = 0;
    v89 = &a4[v86 + v75];
    v90 = &a4[v72 + v86];
    v91 = 0;
    do
    {
      ++v88;
      *(__m128i *)&v90[v91] = _mm_load_si128((const __m128i *)&v89[v91]);
      v91 += 16;
    }
    while ( v87 >> 4 > v88 );
    if ( (v87 & 0xFFFFFFF0) != v87 )
    {
      v72 = (int)((v87 & 0xFFFFFFF0) + v82);
      v76 = (int)((v87 & 0xFFFFFFF0) + v83);
LABEL_197:
      v92 = v72 - v76;
      do
      {
        a4[v92 + v76] = a4[v76];
        ++v76;
      }
      while ( (int)v76 <= 13 );
    }
LABEL_20:
    if ( v7 < 9.999999999999999e-21 )
      *(_DWORD *)a4 = 3157552;
    goto LABEL_22;
  }
  if ( a2 != 1 )
  {
    LOWORD(v11) = LOWORD(a3);
    a4[12] = 0;
    if ( a2 == 2 )
    {
      v37 = BYTE6(a3) & 0x3F;
      if ( v37 > 9u )
      {
        if ( v37 > 0x23u )
        {
          v93 = v37 + 29;
          v61 = v37 < 0x3Eu;
          v94 = v37 - 20;
          if ( v61 )
            v94 = v93;
          *a4 = v94;
        }
        else
        {
          *a4 = v37 + 87;
        }
      }
      else
      {
        *a4 = v37 + 48;
      }
      v38 = ((int)HIWORD(a3) >> 6) & 0x3F;
      v39 = (int)HIWORD(a3) >> 12;
      if ( v38 > 9u )
      {
        if ( v38 > 0x23u )
        {
          v95 = v38 - 20;
          if ( v38 < 0x3Eu )
            v95 = v38 + 29;
          a4[1] = v95;
        }
        else
        {
          a4[1] = v38 + 87;
        }
      }
      else
      {
        a4[1] = v38 + 48;
      }
      v40 = v39 + 48;
      if ( v39 > 9 )
        v40 = v39 + 87;
      a4[2] = v40;
      v41 = BYTE4(a3) & 0x3F;
      if ( v41 > 9u )
      {
        if ( v41 > 0x23u )
        {
          v96 = v41 + 29;
          v61 = v41 < 0x3Eu;
          v97 = v41 - 20;
          if ( v61 )
            v97 = v96;
          a4[3] = v97;
        }
        else
        {
          a4[3] = v41 + 87;
        }
      }
      else
      {
        a4[3] = v41 + 48;
      }
      v42 = ((int)WORD2(a3) >> 6) & 0x3F;
      v43 = (int)WORD2(a3) >> 12;
      if ( v42 > 9u )
      {
        if ( v42 > 0x23u )
        {
          v98 = v42 - 20;
          if ( v42 < 0x3Eu )
            v98 = v42 + 29;
          a4[4] = v98;
        }
        else
        {
          a4[4] = v42 + 87;
        }
      }
      else
      {
        a4[4] = v42 + 48;
      }
      v44 = v43 + 48;
      if ( v43 > 9 )
        v44 = v43 + 87;
      a4[5] = v44;
      v45 = BYTE2(a3) & 0x3F;
      if ( v45 > 9u )
      {
        if ( v45 > 0x23u )
        {
          v99 = v45 + 29;
          v61 = v45 < 0x3Eu;
          v100 = v45 - 20;
          if ( v61 )
            v100 = v99;
          a4[6] = v100;
        }
        else
        {
          a4[6] = v45 + 87;
        }
      }
      else
      {
        a4[6] = v45 + 48;
      }
      v46 = ((int)WORD1(a3) >> 6) & 0x3F;
      v47 = (int)WORD1(a3) >> 12;
      if ( v46 > 9u )
      {
        if ( v46 > 0x23u )
        {
          v101 = v46 - 20;
          if ( v46 < 0x3Eu )
            v101 = v46 + 29;
          a4[7] = v101;
        }
        else
        {
          a4[7] = v46 + 87;
        }
      }
      else
      {
        a4[7] = v46 + 48;
      }
      v48 = v47 + 48;
      if ( v47 > 9 )
        v48 = v47 + 87;
      a4[8] = v48;
      goto LABEL_57;
    }
    v12 = LOBYTE(a3) & 0x3F;
    v13 = (int)LOWORD(a3) >> 6;
    if ( v12 <= 9u )
    {
      v14 = v13 & 0x3F;
      v15 = (int)LOWORD(a3) >> 12;
      *a4 = v12 + 48;
      if ( v14 <= 9u )
      {
LABEL_41:
        a4[1] = v14 + 48;
LABEL_42:
        v16 = v15 + 87;
        if ( v15 <= 9 )
          v16 = v15 + 48;
        a4[2] = v16;
        v17 = BYTE2(a3) & 0x3F;
        if ( v17 > 9u )
        {
          if ( v17 > 0x23u )
          {
            v60 = v17 + 29;
            v61 = v17 < 0x3Eu;
            v62 = v17 - 20;
            if ( v61 )
              v62 = v60;
            a4[3] = v62;
          }
          else
          {
            a4[3] = v17 + 87;
          }
        }
        else
        {
          a4[3] = v17 + 48;
        }
        v18 = ((int)WORD1(a3) >> 6) & 0x3F;
        v19 = (int)WORD1(a3) >> 12;
        if ( v18 > 9u )
        {
          if ( v18 > 0x23u )
          {
            v65 = v18 - 20;
            if ( v18 < 0x3Eu )
              v65 = v18 + 29;
            a4[4] = v65;
          }
          else
          {
            a4[4] = v18 + 87;
          }
        }
        else
        {
          a4[4] = v18 + 48;
        }
        v20 = v19 + 48;
        if ( v19 > 9 )
          v20 = v19 + 87;
        a4[5] = v20;
        v21 = BYTE4(a3) & 0x3F;
        if ( v21 > 9u )
        {
          if ( v21 > 0x23u )
          {
            v66 = v21 + 29;
            v61 = v21 < 0x3Eu;
            v67 = v21 - 20;
            if ( v61 )
              v67 = v66;
            a4[6] = v67;
          }
          else
          {
            a4[6] = v21 + 87;
          }
        }
        else
        {
          a4[6] = v21 + 48;
        }
        v22 = ((int)WORD2(a3) >> 6) & 0x3F;
        v23 = (int)WORD2(a3) >> 12;
        if ( v22 > 9u )
        {
          if ( v22 > 0x23u )
          {
            v59 = v22 - 20;
            if ( v22 < 0x3Eu )
              v59 = v22 + 29;
            a4[7] = v59;
          }
          else
          {
            a4[7] = v22 + 87;
          }
        }
        else
        {
          a4[7] = v22 + 48;
        }
        v24 = v23 + 48;
        if ( v23 > 9 )
          v24 = v23 + 87;
        v11 = HIWORD(*(_QWORD *)&a3);
        a4[8] = v24;
LABEL_57:
        v25 = v11 & 0x3F;
        if ( v25 <= 9u )
        {
          a4[9] = v25 + 48;
        }
        else if ( v25 <= 0x23u )
        {
          a4[9] = v25 + 87;
        }
        else
        {
          v26 = v25 + 29;
          if ( v25 > 0x3Du )
            v26 = v25 - 20;
          a4[9] = v26;
        }
        v27 = ((int)(unsigned __int16)v11 >> 6) & 0x3F;
        v28 = (int)(unsigned __int16)v11 >> 12;
        if ( v27 <= 9u )
        {
          a4[10] = v27 + 48;
        }
        else if ( v27 <= 0x23u )
        {
          a4[10] = v27 + 87;
        }
        else
        {
          v29 = v27 + 29;
          if ( v27 > 0x3Du )
            v29 = v27 - 20;
          a4[10] = v29;
        }
        v30 = v28 + 48;
        v31 = v28 < 10;
        v32 = v28 + 87;
        if ( v31 )
          v32 = v30;
        a4[11] = v32;
        return;
      }
    }
    else
    {
      if ( v12 > 0x23u )
      {
        v63 = v12 + 29;
        v61 = v12 < 0x3Eu;
        v64 = v12 - 20;
        if ( v61 )
          v64 = v63;
        *a4 = v64;
      }
      else
      {
        *a4 = v12 + 87;
      }
      v14 = v13 & 0x3F;
      v15 = (int)LOWORD(a3) >> 12;
      if ( v14 <= 9u )
        goto LABEL_41;
    }
    if ( v14 > 0x23u )
    {
      v68 = v14 - 20;
      if ( v14 < 0x3Eu )
        v68 = v14 + 29;
      a4[1] = v68;
    }
    else
    {
      a4[1] = v14 + 87;
    }
    goto LABEL_42;
  }
  if ( fabs(a3) < 1.0e40 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_298290);
    *((_QWORD *)a4 + 2) = 0x2020202020202020LL;
    *(__m128i *)a4 = si128;
    sprintf(a4, "%.16g", a3);
    v55 = a4;
    v56 = 0;
    v57 = 0;
    do
    {
      v58 = &a4[v57];
      if ( *v55 != 32 )
      {
        ++v56;
        *v58 = *v55;
        v57 = v56;
        v58 = &a4[v56];
      }
      ++v55;
    }
    while ( a4 + 23 != v55 );
    *v58 = 0;
  }
  else if ( a1 == 2 )
  {
    *a4 = 0;
  }
  else
  {
    sprintf(a4, "%12.6g", a3);
  }
}

