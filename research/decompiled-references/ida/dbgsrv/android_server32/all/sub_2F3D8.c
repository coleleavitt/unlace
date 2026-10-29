/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2F3D8
// Address: 0x0002F3D8

//----- (0002F3D8) --------------------------------------------------------
int __fastcall sub_2F3D8(_DWORD *a1, int a2, int a3, unsigned int a4)
{
  _DWORD *v5; // r2
  unsigned int v6; // r7
  unsigned int v7; // r5
  int v8; // r2
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r0
  unsigned int v13; // r7
  unsigned int v14; // r5
  int v15; // r2
  int v16; // r1
  int v17; // r0
  int v18; // r0
  int v19; // r0
  unsigned int v20; // r4
  unsigned int v21; // r5
  unsigned int v22; // r7
  _DWORD *v23; // r2
  int v24; // r0
  int v25; // r0
  unsigned int v26; // r0
  _DWORD *v27; // r0
  int v28; // r4
  unsigned int v29; // r5
  unsigned int v30; // r7
  int v31; // r4
  unsigned int v32; // r5
  unsigned int v33; // r7
  int v34; // r4
  unsigned int v35; // r5
  unsigned int v36; // r7
  int v37; // r4
  int v38; // r5
  int v39; // r7
  int v40; // r1
  bool v41; // zf
  unsigned int v42; // r0
  _DWORD *v43; // r0
  int v44; // r4
  unsigned int v45; // r5
  unsigned int v46; // r7
  int v47; // r4
  unsigned int v48; // r5
  unsigned int v49; // r7
  int v50; // r4
  unsigned int v51; // r5
  unsigned int v52; // r7
  int v53; // r4
  int v54; // r5
  int v55; // r7
  int v56; // r1
  unsigned int v57; // r0
  _DWORD *v58; // r0
  int v59; // r4
  unsigned int v60; // r5
  unsigned int v61; // r6
  int v62; // r4
  unsigned int v63; // r5
  unsigned int v64; // r6
  int v65; // r4
  unsigned int v66; // r5
  unsigned int v67; // r6
  int v68; // r4
  int v69; // r5
  int v70; // r6
  int v71; // r0
  _DWORD *v72; // r6
  __int64 v73; // r0
  unsigned int v74; // r3
  unsigned int v75; // r5
  __int64 v76; // r0
  int v77; // r3
  void **v78; // r5
  int v79; // r4
  int v80; // r1
  unsigned int v81; // r2
  char *v82; // r0
  int v83; // r6
  unsigned __int64 v84; // r0
  bool v85; // cf
  void (__fastcall *v86)(_DWORD *, int, int, int, _DWORD, _DWORD); // r4
  __int64 v87; // r0
  _DWORD v89[3]; // [sp+4h] [bp-84h] BYREF
  _QWORD *v90; // [sp+10h] [bp-78h]
  unsigned __int64 v91; // [sp+14h] [bp-74h]
  __int64 v92; // [sp+1Ch] [bp-6Ch]
  unsigned int v93; // [sp+24h] [bp-64h]
  void *v94; // [sp+28h] [bp-60h]
  _DWORD *v95; // [sp+2Ch] [bp-5Ch]
  int v96; // [sp+30h] [bp-58h]
  _UNKNOWN **v97; // [sp+34h] [bp-54h] BYREF
  _DWORD *v98; // [sp+38h] [bp-50h]
  int v99; // [sp+3Ch] [bp-4Ch]
  int v100; // [sp+40h] [bp-48h]
  _QWORD v101[7]; // [sp+44h] [bp-44h] BYREF
  int v102; // [sp+7Ch] [bp-Ch]
  int v103; // [sp+80h] [bp-8h]

  v96 = a2;
  v5 = a1;
  v94 = &_stack_chk_guard;
  v93 = a4;
  v95 = a1;
  if ( a4 )
  {
    v6 = *(_DWORD *)(a3 + 420);
    v7 = *(_DWORD *)(a3 + 416);
    if ( *(__int64 *)(a3 + 416) < 1 )
      goto LABEL_6;
    v8 = *(_DWORD *)(a3 + 432);
    if ( !*(_QWORD *)(a3 + 432) )
      goto LABEL_6;
    HIDWORD(v92) = *(_DWORD *)(a3 + 436);
    LODWORD(v92) = v8;
    memset(v101, 0, sizeof(v101));
    v5 = v95;
    v9 = *(_DWORD *)(a3 + 428);
    LODWORD(v101[2]) = *(_DWORD *)(a3 + 424);
    HIDWORD(v101[2]) = v9;
    v101[3] = __PAIR64__(v6, v7);
    v101[4] = v92;
    v10 = *(_DWORD *)(a3 + 444);
    HIDWORD(v101[0]) = 1879048190;
    HIDWORD(v101[5]) = v10;
    v11 = *(unsigned __int16 *)(a3 + 88);
    v103 = 0;
    v102 = v11;
    v12 = 2;
  }
  else
  {
    v26 = a1[38];
    if ( !v26 )
      goto LABEL_22;
    if ( !*((_BYTE *)v5 + 176) )
      goto LABEL_52;
    if ( v5[15] <= v26 )
      goto LABEL_22;
    v27 = (_DWORD *)(v5[14] + (v26 << 6));
    if ( !v27 )
      goto LABEL_22;
    v28 = v27[1];
    v29 = v27[2];
    v30 = v27[3];
    LODWORD(v101[0]) = *v27;
    HIDWORD(v101[0]) = v28;
    v101[1] = __PAIR64__(v30, v29);
    v31 = v27[5];
    v32 = v27[6];
    v33 = v27[7];
    LODWORD(v101[2]) = v27[4];
    HIDWORD(v101[2]) = v31;
    v101[3] = __PAIR64__(v33, v32);
    v34 = v27[9];
    v35 = v27[10];
    v36 = v27[11];
    LODWORD(v101[4]) = v27[8];
    HIDWORD(v101[4]) = v34;
    v101[5] = __PAIR64__(v36, v35);
    v37 = v27[13];
    v38 = v27[14];
    v39 = v27[15];
    LODWORD(v101[6]) = v27[12];
    HIDWORD(v101[6]) = v37;
    v102 = v38;
    v103 = v39;
    v5 = v95;
    v40 = v27[10];
    if ( v40 != v95[31] || (v12 = 1, v5 = v95, !v95[57]) )
    {
      if ( v40 != v5[23] )
        goto LABEL_22;
      v12 = 2;
      v41 = v95[55] == v5[57];
      v5 = v95;
      if ( v41 )
        goto LABEL_22;
    }
  }
  v98 = v5;
  v99 = v96;
  v100 = v12;
  v97 = &off_D648C;
  sub_2F840((int *)&v97, (int)v89, v101[3], SHIDWORD(v101[3]), v101[4]);
  v5 = v95;
  if ( v93 )
  {
LABEL_6:
    v13 = *(_DWORD *)(a3 + 388);
    v14 = *(_DWORD *)(a3 + 384);
    if ( *(__int64 *)(a3 + 384) < 1 )
      goto LABEL_10;
    v15 = *(_DWORD *)(a3 + 400);
    if ( !*(_QWORD *)(a3 + 400) )
      goto LABEL_10;
    HIDWORD(v92) = *(_DWORD *)(a3 + 404);
    LODWORD(v92) = v15;
    memset(v101, 0, sizeof(v101));
    v5 = v95;
    v16 = *(_DWORD *)(a3 + 396);
    LODWORD(v101[2]) = *(_DWORD *)(a3 + 392);
    HIDWORD(v101[2]) = v16;
    v101[3] = __PAIR64__(v13, v14);
    v101[4] = v92;
    v17 = *(_DWORD *)(a3 + 412);
    HIDWORD(v101[0]) = 1879048189;
    HIDWORD(v101[5]) = v17;
    v18 = *(unsigned __int16 *)(a3 + 88);
    v103 = 0;
    v102 = v18;
    v19 = 2;
    goto LABEL_9;
  }
LABEL_22:
  v42 = v5[37];
  if ( !v42 )
    goto LABEL_31;
  if ( !*((_BYTE *)v5 + 176) )
    goto LABEL_52;
  if ( v5[15] <= v42 )
    goto LABEL_31;
  v43 = (_DWORD *)(v5[14] + (v42 << 6));
  if ( !v43 )
    goto LABEL_31;
  v44 = v43[1];
  v45 = v43[2];
  v46 = v43[3];
  LODWORD(v101[0]) = *v43;
  HIDWORD(v101[0]) = v44;
  v101[1] = __PAIR64__(v46, v45);
  v47 = v43[5];
  v48 = v43[6];
  v49 = v43[7];
  LODWORD(v101[2]) = v43[4];
  HIDWORD(v101[2]) = v47;
  v101[3] = __PAIR64__(v49, v48);
  v50 = v43[9];
  v51 = v43[10];
  v52 = v43[11];
  LODWORD(v101[4]) = v43[8];
  HIDWORD(v101[4]) = v50;
  v101[5] = __PAIR64__(v52, v51);
  v53 = v43[13];
  v54 = v43[14];
  v55 = v43[15];
  LODWORD(v101[6]) = v43[12];
  HIDWORD(v101[6]) = v53;
  v102 = v54;
  v103 = v55;
  v5 = v95;
  v56 = v43[10];
  if ( v56 != v95[31] || (v19 = 1, v5 = v95, !v95[57]) )
  {
    if ( v56 != v5[23] || (v19 = 2, v41 = v95[55] == v5[57], v5 = v95, v41) )
    {
LABEL_31:
      v57 = v5[39];
      if ( !v57 )
        return 1;
      if ( *((_BYTE *)v5 + 176) )
      {
        if ( v5[15] <= v57 )
          return 1;
        v58 = (_DWORD *)(v5[14] + (v57 << 6));
        if ( !v58 )
          return 1;
        v59 = v58[1];
        v60 = v58[2];
        v61 = v58[3];
        LODWORD(v101[0]) = *v58;
        HIDWORD(v101[0]) = v59;
        v101[1] = __PAIR64__(v61, v60);
        v62 = v58[5];
        v63 = v58[6];
        v64 = v58[7];
        LODWORD(v101[2]) = v58[4];
        HIDWORD(v101[2]) = v62;
        v101[3] = __PAIR64__(v64, v63);
        v65 = v58[9];
        v66 = v58[10];
        v67 = v58[11];
        LODWORD(v101[4]) = v58[8];
        HIDWORD(v101[4]) = v65;
        v101[5] = __PAIR64__(v67, v66);
        v68 = v58[13];
        v69 = v58[14];
        v70 = v58[15];
        LODWORD(v101[6]) = v58[12];
        HIDWORD(v101[6]) = v68;
        v102 = v69;
        v103 = v70;
        v23 = v95;
        v71 = v58[10];
        if ( (v71 != v95[31] || !v95[57]) && (v71 != v95[23] || v95[55] == v95[57]) )
          return 1;
        goto LABEL_39;
      }
LABEL_52:
      if ( !under_debugger )
        interr(20099);
      __debugbreak();
    }
  }
LABEL_9:
  v98 = v5;
  v99 = v96;
  v100 = v19;
  v97 = &off_D649C;
  sub_2FB78((int *)&v97, (int)v89, v101[3], SHIDWORD(v101[3]), v101[4]);
  v5 = v95;
  if ( !v93 )
    goto LABEL_31;
LABEL_10:
  v20 = *(_DWORD *)(a3 + 452);
  v21 = *(_DWORD *)(a3 + 448);
  if ( *(__int64 *)(a3 + 448) < 1 )
    return 1;
  v22 = *(_DWORD *)(a3 + 464);
  if ( !*(_QWORD *)(a3 + 464) )
    return 1;
  v93 = *(_DWORD *)(a3 + 468);
  memset(v101, 0, sizeof(v101));
  v23 = v95;
  v101[2] = *(_QWORD *)(a3 + 456);
  v101[3] = __PAIR64__(v20, v21);
  v101[4] = __PAIR64__(v93, v22);
  v24 = *(_DWORD *)(a3 + 476);
  HIDWORD(v101[0]) = 1879048191;
  HIDWORD(v101[5]) = v24;
  v25 = *(unsigned __int16 *)(a3 + 88);
  v103 = 0;
  v102 = v25;
LABEL_39:
  v72 = v23;
  v73 = qlseek(v23[91], 0, 1);
  v74 = HIDWORD(v73);
  HIDWORD(v73) = v72[93];
  v75 = v72[92];
  v91 = __PAIR64__(v74, v73) - __PAIR64__(HIDWORD(v73), v75);
  v90 = v72 + 92;
  HIDWORD(v92) = v72 + 91;
  LODWORD(v73) = v72[91];
  v93 = 0;
  v76 = qlseek(v73, v101[3] + __PAIR64__(HIDWORD(v73), v75), 0);
  v77 = v96;
  if ( ((unsigned int)v76 & HIDWORD(v76)) != 0xFFFFFFFF && v101[4] >= __PAIR64__(v93, 2) )
  {
    LODWORD(v92) = v95 + 120;
    v78 = (void **)(v96 + 24);
    v79 = 1;
    while ( 1 )
    {
      v80 = *(_DWORD *)(v77 + 28);
      v81 = v80 + 1;
      if ( *(_DWORD *)(v77 + 32) >= (unsigned int)(v80 + 1) )
      {
        v82 = (char *)*v78;
      }
      else
      {
        v82 = (char *)qvector_reserve((int)v78, *v78, v81, 2u);
        v77 = v96;
        *(_DWORD *)(v96 + 24) = v82;
        v80 = *(_DWORD *)(v77 + 28);
        v81 = v80 + 1;
      }
      *(_DWORD *)(v77 + 28) = v81;
      v83 = lreadbytes(*(_DWORD *)HIDWORD(v92), &v82[2 * v80], 2, *(unsigned __int8 *)v92);
      if ( v83 < 0 )
        break;
      LODWORD(v84) = (LODWORD(v101[4]) >> 1) + (HIDWORD(v101[4]) << 31);
      HIDWORD(v84) = HIDWORD(v101[4]) >> 1;
      v85 = __PAIR64__(v93, v79++) >= v84;
      v77 = v96;
      if ( v85 )
        goto LABEL_50;
    }
    v86 = (void (__fastcall *)(_DWORD *, int, int, int, _DWORD, _DWORD))v95[96];
    v87 = qlseek(*(_DWORD *)HIDWORD(v92), 0, 1);
    v86(v95, 19, 2, v83, v87, HIDWORD(v87));
  }
LABEL_50:
  qlseek(*(_DWORD *)HIDWORD(v92), *v90 + v91, v93);
  return 1;
}
// D648C: using guessed type _UNKNOWN *off_D648C;
// D649C: using guessed type _UNKNOWN *off_D649C;
// E0550: using guessed type char under_debugger;
