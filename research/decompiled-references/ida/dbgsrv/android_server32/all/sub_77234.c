/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77234
// Address: 0x00077234

//----- (00077234) --------------------------------------------------------
int __fastcall sub_77234(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r6
  unsigned __int16 *v3; // r5
  int v4; // r4
  int v5; // r0
  int v6; // r2
  int v7; // r7
  int v8; // r1
  unsigned int v9; // r3
  unsigned int v10; // r5
  unsigned int v11; // r4
  unsigned int v12; // r2
  int v13; // r1
  unsigned int v14; // r7
  int v15; // r4
  int v16; // r2
  int v17; // r3
  int v18; // r0
  unsigned __int16 *v19; // r5
  int v20; // r1
  int v21; // r1
  int v22; // r1
  int v23; // r6
  unsigned int v24; // r1
  int v25; // r3
  int v26; // r4
  int v27; // r2
  int v28; // r5
  int v29; // r4
  int v30; // r5
  int v31; // r4
  int v32; // r5
  int v33; // r4
  int v34; // r4
  unsigned __int16 v36; // r0
  unsigned __int16 v37; // r1
  __int16 v38; // r0
  unsigned __int16 v39; // r1
  __int16 v40; // r0
  unsigned __int16 v41; // r1
  __int16 v42; // r0
  unsigned __int16 v43; // r1
  __int16 v44; // r0
  unsigned __int16 v45; // r1
  __int16 v46; // r0
  unsigned __int16 v47; // r1
  __int16 v48; // r0
  unsigned __int16 v49; // r1
  int v50; // r0
  unsigned int v51; // r1
  int v52; // r2
  int v53; // r6
  int v54; // r5
  int v55; // r7
  int v56; // r1
  unsigned __int16 *v57; // r5
  unsigned int v58; // r2
  unsigned int v59; // r3
  unsigned int v60; // r2
  unsigned int v61; // r3
  unsigned int v62; // r2
  unsigned int v63; // r3
  unsigned int v64; // r2
  unsigned int v65; // r3
  unsigned int v66; // r2
  unsigned int v67; // r3
  unsigned int v68; // r2
  unsigned int v69; // r3
  int v70; // r0
  int v71; // r6
  int v72; // [sp+Ch] [bp-64h]
  int v73; // [sp+10h] [bp-60h]
  int v74; // [sp+14h] [bp-5Ch]
  int v75; // [sp+14h] [bp-5Ch]
  int v76; // [sp+18h] [bp-58h]
  int v77; // [sp+18h] [bp-58h]
  int v78; // [sp+1Ch] [bp-54h]
  int v79; // [sp+1Ch] [bp-54h]
  int v80; // [sp+20h] [bp-50h]
  int v81; // [sp+20h] [bp-50h]
  int v82; // [sp+20h] [bp-50h]
  int v83; // [sp+24h] [bp-4Ch]
  int v84; // [sp+24h] [bp-4Ch]
  unsigned __int16 *v85; // [sp+24h] [bp-4Ch]
  int v86; // [sp+28h] [bp-48h]
  int v87; // [sp+28h] [bp-48h]
  int v88; // [sp+2Ch] [bp-44h]
  __int16 v89; // [sp+2Ch] [bp-44h]
  int v90; // [sp+30h] [bp-40h]
  int v91; // [sp+34h] [bp-3Ch]
  int v92; // [sp+34h] [bp-3Ch]
  int v93; // [sp+38h] [bp-38h]
  int v94; // [sp+38h] [bp-38h]
  int v95; // [sp+3Ch] [bp-34h]
  int v96; // [sp+3Ch] [bp-34h]
  int v97; // [sp+40h] [bp-30h]
  int v98; // [sp+40h] [bp-30h]
  int v99; // [sp+44h] [bp-2Ch]
  int v100; // [sp+48h] [bp-28h]
  int v102; // [sp+50h] [bp-20h]
  int v103; // [sp+50h] [bp-20h]
  int v104; // [sp+50h] [bp-20h]
  _DWORD v105[6]; // [sp+54h] [bp-1Ch] BYREF

  v2 = a2;
  v3 = a1;
  v105[0] = *(_DWORD *)a2;
  memset(&v105[1], 0, 18);
  if ( a1[4] || !a1[5] || !a1[6] || !a1[7] || !a1[8] || !a1[9] || !a1[10] || *((unsigned __int8 *)a1 + 6) << 31 )
  {
    v4 = a2[2];
    v5 = 114;
    v100 = 0;
    v97 = 0;
    v99 = 0;
    v95 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v90 = 0;
    while ( 1 )
    {
      v86 = v8;
      v88 = v5;
      v91 = v6;
      v93 = v7;
      v9 = v3[2];
      v76 = (unsigned __int16)v4;
      v102 = v4;
      LOWORD(v5) = v4;
      if ( v9 != (unsigned __int16)v4 )
        goto LABEL_17;
      v5 = v2[3];
      if ( a1[3] != v5 )
      {
        v9 = a1[3];
        goto LABEL_17;
      }
      v5 = v2[4];
      v10 = a1[4];
      if ( v10 != v5 )
      {
LABEL_14:
        v9 = v10;
        goto LABEL_17;
      }
      v5 = v2[5];
      v11 = a1[5];
      if ( v11 != v5 )
        break;
      v5 = v2[6];
      v12 = a1[6];
      if ( v12 == v5 && (v13 = a1[6], v5 = v2[7], v12 = a1[7], v12 == v5) )
      {
        v83 = a1[5];
        v5 = v2[8];
        v11 = a1[8];
        if ( v11 != v5 )
          break;
        v80 = a1[4];
        v5 = v2[9];
        v10 = a1[9];
        if ( v10 != v5 )
          goto LABEL_14;
        v5 = v2[10];
        v9 = a1[10];
        v74 = a1[3];
        v14 = v9;
        if ( v9 == v5 )
          goto LABEL_20;
      }
      else
      {
        v9 = v12;
      }
LABEL_17:
      v14 = v2[10];
      if ( v9 <= (unsigned __int16)v5 )
      {
        v74 = v2[3];
        v80 = v2[4];
        v83 = v2[5];
        v13 = v2[6];
        v12 = v2[7];
        v11 = v2[8];
        v10 = v2[9];
        v9 = a1[10];
LABEL_20:
        v14 -= v9;
        v2[10] = v14;
        v18 = v10 - a1[9] - (v14 << 15 >> 31);
        v2[9] = v18;
        v17 = v11 - a1[8] - ((unsigned int)(v18 << 15) >> 31);
        v2[8] = v17;
        v16 = v12 - a1[7] - ((unsigned int)(v17 << 15) >> 31);
        v2[7] = v16;
        v72 = v13 - a1[6] - ((unsigned int)(v16 << 15) >> 31);
        v2[6] = v72;
        v20 = v83 - a1[5] - ((unsigned int)(v72 << 15) >> 31);
        v2[5] = v20;
        v78 = v20;
        v19 = v2;
        v21 = v80 - a1[4] - ((unsigned int)(v20 << 15) >> 31);
        v2[4] = v21;
        v81 = v21;
        v22 = v74 - a1[3] - ((unsigned int)(v21 << 15) >> 31);
        v2[3] = v22;
        v84 = v22;
        v15 = v72;
        v23 = v76 - a1[2];
        v24 = (unsigned int)(v22 << 15) >> 31;
        v102 = v23 - v24;
        v19[2] = v23 - v24;
        v77 = 1;
        goto LABEL_21;
      }
      v84 = v2[3];
      v81 = v2[4];
      v78 = v2[5];
      v15 = v2[6];
      LOWORD(v16) = v2[7];
      LOWORD(v17) = v2[8];
      LOWORD(v18) = v2[9];
      v77 = 0;
      v19 = v2;
LABEL_21:
      v19[10] = 2 * v14;
      v19[9] = 2 * v18 + ((unsigned __int16)(v14 & 0x8000) >> 15);
      v19[8] = 2 * v17 + ((unsigned __int16)(v18 & 0x8000) >> 15);
      v19[7] = 2 * v16 + ((unsigned __int16)(v17 & 0x8000) >> 15);
      v75 = 2 * v15 + ((unsigned __int16)(v16 & 0x8000) >> 15);
      v19[6] = v75;
      v73 = 2 * v78 + ((unsigned __int16)(v15 & 0x8000) >> 15);
      v19[5] = v73;
      v79 = 2 * v81 + ((unsigned __int16)(v78 & 0x8000) >> 15);
      v19[4] = v79;
      v82 = 2 * v84 + ((unsigned __int16)(v81 & 0x8000) >> 15);
      v19[3] = v82;
      v4 = 2 * v102 + ((unsigned __int16)(v84 & 0x8000) >> 15);
      v19[2] = v4;
      v90 = 2 * v90 + ((unsigned __int16)(v100 & 0x8000) >> 15);
      v100 = 2 * v100 + ((unsigned __int16)(v97 & 0x8000) >> 15);
      v97 = 2 * v97 + ((unsigned __int16)(v99 & 0x8000) >> 15);
      v99 = 2 * v99 + ((unsigned __int16)(v95 & 0x8000) >> 15);
      v95 = 2 * v95 + ((unsigned __int16)(v91 & 0x8000) >> 15);
      v6 = 2 * v91 + ((unsigned __int16)(v93 & 0x8000) >> 15);
      v7 = 2 * v93 + ((unsigned __int16)(v86 & 0x8000) >> 15);
      v5 = v88 - 1;
      v8 = 2 * v86 + v77;
      v2 = v19;
      v3 = a1;
      if ( v88 == 1 )
      {
        v103 = 2 * v102 + ((unsigned __int16)(v84 & 0x8000) >> 15);
        HIWORD(v105[4]) = 2 * v86 + v77;
        v25 = 0;
        LOWORD(v105[5]) = 0;
        LOWORD(v105[4]) = 2 * v93 + ((unsigned __int16)(v86 & 0x8000) >> 15);
        HIWORD(v105[3]) = 2 * v91 + ((unsigned __int16)(v93 & 0x8000) >> 15);
        LOWORD(v105[3]) = v95;
        HIWORD(v105[2]) = v99;
        LOWORD(v105[2]) = v97;
        HIWORD(v105[1]) = v100;
        v94 = 2 * v93 + ((unsigned __int16)(v86 & 0x8000) >> 15);
        v92 = v6;
        v26 = 2 * v86 + v77;
        goto LABEL_23;
      }
    }
    v9 = v11;
    goto LABEL_17;
  }
  v36 = a2[2];
  a2[2] = v36 >> 1;
  v37 = a2[3];
  v2[3] = (v2[3] >> 1) + (v36 << 15);
  v38 = v37 << 15;
  v39 = v2[4];
  v2[4] = (v39 >> 1) + v38;
  v40 = v39 << 15;
  v41 = v2[5];
  v2[5] = (v41 >> 1) + v40;
  v42 = v41 << 15;
  v43 = v2[6];
  v2[6] = (v43 >> 1) + v42;
  v44 = v43 << 15;
  v45 = v2[7];
  v2[7] = (v45 >> 1) + v44;
  v46 = v45 << 15;
  v47 = v2[8];
  v2[8] = (v47 >> 1) + v46;
  v48 = v47 << 15;
  v49 = v2[9];
  v2[9] = (v49 >> 1) + v48;
  v2[10] = (v2[10] >> 1) + (v49 << 15);
  v50 = v3[2];
  v3[2] >>= 1;
  v51 = v3[3];
  v52 = (v51 >> 1) + (v50 << 15);
  v3[3] = v52;
  LOWORD(v50) = (_WORD)v51 << 15;
  LOWORD(v51) = v3[4];
  v3[4] = ((unsigned __int16)v51 >> 1) + v50;
  LOWORD(v50) = (_WORD)v51 << 15;
  LOWORD(v51) = v3[5];
  v3[5] = ((unsigned __int16)v51 >> 1) + v50;
  LOWORD(v50) = (_WORD)v51 << 15;
  LOWORD(v51) = v3[6];
  v3[6] = ((unsigned __int16)v51 >> 1) + v50;
  LOWORD(v50) = (_WORD)v51 << 15;
  LOWORD(v51) = v3[7];
  v3[7] = ((unsigned __int16)v51 >> 1) + v50;
  LOWORD(v50) = (_WORD)v51 << 15;
  LOWORD(v51) = v3[8];
  v3[8] = ((unsigned __int16)v51 >> 1) + v50;
  LOWORD(v50) = (_WORD)v51 << 15;
  LOWORD(v51) = v3[9];
  v3[9] = ((unsigned __int16)v51 >> 1) + v50;
  v3[10] = (v3[10] >> 1) + ((_WORD)v51 << 15);
  v85 = v2;
  v82 = v2[3];
  v90 = LOWORD(v105[1]);
  v53 = HIWORD(v105[1]);
  v54 = LOWORD(v105[2]);
  v99 = HIWORD(v105[2]);
  v55 = LOWORD(v105[3]);
  v92 = HIWORD(v105[3]);
  v94 = LOWORD(v105[4]);
  v104 = HIWORD(v105[4]);
  v89 = v105[5];
  v96 = 113;
  while ( 1 )
  {
    v98 = v54;
    if ( (unsigned __int16)v82 >= (unsigned int)(unsigned __int16)v52 )
    {
      v56 = v82 - v52;
      v57 = v85;
      v85[3] = v82 - v52;
      v87 = 1;
    }
    else
    {
      v56 = v82;
      v57 = v85;
      v87 = 0;
    }
    v58 = v57[10];
    v57[10] = 2 * v58;
    v59 = v57[9];
    v57[9] = 2 * v59 + (v58 >> 15);
    v60 = v59 >> 15;
    v61 = v57[8];
    v57[8] = 2 * v61 + v60;
    v62 = v61 >> 15;
    v63 = v57[7];
    v57[7] = 2 * v63 + v62;
    v64 = v63 >> 15;
    v65 = v57[6];
    v75 = 2 * v65 + v64;
    v57[6] = v75;
    v66 = v65 >> 15;
    v67 = v57[5];
    v73 = 2 * v67 + v66;
    v57[5] = v73;
    v68 = v67 >> 15;
    v69 = v57[4];
    v79 = 2 * v69 + v68;
    v57[4] = v79;
    v82 = 2 * v56 + (v69 >> 15);
    v57[3] = v82;
    v70 = 2 * v57[2] + ((unsigned __int16)(v56 & 0x8000) >> 15);
    v57[2] = v70;
    v90 = 2 * v90 + ((unsigned __int16)(v53 & 0x8000) >> 15);
    v100 = 2 * v53 + ((unsigned __int16)(v98 & 0x8000) >> 15);
    v54 = 2 * v98 + ((unsigned __int16)(v99 & 0x8000) >> 15);
    v71 = 2 * v99 + ((unsigned __int16)(v55 & 0x8000) >> 15);
    v55 = 2 * v55 + ((unsigned __int16)(v92 & 0x8000) >> 15);
    v92 = 2 * v92 + ((unsigned __int16)(v94 & 0x8000) >> 15);
    v94 = 2 * v94 + ((unsigned __int16)(v104 & 0x8000) >> 15);
    v26 = (2 * v104 + ((unsigned __int16)(v89 & 0x8000) >> 15)) | v87;
    v99 = v71;
    if ( !v96 )
      break;
    v104 = (2 * v104 + ((unsigned __int16)(v89 & 0x8000) >> 15)) | v87;
    --v96;
    v52 = a1[3];
    v89 *= 2;
    v53 = v100;
  }
  v103 = v70;
  HIWORD(v105[4]) = v26;
  LOWORD(v105[5]) = 2 * v89;
  LOWORD(v105[4]) = v94;
  HIWORD(v105[3]) = v92;
  v95 = v55;
  LOWORD(v105[3]) = v55;
  HIWORD(v105[2]) = v71;
  v97 = v54;
  LOWORD(v105[2]) = v54;
  HIWORD(v105[1]) = v100;
  v25 = v89 & 0x7FFF;
  v2 = v85;
LABEL_23:
  LOWORD(v105[1]) = (unsigned __int16)(v90 & 0xFFFC) >> 2;
  v27 = (unsigned __int16)v26 >> 1;
  LOWORD(v105[5]) = (((v25 + (v26 << 15)) & 0xFFFEu) >> 1) + ((_WORD)v27 << 15);
  v28 = (unsigned __int16)v100 >> 1;
  HIWORD(v105[1]) = (((v28 + (v90 << 15)) & 0xFFFEu) >> 1) + (((_WORD)v90 << 14) & 0x8000);
  v29 = (unsigned __int16)v97 >> 1;
  LOWORD(v105[2]) = (((v29 + (v100 << 15)) & 0xFFFEu) >> 1) + ((_WORD)v28 << 15);
  v30 = (unsigned __int16)v99 >> 1;
  HIWORD(v105[2]) = (((v30 + (v97 << 15)) & 0xFFFEu) >> 1) + ((_WORD)v29 << 15);
  v31 = (unsigned __int16)v95 >> 1;
  LOWORD(v105[3]) = (((v31 + (v99 << 15)) & 0xFFFEu) >> 1) + ((_WORD)v30 << 15);
  v32 = (unsigned __int16)v92 >> 1;
  HIWORD(v105[3]) = (((v32 + (v95 << 15)) & 0xFFFEu) >> 1) + ((_WORD)v31 << 15);
  v33 = (unsigned __int16)v94 >> 1;
  LOWORD(v105[4]) = (((v33 + (v92 << 15)) & 0xFFFEu) >> 1) + ((_WORD)v32 << 15);
  HIWORD(v105[4]) = (((v27 + (v94 << 15)) & 0xFFFEu) >> 1) + ((_WORD)v33 << 15);
  if ( (v82 | v103 | v79 | v73 | v75) << 16 || v2[7] )
  {
    v34 = 1;
  }
  else
  {
    v34 = 1;
    if ( !v2[8] && !v2[9] )
    {
      v34 = 1;
      if ( !v2[10] )
        v34 = v2[10];
    }
  }
  qmemcpy(v2, v105, 0x16u);
  return v34;
}
