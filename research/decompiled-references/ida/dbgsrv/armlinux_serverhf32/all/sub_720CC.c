/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_720CC
// Address: 0x000720CC

//----- (000720CC) --------------------------------------------------------
int __fastcall sub_720CC(unsigned __int8 **a1, _DWORD *a2)
{
  int v2; // r2
  unsigned __int8 *v3; // r5
  int v4; // r4
  int v5; // t1
  int result; // r0
  int v7; // r9
  unsigned int v8; // r10
  int v9; // lr
  int *j; // r5
  int v11; // r2
  __int16 v12; // r6
  int v13; // t1
  unsigned int v14; // r9
  unsigned int v15; // r3
  __int16 v16; // r4
  __int16 v17; // r5
  __int16 *v18; // r6
  __int16 v19; // t1
  bool v20; // nf
  __int16 v21; // r4
  __int16 *v22; // r4
  __int16 *v23; // r0
  __int16 v24; // r2
  __int16 v25; // t1
  __int16 v26; // r3
  _BYTE *v27; // r6
  unsigned int v28; // r3
  unsigned __int16 *v29; // r5
  int v30; // t1
  unsigned int v31; // r3
  __int16 v32; // r2
  __int16 v33; // t1
  __int16 v34; // r3
  int v35; // r0
  int v36; // r0
  int *v37; // r4
  int v38; // t1
  int v39; // r8
  int v40; // r1
  int v41; // r5
  int *v42; // r4
  int v43; // r0
  int v44; // r3
  int v45; // t1
  bool v46; // zf
  _BYTE *v47; // r1
  __int16 v48; // r2
  __int16 v49; // t1
  __int16 v50; // r3
  __int16 v51; // r4
  __int16 v52; // r3
  __int16 *v53; // r7
  __int16 *i; // r1
  __int16 v55; // t1
  __int16 v56; // r4
  _BYTE *v57; // r4
  __int16 v58; // r2
  __int16 *v59; // r0
  __int16 v60; // t1
  __int16 v61; // r3
  _BYTE *v62; // r0
  unsigned int v63; // r3
  int v64; // t1
  unsigned int v65; // r3
  int v66; // r2
  _BYTE *v67; // r1
  unsigned int v68; // r3
  int v69; // t1
  unsigned int v70; // r3
  int *v71; // r4
  int v72; // t1
  int v73; // r3
  int *v74; // r2
  int v75; // r1
  int v76; // r3
  int v77; // r2
  int v78; // [sp+8h] [bp-E4h]
  int v79; // [sp+8h] [bp-E4h]
  int v80; // [sp+Ch] [bp-E0h]
  int v81; // [sp+10h] [bp-DCh]
  int v84; // [sp+24h] [bp-C8h]
  int v85; // [sp+28h] [bp-C4h]
  int v86; // [sp+2Ch] [bp-C0h]
  _DWORD v87[4]; // [sp+38h] [bp-B4h] BYREF
  _BYTE v88[22]; // [sp+48h] [bp-A4h] BYREF
  _BYTE v89[2]; // [sp+5Eh] [bp-8Eh] BYREF
  int v90; // [sp+60h] [bp-8Ch] BYREF
  __int128 v91; // [sp+64h] [bp-88h] BYREF
  __int16 v92; // [sp+74h] [bp-78h] BYREF
  _BYTE v93[2]; // [sp+76h] [bp-76h] BYREF
  __int16 v94; // [sp+78h] [bp-74h] BYREF
  unsigned __int16 v95; // [sp+7Ah] [bp-72h]
  int c[22]; // [sp+90h] [bp-5Ch] BYREF

  a2[1] = 0;
  a2[2] = 0;
  v2 = _stack_chk_guard;
  a2[3] = 0;
  *a2 = 0;
  v3 = *a1;
  c[21] = v2;
  v4 = *v3;
  if ( (v4 & 0x80) == 0 )
  {
    while ( isspace(v4) )
    {
      v5 = *++v3;
      v4 = v5;
      if ( (v5 & 0x80) != 0 )
        goto LABEL_6;
    }
    result = 3;
    if ( !v4 )
      return result;
  }
LABEL_6:
  *a1 = v3;
  sub_79524(c, v3, 80);
  v7 = LOBYTE(c[0]);
  memset(v88, 0, sizeof(v88));
  if ( !LOBYTE(c[0]) )
  {
    v84 = 0;
    LOWORD(v85) = 0;
    v86 = 0;
    goto LABEL_51;
  }
  v86 = 0;
  v8 = 0;
  v81 = 0;
  v9 = 0;
  v78 = 0;
  v80 = 0;
  j = c;
  v85 = 0;
  v11 = LOBYTE(c[0]);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (v11 & 0xFFFFFF80) != 0 )
        goto LABEL_20;
      v12 = v11 - 48;
      if ( (unsigned int)(v11 - 48) > 9 )
        break;
      if ( !v8 )
        v8 = 1;
      if ( v11 != 48 )
      {
        if ( *(_WORD *)&v88[4] )
        {
          v86 = 1;
          goto LABEL_16;
        }
LABEL_95:
        if ( v9 )
          ++v80;
        v47 = v89;
        v48 = 0;
        do
        {
          v49 = *((_WORD *)v47 - 1);
          v47 -= 2;
          v50 = 2 * v49;
          if ( v49 < 0 )
            v48 |= 1u;
          v20 = (v48 & 2) != 0;
          v48 *= 2;
          if ( v20 )
            v50 |= 1u;
          *(_WORD *)v47 = v50;
        }
        while ( &v88[4] != v47 );
        v51 = 0;
        v90 = *(_DWORD *)v88;
        v91 = *(_OWORD *)&v88[4];
        v52 = 0;
        v92 = 0;
        v53 = &v92;
        for ( i = &v92; ; --i )
        {
          v20 = v51 < 0;
          v56 = 2 * v51;
          if ( v20 )
            v52 |= 1u;
          v20 = (v52 & 2) != 0;
          v52 *= 2;
          if ( v20 )
            v56 |= 1u;
          *i = v56;
          if ( &v91 == (__int128 *)i )
            break;
          v55 = *(i - 1);
          v51 = v55;
        }
        v57 = v93;
        v58 = 0;
        v59 = (__int16 *)v93;
        do
        {
          v60 = *--v59;
          v61 = 2 * v60;
          if ( v60 < 0 )
            v58 |= 1u;
          v46 = (v58 & 2) == 0;
          v58 *= 2;
          if ( !v46 )
            v61 |= 1u;
          *v59 = v61;
        }
        while ( i != v59 );
        v62 = &v88[20];
        v63 = 0;
        do
        {
          v64 = *((unsigned __int16 *)v57 - 1);
          v57 -= 2;
          v65 = v63 + v64 + *(unsigned __int16 *)v62;
          *(_WORD *)v62 = v65;
          v62 -= 2;
          v63 = HIWORD(v65);
        }
        while ( v62 != &v88[2] );
        v66 = 0;
        v67 = &v88[20];
        v68 = 0;
        WORD6(v91) = 0;
        v90 = 0;
        *(_QWORD *)&v91 = 0;
        DWORD2(v91) = 0;
        v92 = 0;
        HIWORD(v91) = v12;
        while ( 1 )
        {
          v70 = v68 + v66 + *(unsigned __int16 *)v67;
          *(_WORD *)v67 = v70;
          v67 -= 2;
          v68 = HIWORD(v70);
          if ( v67 == &v88[2] )
            break;
          v69 = (unsigned __int16)*--v53;
          v66 = v69;
        }
        goto LABEL_16;
      }
      if ( v78 | v9 )
      {
        if ( *(_WORD *)&v88[4] )
        {
LABEL_16:
          ++v78;
          goto LABEL_17;
        }
        goto LABEL_95;
      }
      v78 = 0;
      v9 = 0;
