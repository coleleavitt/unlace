/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C63C
// Address: 0x0006C63C

//----- (0006C63C) --------------------------------------------------------
char *__fastcall sub_6C63C(char **a1, _DWORD *a2, unsigned __int8 *a3, unsigned int a4)
{
  int v5; // r9
  unsigned __int8 *v6; // r0
  int v7; // r4
  unsigned __int8 *v8; // r11
  int v9; // r6
  bool v10; // zf
  unsigned __int8 *v11; // r7
  _BOOL4 v12; // r3
  int v13; // r4
  _BOOL4 v14; // r4
  char *v15; // r3
  char *v16; // r1
  char *v17; // r2
  void *v18; // r6
  void *v19; // r5
  __int64 v20; // kr08_8
  unsigned int v21; // r5
  _BOOL4 v22; // r3
  bool v23; // zf
  unsigned int v24; // r11
  unsigned int v25; // r5
  void *v26; // r1
  int v27; // r3
  char *v28; // r4
  void *v29; // r0
  unsigned int v31; // r11
  unsigned int v32; // r5
  void *v33; // r1
  int v34; // r3
  char *v35; // r1
  char *v36; // r3
  void *v37; // r5
  __int64 v38; // kr10_8
  char *v39; // r3
  char *v40; // r1
  void **v41; // r2
  void *v42; // r7
  __int64 v43; // kr20_8
  int v44; // r9
  bool v45; // zf
  unsigned __int8 *v46; // r0
  unsigned __int8 *v47; // r0
  int v48; // r4
  unsigned __int8 *v49; // r5
  bool v50; // zf
  int v51; // r3
  unsigned __int8 *v52; // r11
  unsigned int v53; // r9
  unsigned int v54; // r5
  void *v55; // r1
  unsigned __int8 *v56; // r6
  unsigned __int8 v57; // r10
  int v58; // r3
  unsigned int v59; // r3
  int v60; // r2
  int v61; // t1
  unsigned int v62; // r6
  int v63; // r3
  unsigned int v64; // r4
  _DWORD *v65; // r5
  void *v66; // r1
  int *v67; // r4
  void *v68; // r6
  unsigned int v69; // r1
  unsigned int v70; // r2
  unsigned int v71; // r1
  void *v72; // r0
  _DWORD *v73; // r0
  int v74; // r3
  int v75; // r6
  int v76; // r10
  _DWORD *v77; // r4
  _DWORD *v78; // r9
  int v79; // r3
  int v80; // r3
  int v81; // r3
  void *v82; // r0
  void *v83; // r5
  void *v84; // r0
  int v87; // [sp+10h] [bp-3Ch]
  unsigned __int8 *v88; // [sp+14h] [bp-38h]
  int v89; // [sp+1Ch] [bp-30h]
  void *ptr; // [sp+20h] [bp-2Ch] BYREF
  unsigned int v91; // [sp+24h] [bp-28h]
  unsigned int v92; // [sp+28h] [bp-24h]
  void *v93; // [sp+2Ch] [bp-20h] BYREF
  unsigned int v94; // [sp+30h] [bp-1Ch]
  unsigned int v95; // [sp+34h] [bp-18h]
  void *v96; // [sp+38h] [bp-14h] BYREF
  unsigned int v97; // [sp+3Ch] [bp-10h]
  int v98; // [sp+40h] [bp-Ch]

  if ( !a3 )
    return nullptr;
  v5 = (a4 >> 2) & 1;
  ptr = nullptr;
  v91 = 0;
  v92 = 0;
  v6 = sub_7EE04(a3);
LABEL_3:
  v7 = *v6;
  v8 = v6;
  v9 = 0;
LABEL_4:
  if ( v7 )
  {
    while ( 1 )
    {
      v10 = v7 == 34;
      if ( v7 != 34 )
        v10 = v7 == 39;
      v11 = v8 + 1;
      if ( v10 )
      {
        v12 = v9 == v7;
        if ( !v9 )
          v12 = 0;
        if ( v12 )
        {
          v13 = v8[1];
          if ( (v13 & 0x80) == 0 )
          {
            v14 = v13 == 0;
            if ( isspace(v8[1]) )
              v14 = 1;
            if ( v14 )
            {
              v15 = a1[1];
              v16 = *a1;
              if ( v15 + 1 > a1[2] )
              {
                v16 = (char *)sub_78018((int)a1, v16, (unsigned int)(v15 + 1), 0xCu);
                v15 = a1[1];
                *a1 = v16;
              }
              v5 = 0;
              v17 = &v16[12 * (_DWORD)v15];
              *(_DWORD *)v17 = 0;
              v18 = ptr;
              *((_DWORD *)v17 + 1) = 0;
              *((_DWORD *)v17 + 2) = 0;
              ++a1[1];
              v19 = *(void **)v17;
              v20 = *(_QWORD *)(v17 + 4);
              *(_DWORD *)v17 = v18;
              ptr = v19;
              *((_DWORD *)v17 + 1) = v91;
              v91 = v20;
              *((_DWORD *)v17 + 2) = v92;
              v92 = HIDWORD(v20);
            }
          }
          v6 = sub_7EE04(v8 + 1);
          goto LABEL_3;
        }
        if ( !v9 )
        {
          v34 = v8[1];
          v9 = v7;
          ++v8;
          v7 = v34;
          goto LABEL_4;
        }
      }
      else if ( !v9 && (v7 & 0x80) == 0 && isspace(v7) )
      {
        v39 = a1[1];
        v40 = *a1;
        if ( v39 + 1 > a1[2] )
        {
          v40 = (char *)sub_78018((int)a1, v40, (unsigned int)(v39 + 1), 0xCu);
          v39 = a1[1];
          *a1 = v40;
        }
        v41 = (void **)&v40[12 * (_DWORD)v39];
        *v41 = nullptr;
        v41[1] = nullptr;
        v41[2] = nullptr;
        ++a1[1];
        v42 = *v41;
        v43 = *(_QWORD *)(v41 + 1);
        *v41 = ptr;
        ptr = v42;
        v41[1] = (void *)v91;
        v91 = v43;
        v41[2] = (void *)v92;
        v92 = HIDWORD(v43);
        v8 = sub_7EE04(v8 + 1);
        v7 = *v8;
        v5 = 0;
        goto LABEL_4;
      }
      v21 = v91;
      v22 = v7 == 92;
      if ( v9 == 39 )
        v22 = 0;
      if ( v22 )
        break;
LABEL_31:
      if ( v21 )
      {
        v24 = v21 - 1;
        v25 = v21 + 1;
        v26 = ptr;
        if ( v92 < v25 )
          goto LABEL_54;
      }
      else
      {
        v24 = 0;
        v25 = 2;
        v26 = ptr;
        if ( v92 < 2 )
        {
LABEL_54:
          v26 = sub_78018((int)&ptr, v26, v25, 1u);
          ptr = v26;
        }
      }
      v91 = v25;
      *((_BYTE *)v26 + v24) = v7;
      *((_BYTE *)ptr + v24 + 1) = 0;
      if ( (v7 & 0xFD) != 0x3C )
        goto LABEL_52;
      v27 = v5 ^ 1;
      if ( v9 )
        v27 = 0;
      if ( !v27 )
      {
LABEL_52:
        v7 = *v11;
        v8 = v11;
        goto LABEL_4;
      }
      if ( !v91 )
        goto LABEL_57;
      v5 = v91 - 1 <= 2;
      if ( !a2 )
        v5 = 0;
      if ( !v5 )
        goto LABEL_41;
      v88 = &v11[1 - v91];
      if ( v91 == 1 )
        goto LABEL_57;
      v44 = (unsigned __int8)*((char *)ptr + v91 - 2);
      if ( v44 == 62 )
      {
        v7 = *v11;
        if ( v91 == 2 )
        {
          v89 = 1;
          if ( v7 == 62 )
          {
            v46 = v11 + 1;
            v87 = 6;
          }
          else
          {
            v46 = v11;
            v87 = 2;
          }
          goto LABEL_74;
        }
        v58 = *(unsigned __int8 *)ptr;
        if ( (v58 & 0x80) == 0 )
        {
          v59 = v58 - 48;
          if ( v59 <= 9 )
          {
            v89 = v59;
            if ( v7 == 62 )
              v60 = 6;
            else
              v60 = 2;
            if ( v7 == 62 )
              v46 = v11 + 1;
            else
              v46 = v11;
            v87 = v60;
            goto LABEL_74;
          }
        }
        v9 = 0;
        v5 = 0;
        v8 = v11;
        if ( v7 != 62 )
          goto LABEL_4;
      }
      else
      {
        v45 = v44 == 60;
        if ( v44 == 60 )
          v45 = v91 == 2;
        if ( v45 )
        {
          v46 = v11;
          v87 = 1;
          v89 = 0;
LABEL_74:
          v93 = nullptr;
          v94 = 0;
          v95 = 0;
          v47 = sub_7EE04(v46);
          v48 = *v47;
          v49 = v47;
          v50 = v48 == 39;
          if ( v48 != 39 )
            v50 = v48 == 34;
          if ( !v50 )
          {
            v52 = v47;
            if ( *v47 )
            {
              do
              {
                if ( (v48 & 0x80) == 0 && isspace(v48) )
                  break;
                v48 &= 0xFDu;
                if ( v48 == 60 )
                  break;
                v61 = *++v52;
                v48 = v61;
              }
              while ( v61 );
              if ( v52 > v49 )
              {
                v62 = v52 - v49;
                v96 = nullptr;
                v97 = 0;
                if ( v52 == v49 )
                  v48 = v52 - v49;
                v98 = 0;
                if ( v52 == v49 )
                {
                  v83 = (void *)(v52 - v49);
                }
                else
                {
                  if ( v62 == -1 )
                  {
                    v84 = nullptr;
                  }
                  else
                  {
                    v84 = sub_78018((int)&v96, nullptr, v62 + 1, 1u);
                    v96 = v84;
                  }
                  v97 = v62 + 1;
                  memmove(v84, v49, v52 - v49);
                  *((_BYTE *)v96 + v62) = 0;
                  v48 = v98;
                  v83 = v96;
                  v62 = v97;
                }
                v96 = nullptr;
                v97 = 0;
                v98 = 0;
                if ( !v93 )
                {
                  v93 = v83;
                  v94 = v62;
                  v95 = v48;
                  goto LABEL_108;
                }
                v94 = 0;
                sub_77F70(v93);
                v93 = v83;
                v94 = v62;
                v95 = v48;
                if ( !v96 )
                  goto LABEL_108;
                v97 = 0;
                sub_77F70(v96);
              }
            }
            v62 = v94;
            goto LABEL_108;
          }
          v51 = v47[1];
          v52 = v47 + 1;
          if ( !v47[1] )
          {
LABEL_119:
            if ( !v48 )
            {
              v62 = v94;
              goto LABEL_121;
            }
            v94 = 0;
            goto LABEL_116;
          }
          while ( 2 )
          {
            v56 = v52 + 1;
            if ( v51 == 92 )
            {
              v57 = v52[1];
              if ( !v57 )
              {
                ++v52;
                goto LABEL_119;
              }
              v52 += 2;
            }
            else
            {
              if ( v51 == v48 )
              {
                ++v52;
                v62 = v94;
LABEL_121:
                v87 |= 8u;
LABEL_108:
                if ( v62 > 1 )
                {
                  v63 = a2[1];
                  v64 = a2[2];
                  if ( v63 + 1 > v64 )
                  {
                    v73 = sub_78018((int)a2, nullptr, v63 + 1, 0x1Cu);
                    v74 = a2[1];
                    v65 = v73;
                    v75 = a2[2];
                    a2[2] = v64;
                    v76 = v74 - 1;
                    v77 = (_DWORD *)*a2;
                    if ( v74 - 1 >= 0 )
                    {
                      v78 = v73;
                      do
                      {
                        *v78 = *v77;
                        v78[1] = v77[1];
                        v79 = v77[2];
                        v77[1] = 0;
                        v78[2] = v79;
                        v80 = v77[3];
                        v77[2] = 0;
                        v78[3] = v80;
                        v81 = v77[4];
                        v77[3] = 0;
                        v78[4] = v81;
                        v78[5] = v77[5];
                        v78[6] = v77[6];
                        v82 = (void *)v77[1];
                        if ( v82 )
                        {
                          v77[2] = 0;
                          sub_77F70(v82);
                        }
                        --v76;
                        v77 += 7;
                        v78 += 7;
                      }
                      while ( v76 != -1 );
                      v77 = (_DWORD *)*a2;
                    }
                    sub_77F70(v77);
                    v63 = a2[1];
                    *a2 = v65;
                    a2[2] = v75;
                  }
                  else
                  {
                    v65 = (_DWORD *)*a2;
                  }
                  v66 = v93;
                  v67 = &v65[7 * v63];
                  v67[1] = 0;
                  v67[2] = 0;
                  v67[3] = 0;
                  ++a2[1];
                  v68 = (void *)v67[1];
                  v67[1] = (int)v66;
                  v67[4] = v87;
                  v69 = v67[2];
                  v67[2] = v94;
                  v70 = v67[3];
                  v93 = v68;
                  v94 = v69;
                  v71 = v95;
                  v95 = v70;
                  v67[3] = v71;
                  *v67 = v89;
                  v8 = sub_7EE04(v52);
                  v72 = v93;
                  v67[6] = v8 - v88;
                  v67[5] = v88 - a3;
                  if ( v72 )
                  {
                    v94 = 0;
                    sub_77F70(v72);
                  }
                  if ( !v8 )
                  {
LABEL_57:
                    v5 = 0;
                    v7 = *v11;
                    v9 = 0;
                    v8 = v11;
                    goto LABEL_4;
                  }
                  v5 = 0;
                  v91 = 0;
                  v9 = 0;
                  v7 = *v8;
                  goto LABEL_4;
                }
LABEL_116:
                if ( !v93 )
                  goto LABEL_57;
                v5 = 0;
                v8 = v11;
                v94 = 0;
                v9 = 0;
                sub_77F70(v93);
                v7 = *v11;
                goto LABEL_4;
              }
              v57 = *v52;
              v56 = v52++;
            }
            if ( v94 )
            {
              v53 = v94 - 1;
              v54 = v94 + 1;
              v55 = v93;
              if ( v95 < v94 + 1 )
                goto LABEL_87;
            }
            else
            {
              v53 = 0;
              v54 = 2;
              v55 = v93;
              if ( v95 < 2 )
              {
LABEL_87:
                v55 = sub_78018((int)&v93, v55, v54, 1u);
                v93 = v55;
              }
            }
            v94 = v54;
            *((_BYTE *)v55 + v53) = v57;
            *((_BYTE *)v93 + v53 + 1) = 0;
            v51 = v56[1];
            if ( !v56[1] )
              goto LABEL_119;
            continue;
          }
        }
        v5 = 0;
LABEL_41:
        v7 = *v11;
        v8 = v11;
        v9 = 0;
        if ( !*v11 )
          goto LABEL_42;
      }
    }
    v7 = v8[1];
    v11 = v8 + 2;
    v23 = v7 == 34;
    if ( v7 != 34 )
      v23 = v7 == 92;
    if ( v23 )
    {
      if ( !v8[1] )
        goto LABEL_43;
      goto LABEL_31;
    }
    if ( v91 )
    {
      v31 = v91 - 1;
      v32 = v91 + 1;
      v33 = ptr;
      if ( v92 >= v91 + 1 )
        goto LABEL_50;
    }
    else
    {
      v31 = 0;
      v32 = 2;
      v33 = ptr;
      if ( v92 >= 2 )
        goto LABEL_50;
    }
    v33 = sub_78018((int)&ptr, v33, v32, 1u);
    ptr = v33;
LABEL_50:
    v91 = v32;
    *((_BYTE *)v33 + v31) = 92;
    *((_BYTE *)ptr + v31 + 1) = 0;
    v21 = v91;
    if ( !v7 )
      goto LABEL_43;
    goto LABEL_31;
  }
LABEL_42:
  v21 = v91;
LABEL_43:
  v28 = a1[1];
  if ( v21 > 1 )
  {
    v35 = *a1;
    if ( v28 + 1 > a1[2] )
    {
      v35 = (char *)sub_78018((int)a1, v35, (unsigned int)(v28 + 1), 0xCu);
      v28 = a1[1];
      *a1 = v35;
    }
    v36 = &v35[12 * (_DWORD)v28];
    *(_DWORD *)v36 = 0;
    *((_DWORD *)v36 + 1) = 0;
    *((_DWORD *)v36 + 2) = 0;
    v37 = ptr;
    ++a1[1];
    v29 = *(void **)v36;
    v38 = *(_QWORD *)(v36 + 4);
    *(_DWORD *)v36 = v37;
    ptr = v29;
    *((_DWORD *)v36 + 1) = v91;
    v91 = v38;
    *((_DWORD *)v36 + 2) = v92;
    v92 = HIDWORD(v38);
    v28 = a1[1];
  }
  else
  {
    v29 = ptr;
  }
  if ( v29 )
  {
    v91 = 0;
    sub_77F70(v29);
  }
  return v28;
}
// 6CA3E: conditional instruction was optimized away because r3.4<Au
