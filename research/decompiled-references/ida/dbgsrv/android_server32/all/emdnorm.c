/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emdnorm
// Address: 0x000761A0

//----- (000761A0) --------------------------------------------------------
bool __fastcall emdnorm(unsigned __int16 *a1, int a2, int a3, int a4, int a5)
{
  _BOOL4 v7; // r7
  int v8; // r0
  int v9; // r5
  int v10; // r6
  int v11; // r7
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r0
  int v16; // r3
  int v17; // r2
  unsigned __int16 v18; // r1
  int v19; // r3
  unsigned __int16 v20; // r0
  unsigned __int16 v21; // r1
  __int16 v22; // r0
  unsigned __int16 v23; // r1
  __int16 v24; // r0
  unsigned __int16 v25; // r1
  __int16 v26; // r0
  unsigned __int16 v27; // r1
  __int16 v28; // r0
  unsigned __int16 v29; // r1
  __int16 v30; // r0
  unsigned __int16 v31; // r1
  __int16 v32; // r0
  unsigned __int16 v33; // r1
  int v34; // r0
  unsigned __int16 v35; // r7
  int v36; // r3
  unsigned __int16 *v37; // r7
  int v38; // r0
  unsigned __int16 *v39; // r2
  unsigned int v40; // r0
  unsigned int v41; // r0
  unsigned int v42; // r0
  int v43; // r0
  unsigned int v44; // r0
  int v45; // r0
  int v46; // r0
  unsigned int v47; // r0
  unsigned int v48; // r1
  unsigned int v49; // r0
  unsigned int v50; // r1
  unsigned int v51; // r0
  unsigned int v52; // r1
  unsigned int v53; // r0
  unsigned int v54; // r1
  unsigned int v55; // r0
  unsigned int v56; // r1
  unsigned int v57; // r0
  unsigned int v58; // r1
  unsigned int v59; // r0
  unsigned int v60; // r1
  int v61; // r0
  unsigned __int16 v62; // r1
  __int16 v63; // r0
  unsigned __int16 v64; // r1
  __int16 v65; // r0
  unsigned __int16 v66; // r1
  __int16 v67; // r0
  unsigned __int16 v68; // r1
  __int16 v69; // r0
  unsigned __int16 v70; // r1
  __int16 v71; // r0
  unsigned __int16 v72; // r1
  __int16 v73; // r0
  unsigned __int16 v74; // r1
  unsigned __int16 *v76; // [sp+8h] [bp-30h]
  int v77; // [sp+Ch] [bp-2Ch]
  int v78; // [sp+10h] [bp-28h]
  int v79; // [sp+14h] [bp-24h]
  int v80; // [sp+1Ch] [bp-1Ch]
  int v81; // [sp+24h] [bp-14h]
  __int16 v82; // [sp+28h] [bp-10h]
  __int16 v83; // [sp+2Ch] [bp-Ch]

  v7 = a1[1] != 0;
  v8 = sub_764F8(a1);
  if ( v8 >= 113 )
    goto LABEL_43;
  v9 = a4 - v8;
  v7 = 1;
  v10 = 0x8000;
  if ( v9 > 32766 )
    goto LABEL_43;
  if ( v9 < 0 )
  {
    v7 = 0;
    if ( v9 < -112 )
      goto LABEL_43;
    a2 |= eshift(a1, v9) != 1;
  }
  v11 = a5;
  v82 = 256;
  v83 = 255;
  v81 = 128;
  v12 = 6;
  v13 = 0;
  if ( a5 > 52 )
  {
    v79 = 6;
    if ( a5 == 53 )
    {
      v81 = 1024;
      v83 = 2047;
      v13 = 0;
      v80 = 0;
      v78 = 2048;
      v82 = 2048;
      goto LABEL_19;
    }
    v78 = 256;
    v80 = 0;
    if ( a5 == 56 )
    {
LABEL_19:
      v77 = v13;
      if ( v9 <= 0 )
      {
        v20 = a1[2];
        a1[2] = v20 >> 1;
        v21 = a1[3];
        a1[3] = (v21 >> 1) + (v20 << 15);
        v22 = v21 << 15;
        v23 = a1[4];
        a1[4] = (v23 >> 1) + v22;
        v24 = v23 << 15;
        v25 = a1[5];
        a1[5] = (v25 >> 1) + v24;
        v26 = v25 << 15;
        v27 = a1[6];
        a1[6] = (v27 >> 1) + v26;
        v28 = v27 << 15;
        v29 = a1[7];
        a1[7] = (v29 >> 1) + v28;
        v30 = v29 << 15;
        v31 = a1[8];
        a1[8] = (v31 >> 1) + v30;
        v32 = v31 << 15;
        v33 = a1[9];
        a1[9] = (v33 >> 1) + v32;
        a1[10] = (a1[10] >> 1) + (v33 << 15);
      }
      v34 = v12 | 1;
      v76 = &a1[v12];
      v35 = *v76;
      v18 = *v76 & v83;
      if ( (v12 | 1u) > 0xA )
      {
        v39 = &a1[v12];
      }
      else
      {
        v36 = 10 - v12;
        v37 = &a1[v34];
        do
        {
          v38 = *v37;
          *v37 = 0;
          v18 |= v38 != 0;
          ++v37;
          --v36;
        }
        while ( v36 );
        v39 = v76;
        v35 = *v76;
      }
      *v39 = v35 & ~v83;
      v10 = v81;
      v17 = v78;
      v19 = v79;
      v11 = a5;
      goto LABEL_27;
    }
    if ( a5 == 64 )
    {
      v14 = a1[8];
      a1[8] = 0;
      v15 = a1[9];
      a1[9] = 0;
      v16 = a1[10];
      v77 = 0;
      a1[10] = 0;
      v17 = 1;
      v18 = a1[7] | (v14 != 0) | (v15 != 0) | (v16 != 0);
      v19 = 6;
      v80 = 0;
      v82 = 1;
      v11 = 64;
LABEL_27:
      if ( ((unsigned __int16)v10 & v18) != 0 )
      {
        if ( v10 != v18 )
          goto LABEL_33;
        if ( a2 )
        {
          if ( a3 )
            goto LABEL_34;
          goto LABEL_33;
        }
        if ( ((unsigned __int16)v82 & a1[v19]) != 0 )
        {
LABEL_33:
          v40 = v80 + a1[9];
          a1[9] = v40;
          v41 = HIWORD(v40) + a1[8];
          a1[8] = v41;
          v42 = HIWORD(v41) + a1[7];
          a1[7] = v42;
          v43 = v17 + a1[6] + HIWORD(v42);
          a1[6] = v43;
          v44 = ((unsigned int)(v43 << 15) >> 31) + a1[5];
          a1[5] = v44;
          v45 = v77 + a1[4] + HIWORD(v44);
          a1[4] = v45;
          v46 = ((unsigned int)(v45 << 15) >> 31) + a1[3];
          a1[3] = v46;
          a1[2] += HIWORD(v46);
        }
      }
LABEL_34:
      if ( v11 > 63 || v9 >= 1 )
      {
        v61 = a1[2];
        if ( !(v61 << 16) )
          goto LABEL_40;
      }
      else
      {
        v47 = a1[10];
        a1[10] = 2 * v47;
        v48 = a1[9];
        a1[9] = 2 * v48 + (v47 >> 15);
        v49 = v48 >> 15;
        v50 = a1[8];
        a1[8] = 2 * v50 + v49;
        v51 = v50 >> 15;
        v52 = a1[7];
        a1[7] = 2 * v52 + v51;
        v53 = v52 >> 15;
        v54 = a1[6];
        a1[6] = 2 * v54 + v53;
        v55 = v54 >> 15;
        v56 = a1[5];
        a1[5] = 2 * v56 + v55;
        v57 = v56 >> 15;
        v58 = a1[4];
        a1[4] = 2 * v58 + v57;
        v59 = v58 >> 15;
        v60 = a1[3];
        a1[3] = 2 * v60 + v59;
        v61 = 2 * a1[2] + (v60 >> 15);
        a1[2] = v61;
        if ( !(v61 << 16) )
        {
LABEL_40:
          a1[10] = 0;
          v7 = 1;
          if ( v9 > 32766 )
            goto LABEL_43;
          goto LABEL_41;
        }
      }
      a1[2] = (unsigned __int16)(v61 & 0xFFFE) >> 1;
      v62 = a1[3];
      a1[3] = (v62 >> 1) + ((_WORD)v61 << 15);
      v63 = v62 << 15;
      v64 = a1[4];
      a1[4] = (v64 >> 1) + v63;
      v65 = v64 << 15;
      v66 = a1[5];
      a1[5] = (v66 >> 1) + v65;
      v67 = v66 << 15;
      v68 = a1[6];
      a1[6] = (v68 >> 1) + v67;
      v69 = v68 << 15;
      v70 = a1[7];
      a1[7] = (v70 >> 1) + v69;
      v71 = v70 << 15;
      v72 = a1[8];
      a1[8] = (v72 >> 1) + v71;
      v73 = v72 << 15;
      v74 = a1[9];
      a1[9] = (v74 >> 1) + v73;
      a1[10] = (a1[10] >> 1) + (v74 << 15);
      ++v9;
      goto LABEL_40;
    }
LABEL_16:
    v12 = 10;
    v79 = 9;
    v13 = 0;
    if ( a5 >= 64 )
    {
      v18 = a1[10];
      v19 = 9;
      v17 = 0;
      v77 = 0;
      v80 = 1;
      v82 = 1;
      goto LABEL_27;
    }
    v80 = 1;
    v83 = -1;
    v78 = 0;
    v82 = 1;
    v81 = 0x8000;
    goto LABEL_19;
  }
  if ( a5 )
  {
    if ( a5 == 24 )
    {
      v12 = 4;
      v13 = 256;
      v78 = 0;
      v80 = 0;
      v79 = 4;
      goto LABEL_19;
    }
    goto LABEL_16;
  }
  a1[10] = 0;
LABEL_41:
  v7 = 0;
  if ( v9 >= 1 )
  {
    a1[1] = v9;
    return 1;
  }
LABEL_43:
  memset(a1, 0, 0x16u);
  return v7;
}