LABEL_17:
      v13 = *((unsigned __int8 *)j + 1);
      j = (int *)((char *)j + 1);
      v11 = v13;
      if ( !v13 )
        goto LABEL_18;
    }
    if ( v11 == 46 )
    {
      if ( v9 )
        goto LABEL_55;
      v36 = *(unsigned __int8 *)j;
      if ( (v36 & 0x80) != 0 )
      {
        v37 = j;
      }
      else
      {
        v37 = j;
        if ( (unsigned int)(v36 - 48) <= 9 )
        {
          do
          {
            v38 = *((unsigned __int8 *)v37 + 1);
            v37 = (int *)((char *)v37 + 1);
            v36 = v38;
          }
          while ( (v38 & 0x80) == 0 && (unsigned int)(v36 - 48) <= 9 );
        }
      }
      if ( tolower(v36) == 101 )
      {
        v46 = v8 == 0;
        if ( !v8 )
          v46 = j == v37;
        if ( v46 )
          goto LABEL_55;
      }
      else
      {
        *(_BYTE *)v37 = 0;
      }
      if ( v37 > c && *((_BYTE *)v37 - 1) == 48 )
      {
        v71 = (int *)((char *)v37 - 1);
        do
        {
          *(_BYTE *)v71 = 122;
          if ( v71 == c )
            break;
          v72 = *((unsigned __int8 *)v71 - 1);
          v71 = (int *)((char *)v71 - 1);
        }
        while ( v72 == 48 );
        v81 = 1;
      }
      v9 = 1;
      if ( !v8 )
      {
        v8 = 1;
        v9 = 1;
      }
      goto LABEL_17;
    }
