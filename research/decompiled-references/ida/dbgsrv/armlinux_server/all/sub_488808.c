/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_488808
// Address: 0x0000000000488808

//----- (0000000000488808) ----------------------------------------------------
__int64 __fastcall sub_488808(unsigned __int8 **a1, _QWORD *a2)
{
  unsigned __int8 *v4; // x23
  int v5; // w20
  int v6; // t1
  unsigned int v7; // w1
  int v9; // w26
  __int64 *v10; // x1
  int *v11; // x20
  char *v12; // x5
  char *v13; // x4
  unsigned __int8 v14; // w24
  int v15; // w9
  int v16; // w6
  int v17; // w7
  int v18; // w28
  int v19; // w14
  __int16 v20; // w23
  int v21; // w11
  int v22; // t1
  __int64 v23; // x20
  _QWORD *v24; // x2
  __int16 v25; // w1
  __int16 v26; // w0
  __int16 v27; // w1
  _QWORD *v28; // x2
  __int16 v29; // w0
  __int16 v30; // w1
  __int64 v31; // x0
  unsigned int v32; // w1
  unsigned int v33; // w1
  _QWORD *v34; // x2
  __int16 v35; // w0
  __int16 v36; // w1
  int v37; // w0
  int v38; // w0
  int *v39; // x26
  int v40; // t1
  int v41; // w0
  bool v42; // w0
  unsigned __int8 v43; // w1
  __int64 *v44; // x3
  int v45; // w27
  int v46; // w26
  int v47; // w0
  bool v48; // w0
  char *v49; // x3
  __int16 v50; // w0
  __int16 v51; // w2
  int v52; // w0
  char *v53; // x15
  __int16 v54; // w12
  __int64 v55; // x3
  __int16 v56; // w0
  __int16 v57; // w12
  char *v58; // x3
  __int16 v59; // w0
  __int16 v60; // w2
  __int64 v61; // x0
  unsigned int v62; // w2
  unsigned int v63; // w2
  char *v64; // x2
  unsigned int v65; // w0
  unsigned __int16 *v66; // x12
  int i; // w13
  unsigned int v68; // w0
  int v69; // t1
  bool v70; // zf
  int *v71; // x26
  int v72; // t1
  int v73; // w0
  bool v74; // zf
  int v75; // w1
  unsigned __int8 *v76; // x0
  int v77; // w3
  int v78; // w2
  int v79; // w1
  int v80; // [xsp+60h] [xbp-F0h]
  __int64 *v81; // [xsp+60h] [xbp-F0h]
  int v82; // [xsp+60h] [xbp-F0h]
  int v83; // [xsp+68h] [xbp-E8h]
  char *v84; // [xsp+70h] [xbp-E0h]
  int v85; // [xsp+70h] [xbp-E0h]
  __int64 *v86; // [xsp+78h] [xbp-D8h]
  char *v87; // [xsp+80h] [xbp-D0h]
  int v88; // [xsp+88h] [xbp-C8h]
  int v89; // [xsp+88h] [xbp-C8h]
  int v90; // [xsp+88h] [xbp-C8h]
  int v91; // [xsp+8Ch] [xbp-C4h]
  _QWORD v92[2]; // [xsp+98h] [xbp-B8h] BYREF
  _QWORD v93[3]; // [xsp+A8h] [xbp-A8h] BYREF
  __int64 v94; // [xsp+C0h] [xbp-90h] BYREF
  __int64 v95; // [xsp+C8h] [xbp-88h]
  int v96; // [xsp+D0h] [xbp-80h]
  _WORD v97[2]; // [xsp+D4h] [xbp-7Ch] BYREF
  __int16 v98; // [xsp+D8h] [xbp-78h] BYREF
  unsigned __int16 v99; // [xsp+DAh] [xbp-76h]
  unsigned __int8 c[88]; // [xsp+F0h] [xbp-60h] BYREF

  *a2 = 0;
  a2[1] = 0;
  v4 = *a1;
  v5 = **a1;
  if ( (v5 & 0x80) == 0 )
  {
    while ( isspace(v5) )
    {
      v6 = *++v4;
      v5 = v6;
      if ( (v6 & 0x80) != 0 )
        goto LABEL_7;
    }
    v7 = 3;
    if ( !v5 )
      return v7;
  }
LABEL_7:
  *a1 = v4;
  sub_493350((unsigned __int64)c, v4, 80);
  v9 = c[0];
  memset(v93, 0, 22);
  if ( !c[0] )
  {
    v23 = 0;
    v20 = 0;
    v14 = 0;
LABEL_50:
    v37 = sub_487650((__int64)v93);
    if ( v37 <= 112 )
    {
      v42 = sub_487978((__int64)v93, v14, 0, 16494 - v37, 112);
      v7 = 2;
      if ( !v42 )
        goto LABEL_55;
      v43 = 0;
      v89 = WORD1(v93[0]);
      if ( v9 )
      {
        if ( v9 < 0 )
        {
          if ( -v9 > 4096 )
          {
            sub_487938((__int64)qword_4DE148, &v98);
            v89 = v89 + 0x3FFF - v99;
            sub_4872C0((__int64)&v98, v93);
            v85 = -1;
            v9 = -4096 - v9;
          }
          else
          {
            v9 = -v9;
            v85 = -1;
          }
        }
        else
        {
          v85 = 1;
        }
        v44 = &qword_4DE200[1];
        v45 = 1;
        v92[0] = 0;
        v92[1] = 0x3FFF800000000000LL;
        do
        {
          if ( (v9 & v45) != 0 )
          {
            v81 = v44;
            sub_488350((__int64)v92, (__int64)v44, v92);
            v44 = v81;
          }
          v44 -= 2;
          v45 *= 2;
        }
        while ( v44 != &qword_4DE138 );
        sub_487938((__int64)v92, &v98);
        if ( v85 == -1 )
        {
          v46 = 0x3FFF - v99;
          v47 = sub_4872C0((__int64)&v98, v93);
        }
        else
        {
          v46 = v99 - 16382;
          v47 = sub_4874F0((__int64)&v98, v93);
        }
        v89 += v46;
        v43 = v47 != 0;
      }
      v48 = sub_487978((__int64)v93, v43, 0, v89, 112);
      v7 = 2;
      if ( !v48 )
        goto LABEL_55;
    }
    else
    {
      memset((char *)v93 + 2, 0, 20);
    }
    LOWORD(v93[0]) = v20;
    sub_4878F8((unsigned __int16 *)v93, (__int64)a2);
    v7 = 1;
    goto LABEL_55;
  }
  v10 = &v94;
  v11 = (int *)c;
  v12 = (char *)v93 + 2;
  v13 = (char *)&v94 + 2;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 122;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (v9 & 0xFFFFFF80) != 0 )
        goto LABEL_20;
      if ( (unsigned int)(v9 - 48) > 9 )
        break;
      if ( !v18 )
        v18 = 1;
      if ( v9 == 48 )
      {
        if ( v16 | v19 )
        {
          if ( !WORD2(v93[0]) )
            goto LABEL_83;
          ++v16;
        }
        else
        {
          v16 = 0;
          v19 = 0;
        }
      }
      else
      {
        if ( !WORD2(v93[0]) )
        {
LABEL_83:
          v17 += v19;
          v49 = (char *)&v93[2] + 4;
          v50 = 0;
          do
          {
            v51 = 2 * (*(_WORD *)v49 & 0x7FFF);
            if ( (*(_WORD *)v49 & 0x8000) != 0 )
              v50 |= 1u;
            v70 = (v50 & 2) == 0;
            v50 = 2 * (v50 & 0x7FFF);
            if ( !v70 )
              v51 |= 1u;
            *(_WORD *)v49 = v51;
            v49 -= 2;
          }
          while ( v49 != v12 );
          v52 = v93[2];
          v53 = (char *)v10 + 20;
          v97[0] = 0;
          v54 = 0;
          v55 = v93[1];
          *v10 = v93[0];
          v10[1] = v55;
          *((_DWORD *)v10 + 4) = v52;
          v56 = 0;
          while ( 1 )
          {
            v70 = (v54 & 0x8000) == 0;
            v57 = 2 * (v54 & 0x7FFF);
            if ( !v70 )
              v56 |= 1u;
            v70 = (v56 & 2) == 0;
            v56 = 2 * (v56 & 0x7FFF);
            if ( !v70 )
              v57 |= 1u;
            *(_WORD *)v53 = v57;
            v53 -= 2;
            if ( v53 == v13 )
              break;
            v54 = *(_WORD *)v53;
          }
          v58 = (char *)v10 + 20;
          v59 = 0;
          do
          {
            v60 = 2 * (*(_WORD *)v58 & 0x7FFF);
            if ( (*(_WORD *)v58 & 0x8000) != 0 )
              v59 |= 1u;
            v70 = (v59 & 2) == 0;
            v59 = 2 * (v59 & 0x7FFF);
            if ( !v70 )
              v60 |= 1u;
            *(_WORD *)v58 = v60;
            v58 -= 2;
          }
          while ( v58 != v13 );
          v61 = 20;
          v62 = 0;
          do
          {
            v63 = *(unsigned __int16 *)((char *)v10 + v61) + *(unsigned __int16 *)((char *)v93 + v61) + v62;
            *(_WORD *)((char *)v93 + v61) = v63;
            v61 -= 2;
            v62 = HIWORD(v63);
          }
          while ( v61 != 2 );
          *v10 = 0;
          v10[1] = 0;
          *((_DWORD *)v10 + 4) = 0;
          v64 = (char *)&v93[2] + 4;
          v65 = 0;
          *((_WORD *)v10 + 10) = 0;
          v66 = (unsigned __int16 *)v10 + 10;
          HIWORD(v96) = v9 - 48;
          for ( i = 0; ; i = *v66 )
          {
            --v66;
            v68 = *(unsigned __int16 *)v64 + i + v65;
            *(_WORD *)v64 = v68;
            v64 -= 2;
            v65 = HIWORD(v68);
            if ( v64 == v12 )
              break;
          }
          ++v16;
          goto LABEL_17;
        }
        v14 = 1;
        ++v16;
      }
