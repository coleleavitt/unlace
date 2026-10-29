/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000A578
// Address: 0x000000010000A578

//----- (000000010000A578) ----------------------------------------------------
void __fastcall sub_10000A578(__int64 a1)
{
  unsigned __int64 v2; // x8
  bool v3; // cf
  unsigned __int64 v4; // x8
  _QWORD *v5; // x24
  char *v6; // x25
  char *v7; // x20
  __int64 v8; // x23
  char *v9; // x8
  char *v10; // x21
  __int64 v11; // kr00_8
  char *v12; // x21
  signed __int64 v13; // x22
  char *v14; // x20
  char *v15; // x25
  __int64 v16; // x26
  char *v17; // x10
  __int64 v18; // x11
  __int64 v19; // x11
  unsigned __int64 v20; // x9
  __int64 v21; // x23
  char *v22; // x22
  char *v23; // x24
  void *v24; // x21
  unsigned __int64 v25; // x8
  unsigned __int64 v26; // x26
  __int64 v27; // x22
  char *v28; // x0
  char *v29; // x9
  unsigned __int64 v30; // x12
  char *v31; // x11
  _QWORD *v32; // x22
  char *v33; // x24
  char *v34; // x20
  __int64 v35; // x23
  unsigned __int64 v36; // x20
  char *v37; // x0
  char *v38; // x8
  char *v39; // x0
  __int128 v40; // q0
  __int128 v41; // q1
  __int128 v42; // q2
  char *v43; // x8
  char *v44; // x21
  __int64 v45; // kr08_8
  char *v46; // x21
  signed __int64 v47; // x22
  char *v48; // x15
  __int64 v49; // x12
  __int64 v50; // x14
  __int128 *v51; // x14
  _OWORD *v52; // x15
  __int64 v53; // x16
  __int128 v54; // q0
  __int128 v55; // q1
  __int128 v56; // q2
  __int128 v57; // q3
  __int64 v58; // t1
  unsigned __int64 v59; // x25
  char *v60; // x0
  char *v61; // x9
  char *v62; // x10
  unsigned __int64 v63; // x12
  char *v64; // x11
  char *v65; // x15
  __int64 v66; // x12
  __int64 v67; // x14
  __int128 *v68; // x14
  _OWORD *v69; // x15
  __int64 v70; // x16
  __int128 v71; // q0
  __int128 v72; // q1
  __int128 v73; // q2
  __int128 v74; // q3
  __int64 v75; // t1
  __int128 v76; // [xsp+0h] [xbp-70h] BYREF
  __int128 v77; // [xsp+10h] [xbp-60h]
  __int64 v78; // [xsp+20h] [xbp-50h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = v2 >= 0x38;
  v4 = v2 - 56;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 32) = v4;
    v5 = *(_QWORD **)(a1 + 8);
    v6 = *(char **)(a1 + 16);
    v7 = (char *)(v5 + 1);
    v8 = *v5;
    *(_QWORD *)(a1 + 8) = v5 + 1;
    v9 = v6;
    if ( v6 != *(char **)(a1 + 24) )
    {
LABEL_50:
      *(_QWORD *)v9 = v8;
      goto LABEL_51;
    }
    v10 = *(char **)a1;
    if ( (unsigned __int64)v7 > *(_QWORD *)a1 )
    {
      v11 = ((__int64)&v7[-*(_QWORD *)a1] >> 3) + 1;
      v12 = &v7[-8 * (v11 / 2)];
      v13 = v6 - v7;
      if ( v6 != v7 )
      {
        memmove(&v7[-8 * (v11 / 2)], v7, v6 - v7);
        v7 = *(char **)(a1 + 8);
      }
      v9 = &v12[v13];
      *(_QWORD *)(a1 + 8) = &v7[8 * (v11 / -2)];
      *(_QWORD *)(a1 + 16) = &v12[v13];
      goto LABEL_50;
    }
    v25 = (v6 - v10) >> 2;
    if ( v6 == v10 )
      v25 = 1;
    if ( v25 >> 61 )
      goto LABEL_67;
    v26 = v25 >> 2;
    v27 = 8 * v25;
    v28 = (char *)operator new(8 * v25);
    v29 = &v28[8 * v26];
    v9 = v29;
    if ( v6 != v7 )
    {
      v9 = &v29[v6 - v7];
      v30 = v6 - (char *)v5 - 16;
      if ( v30 < 0x48 )
      {
        v31 = &v28[8 * v26];
        do
        {
LABEL_47:
          v58 = *(_QWORD *)v7;
          v7 += 8;
          *(_QWORD *)v31 = v58;
          v31 += 8;
        }
        while ( v31 != v9 );
        goto LABEL_48;
      }
      v48 = &v28[8 * v26];
      v31 = v48;
      if ( (unsigned __int64)(v48 - (char *)v5 - 8) < 0x40 )
        goto LABEL_47;
      v49 = (v30 >> 3) + 1;
      v50 = 8 * (v49 & 0x3FFFFFFFFFFFFFF8LL);
      v31 = &v29[v50];
      v7 += v50;
      v51 = (__int128 *)(v5 + 5);
      v52 = v48 + 32;
      v53 = v49 & 0x3FFFFFFFFFFFFFF8LL;
      do
      {
        v54 = *(v51 - 2);
        v55 = *(v51 - 1);
        v56 = *v51;
        v57 = v51[1];
        v51 += 4;
        *(v52 - 2) = v54;
        *(v52 - 1) = v55;
        *v52 = v56;
        v52[1] = v57;
        v52 += 4;
        v53 -= 8;
      }
      while ( v53 );
      if ( v49 != (v49 & 0x3FFFFFFFFFFFFFF8LL) )
        goto LABEL_47;
    }