LABEL_20:
    if ( v11 == 122 )
    {
      if ( !v81 )
        goto LABEL_55;
      goto LABEL_17;
    }
    v15 = (v11 - 43) & 0xFFFFFFFD;
    if ( v15 )
      break;
    if ( v8 )
    {
      v84 = (char *)j - (char *)c;
      goto LABEL_24;
    }
    v44 = v85;
    v8 = -1;
    if ( v11 == 45 )
      v44 = 0xFFFF;
    v45 = *((unsigned __int8 *)j + 1);
    j = (int *)((char *)j + 1);
    v11 = v45;
    v85 = v44;
    if ( !v45 )
    {
LABEL_18:
      v14 = 0;
      v84 = (char *)j - (char *)c;
      goto LABEL_25;
    }
  }
  if ( tolower(v11) == 101 )
  {
    if ( v8 )
    {
      v73 = *((unsigned __int8 *)j + 1);
      v74 = (int *)((char *)j + 1);
      j = (int *)((char *)j + 2);
      if ( v73 == 45 )
      {
        v75 = -1;
      }
      else
      {
        if ( v73 != 43 )
          j = v74;
        v75 = 1;
      }
      v76 = *(unsigned __int8 *)j;
      v14 = v76 & 0xFFFFFF80;
      if ( (v76 & 0xFFFFFF80) == 0 && (unsigned int)(v76 - 48) <= 9 )
      {
        for ( j = (int *)((char *)j + 1); ; j = (int *)((char *)j + 1) )
        {
          v77 = v76 + 10 * v14;
          v14 = v77 - 48;
          if ( ((v77 - 48) & 0x8000) != 0 )
            break;
          v76 = *(unsigned __int8 *)j;
          if ( (v76 & 0x80) != 0 || (unsigned int)(v76 - 48) > 9 )
          {
            v84 = (char *)j - (char *)c;
            if ( v75 != -1 )
              goto LABEL_25;
            if ( v77 != 48 )
            {
              v14 = 48 - v77;
              goto LABEL_25;
            }
            goto LABEL_135;
          }
        }
      }
    }
LABEL_55:
    result = 3;
    v84 = (char *)j - (char *)c;
    goto LABEL_56;
  }
  v84 = (char *)j - (char *)c;
  if ( !v8 || (v15 = (v78 == 0) & (v8 >> 31)) != 0 )
  {
LABEL_135:
    result = 3;
    goto LABEL_56;
  }
LABEL_24:
  v14 = v15;