LABEL_17:
      v22 = *((unsigned __int8 *)v11 + 1);
      v11 = (int *)((char *)v11 + 1);
      v9 = v22;
      if ( !v22 )
        goto LABEL_18;
    }
    if ( v9 == 46 )
    {
      if ( v19 )
        goto LABEL_54;
      v38 = *(unsigned __int8 *)v11;
      if ( (v38 & 0x80) != 0 )
      {
        v39 = v11;
      }
      else
      {
        v39 = v11;
        if ( (unsigned int)(v38 - 48) <= 9 )
        {
          do
          {
            v40 = *((unsigned __int8 *)v39 + 1);
            v39 = (int *)((char *)v39 + 1);
            v38 = v40;
          }
          while ( (v40 & 0x80) == 0 && (unsigned int)(v38 - 48) <= 9 );
        }
      }
      v80 = v17;
      v83 = v15;
      v84 = v12;
      v86 = v10;
      v87 = v13;
      v88 = v16;
      v91 = v21;
      v41 = tolower(v38);
      v17 = v80;
      v15 = v83;
      v16 = v88;
      v21 = v91;
      v12 = v84;
      v10 = v86;
      v13 = v87;
      if ( v41 == 101 )
      {
        if ( v18 )
          v70 = 0;
        else
          v70 = v11 == v39;
        if ( v70 )
          goto LABEL_54;
      }
      else
      {
        *(_BYTE *)v39 = 0;
      }
      if ( v39 > (int *)c && *((_BYTE *)v39 - 1) == 48 )
      {
        v71 = (int *)((char *)v39 - 1);
        do
        {
          *(_BYTE *)v71 = v91;
          if ( v71 == (int *)c )
            break;
          v72 = *((unsigned __int8 *)v71 - 1);
          v71 = (int *)((char *)v71 - 1);
        }
        while ( v72 == 48 );
        v15 = 1;
      }
      v19 = 1;
      if ( !v18 )
      {
        v18 = 1;
        v19 = 1;
      }
      goto LABEL_17;
    }
