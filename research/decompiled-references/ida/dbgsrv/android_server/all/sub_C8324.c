/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C8324
// Address: 0x00000000000C8324

//----- (00000000000C8324) ----------------------------------------------------
__int64 __fastcall sub_C8324(int a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x8
  __int64 v4; // x9
  unsigned int v6; // t1
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x10
  unsigned __int64 v9; // x11
  __int64 v10; // x9
  unsigned int v11; // w12
  unsigned int v12; // w13
  __int64 v13; // x15
  __int64 v14; // x14
  unsigned __int64 v15; // x17
  unsigned __int64 v16; // x18
  unsigned __int64 v17; // x0
  unsigned __int64 v18; // x3
  unsigned int v19; // w16
  char *v20; // x4
  __int64 v21; // x5
  int v22; // w7
  int v23; // w6
  __int64 v24; // t1
  __int64 v25; // x8
  unsigned __int64 v26; // x11
  unsigned __int64 v27; // x11
  unsigned __int64 v28; // x11
  unsigned __int64 v29; // x11
  unsigned __int64 v30; // x11
  unsigned __int64 v31; // x11
  unsigned __int64 v32; // x11
  unsigned __int64 v33; // x11
  unsigned __int64 v34; // x11
  unsigned __int64 v35; // x11
  unsigned __int64 v36; // x11
  unsigned __int64 v37; // x11
  unsigned __int64 v38; // x11
  unsigned __int64 v39; // x11
  unsigned __int64 v40; // x11
  unsigned __int64 v41; // x11
  unsigned __int64 v42; // x11
  unsigned __int64 v43; // x11
  unsigned __int64 v44; // x11
  unsigned __int64 v45; // x11
  unsigned __int64 v46; // x11
  unsigned __int64 v47; // x11
  unsigned __int64 v48; // x11
  __int64 v49; // x12
  __int64 v50; // x14
  unsigned __int64 v51; // x10
  unsigned __int64 v52; // x10
  unsigned __int64 v53; // x10
  unsigned __int64 v54; // x10
  unsigned __int64 v55; // x10
  unsigned __int64 v56; // x10
  unsigned __int64 v57; // x10
  unsigned __int64 v58; // x10
  unsigned __int64 v59; // x8
  unsigned __int64 v60; // x8
  unsigned __int64 v61; // x8
  unsigned __int64 v62; // x8
  unsigned __int64 v63; // x8
  unsigned __int64 v64; // x8
  unsigned __int64 v65; // x8
  unsigned __int64 v66; // x8
  unsigned __int64 v67; // x11
  unsigned __int8 *v68; // x13
  unsigned __int64 v69; // x8
  unsigned __int64 v70; // x8
  unsigned __int64 v71; // x8
  unsigned __int64 v72; // x8
  unsigned __int64 v73; // x8
  unsigned __int64 v74; // x8
  __int64 v75; // x14
  unsigned __int64 v76; // x15
  unsigned int v77; // t1

  a3 = (unsigned int)a3;
  if ( !a2 )
    return 0;
  v3 = (unsigned int)~a1;
  if ( (unsigned int)a3 < 0x2FuLL )
  {
    v4 = (unsigned int)a3 - 8LL;
    if ( (unsigned int)a3 < 8uLL )
      goto LABEL_4;
LABEL_18:
    v67 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    v68 = (unsigned __int8 *)a2;
    do
    {
      a3 -= 8LL;
      v69 = (unsigned int)dword_11C3B4[(unsigned __int8)v3 ^ (unsigned __int64)*v68] ^ (v3 >> 8);
      v70 = (unsigned int)dword_11C3B4[(unsigned __int8)v69 ^ (unsigned __int64)v68[1]] ^ (v69 >> 8);
      v71 = (unsigned int)dword_11C3B4[(unsigned __int8)v70 ^ (unsigned __int64)v68[2]] ^ (v70 >> 8);
      v72 = (unsigned int)dword_11C3B4[(unsigned __int8)v71 ^ (unsigned __int64)v68[3]] ^ (v71 >> 8);
      v73 = (unsigned int)dword_11C3B4[(unsigned __int8)v72 ^ (unsigned __int64)v68[4]] ^ (v72 >> 8);
      v74 = (unsigned int)dword_11C3B4[(unsigned __int8)v73 ^ (unsigned __int64)v68[5]] ^ (v73 >> 8);
      v75 = (unsigned int)dword_11C3B4[(unsigned __int8)v74 ^ (unsigned __int64)v68[6]];
      v76 = v68[7];
      v68 += 8;
      v3 = (unsigned int)dword_11C3B4[(unsigned __int8)(v75 ^ BYTE1(v74)) ^ v76] ^ ((v75 ^ (v74 >> 8)) >> 8);
    }
    while ( a3 > 7 );
    a3 = v4 - v67;
    a2 = (_QWORD *)((char *)a2 + (v4 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    if ( v4 == v67 )
      return v3 ^ 0xFFFFFFFF;
    goto LABEL_21;
  }
  if ( ((unsigned __int8)a2 & 7) != 0 )
  {
    do
    {
      v6 = *(unsigned __int8 *)a2;
      a2 = (_QWORD *)((char *)a2 + 1);
      --a3;
      v3 = (unsigned int)dword_11C3B4[(unsigned __int8)v3 ^ (unsigned __int64)v6] ^ (v3 >> 8);
    }
    while ( a3 && ((unsigned __int8)a2 & 7) != 0 );
  }
  v7 = a3 / 0x28;
  a3 %= 0x28u;
  v8 = v7 - 1;
  v9 = *a2 ^ (unsigned int)v3;
  if ( v7 == 1 )
  {
    v14 = 0;
    v13 = 0;
    v25 = 0;
  }
  else
  {
    v10 = (__int64)&a2[5 * v7 - 5];
    v11 = 0;
    v12 = 0;
    LODWORD(v13) = 0;
    LODWORD(v14) = 0;
    do
    {
      v15 = a2[1] ^ (unsigned int)v13;
      v16 = a2[2] ^ (unsigned int)v14;
      v17 = a2[3] ^ v12;
      v18 = a2[4] ^ v11;
      v19 = dword_11C7B4[(unsigned __int8)v9];
      LODWORD(v13) = dword_11C7B4[(unsigned __int8)(*((_BYTE *)a2 + 8) ^ v13)];
      LODWORD(v14) = dword_11C7B4[(unsigned __int8)(*((_BYTE *)a2 + 16) ^ v14)];
      v12 = dword_11C7B4[(unsigned __int8)(*((_BYTE *)a2 + 24) ^ v12)];
      v11 = dword_11C7B4[(unsigned __int8)(*((_BYTE *)a2 + 32) ^ v11)];
      v20 = (char *)&qword_11C7B8[127] + 4;
      v21 = 8;
      do
      {
        v19 ^= *(_DWORD *)&v20[4 * (unsigned __int8)(v9 >> v21)];
        LODWORD(v13) = *(_DWORD *)&v20[4 * (unsigned __int8)(v15 >> v21)] ^ v13;
        LODWORD(v14) = *(_DWORD *)&v20[4 * (unsigned __int8)(v16 >> v21)] ^ v14;
        v22 = *(_DWORD *)&v20[4 * (unsigned __int8)(v17 >> v21)];
        v23 = *(_DWORD *)&v20[4 * (unsigned __int8)(v18 >> v21)];
        v21 += 8;
        v12 ^= v22;
        v11 ^= v23;
        v20 += 1024;
      }
      while ( v21 != 64 );
      v24 = a2[5];
      a2 += 5;
      --v8;
      v9 = v24 ^ v19;
    }
    while ( v8 );
    v13 = (unsigned int)v13;
    v14 = (unsigned int)v14;
    v8 = v12;
    v25 = v11;
    a2 = (_QWORD *)v10;
  }
  v26 = (unsigned int)dword_11C3B4[(unsigned __int8)v9] ^ (v9 >> 8);
  v27 = (unsigned int)dword_11C3B4[(unsigned __int8)v26] ^ (v26 >> 8);
  v28 = (unsigned int)dword_11C3B4[(unsigned __int8)v27] ^ (v27 >> 8);
  v29 = (unsigned int)dword_11C3B4[(unsigned __int8)v28] ^ (v28 >> 8);
  v30 = (unsigned int)dword_11C3B4[(unsigned __int8)v29] ^ (v29 >> 8);
  v31 = (unsigned int)dword_11C3B4[(unsigned __int8)v30] ^ (v30 >> 8);
  v32 = (unsigned int)dword_11C3B4[(unsigned __int8)v31] ^ (v31 >> 8);
  v33 = a2[1] ^ v13 ^ dword_11C3B4[(unsigned __int8)v32] ^ (unsigned int)(v32 >> 8);
  v34 = (unsigned int)dword_11C3B4[(unsigned __int8)v33] ^ (v33 >> 8);
  v35 = (unsigned int)dword_11C3B4[(unsigned __int8)v34] ^ (v34 >> 8);
  v36 = (unsigned int)dword_11C3B4[(unsigned __int8)v35] ^ (v35 >> 8);
  v37 = (unsigned int)dword_11C3B4[(unsigned __int8)v36] ^ (v36 >> 8);
  v38 = (unsigned int)dword_11C3B4[(unsigned __int8)v37] ^ (v37 >> 8);
  v39 = (unsigned int)dword_11C3B4[(unsigned __int8)v38] ^ (v38 >> 8);
  v40 = (unsigned int)dword_11C3B4[(unsigned __int8)v39] ^ (v39 >> 8);
  v41 = a2[2] ^ v14 ^ dword_11C3B4[(unsigned __int8)v40] ^ (unsigned int)(v40 >> 8);
  v42 = (unsigned int)dword_11C3B4[(unsigned __int8)v41] ^ (v41 >> 8);
  v43 = (unsigned int)dword_11C3B4[(unsigned __int8)v42] ^ (v42 >> 8);
  v44 = (unsigned int)dword_11C3B4[(unsigned __int8)v43] ^ (v43 >> 8);
  v45 = (unsigned int)dword_11C3B4[(unsigned __int8)v44] ^ (v44 >> 8);
  v46 = (unsigned int)dword_11C3B4[(unsigned __int8)v45] ^ (v45 >> 8);
  v47 = (unsigned int)dword_11C3B4[(unsigned __int8)v46] ^ (v46 >> 8);
  v48 = (unsigned int)dword_11C3B4[(unsigned __int8)v47] ^ (v47 >> 8);
  v49 = a2[3];
  v50 = a2[4];
  a2 += 5;
  v51 = v49 ^ v8 ^ dword_11C3B4[(unsigned __int8)v48] ^ (unsigned int)(v48 >> 8);
  v52 = (unsigned int)dword_11C3B4[(unsigned __int8)v51] ^ (v51 >> 8);
  v53 = (unsigned int)dword_11C3B4[(unsigned __int8)v52] ^ (v52 >> 8);
  v54 = (unsigned int)dword_11C3B4[(unsigned __int8)v53] ^ (v53 >> 8);
  v55 = (unsigned int)dword_11C3B4[(unsigned __int8)v54] ^ (v54 >> 8);
  v56 = (unsigned int)dword_11C3B4[(unsigned __int8)v55] ^ (v55 >> 8);
  v57 = (unsigned int)dword_11C3B4[(unsigned __int8)v56] ^ (v56 >> 8);
  v58 = (unsigned int)dword_11C3B4[(unsigned __int8)v57] ^ (v57 >> 8);
  v59 = v50 ^ v25 ^ dword_11C3B4[(unsigned __int8)v58] ^ (unsigned int)(v58 >> 8);
  v60 = (unsigned int)dword_11C3B4[(unsigned __int8)v59] ^ (v59 >> 8);
  v61 = (unsigned int)dword_11C3B4[(unsigned __int8)v60] ^ (v60 >> 8);
  v62 = (unsigned int)dword_11C3B4[(unsigned __int8)v61] ^ (v61 >> 8);
  v63 = (unsigned int)dword_11C3B4[(unsigned __int8)v62] ^ (v62 >> 8);
  v64 = (unsigned int)dword_11C3B4[(unsigned __int8)v63] ^ (v63 >> 8);
  v65 = (unsigned int)dword_11C3B4[(unsigned __int8)v64] ^ (v64 >> 8);
  v66 = (unsigned int)dword_11C3B4[(unsigned __int8)v65] ^ (v65 >> 8);
  v3 = dword_11C3B4[(unsigned __int8)v66] ^ (unsigned int)(v66 >> 8);
  v4 = a3 - 8;
  if ( a3 >= 8 )
    goto LABEL_18;
LABEL_4:
  while ( a3 )
  {
LABEL_21:
    v77 = *(unsigned __int8 *)a2;
    a2 = (_QWORD *)((char *)a2 + 1);
    --a3;
    v3 = (unsigned int)dword_11C3B4[(unsigned __int8)v3 ^ (unsigned __int64)v77] ^ (v3 >> 8);
  }
  return v3 ^ 0xFFFFFFFF;
}
// 11C3B4: using guessed type int dword_11C3B4[];
// 11C7B4: using guessed type int dword_11C7B4[];
// 11C7B8: using guessed type __int64[512];