LABEL_25:
  v7 = v14 - v80;
  if ( v7 > 0 && !*(_WORD *)&v88[4] )
  {
    do
    {
      v16 = 0;
      v17 = 0;
      v18 = &v92;
      v90 = *(_DWORD *)v88;
      v91 = *(_OWORD *)&v88[4];
      v92 = 0;
      while ( 1 )
      {
        v20 = v16 < 0;
        v21 = 2 * v16;
        if ( v20 )
          v17 |= 1u;
        v20 = (v17 & 2) != 0;
        v17 *= 2;
        if ( v20 )
          v21 |= 1u;
        *v18 = v21;
        if ( &v91 == (__int128 *)v18 )
          break;
        v19 = *--v18;
        v16 = v19;
      }
      v22 = (__int16 *)v93;
      v23 = (__int16 *)v93;
      v24 = 0;
      do
      {
        v25 = *--v23;
        v26 = 2 * v25;
        if ( v25 < 0 )
          v24 |= 1u;
        v20 = (v24 & 2) != 0;
        v24 *= 2;
        if ( v20 )
          v26 |= 1u;
        *v23 = v26;
      }
      while ( v18 != v23 );
      v27 = v89;
      v28 = 0;
      v29 = (unsigned __int16 *)&v92;
      do
      {
        v30 = *((unsigned __int16 *)v27 - 1);
        v27 -= 2;
        v31 = v28 + v30 + *v29;
        *v29-- = v31;
        v28 = HIWORD(v31);
      }
      while ( v29 != (unsigned __int16 *)((char *)&v90 + 2) );
      v32 = 0;
      do
      {
        v33 = *--v22;
        v34 = 2 * v33;
        if ( v33 < 0 )
          v32 |= 1u;
        v20 = (v32 & 2) != 0;
        v32 *= 2;
        if ( v20 )
          v34 |= 1u;
        *v22 = v34;
      }
      while ( v23 != v22 );
      if ( (_WORD)v91 )
        break;
      --v7;
      *(_DWORD *)v88 = v90;
      *(_OWORD *)&v88[4] = v91;
      *(_WORD *)&v88[20] = 0;
      if ( !v7 )
        break;
    }
    while ( !*(_WORD *)&v88[4] );
  }
LABEL_51:
  v35 = sub_71334((unsigned __int16 *)v88);
  if ( v35 > 112 )
  {
    memset(&v88[2], 0, 20);
    goto LABEL_53;
  }
  if ( !sub_71560((int)v88, v86, 0, 16494 - v35, 112) )
    goto LABEL_86;
  v39 = *(unsigned __int16 *)&v88[2];
  if ( v7 )
  {
    if ( v7 < 0 )
    {
      if ( -v7 > 4096 )
      {
        sub_7152C((int)dword_B3EE0, &v94);
        v7 = -4096 - v7;
        v39 = v39 + 0x3FFF - v95;
        sub_71078((int)&v94, (int)v88);
      }
      else
      {
        v7 = -v7;
      }
      v79 = -1;
    }
    else
    {
      v79 = 1;
    }
    v41 = 1;
    v42 = dword_B3FA0;
    memset(v87, 0, 12);
    v87[3] = 1073709056;
    do
    {
      if ( (v7 & v41) != 0 )
        sub_71D40((int)v87, (int)v42, v87);
      v42 -= 4;
      v41 *= 2;
    }
    while ( v42 != dword_B3ED0 );
    sub_7152C((int)v87, &v94);
    if ( v79 == -1 )
    {
      v39 += 0x3FFF - v95;
      v43 = sub_71078((int)&v94, (int)v88);
    }
    else
    {
      v39 += v95 - 16382;
      v43 = sub_71224(&v94, (__int16 *)v88);
    }
    v40 = v43;
    if ( v43 )
      v40 = 1;
  }
  else
  {
    v40 = 0;
  }
  if ( sub_71560((int)v88, v40, 0, v39, 112) )
  {
LABEL_53:
    *(_WORD *)v88 = v85;
    sub_714FC(v88, (int)a2);
    result = 1;
  }
  else
  {
LABEL_86:
    result = 2;
  }
LABEL_56:
  *a1 += v84;
  return result;
}
// B3ED0: using guessed type int dword_B3ED0[3];
// B3EE0: using guessed type int dword_B3EE0[29];
// B3FA0: using guessed type int dword_B3FA0[3];
// B40A4: using guessed type int dword_B40A4[3];
