/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CF30C
// Address: 0x00000000000CF30C

//----- (00000000000CF30C) ----------------------------------------------------
__int64 __fastcall sub_CF30C(int a1, unsigned __int16 *a2, unsigned int a3, _DWORD **a4, unsigned int *a5, __int64 *a6)
{
  __int64 v6; // x8
  unsigned __int16 *v7; // x11
  unsigned int v8; // t1
  int v9; // w8
  unsigned int v10; // w12
  unsigned int v11; // w10
  __int64 v12; // x11
  int v13; // w16
  int v14; // w17
  int v15; // w18
  int v16; // w6
  int v17; // w7
  int v18; // w19
  int v19; // w20
  int v20; // w21
  int v21; // w22
  int v22; // w23
  int v23; // w24
  int v24; // w25
  int v25; // w25
  int v26; // w8
  unsigned int v27; // w8
  __int64 i; // x8
  __int64 v29; // x15
  __int64 v30; // x16
  bool v31; // w14
  unsigned int v32; // w13
  __int16 *v33; // x15
  __int64 *v34; // x16
  char v35; // w17
  _DWORD *v37; // x7
  unsigned int v38; // w18
  unsigned int v39; // w0
  unsigned int v40; // w2
  unsigned int v41; // w6
  int v42; // w20
  int v43; // w8
  char v44; // w24
  __int64 v45; // x25
  unsigned int v46; // w22
  __int64 v47; // x24
  char v48; // w23
  char v49; // w25
  unsigned int v50; // w28
  unsigned int v51; // w29
  _DWORD *v52; // x29
  unsigned int v53; // w25
  unsigned int v54; // w24
  bool v55; // zf
  __int64 v56; // x24
  int v57; // w25
  __int64 v58; // x8
  int v59; // w24
  _DWORD *v60; // x8
  _DWORD *v61; // x10
  _DWORD *v62; // x10
  _BYTE v63[2]; // [xsp+8h] [xbp-A8h]
  __int16 v64; // [xsp+Ah] [xbp-A6h]
  __int16 v65; // [xsp+Ch] [xbp-A4h]
  __int16 v66; // [xsp+Eh] [xbp-A2h]
  __int16 v67; // [xsp+10h] [xbp-A0h]
  __int16 v68; // [xsp+12h] [xbp-9Eh]
  __int16 v69; // [xsp+14h] [xbp-9Ch]
  __int16 v70; // [xsp+16h] [xbp-9Ah]
  __int16 v71; // [xsp+18h] [xbp-98h]
  __int16 v72; // [xsp+1Ah] [xbp-96h]
  __int16 v73; // [xsp+1Ch] [xbp-94h]
  __int16 v74; // [xsp+1Eh] [xbp-92h]
  __int16 v75; // [xsp+20h] [xbp-90h]
  __int16 v76; // [xsp+22h] [xbp-8Eh]
  __int16 v77; // [xsp+24h] [xbp-8Ch]
  __int16 v78; // [xsp+26h] [xbp-8Ah]
  __int128 v79; // [xsp+28h] [xbp-88h]
  __int128 v80; // [xsp+38h] [xbp-78h]
  __int64 v81; // [xsp+48h] [xbp-68h]

  v81 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v80 = 0u;
  v79 = 0u;
  if ( a3 )
  {
    v6 = a3;
    v7 = a2;
    do
    {
      v8 = *v7++;
      --v6;
      ++*((_WORD *)&v79 + v8);
    }
    while ( v6 );
    v9 = HIWORD(v80);
    v10 = *a5;
    if ( HIWORD(v80) )
    {
      v11 = 15;
LABEL_33:
      v12 = 1;
      if ( v10 > v11 )
        v10 = v11;
      do
      {
        if ( *((_WORD *)&v79 + v12) )
          break;
        ++v12;
      }
      while ( (unsigned int)v12 < v11 );
      goto LABEL_37;
    }
  }
  else
  {
    v10 = *a5;
  }
  if ( WORD6(v80) )
  {
    v9 = 0;
    v11 = 14;
    goto LABEL_33;
  }
  if ( WORD5(v80) )
  {
    v9 = 0;
    v11 = 13;
    goto LABEL_33;
  }
  if ( WORD4(v80) )
  {
    v9 = 0;
    v11 = 12;
    goto LABEL_33;
  }
  if ( WORD3(v80) )
  {
    v9 = 0;
    v11 = 11;
    goto LABEL_33;
  }
  if ( WORD2(v80) )
  {
    v9 = 0;
    v11 = 10;
    goto LABEL_33;
  }
  if ( WORD1(v80) )
  {
    v9 = 0;
    v11 = 9;
    goto LABEL_33;
  }
  if ( (_WORD)v80 )
  {
    v9 = 0;
    v11 = 8;
    goto LABEL_33;
  }
  if ( HIWORD(v79) )
  {
    v9 = 0;
    v11 = 7;
    goto LABEL_33;
  }
  if ( WORD6(v79) )
  {
    v9 = 0;
    v11 = 6;
    goto LABEL_33;
  }
  if ( WORD5(v79) )
  {
    v9 = 0;
    v11 = 5;
    goto LABEL_33;
  }
  if ( WORD4(v79) )
  {
    v9 = 0;
    v11 = 4;
    goto LABEL_33;
  }
  if ( WORD3(v79) )
  {
    v9 = 0;
    v11 = 3;
    goto LABEL_33;
  }
  if ( WORD2(v79) )
  {
    v9 = 0;
    v11 = 2;
    goto LABEL_33;
  }
  v27 = WORD1(v79);
  if ( !WORD1(v79) )
  {
    v61 = (*a4)++;
    *v61 = 320;
    v62 = *a4;
    v10 = 1;
    ++*a4;
    *v62 = 320;
LABEL_104:
    *a5 = v10;
    return v27;
  }
  v9 = 0;
  v11 = 1;
  v10 = v10 != 0;
  LODWORD(v12) = 1;
LABEL_37:
  if ( v10 < (unsigned int)v12 )
    v10 = v12;
  if ( 2 - WORD1(v79) < 0 )
    return (unsigned int)-1;
  v13 = 2 * (2 - WORD1(v79)) - WORD2(v79);
  if ( v13 < 0 )
    return (unsigned int)-1;
  v14 = 2 * v13 - WORD3(v79);
  if ( v14 < 0 )
    return (unsigned int)-1;
  v15 = 2 * v14 - WORD4(v79);
  if ( v15 < 0 )
    return (unsigned int)-1;
  v16 = 2 * v15 - WORD5(v79);
  if ( v16 < 0 )
    return (unsigned int)-1;
  v17 = 2 * v16 - WORD6(v79);
  if ( v17 < 0 )
    return (unsigned int)-1;
  v18 = 2 * v17 - HIWORD(v79);
  if ( v18 < 0 )
    return (unsigned int)-1;
  v19 = 2 * v18 - (unsigned __int16)v80;
  if ( v19 < 0 )
    return (unsigned int)-1;
  v20 = 2 * v19 - WORD1(v80);
  if ( v20 < 0 )
    return (unsigned int)-1;
  v21 = 2 * v20 - WORD2(v80);
  if ( v21 < 0 )
    return (unsigned int)-1;
  v22 = 2 * v21 - WORD3(v80);
  if ( v22 < 0 )
    return (unsigned int)-1;
  v23 = 2 * v22 - WORD4(v80);
  if ( v23 < 0 )
    return (unsigned int)-1;
  v24 = 2 * v23 - WORD5(v80);
  if ( v24 < 0 )
    return (unsigned int)-1;
  v25 = 2 * v24 - WORD6(v80);
  if ( v25 < 0 )
    return (unsigned int)-1;
  v26 = 2 * v25 - v9;
  if ( v26 < 0 )
    return (unsigned int)-1;
  if ( !v26 || (v27 = -1, a1) && v11 == 1 )
  {
    v66 = WORD2(v79) + WORD1(v79);
    v67 = WORD3(v79) + WORD2(v79) + WORD1(v79);
    v68 = WORD4(v79) + v67;
    v69 = WORD5(v79) + WORD4(v79) + v67;
    v70 = WORD6(v79) + v69;
    v71 = HIWORD(v79) + WORD6(v79) + v69;
    v72 = v80 + v71;
    v73 = WORD1(v80) + v80 + v71;
    v74 = WORD2(v80) + v73;
    v75 = WORD3(v80) + WORD2(v80) + v73;
    v76 = WORD4(v80) + v75;
    v77 = WORD5(v80) + WORD4(v80) + v75;
    v64 = 0;
    v65 = WORD1(v79);
    v78 = WORD6(v80) + v77;
    if ( a3 )
    {
      for ( i = 0; i != a3; ++i )
      {
        if ( a2[i] )
        {
          v29 = 2LL * a2[i];
          v30 = *(unsigned __int16 *)&v63[v29];
          *(_WORD *)&v63[v29] = v30 + 1;
          *((_WORD *)a6 + v30) = i;
        }
      }
    }
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v27 = 1;
        if ( v10 > 9 )
          return v27;
        v31 = 0;
        v32 = 257;
        v33 = &word_11F496;
        v34 = qword_11F458;
        v35 = 1;
      }
      else
      {
        v32 = 0;
        v33 = (__int16 *)&dword_11F514;
        v31 = a1 == 2;
        v34 = (__int64 *)&dword_11F4D4;
        if ( a1 == 2 )
        {
          v35 = 0;
          if ( v10 > 9 )
            return 1;
        }
        else
        {
          v35 = 0;
        }
      }
    }
    else
    {
      v31 = 0;
      v35 = 0;
      v32 = 20;
      v34 = a6;
      v33 = (__int16 *)a6;
    }
    v37 = *a4;
    v38 = 1 << v10;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = (1 << v10) - 1;
    v43 = -1;
    v44 = v10;
    while ( 2 )
    {
      v46 = 1 << v44;
      do
      {
        LODWORD(v47) = *((unsigned __int16 *)a6 + v39);
        v48 = v12 - v40;
        if ( (int)v47 + 1 >= v32 )
        {
          if ( v32 <= (unsigned int)v47 )
          {
            v47 = 2LL * ((unsigned int)v47 - v32);
            v49 = *((_BYTE *)v33 + v47);
            LOWORD(v47) = *(_WORD *)((char *)v34 + v47);
          }
          else
          {
            LOWORD(v47) = 0;
            v49 = 96;
          }
        }
        else
        {
          v49 = 0;
        }
        v50 = v46;
        do
        {
          v51 = (v41 >> v40) - (1 << v48) + v50;
          v50 -= 1 << v48;
          v52 = &v37[v51];
          *(_BYTE *)v52 = v49;
          *((_BYTE *)v52 + 1) = v48;
          *((_WORD *)v52 + 1) = v47;
        }
        while ( v50 );
        v53 = 1 << (v12 - 1);
        do
        {
          v54 = v53;
          v55 = (v53 & v41) == 0;
          v53 >>= 1;
        }
        while ( !v55 );
        if ( v54 )
          v41 = ((v54 - 1) & v41) + v54;
        else
          v41 = 0;
        v56 = 2LL * (unsigned int)v12;
        ++v39;
        v55 = --*(_WORD *)((char *)&v79 + v56) == 0;
        if ( v55 )
        {
          if ( (_DWORD)v12 == v11 )
          {
            if ( v41 )
            {
              v60 = &v37[v41];
              *(_BYTE *)v60 = 64;
              *((_BYTE *)v60 + 1) = v48;
              *((_WORD *)v60 + 1) = 0;
            }
            v27 = 0;
            *a4 += v38;
            goto LABEL_104;
          }
          LODWORD(v12) = a2[*((unsigned __int16 *)a6 + v39)];
        }
      }
      while ( (unsigned int)v12 <= v10 || (v41 & v42) == v43 );
      if ( !v40 )
        v40 = v10;
      v44 = v12 - v40;
      v57 = 1 << (v12 - v40);
      if ( (unsigned int)v12 < v11 )
      {
        v58 = (unsigned int)v12;
        do
        {
          v59 = v57 - *((unsigned __int16 *)&v79 + v58);
          if ( v59 < 1 )
            break;
          ++v58;
          v57 = 2 * v59;
        }
        while ( (unsigned int)v58 < v11 );
        v44 = v58 - v40;
        v57 = 1 << (v58 - v40);
      }
      v38 += v57;
      v27 = 1;
      if ( ((unsigned __int8)v35 & (v38 > 0x354)) == 0 && (!v31 || v38 <= 0x250) )
      {
        v45 = v41 & v42;
        v37 += v46;
        LOBYTE((*a4)[v45]) = v44;
        BYTE1((*a4)[v45]) = v10;
        HIWORD((*a4)[v45]) = ((unsigned int)v37 - (unsigned int)*a4) >> 2;
        v43 = v41 & v42;
        continue;
      }
      break;
    }
  }
  return v27;
}
// 11EBB0: using guessed type __int64[255];
// 11F458: using guessed type __int64 qword_11F458[7];
// 11F496: using guessed type __int16 word_11F496;
// 11F4D4: using guessed type int dword_11F4D4;
// 11F514: using guessed type int dword_11F514;