LABEL_48:
    *(_QWORD *)a1 = v28;
    *(_QWORD *)(a1 + 8) = v29;
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 24) = &v28[v27];
    if ( v10 )
    {
      operator delete(v10);
      v9 = *(char **)(a1 + 16);
    }
    goto LABEL_50;
  }
  v15 = *(char **)(a1 + 8);
  v14 = *(char **)(a1 + 16);
  v16 = v14 - v15;
  v17 = *(char **)(a1 + 24);
  v18 = (__int64)&v17[-*(_QWORD *)a1];
  if ( v14 - v15 < (unsigned __int64)v18 )
  {
    if ( v17 != v14 )
    {
      *(_QWORD *)&v76 = operator new(0xFC0u);
      sub_10000A3BC((char **)a1, &v76);
      return;
    }
    *(_QWORD *)&v76 = operator new(0xFC0u);
    sub_10000A228(a1, &v76);
    v32 = *(_QWORD **)(a1 + 8);
    v33 = *(char **)(a1 + 16);
    v34 = (char *)(v32 + 1);
    v35 = *v32;
    *(_QWORD *)(a1 + 8) = v32 + 1;
    if ( v33 != *(char **)(a1 + 24) )
      goto LABEL_25;
    v44 = *(char **)a1;
    if ( (unsigned __int64)v34 > *(_QWORD *)a1 )
    {
      v45 = ((__int64)&v34[-*(_QWORD *)a1] >> 3) + 1;
      v46 = &v34[-8 * (v45 / 2)];
      v47 = v33 - v34;
      if ( v33 != v34 )
      {
        memmove(&v34[-8 * (v45 / 2)], v34, v33 - v34);
        v34 = *(char **)(a1 + 8);
      }
      *(_QWORD *)(a1 + 8) = &v34[8 * (v45 / -2)];
      *(_QWORD *)(a1 + 16) = &v46[v47];
      *(_QWORD *)&v46[v47] = v35;
      goto LABEL_51;
    }
    if ( v33 == v44 )
      v59 = 1;
    else
      v59 = (v33 - v44) >> 2;
    if ( v59 >> 61 )
      sub_10000A544();
    v60 = (char *)operator new(8 * v59);
    v61 = &v60[8 * (v59 >> 2)];
    v62 = v61;
    if ( v33 != v34 )
    {
      v62 = &v61[v33 - v34];
      v63 = v33 - (char *)v32 - 16;
      if ( v63 < 0x48 )
      {
        v64 = &v60[8 * (v59 >> 2)];
        do
        {
LABEL_64:
          v75 = *(_QWORD *)v34;
          v34 += 8;
          *(_QWORD *)v64 = v75;
          v64 += 8;
        }
        while ( v64 != v62 );
        goto LABEL_65;
      }
      v65 = &v60[8 * (v59 >> 2)];
      v64 = v65;
      if ( (unsigned __int64)(v65 - (char *)v32 - 8) < 0x40 )
        goto LABEL_64;
      v66 = (v63 >> 3) + 1;
      v67 = 8 * (v66 & 0x3FFFFFFFFFFFFFF8LL);
      v64 = &v61[v67];
      v34 += v67;
      v68 = (__int128 *)(v32 + 5);
      v69 = v65 + 32;
      v70 = v66 & 0x3FFFFFFFFFFFFFF8LL;
      do
      {
        v71 = *(v68 - 2);
        v72 = *(v68 - 1);
        v73 = *v68;
        v74 = v68[1];
        v68 += 4;
        *(v69 - 2) = v71;
        *(v69 - 1) = v72;
        *v69 = v73;
        v69[1] = v74;
        v69 += 4;
        v70 -= 8;
      }
      while ( v70 );
      if ( v66 != (v66 & 0x3FFFFFFFFFFFFFF8LL) )
        goto LABEL_64;
    }
LABEL_65:
    *(_QWORD *)a1 = v60;
    *(_QWORD *)(a1 + 8) = v61;
    v33 = v62;
    *(_QWORD *)(a1 + 16) = v62;
    *(_QWORD *)(a1 + 24) = &v60[8 * v59];
    if ( v44 )
    {
      operator delete(v44);
      v33 = *(char **)(a1 + 16);
    }
LABEL_25:
    *(_QWORD *)v33 = v35;
LABEL_51:
    *(_QWORD *)(a1 + 16) += 8LL;
    return;
  }
  v19 = v18 >> 2;
  if ( v17 == *(char **)a1 )
    v20 = 1;
  else
    v20 = v19;
  v78 = a1 + 24;
  if ( v20 >> 61 )
