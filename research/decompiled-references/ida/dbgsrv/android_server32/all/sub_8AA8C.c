/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8AA8C
// Address: 0x0008AA8C

//----- (0008AA8C) --------------------------------------------------------
int __fastcall sub_8AA8C(int a1, unsigned __int16 *a2, int a3, char **a4, unsigned int *a5, __int16 *a6)
{
  int v6; // r0
  unsigned int v7; // r1
  int v8; // r2
  unsigned int v9; // r5
  unsigned int v10; // r0
  _WORD *v11; // r1
  unsigned int i; // r7
  unsigned int v13; // r4
  int v14; // r6
  int v15; // r6
  int v16; // r6
  int v17; // r6
  int v18; // r6
  int v19; // r6
  int v20; // r6
  int v21; // r6
  int v22; // r6
  int v23; // r6
  int v24; // r6
  int v25; // r6
  int v26; // r6
  int v27; // r0
  _WORD *v28; // r1
  int v29; // r3
  int v30; // r6
  int v31; // r3
  unsigned int v33; // r0
  char v34; // r1
  __int16 v35; // r3
  int v36; // r0
  char *v37; // r0
  int v38; // r6
  unsigned int v39; // r1
  unsigned int v40; // r0
  int v41; // r2
  unsigned int v42; // r2
  int v43; // r0
  int v44; // r3
  unsigned __int16 *v45; // r2
  int v46; // r3
  unsigned int v47; // r1
  _BOOL4 v48; // r2
  char *v49; // r0
  char *v50; // r0
  char *v51; // r0
  int v52; // [sp+0h] [bp-A4h]
  int v53; // [sp+4h] [bp-A0h]
  __int16 *v54; // [sp+8h] [bp-9Ch]
  __int16 *v55; // [sp+Ch] [bp-98h]
  int v56; // [sp+10h] [bp-94h]
  int v57; // [sp+14h] [bp-90h]
  unsigned int v58; // [sp+18h] [bp-8Ch]
  int v59; // [sp+20h] [bp-84h]
  char *v60; // [sp+2Ch] [bp-78h]
  unsigned int v61; // [sp+30h] [bp-74h]
  int v62; // [sp+34h] [bp-70h]
  unsigned int v64; // [sp+44h] [bp-60h]
  unsigned int v66; // [sp+48h] [bp-5Ch]
  _WORD *v67; // [sp+4Ch] [bp-58h]
  int v68; // [sp+50h] [bp-54h]
  unsigned int v69; // [sp+50h] [bp-54h]
  char v71; // [sp+54h] [bp-50h]
  unsigned int v72; // [sp+54h] [bp-50h]
  bool v73; // [sp+5Ch] [bp-48h]
  unsigned __int16 v74[1]; // [sp+60h] [bp-44h]
  __int16 v75; // [sp+62h] [bp-42h]
  __int16 v76; // [sp+64h] [bp-40h]
  __int16 v77; // [sp+66h] [bp-3Eh]
  __int16 v78; // [sp+68h] [bp-3Ch]
  __int16 v79; // [sp+6Ah] [bp-3Ah]
  __int16 v80; // [sp+6Ch] [bp-38h]
  __int16 v81; // [sp+6Eh] [bp-36h]
  __int16 v82; // [sp+70h] [bp-34h]
  __int16 v83; // [sp+72h] [bp-32h]
  __int16 v84; // [sp+74h] [bp-30h]
  __int16 v85; // [sp+76h] [bp-2Eh]
  __int16 v86; // [sp+78h] [bp-2Ch]
  __int16 v87; // [sp+7Ah] [bp-2Ah]
  __int16 v88; // [sp+7Ch] [bp-28h]
  __int16 v89; // [sp+7Eh] [bp-26h]
  int v90; // [sp+80h] [bp-24h] BYREF
  int v91; // [sp+84h] [bp-20h]
  int v92; // [sp+88h] [bp-1Ch]
  int v93; // [sp+8Ch] [bp-18h]
  int v94; // [sp+90h] [bp-14h]
  int v95; // [sp+94h] [bp-10h]
  int v96; // [sp+98h] [bp-Ch]
  int v97; // [sp+9Ch] [bp-8h]

  v97 = 0;
  v96 = 0;
  v95 = 0;
  v94 = 0;
  v93 = 0;
  v92 = 0;
  v91 = 0;
  v73 = 0;
  v90 = 0;
  v67 = a2;
  if ( a3 )
  {
    v6 = a3;
    do
    {
      ++*((_WORD *)&v90 + *a2);
      --v6;
      ++a2;
    }
    while ( v6 );
    v7 = *a5;
    v8 = HIWORD(v97);
    v9 = 15;
    if ( HIWORD(v97) )
      goto LABEL_20;
  }
  else
  {
    v7 = *a5;
  }
  v9 = 14;
  v8 = 0;
  if ( !(_WORD)v97 )
  {
    v9 = 13;
    if ( !HIWORD(v96) )
    {
      v9 = 12;
      if ( !(_WORD)v96 )
      {
        v9 = 11;
        if ( !HIWORD(v95) )
        {
          v9 = 10;
          if ( !(_WORD)v95 )
          {
            v9 = 9;
            if ( !HIWORD(v94) )
            {
              v9 = 8;
              if ( !(_WORD)v94 )
              {
                v9 = 7;
                if ( !HIWORD(v93) )
                {
                  v9 = 6;
                  if ( !(_WORD)v93 )
                  {
                    v9 = 5;
                    if ( !HIWORD(v92) )
                    {
                      v9 = 4;
                      if ( !(_WORD)v92 )
                      {
                        v9 = 3;
                        if ( !HIWORD(v91) )
                        {
                          v9 = 2;
                          if ( !(_WORD)v91 )
                          {
                            if ( !HIWORD(v90) )
                            {
                              v50 = *a4;
                              *a4 += 4;
                              *((_WORD *)v50 + 1) = 0;
                              *(_WORD *)v50 = 320;
                              v51 = *a4;
                              *a4 += 4;
                              *(_DWORD *)v51 = 320;
                              *a5 = 1;
                              return 0;
                            }
                            v9 = 1;
                            v10 = v7 != 0;
                            v68 = 0;
                            i = 1;
                            goto LABEL_25;
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
    }
  }
LABEL_20:
  v68 = v8;
  v10 = v9;
  if ( v7 <= v9 )
    v10 = v7;
  v11 = (_WORD *)&v90 + 1;
  for ( i = 1; i < v9; ++i )
  {
    if ( *v11 )
      break;
    ++v11;
  }
LABEL_25:
  v13 = i;
  if ( v10 >= i )
    v13 = v10;
  if ( 2 - HIWORD(v90) < 0 )
    return -1;
  v64 = v13;
  v14 = 2 * (2 - HIWORD(v90)) - (unsigned __int16)v91;
  if ( v14 < 0 )
    return -1;
  v15 = 2 * v14 - HIWORD(v91);
  if ( v15 < 0 )
    return -1;
  v16 = 2 * v15 - (unsigned __int16)v92;
  if ( v16 < 0 )
    return -1;
  v17 = 2 * v16 - HIWORD(v92);
  if ( v17 < 0 )
    return -1;
  v18 = 2 * v17 - (unsigned __int16)v93;
  if ( v18 < 0 )
    return -1;
  v19 = 2 * v18 - HIWORD(v93);
  if ( v19 < 0 )
    return -1;
  v20 = 2 * v19 - (unsigned __int16)v94;
  if ( v20 < 0 )
    return -1;
  v21 = 2 * v20 - HIWORD(v94);
  if ( v21 < 0 )
    return -1;
  v22 = 2 * v21 - (unsigned __int16)v95;
  if ( v22 < 0 )
    return -1;
  v23 = 2 * v22 - HIWORD(v95);
  if ( v23 < 0 )
    return -1;
  v24 = 2 * v23 - (unsigned __int16)v96;
  if ( v24 < 0 )
    return -1;
  v25 = 2 * v24 - HIWORD(v96);
  if ( v25 < 0 )
    return -1;
  v26 = 2 * v25 - (unsigned __int16)v97;
  if ( v26 < 0 || 2 * v26 - v68 < 0 )
    return -1;
  if ( 2 * v26 != v68 && (!a1 || v9 != 1) )
    return -1;
  v76 = HIWORD(v90);
  v75 = 0;
  v77 = v91 + HIWORD(v90);
  v78 = HIWORD(v91) + v91 + HIWORD(v90);
  v79 = v92 + v78;
  v80 = HIWORD(v92) + v92 + v78;
  v81 = v93 + v80;
  v82 = HIWORD(v93) + v93 + v80;
  v83 = v94 + v82;
  v84 = HIWORD(v94) + v94 + v82;
  v85 = v95 + v84;
  v86 = HIWORD(v95) + v95 + v84;
  v87 = v96 + v86;
  v88 = HIWORD(v96) + v96 + v86;
  v89 = v97 + v88;
  if ( a3 )
  {
    v27 = 0;
    v28 = v67;
    do
    {
      v29 = (unsigned __int16)*v28;
      if ( *v28 )
      {
        v30 = v74[v29];
        v74[v29] = v30 + 1;
        v13 = v64;
        a6[v30] = v27;
      }
      ++v28;
      ++v27;
    }
    while ( a3 != v27 );
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v58 = 257;
      v31 = 1;
      if ( v13 > 9 )
        return v31;
      v55 = (__int16 *)dword_C8754;
      v54 = &word_C8716;
      v52 = 1;
    }
    else
    {
      v73 = a1 == 2;
      v55 = &word_C87D2;
      v54 = &word_C8792;
      v31 = 1;
      v58 = 0;
      if ( a1 == 2 )
      {
        v52 = 0;
        if ( v13 > 9 )
          return v31;
      }
      else
      {
        v52 = 0;
      }
    }
  }
  else
  {
    v58 = 20;
    v54 = a6;
    v55 = a6;
    v52 = 0;
  }
  v53 = 1 << v13;
  v56 = (1 << v13) - 1;
  v60 = *a4;
  v61 = 0;
  v62 = 0;
  v66 = 0;
  v57 = -1;
  while ( 2 )
  {
    v59 = 1 << v13;
    while ( 1 )
    {
      v71 = i - v61;
      v33 = (unsigned __int16)a6[v62];
      v34 = 0;
      if ( v33 + 1 >= v58 )
      {
        v34 = 96;
        v35 = 0;
        if ( v58 <= v33 )
        {
          v36 = v33 - v58;
          v35 = v54[v36];
          v34 = v55[v36];
        }
      }
      else
      {
        v35 = a6[v62];
      }
      v37 = &v60[4 * (v59 + (v66 >> v61) - (1 << v71))];
      v38 = -(1 << v13);
      do
      {
        v37[1] = v71;
        *v37 = v34;
        *((_WORD *)v37 + 1) = v35;
        v38 += 1 << v71;
        v37 -= 4 * (1 << v71);
      }
      while ( v38 );
      v39 = 1 << (i - 1);
      do
      {
        v40 = v39;
        v39 >>= 1;
      }
      while ( (v40 & v66) != 0 );
      v69 = 0;
      if ( v40 )
        v69 = ((v40 - 1) & v66) + v40;
      v41 = *((unsigned __int16 *)&v90 + i) - 1;
      *((_WORD *)&v90 + i) = v41;
      ++v62;
      if ( !(v41 << 16) )
      {
        if ( i == v9 )
        {
          if ( v69 )
          {
            v60[4 * v69] = 64;
            v49 = &v60[4 * v69];
            v49[1] = v71;
            *((_WORD *)v49 + 1) = 0;
          }
          *a4 += 4 * v53;
          *a5 = v64;
          return 0;
        }
        i = (unsigned __int16)v67[(unsigned __int16)a6[v62]];
      }
      v42 = v64;
      v66 = v69;
      if ( i > v64 )
      {
        v43 = v69 & v56;
        v66 = v69;
        if ( (v69 & v56) != v57 )
          break;
      }
    }
    v60 += 4 * v59;
    if ( v61 )
      v42 = v61;
    v72 = v42;
    LOBYTE(v13) = i - v42;
    v44 = 1 << (i - v42);
    if ( i < v9 )
    {
      v45 = (unsigned __int16 *)&v90 + i;
      v13 = i;
      do
      {
        v46 = v44 - *v45;
        if ( v46 < 1 )
          break;
        ++v13;
        ++v45;
        v44 = 2 * v46;
      }
      while ( v13 < v9 );
      LOBYTE(v13) = v13 - v72;
      v44 = 1 << v13;
    }
    v47 = v44 + v53;
    v48 = (unsigned int)(v44 + v53) > 0x354;
    v53 += v44;
    if ( (v52 & v48) == 0 && (v47 <= 0x250 || !v73) )
    {
      (*a4)[4 * v43] = v13;
      (*a4)[4 * v43 + 1] = v64;
      *(_WORD *)&(*a4)[4 * v43 + 2] = (unsigned int)(v60 - *a4) >> 2;
      v61 = v72;
      v66 = v69;
      v57 = v69 & v56;
      continue;
    }
    break;
  }
  return 1;
}
// C8716: using guessed type __int16 word_C8716;
// C8754: using guessed type int dword_C8754[15];
// C8792: using guessed type __int16 word_C8792;
// C87D2: using guessed type __int16 word_C87D2;
