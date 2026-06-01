/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31584
// Address: 0x00031584

//----- (00031584) --------------------------------------------------------
int __fastcall sub_31584(int a1, int a2, _DWORD *a3)
{
  int v4; // r5
  int v5; // r7
  int v6; // r2
  int v7; // r4
  unsigned __int64 v8; // r0
  unsigned int v9; // r7
  int v10; // r1
  int v11; // r5
  unsigned int v12; // r3
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r5
  unsigned int v16; // r2
  unsigned int v17; // r6
  __int64 v18; // kr00_8
  void *v19; // r1
  int v20; // r0
  unsigned int v21; // r2
  int v22; // r2
  int v23; // r7
  __int64 v24; // r2
  int v25; // r5
  __int64 v26; // r0
  _BOOL4 v27; // r6
  _DWORD *v28; // r2
  _DWORD *v29; // r1
  _DWORD *v30; // r1
  __int64 v32; // r2
  _DWORD *v33; // r4
  int v34; // r7
  int v35; // r5
  unsigned int v36; // r0
  unsigned __int64 v37; // kr10_8
  _BOOL4 v38; // r1
  int v39; // r2
  unsigned int v40; // r3
  unsigned int v41; // r5
  _DWORD *v42; // r7
  int v43; // r0
  unsigned int v44; // r4
  unsigned __int64 v45; // r6
  _BOOL4 v46; // r4
  int v47; // r2
  __int64 v48; // r4
  unsigned int v49; // r6
  int v50; // r7
  __int64 v51; // r0
  __int64 v52; // kr18_8
  _BOOL4 v53; // r6
  int v54; // r2
  __int64 v55; // r4
  unsigned int v56; // r6
  int v57; // r7
  __int64 v58; // r0
  __int64 v59; // kr20_8
  _BOOL4 v60; // r6
  int v61; // r2
  unsigned int v62; // r3
  unsigned int v63; // r4
  int v64; // r5
  unsigned int v65; // r0
  unsigned __int64 v66; // r0
  _BOOL4 v67; // r6
  int *v68; // [sp+38h] [bp-48h]
  unsigned int *v69; // [sp+40h] [bp-40h]
  int v70; // [sp+4Ch] [bp-34h]
  int v71; // [sp+4Ch] [bp-34h]
  unsigned int v72; // [sp+4Ch] [bp-34h]
  unsigned int v73; // [sp+4Ch] [bp-34h]
  _DWORD *v74; // [sp+50h] [bp-30h]
  int *v75; // [sp+50h] [bp-30h]
  unsigned int v76; // [sp+54h] [bp-2Ch]
  int v77; // [sp+58h] [bp-28h]
  int *v78; // [sp+58h] [bp-28h]
  int *v79; // [sp+58h] [bp-28h]
  int v81; // [sp+60h] [bp-20h]
  unsigned int v82; // [sp+64h] [bp-1Ch]
  unsigned int v83; // [sp+64h] [bp-1Ch]
  unsigned int v84; // [sp+64h] [bp-1Ch]
  unsigned int v85; // [sp+64h] [bp-1Ch]
  unsigned int v86; // [sp+64h] [bp-1Ch]
  int v87; // [sp+68h] [bp-18h]
  int v88; // [sp+68h] [bp-18h]
  int v89; // [sp+68h] [bp-18h]
  int v90; // [sp+68h] [bp-18h]
  int v91; // [sp+68h] [bp-18h]
  int v92; // [sp+68h] [bp-18h]
  int v93; // [sp+6Ch] [bp-14h] BYREF
  void *ptr; // [sp+70h] [bp-10h] BYREF
  int v95; // [sp+74h] [bp-Ch]
  unsigned int v96; // [sp+78h] [bp-8h]

  v4 = *(unsigned __int16 *)(a1 + 308);
  *(_WORD *)(a2 + 56) = v4;
  v5 = *(_DWORD *)(a1 + 328);
  *(_WORD *)(a2 + 88) = v5;
  v6 = *(_DWORD *)(a1 + 332);
  *(_WORD *)(a2 + 120) = v6;
  if ( !v4 )
    sub_31DFC();
  if ( !(v5 << 16) )
    sub_31DFC();
  if ( !(v6 << 16) )
    sub_31DFC();
  v95 = 0;
  ptr = nullptr;
  v96 = 0;
  v76 = 0;
  if ( !(16 * a3[1]) )
  {
    v28 = (_DWORD *)a2;
    *(_DWORD *)(a2 + 48) = -1;
    *(_DWORD *)(a2 + 52) = 0;
    v29 = (_DWORD *)(a2 + 48);
LABEL_47:
    *v29 = 0;
    v29[1] = 0;
    v28[61] = 0;
    v28[60] = -1;
    v28[60] = 0;
    v28[61] = 0;
    v28[101] = 0;
    v28[100] = 0;
    v28[69] = 0;
    v28[68] = 0;
    v28[109] = 0;
    v28[108] = 0;
    v28[117] = 0;
    v28[116] = -1;
    v30 = v28 + 116;
    goto LABEL_48;
  }
  v7 = *a3;
  v68 = (int *)(a1 + 460);
  v69 = (unsigned int *)(a1 + 464);
  v74 = a3;
  do
  {
    v8 = *(_QWORD *)v7;
    if ( *(__int64 *)v7 > 1610612750 )
    {
      if ( v8 - 1879048176 <= 0xF )
        __asm { MOV             PC, R0 }
      a3 = v74;
      if ( v8 - 1610612751 <= 3 )
        __asm { ADD             PC, R2 }
      if ( v8 == 1879047925 )
      {
        v9 = *v69;
        v10 = -1;
        v11 = -1;
        if ( *v69 )
        {
          v12 = *(_DWORD *)(v7 + 8);
          v13 = *(_DWORD *)(v7 + 12);
          v14 = *v68;
          v15 = 0;
          do
          {
            v16 = *(_DWORD *)(v14 + 16);
            v17 = *(_DWORD *)(v14 + 20);
            if ( __PAIR64__(v13, v12) >= __PAIR64__(v17, v16) )
            {
              v9 = *v69;
              if ( __PAIR64__(v13, v12) < *(_QWORD *)(v14 + 8) + __PAIR64__(v17, v16) )
              {
                v18 = v12 - v16 + *(_QWORD *)v14;
                v10 = HIDWORD(v18);
                v11 = v18;
                goto LABEL_25;
              }
            }
            v14 += 24;
            ++v15;
          }
          while ( v15 < v9 );
          v10 = -1;
          v11 = -1;
        }
LABEL_25:
        *(_DWORD *)(a2 + 256) = v11;
        *(_DWORD *)(a2 + 260) = v10;
        v93 = v11;
        v19 = ptr;
        v20 = v95;
        v21 = v95 + 1;
        if ( ptr > &v93 || (char *)ptr + 4 * v96 <= (char *)&v93 )
        {
          if ( v96 < v21 )
          {
            v19 = qvector_reserve((int)&ptr, ptr, v21, 4u);
            ptr = v19;
            v11 = v93;
LABEL_31:
            v20 = v95;
          }
        }
        else if ( v96 < v21 )
        {
          v19 = qvector_reserve((int)&ptr, ptr, v21, 4u);
          ptr = v19;
          goto LABEL_31;
        }
        *((_DWORD *)v19 + v20) = v11;
        ++v95;
        v22 = *(_DWORD *)(v7 + 12);
        *(_DWORD *)(a2 + 264) = *(_DWORD *)(v7 + 8);
        *(_DWORD *)(a2 + 268) = v22;
        a3 = v74;
      }
    }
    else if ( v8 <= 0x21 )
    {
      __asm { MOV             PC, R2 }
    }
    v7 += 16;
  }
  while ( v7 != *a3 + 16 * a3[1] );
  v23 = v95;
  v28 = (_DWORD *)a2;
  *(_DWORD *)(a2 + 48) = -1;
  *(_DWORD *)(a2 + 52) = 0;
  v75 = (int *)(a2 + 48);
  if ( !v23 )
  {
    v29 = (_DWORD *)(a2 + 48);
    goto LABEL_47;
  }
  v24 = *(_QWORD *)(a2 + 32);
  v25 = 0;
  v81 = v23;
  v87 = -1;
  v82 = 0;
  v70 = v24;
  do
  {
    if ( v24 )
    {
      v26 = *(unsigned int *)((char *)ptr + v25);
      if ( v24 < (unsigned int)v26 )
      {
        v77 = v26 - v24;
        v27 = __PAIR64__(v82, v87) < v26 - v24;
        if ( __PAIR64__(v82, v87) >= v26 - v24 )
          v82 = (unsigned __int64)(v26 - v24) >> 32;
        *(_DWORD *)(a2 + 52) = v82;
        LODWORD(v24) = v70;
        if ( !v27 )
          v87 = v77;
        *v75 = v87;
      }
    }
    v25 += 4;
    --v23;
  }
  while ( v23 );
  if ( !(~v87 | v82) )
  {
    *v75 = 0;
    *(_DWORD *)(a2 + 52) = 0;
  }
  *(_DWORD *)(a2 + 244) = 0;
  *(_DWORD *)(a2 + 240) = -1;
  LODWORD(v32) = *(_DWORD *)(a2 + 228);
  HIDWORD(v32) = *(_DWORD *)(a2 + 224);
  v33 = (_DWORD *)(a2 + 240);
  v34 = v81;
  v35 = 0;
  v88 = -1;
  v83 = 0;
  v71 = v32;
  do
  {
    if ( v32 )
    {
      v36 = *(_DWORD *)((char *)ptr + v35);
      if ( __SPAIR64__(v32, HIDWORD(v32)) < v36 )
      {
        v37 = v36 - __PAIR64__(v32, HIDWORD(v32));
        v38 = __PAIR64__(v83, v88) < v37;
        if ( __PAIR64__(v83, v88) >= v37 )
          v83 = (v36 - __PAIR64__(v32, HIDWORD(v32))) >> 32;
        v33 = (_DWORD *)(a2 + 240);
        *(_DWORD *)(a2 + 244) = v83;
        LODWORD(v32) = v71;
        if ( !v38 )
          v88 = v36 - HIDWORD(v32);
        *(_DWORD *)(a2 + 240) = v88;
      }
    }
    v35 += 4;
    --v34;
  }
  while ( v34 );
  if ( !(~v88 | v83) )
  {
    *v33 = 0;
    v33[1] = 0;
  }
  v39 = 0;
  *(_DWORD *)(a2 + 276) = 0;
  *(_DWORD *)(a2 + 272) = -1;
  v40 = *(_DWORD *)(a2 + 260);
  v41 = *(_DWORD *)(a2 + 256);
  v42 = (_DWORD *)(a2 + 272);
  v43 = v81;
  v89 = -1;
  v84 = 0;
  do
  {
    if ( v41 | v40 )
    {
      v44 = *(_DWORD *)((char *)ptr + v39);
      if ( __SPAIR64__(v40, v41) < v44 )
      {
        v45 = v44 - __PAIR64__(v40, v41);
        v46 = __PAIR64__(v84, v89) < v45;
        if ( __PAIR64__(v84, v89) >= v45 )
          v84 = HIDWORD(v45);
        v42 = (_DWORD *)(a2 + 272);
        *(_DWORD *)(a2 + 276) = v84;
        if ( !v46 )
          v89 = v45;
        *(_DWORD *)(a2 + 272) = v89;
      }
    }
    v39 += 4;
    --v43;
  }
  while ( v43 );
  if ( !(~v89 | v84) )
  {
    *v42 = 0;
    v42[1] = 0;
  }
  v47 = 0;
  *(_DWORD *)(a2 + 404) = 0;
  *(_DWORD *)(a2 + 400) = -1;
  LODWORD(v48) = *(_DWORD *)(a2 + 384);
  v49 = *(_DWORD *)(a2 + 388);
  v78 = (int *)(a2 + 400);
  v50 = v81;
  v90 = -1;
  v85 = 0;
  v72 = v49;
  do
  {
    if ( (unsigned int)v48 | v49 )
    {
      v51 = *(unsigned int *)((char *)ptr + v47);
      HIDWORD(v48) = v49;
      if ( v48 < v51 )
      {
        v52 = v51 - __PAIR64__(v49, v48);
        v53 = __PAIR64__(v85, v90) < v51 - __PAIR64__(v49, v48);
        if ( !v53 )
          v85 = HIDWORD(v52);
        *(_DWORD *)(a2 + 404) = v85;
        if ( !v53 )
          v90 = v52;
        *v78 = v90;
        v49 = v72;
      }
    }
    v47 += 4;
    --v50;
  }
  while ( v50 );
  if ( !(~v90 | v85) )
  {
    *v78 = 0;
    *(_DWORD *)(a2 + 404) = 0;
  }
  v54 = 0;
  *(_DWORD *)(a2 + 436) = 0;
  *(_DWORD *)(a2 + 432) = -1;
  LODWORD(v55) = *(_DWORD *)(a2 + 416);
  v56 = *(_DWORD *)(a2 + 420);
  v79 = (int *)(a2 + 432);
  v57 = v81;
  v91 = -1;
  v86 = 0;
  v73 = v56;
  do
  {
    if ( (unsigned int)v55 | v56 )
    {
      v58 = *(unsigned int *)((char *)ptr + v54);
      HIDWORD(v55) = v56;
      if ( v55 < v58 )
      {
        v59 = v58 - __PAIR64__(v56, v55);
        v60 = __PAIR64__(v86, v91) < v58 - __PAIR64__(v56, v55);
        if ( !v60 )
          v86 = HIDWORD(v59);
        *(_DWORD *)(a2 + 436) = v86;
        if ( !v60 )
          v91 = v59;
        *v79 = v91;
        v56 = v73;
      }
    }
    v54 += 4;
    --v57;
  }
  while ( v57 );
  if ( !(~v91 | v86) )
  {
    *v79 = 0;
    *(_DWORD *)(a2 + 436) = 0;
  }
  v61 = 0;
  *(_DWORD *)(a2 + 468) = 0;
  *(_DWORD *)(a2 + 464) = -1;
  v62 = *(_DWORD *)(a2 + 452);
  v63 = *(_DWORD *)(a2 + 448);
  v92 = -1;
  v64 = v81;
  do
  {
    if ( v63 | v62 )
    {
      v65 = *(_DWORD *)((char *)ptr + v61);
      if ( __SPAIR64__(v62, v63) < v65 )
      {
        v66 = v65 - __PAIR64__(v62, v63);
        v67 = __PAIR64__(v76, v92) < v66;
        if ( __PAIR64__(v76, v92) >= v66 )
          v76 = HIDWORD(v66);
        *(_DWORD *)(a2 + 468) = v76;
        if ( !v67 )
          v92 = v66;
        *(_DWORD *)(a2 + 464) = v92;
      }
    }
    v61 += 4;
    --v64;
  }
  while ( v64 );
  v30 = (_DWORD *)(a2 + 464);
  if ( !(~v92 | v76) )
  {
LABEL_48:
    *v30 = 0;
    v30[1] = 0;
  }
  if ( ptr )
  {
    v95 = 0;
    qfree(ptr);
    v96 = 0;
    ptr = nullptr;
  }
  return 1;
}
// 31B38: conditional instruction was optimized away because %var_20.4!=0