LABEL_67:
    sub_10000A544();
  v21 = 8 * v20;
  v22 = (char *)operator new(8 * v20);
  v23 = &v22[v16];
  *(_QWORD *)&v76 = v22;
  *((_QWORD *)&v76 + 1) = &v22[v16];
  *(_QWORD *)&v77 = &v22[v16];
  *((_QWORD *)&v77 + 1) = &v22[v21];
  v24 = operator new(0xFC0u);
  if ( v16 == v21 )
  {
    if ( v23 <= v22 )
    {
      if ( v14 == v15 )
        v36 = 1;
      else
        v36 = v16 >> 2;
      if ( v36 >> 61 )
        sub_10000A544();
      v37 = (char *)operator new(8 * v36);
      v23 = &v37[8 * (v36 >> 2)];
      *(_QWORD *)&v76 = v37;
      *((_QWORD *)&v76 + 1) = v23;
      *((_QWORD *)&v77 + 1) = &v37[8 * v36];
      operator delete(v22);
      v14 = *(char **)(a1 + 16);
    }
    else
    {
      v23 -= 8 * (((v16 >> 3) + 1 + ((unsigned __int64)((v16 >> 3) + 1) >> 63)) >> 1);
      *((_QWORD *)&v76 + 1) = v23;
    }
  }
  *(_QWORD *)v23 = v24;
  *(_QWORD *)&v77 = v23 + 8;
  while ( 1 )
  {
    v38 = *(char **)(a1 + 8);
    if ( v14 == v38 )
      break;
    v14 -= 8;
    sub_10000AA8C((__int64)&v76, v14);
  }
  v39 = *(char **)a1;
  v40 = v76;
  v41 = v77;
  *(_QWORD *)&v76 = *(_QWORD *)a1;
  *((_QWORD *)&v76 + 1) = v38;
  v42 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)a1 = v40;
  *(_OWORD *)(a1 + 16) = v41;
  v77 = v42;
  v43 = (char *)v42;
  if ( v14 != (char *)v42 )
  {
    do
      v43 -= 8;
    while ( v14 != v43 );
    *(_QWORD *)&v77 = v43;
  }
  if ( v39 )
    operator delete(v39);
}
