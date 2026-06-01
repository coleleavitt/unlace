/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: serialize_insn
// Address: 0x00074998

//----- (00074998) --------------------------------------------------------
int __fastcall serialize_insn(int a1, unsigned int *a2)
{
  unsigned int v3; // r7
  unsigned int v4; // r2
  unsigned int v5; // r3
  _BYTE *v6; // r0
  unsigned int v7; // r2
  unsigned int v8; // r1
  _BOOL4 v9; // r0
  bool v10; // zf
  unsigned int v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // r3
  _BYTE *v14; // r0
  unsigned int v15; // r2
  unsigned int v16; // r1
  _BOOL4 v17; // r0
  unsigned int v18; // r3
  unsigned int v19; // r2
  _BYTE *v20; // r0
  _BYTE *v21; // r0
  _BYTE *v22; // r0
  _BYTE *v23; // r0
  char v24; // r4
  int v25; // r1
  _BYTE *v26; // r0
  int v27; // r0
  int v28; // r1
  char v29; // r4
  _BYTE *v30; // r0
  _BYTE *v31; // r0
  int v32; // r0
  int v33; // r2
  char *v34; // r6
  char v35; // r4
  void *v36; // r1
  int v37; // r2
  int v38; // r0
  char v39; // r4
  void *v40; // r1
  unsigned int v41; // r2
  int v42; // r2
  int v43; // r0
  char v44; // r4
  void *v45; // r1
  unsigned int v46; // r2
  int v47; // r2
  int v48; // r0
  char v49; // r4
  void *v50; // r1
  unsigned int v51; // r2
  int v52; // r2
  int v53; // r0
  char v54; // r4
  void *v55; // r1
  unsigned int v56; // r2
  _BYTE *v57; // r0
  unsigned int v58; // r2
  unsigned int v59; // r4
  __int64 v60; // kr08_8
  unsigned int v61; // r3
  unsigned int v62; // r2
  unsigned int v63; // r3
  _BYTE *v64; // r0
  int v65; // r2
  unsigned int v66; // r1
  _BOOL4 v67; // r0
  int v68; // r3
  unsigned int v69; // r2
  unsigned int v70; // r3
  _BYTE *v71; // r0
  int v72; // r2
  unsigned int v73; // r1
  _BOOL4 v74; // r0
  int v75; // r3
  unsigned int v76; // r2
  _BYTE *v77; // r0
  char v78; // r4
  void *v79; // r1
  int v80; // r0
  int v81; // r2
  int v82; // r0
  char v83; // r4
  void *v84; // r1
  unsigned int v85; // r2
  int v86; // r2
  int v87; // r0
  char v88; // r4
  void *v89; // r1
  unsigned int v90; // r2
  int v91; // r2
  int v92; // r0
  char v93; // r4
  void *v94; // r1
  unsigned int v95; // r2
  int v98; // [sp+10h] [bp-18h]
  _BYTE v99[3]; // [sp+18h] [bp-10h] BYREF
  _BYTE v100[2]; // [sp+1Bh] [bp-Dh] BYREF
  _BYTE v101[3]; // [sp+1Dh] [bp-Bh] BYREF
  _BYTE v102[6]; // [sp+22h] [bp-6h] BYREF

  v3 = 0;
  v4 = 0;
  if ( *a2 != -1 )
    v4 = *a2 + 1;
  v5 = 0;
  if ( *a2 != -1 )
    v5 = ((unsigned __int64)*a2 + 1) >> 32;
  v6 = pack_dq(v99, (unsigned int)v102, v4, v5);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v99, v6 - v99);
  v7 = a2[1];
  v8 = v7 + 1;
  v9 = __CFADD__(v7, 1);
  v11 = v7 + 1;
  v10 = v7 == -1;
  v12 = 0;
  if ( !v10 )
    v12 = v8;
  v10 = v11 == 0;
  v13 = 0;
  if ( !v10 )
    v13 = v9;
  v14 = pack_dq(v99, (unsigned int)v102, v12, v13);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v99, v14 - v99);
  v15 = a2[2];
  v16 = v15 + 1;
  v17 = __CFADD__(v15, 1);
  v18 = v15 + 1;
  v10 = v15 == -1;
  v19 = 0;
  if ( !v10 )
    v19 = v16;
  if ( v18 )
    v3 = v17;
  v20 = pack_dq(v99, (unsigned int)v102, v19, v3);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v99, v20 - v99);
  v21 = pack_dw(v99, (unsigned int)v100, *((unsigned __int16 *)a2 + 6));
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v99, v21 - v99);
  v22 = pack_dw(v99, (unsigned int)v100, *((unsigned __int16 *)a2 + 7));
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v99, v22 - v99);
  v23 = pack_dd(v99, (unsigned int)v101, a2[4]);
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v99, v23 - v99);
  v24 = *((_BYTE *)a2 + 20);
  v25 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v25 + 1) )
  {
    v26 = *(_BYTE **)a1;
  }
  else
  {
    v26 = qvector_reserve(a1, *(void **)a1, v25 + 1, 1u);
    *(_DWORD *)a1 = v26;
    v25 = *(_DWORD *)(a1 + 4);
  }
  v26[v25] = v24;
  v27 = *(_DWORD *)(a1 + 4);
  v28 = v27 + 1;
  *(_DWORD *)(a1 + 4) = v27 + 1;
  v29 = *((_BYTE *)a2 + 21);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v27 + 2) )
  {
    v30 = *(_BYTE **)a1;
  }
  else
  {
    v30 = qvector_reserve(a1, *(void **)a1, v27 + 2, 1u);
    *(_DWORD *)a1 = v30;
    v28 = *(_DWORD *)(a1 + 4);
  }
  v30[v28] = v29;
  ++*(_DWORD *)(a1 + 4);
  v31 = pack_dw(v99, (unsigned int)v100, *((unsigned __int16 *)a2 + 11));
  ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v99, v31 - v99);
  v32 = *(_DWORD *)(a1 + 4);
  v33 = 0;
  do
  {
    v98 = v33;
    v34 = (char *)a2 + v33;
    v35 = *((_BYTE *)a2 + v33 + 25);
    v36 = *(void **)a1;
    if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v32 + 1) )
    {
      v36 = qvector_reserve(a1, v36, v32 + 1, 1u);
      *(_DWORD *)a1 = v36;
      v32 = *(_DWORD *)(a1 + 4);
    }
    *((_BYTE *)v36 + v32) = v35;
    v37 = *(_DWORD *)(a1 + 4);
    v38 = v37 + 1;
    *(_DWORD *)(a1 + 4) = v37 + 1;
    v39 = v34[26];
    v40 = *(void **)a1;
    v41 = v37 + 2;
    if ( *(_DWORD *)(a1 + 8) < v41 )
    {
      v40 = qvector_reserve(a1, v40, v41, 1u);
      *(_DWORD *)a1 = v40;
      v38 = *(_DWORD *)(a1 + 4);
    }
    *((_BYTE *)v40 + v38) = v39;
    v42 = *(_DWORD *)(a1 + 4);
    v43 = v42 + 1;
    *(_DWORD *)(a1 + 4) = v42 + 1;
    v44 = v34[27];
    v45 = *(void **)a1;
    v46 = v42 + 2;
    if ( *(_DWORD *)(a1 + 8) < v46 )
    {
      v45 = qvector_reserve(a1, v45, v46, 1u);
      *(_DWORD *)a1 = v45;
      v43 = *(_DWORD *)(a1 + 4);
    }
    *((_BYTE *)v45 + v43) = v44;
    v47 = *(_DWORD *)(a1 + 4);
    v48 = v47 + 1;
    *(_DWORD *)(a1 + 4) = v47 + 1;
    v49 = v34[28];
    v50 = *(void **)a1;
    v51 = v47 + 2;
    if ( *(_DWORD *)(a1 + 8) < v51 )
    {
      v50 = qvector_reserve(a1, v50, v51, 1u);
      *(_DWORD *)a1 = v50;
      v48 = *(_DWORD *)(a1 + 4);
    }
    *((_BYTE *)v50 + v48) = v49;
    v52 = *(_DWORD *)(a1 + 4);
    v53 = v52 + 1;
    *(_DWORD *)(a1 + 4) = v52 + 1;
    v54 = v34[29];
    v55 = *(void **)a1;
    v56 = v52 + 2;
    if ( *(_DWORD *)(a1 + 8) < v56 )
    {
      v55 = qvector_reserve(a1, v55, v56, 1u);
      *(_DWORD *)a1 = v55;
      v53 = *(_DWORD *)(a1 + 4);
    }
    *((_BYTE *)v55 + v53) = v54;
    ++*(_DWORD *)(a1 + 4);
    v57 = pack_dw(v99, (unsigned int)v100, *((unsigned __int16 *)v34 + 15));
    ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v99, v57 - v99);
    v58 = *((_DWORD *)v34 + 8);
    v59 = 0;
    v60 = v58 + 1LL;
    v61 = v58 + 1;
    v10 = v58 == -1;
    v62 = 0;
    if ( !v10 )
      v62 = v60;
    v10 = v61 == 0;
    v63 = 0;
    if ( !v10 )
      v63 = HIDWORD(v60);
    v64 = pack_dq(v99, (unsigned int)v102, v62, v63);
    ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v99, v64 - v99);
    v65 = *((_DWORD *)v34 + 9);
    v66 = v65 + 1;
    v67 = __CFADD__(v65, 1);
    v68 = v65 + 1;
    v10 = v65 == -1;
    v69 = 0;
    if ( !v10 )
      v69 = v66;
    v10 = v68 == 0;
    v70 = 0;
    if ( !v10 )
      v70 = v67;
    v71 = pack_dq(v99, (unsigned int)v102, v69, v70);
    ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v99, v71 - v99);
    v72 = *((_DWORD *)v34 + 10);
    v73 = v72 + 1;
    v74 = __CFADD__(v72, 1);
    v75 = v72 + 1;
    v10 = v72 == -1;
    v76 = 0;
    if ( !v10 )
      v76 = v73;
    if ( v75 )
      v59 = v74;
    v77 = pack_dq(v99, (unsigned int)v102, v76, v59);
    ((void (__fastcall *)(int, _BYTE *, int))loc_30B84)(a1, v99, v77 - v99);
    v78 = v34[44];
    v79 = *(void **)a1;
    v80 = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)(a1 + 8) < (unsigned int)(v80 + 1) )
    {
      v79 = qvector_reserve(a1, v79, v80 + 1, 1u);
      *(_DWORD *)a1 = v79;
      v80 = *(_DWORD *)(a1 + 4);
    }
    *((_BYTE *)v79 + v80) = v78;
    v81 = *(_DWORD *)(a1 + 4);
    v82 = v81 + 1;
    *(_DWORD *)(a1 + 4) = v81 + 1;
    v83 = v34[45];
    v84 = *(void **)a1;
    v85 = v81 + 2;
    if ( *(_DWORD *)(a1 + 8) < v85 )
    {
      v84 = qvector_reserve(a1, v84, v85, 1u);
      *(_DWORD *)a1 = v84;
      v82 = *(_DWORD *)(a1 + 4);
    }
    *((_BYTE *)v84 + v82) = v83;
    v86 = *(_DWORD *)(a1 + 4);
    v87 = v86 + 1;
    *(_DWORD *)(a1 + 4) = v86 + 1;
    v88 = v34[46];
    v89 = *(void **)a1;
    v90 = v86 + 2;
    if ( *(_DWORD *)(a1 + 8) < v90 )
    {
      v89 = qvector_reserve(a1, v89, v90, 1u);
      *(_DWORD *)a1 = v89;
      v87 = *(_DWORD *)(a1 + 4);
    }
    *((_BYTE *)v89 + v87) = v88;
    v91 = *(_DWORD *)(a1 + 4);
    v92 = v91 + 1;
    *(_DWORD *)(a1 + 4) = v91 + 1;
    v93 = v34[47];
    v94 = *(void **)a1;
    v95 = v91 + 2;
    if ( *(_DWORD *)(a1 + 8) < v95 )
    {
      v94 = qvector_reserve(a1, v94, v95, 1u);
      *(_DWORD *)a1 = v94;
      v92 = *(_DWORD *)(a1 + 4);
    }
    *((_BYTE *)v94 + v92) = v93;
    v32 = *(_DWORD *)(a1 + 4) + 1;
    *(_DWORD *)(a1 + 4) = v32;
    v33 = v98 + 24;
  }
  while ( v98 != 168 );
  return _stack_chk_guard - *(_DWORD *)&v102[2];
}