LABEL_20:
    if ( v9 == 122 )
    {
      if ( !v15 )
        goto LABEL_54;
      goto LABEL_17;
    }
    if ( ((v9 - 43) & 0xFFFFFFFD) != 0 )
      break;
    if ( v18 )
    {
      v9 = 0;
      v23 = (int)((_DWORD)v11 - (unsigned int)c);
      goto LABEL_24;
    }
    v70 = v9 == 45;
    v69 = *((unsigned __int8 *)v11 + 1);
    v11 = (int *)((char *)v11 + 1);
    v9 = v69;
    v18 = -1;
    if ( v70 )
      v20 = -1;
    if ( !v9 )
    {
LABEL_18:
      v23 = (int)((_DWORD)v11 - (unsigned int)c);
LABEL_24:
      v9 -= v17;
      if ( v9 > 0 && !WORD2(v93[0]) )
      {
        do
        {
          v94 = v93[0];
          v95 = v93[1];
          v24 = v97;
          v96 = v93[2];
          v25 = 0;
          v26 = 0;
          v97[0] = 0;
          while ( 1 )
          {
            v70 = (v25 & 0x8000) == 0;
            v27 = 2 * (v25 & 0x7FFF);
            if ( !v70 )
              v26 |= 1u;
            v70 = (v26 & 2) == 0;
            v26 = 2 * (v26 & 0x7FFF);
            if ( !v70 )
              v27 |= 1u;
            *(_WORD *)v24 = v27;
            v24 = (_QWORD *)((char *)v24 - 2);
            if ( v24 == (__int64 *)((char *)&v94 + 2) )
              break;
            v25 = *(_WORD *)v24;
          }
          v28 = v97;
          v29 = 0;
          do
          {
            v30 = 2 * (*(_WORD *)v28 & 0x7FFF);
            if ( (*(_WORD *)v28 & 0x8000) != 0 )
              v29 |= 1u;
            v70 = (v29 & 2) == 0;
            v29 = 2 * (v29 & 0x7FFF);
            if ( !v70 )
              v30 |= 1u;
            *(_WORD *)v28 = v30;
            v28 = (_QWORD *)((char *)v28 - 2);
          }
          while ( v28 != (__int64 *)((char *)&v94 + 2) );
          v31 = 20;
          v32 = 0;
          do
          {
            v33 = *(unsigned __int16 *)((char *)v93 + v31) + *(unsigned __int16 *)((char *)&v94 + v31) + v32;
            *(_WORD *)((char *)&v94 + v31) = v33;
            v31 -= 2;
            v32 = HIWORD(v33);
          }
          while ( v31 != 2 );
          v34 = v97;
          v35 = 0;
          do
          {
            v36 = 2 * (*(_WORD *)v34 & 0x7FFF);
            if ( (*(_WORD *)v34 & 0x8000) != 0 )
              v35 |= 1u;
            v70 = (v35 & 2) == 0;
            v35 = 2 * (v35 & 0x7FFF);
            if ( !v70 )
              v36 |= 1u;
            *(_WORD *)v34 = v36;
            v34 = (_QWORD *)((char *)v34 - 2);
          }
          while ( v34 != (__int64 *)((char *)&v94 + 2) );
          if ( WORD2(v94) )
            break;
          --v9;
          LODWORD(v93[2]) = v96;
          v93[0] = v94;
          v93[1] = v95;
          WORD2(v93[2]) = 0;
          if ( !v9 )
            break;
        }
        while ( !WORD2(v93[0]) );
      }
      goto LABEL_50;
    }
  }
  v82 = v17;
  v90 = v16;
  v73 = tolower(v9);
  v17 = v82;
  if ( v73 != 101 )
  {
    v7 = 3;
    v23 = (int)((_DWORD)v11 - (unsigned int)c);
    if ( !v18 )
      goto LABEL_55;
    v74 = v18 < 0 && v90 == 0;
    v9 = 0;
    if ( v74 )
      goto LABEL_55;
    goto LABEL_24;
  }
  if ( !v18 )
  {
LABEL_54:
    v7 = 3;
    v23 = (int)((_DWORD)v11 - (unsigned int)c);
    goto LABEL_55;
  }
  v75 = *((unsigned __int8 *)v11 + 1);
  v76 = (unsigned __int8 *)v11 + 2;
  if ( v75 == 45 )
  {
    v75 = *((unsigned __int8 *)v11 + 2);
    v77 = -1;
  }
  else
  {
    if ( v75 == 43 )
      v75 = *((unsigned __int8 *)v11 + 2);
    else
      v76 = (unsigned __int8 *)v11 + 1;
    v77 = 1;
  }
  v9 = v75 & 0x80;
  if ( (v75 & 0x80) == 0 && (unsigned int)(v75 - 48) <= 9 )
  {
    v78 = *v76;
    while ( 1 )
    {
      ++v76;
      v79 = v78 + 10 * v9;
      v9 = v79 - 48;
      if ( ((v79 - 48) & 0x8000) != 0 )
        break;
      v78 = *v76;
      if ( (v78 & 0x80) != 0 || (unsigned int)(v78 - 48) > 9 )
      {
        v23 = (int)((_DWORD)v76 - (unsigned int)c);
        if ( v77 != -1 )
          goto LABEL_24;
        if ( v79 != 48 )
        {
          v9 = 48 - v79;
          goto LABEL_24;
        }
        v7 = 3;
        goto LABEL_55;
      }
    }
  }
  v7 = 3;
  v23 = (int)((_DWORD)v76 - (unsigned int)c);
LABEL_55:
  *a1 += v23;
  return v7;
}
// 488808: could not find valid save-restore pair for x24
// 488808: could not find valid save-restore pair for x26
// 488808: could not find valid save-restore pair for x27
// 488808: could not find valid save-restore pair for x28
// 488FD0: mask 0xFFFFFF80 is shortened because w1.4 <= 0xFF
// 4DE138: using guessed type __int64 qword_4DE138;
// 4DE148: using guessed type __int64 qword_4DE148[17];
// 4DE200: using guessed type __int64 qword_4DE200[2];
