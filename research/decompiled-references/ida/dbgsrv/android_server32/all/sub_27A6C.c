/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_27A6C
// Address: 0x00027A6C

//----- (00027A6C) --------------------------------------------------------
int __fastcall sub_27A6C(int a1)
{
  int v2; // r1
  int v3; // r3
  int v4; // r7
  int v5; // r1
  int v6; // r3
  __int64 v7; // r0
  _BOOL4 v8; // r3
  _BYTE *v9; // r4
  int v10; // r5
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r4
  int v17; // r0
  int v18; // r6
  int v19; // r6
  signed int *v20; // r4
  int v21; // r5
  signed int v22; // r7
  int v23; // r5
  _DWORD *v24; // r4
  int v25; // r0
  _WORD *v26; // r1
  void (__fastcall *v27)(int, int, int, int, _DWORD, _DWORD); // r4
  __int64 v28; // r0
  void (__fastcall *v29)(int, int, signed int, int, _DWORD, _DWORD); // r4
  __int64 v30; // r0
  void (__fastcall *v31)(int, int, int, int, _DWORD, _DWORD); // r4
  __int64 v32; // r0
  unsigned int *v33; // r3
  unsigned int v34; // r2
  unsigned int v35; // r5
  int v36; // r0
  unsigned __int64 v37; // kr00_8
  __int64 v38; // r2
  __int64 v39; // r0
  _BOOL4 v40; // r0
  unsigned __int64 v41; // kr08_8
  int v42; // r7
  int v43; // r0
  int v44; // r0
  _BYTE *v45; // r0
  int v46; // [sp+4h] [bp-ACh]
  int v47; // [sp+8h] [bp-A8h]
  int v48; // [sp+Ch] [bp-A4h]
  int v49; // [sp+10h] [bp-A0h]
  int v50; // [sp+14h] [bp-9Ch]
  _WORD *v51; // [sp+14h] [bp-9Ch]
  unsigned __int16 *v52; // [sp+18h] [bp-98h]
  unsigned __int16 *v53; // [sp+20h] [bp-90h]
  _DWORD *v54; // [sp+24h] [bp-8Ch]
  int v55; // [sp+2Ch] [bp-84h]
  signed int *v56; // [sp+2Ch] [bp-84h]
  int *v57; // [sp+30h] [bp-80h]
  _QWORD *v58; // [sp+34h] [bp-7Ch]
  _DWORD *v59; // [sp+3Ch] [bp-74h]
  unsigned int v60; // [sp+44h] [bp-6Ch]
  _WORD *v61; // [sp+48h] [bp-68h]
  _DWORD *v62; // [sp+58h] [bp-58h]
  unsigned int v63; // [sp+5Ch] [bp-54h]
  int v64; // [sp+60h] [bp-50h]
  unsigned __int8 *v65; // [sp+60h] [bp-50h]
  int v66; // [sp+64h] [bp-4Ch]
  int *v67; // [sp+68h] [bp-48h]
  _BYTE v68[4]; // [sp+6Ch] [bp-44h] BYREF
  int v69; // [sp+70h] [bp-40h]
  unsigned int v70; // [sp+8Ch] [bp-24h]

  v64 = *(unsigned __int8 *)(a1 + 392);
  if ( (unsigned __int8)(v64 - 1) >= 2u && !(*(int (__fastcall **)(int, int, int))(a1 + 384))(a1, 1, v64) )
    sub_28360(0, v2, 0, v3, v46, v47, v48, v49, v50);
  v4 = *(unsigned __int8 *)(a1 + 393);
  if ( (unsigned __int8)(v4 - 1) >= 2u
    && !(*(int (__fastcall **)(int, int, _DWORD))(a1 + 384))(a1, 3, *(unsigned __int8 *)(a1 + 393)) )
  {
    sub_28360(0, v5, 0, v6, v46, v47, v48, v49, v50);
  }
  qlseek(*(_DWORD *)(a1 + 364), 0, 1);
  v62 = (_DWORD *)(a1 + 368);
  v67 = (int *)(a1 + 364);
  v66 = a1;
  v7 = qlseek(*(_DWORD *)(a1 + 364), *(_QWORD *)(a1 + 368) + 16LL, 0);
  if ( ((unsigned int)v7 & HIDWORD(v7)) == 0xFFFFFFFF )
    sub_28344();
  *(_BYTE *)(a1 + 481) = v64 == 2;
  v8 = v4 == 2;
  *(_BYTE *)(a1 + 480) = v8;
  *(_BYTE *)(a1 + 482) = v64 == 2;
  v9 = (_BYTE *)(a1 + 481);
  v65 = (unsigned __int8 *)(a1 + 480);
  v61 = (_WORD *)(a1 + 404);
  v10 = lreadbytes(*v67, (void *)(a1 + 404), 2, v8);
  if ( v10 < 0 )
    goto LABEL_44;
  v10 = lreadbytes(*v67, (void *)(v66 + 406), 2, *v65);
  if ( v10 < 0 )
    goto LABEL_44;
  if ( !sub_2C468(v66) )
    return sub_28344();
  v12 = (unsigned __int8)*v9;
  v13 = 32;
  if ( *v9 )
    v13 = 56;
  *(_DWORD *)(v66 + 300) = v13;
  v14 = 52;
  if ( v12 )
    v14 = 64;
  *(_DWORD *)(v66 + 296) = v14;
  v15 = 40;
  if ( v12 )
    v15 = 64;
  *(_DWORD *)(v66 + 304) = v15;
  v16 = 16;
  if ( v12 )
    v16 = 24;
  *(_DWORD *)(v66 + 308) = v16;
  v17 = 8;
  if ( v12 )
    v17 = 16;
  *(_DWORD *)(v66 + 312) = v17;
  *(_DWORD *)(v66 + 316) = v17;
  v18 = 12;
  if ( v12 )
    v18 = 24;
  v55 = v18;
  *(_DWORD *)(v66 + 320) = v18;
  v19 = 4;
  if ( v12 )
    v19 = 8;
  *(_DWORD *)(v66 + 336) = v19;
  *(_DWORD *)(v66 + 340) = v19;
  *(_DWORD *)(v66 + 344) = v19;
  *(_DWORD *)(v66 + 348) = v19;
  *(_DWORD *)(v66 + 324) = v16;
  *(_DWORD *)(v66 + 328) = v17;
  *(_DWORD *)(v66 + 332) = v55;
  v56 = (signed int *)(v66 + 340);
  v20 = (signed int *)(v66 + 336);
  v54 = (_DWORD *)(v66 + 304);
  v57 = (int *)(v66 + 300);
  v21 = lreadbytes(*v67, (void *)(v66 + 408), 4, *v65);
  if ( v21 < 0 )
    goto LABEL_29;
  v22 = *v20;
  v23 = lreadbytes(*v67, (void *)(v66 + 412), *v20, *v65);
  if ( v23 < 0
    || (v24 = (_DWORD *)(v66 + 420), v22 = *v56, v23 = lreadbytes(*v67, (void *)(v66 + 420), *v56, *v65), v23 < 0)
    || (v58 = (_QWORD *)(v66 + 428), v22 = *v56, v23 = lreadbytes(*v67, (void *)(v66 + 428), *v56, *v65), v23 < 0) )
  {
    v29 = *(void (__fastcall **)(int, int, signed int, int, _DWORD, _DWORD))(v66 + 384);
    v30 = qlseek(*v67, 0, 1);
    v29(v66, 19, v22, v23, v30, HIDWORD(v30));
    return sub_28344();
  }
  v21 = lreadbytes(*v67, (void *)(v66 + 436), 4, *v65);
  if ( v21 < 0 )
  {
LABEL_29:
    v27 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(v66 + 384);
    v28 = qlseek(*v67, 0, 1);
    v27(v66, 19, 4, v21, v28, HIDWORD(v28));
    return sub_28344();
  }
  v10 = lreadbytes(*v67, (void *)(v66 + 440), 2, *v65);
  if ( v10 < 0
    || (v53 = (unsigned __int16 *)(v66 + 442), v10 = lreadbytes(*v67, (void *)(v66 + 442), 2, *v65), v10 < 0)
    || (v10 = lreadbytes(*v67, (void *)(v66 + 444), 2, *v65), v10 < 0)
    || (v52 = (unsigned __int16 *)(v66 + 446), v10 = lreadbytes(*v67, (void *)(v66 + 446), 2, *v65), v10 < 0)
    || (v51 = (_WORD *)(v66 + 448), v10 = lreadbytes(*v67, (void *)(v66 + 448), 2, *v65), v10 < 0)
    || (v10 = lreadbytes(*v67, (void *)(v66 + 450), 2, *v65), v10 < 0) )
  {
LABEL_44:
    v31 = *(void (__fastcall **)(int, int, int, int, _DWORD, _DWORD))(v66 + 384);
    v32 = qlseek(*v67, 0, 1);
    v31(v66, 19, 2, v10, v32, HIDWORD(v32));
    return sub_28344();
  }
  if ( *(_DWORD *)(v66 + 296) == *(unsigned __int16 *)(v66 + 440)
    || (*(int (__fastcall **)(int, int))(v66 + 384))(v66, 2) )
  {
    if ( (*(_WORD *)(v66 + 444) == 0) != (*(_QWORD *)v24 == 0) )
    {
      if ( !(*(int (__fastcall **)(int, int))(v66 + 384))(v66, 5) )
        return sub_28344();
      LOWORD(v25) = 0;
      *v24 = 0;
      *(_DWORD *)(v66 + 424) = 0;
      v26 = (_WORD *)(v66 + 444);
      goto LABEL_50;
    }
    if ( !*(_QWORD *)v24 || *v57 == *v53 )
    {
LABEL_53:
      v33 = (unsigned int *)(v66 + 428);
      if ( *v51
        || !*v58
        || (HIDWORD(v38) = v62[1],
            LODWORD(v38) = *(_DWORD *)v58,
            v39 = qlseek(*v67, __PAIR64__(*(_DWORD *)(v66 + 432), *v62) + v38, 0),
            v33 = (unsigned int *)(v66 + 428),
            v39 == -1)
        || (v40 = sub_2C574(v66, (int)v68), v33 = (unsigned int *)(v66 + 428), !v40)
        || v69 )
      {
        v34 = (unsigned __int16)*v51;
        *(_DWORD *)(v66 + 452) = v34;
        v59 = (_DWORD *)(v66 + 452);
      }
      else
      {
        v34 = v70;
        *(_DWORD *)(v66 + 452) = v70;
        v59 = (_DWORD *)(v66 + 452);
      }
      v35 = *v33;
      v60 = v33[1];
      v36 = *v33 | v60;
      v63 = v34;
      if ( (v34 == 0) == (v36 == 0) )
      {
        if ( !v36 )
          goto LABEL_74;
        if ( *v54 == *v52 )
        {
          if ( (__CFADD__(__CFADD__(*v52 * v34, v35), (*v52 * (unsigned __int64)v34) >> 32)
              | __CFADD__(v60, (*v52 * (unsigned __int64)v34 + __PAIR64__(v60, v35)) >> 32)) != 1 )
            JUMPOUT(0x2838E);
          v37 = *(_QWORD *)(v66 + 376) - *(_QWORD *)v62;
          goto LABEL_76;
        }
        if ( (*(int (__fastcall **)(int, int))(v66 + 384))(v66, 6) && *v54 <= (int)*v52 )
          JUMPOUT(0x28392);
      }
      else if ( !(*(int (__fastcall **)(int, int, unsigned int, _DWORD, unsigned int, unsigned int, int, _DWORD))(v66 + 384))(
                   v66,
                   7,
                   v34,
                   *(_DWORD *)(v66 + 384),
                   v35,
                   v60,
                   *(_DWORD *)(v66 + 376) - *v62,
                   (*(_QWORD *)(v66 + 376) - *(_QWORD *)v62) >> 32) )
      {
        return sub_28344();
      }
      v34 = 0;
      *(_DWORD *)v58 = 0;
      *(_DWORD *)(v66 + 432) = 0;
      *v51 = 0;
      *v59 = 0;
LABEL_74:
      v63 = v34;
      v60 = 0;
      v41 = *(_QWORD *)(v66 + 376) - *(_QWORD *)v62;
      v37 = v41;
      if ( v41 >= *v52 * (unsigned __int64)v34 )
      {
        v42 = v66;
LABEL_79:
        if ( !*(_QWORD *)(v66 + 420) || *v61 != 1 || (*(int (__fastcall **)(int, int))(v42 + 384))(v42, 18) )
        {
          v43 = *(unsigned __int16 *)(v66 + 406);
          if ( v43 != 183 && v43 != 40 )
            JUMPOUT(0x2836E);
          v44 = *(_DWORD *)(v42 + 472);
          if ( v44 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v44 + 4))(v44);
          v45 = operator new(0x28u);
          v45[38] = 0;
          *((_WORD *)v45 + 18) = 0;
          *((_DWORD *)v45 + 8) = 0;
          *(_DWORD *)v45 = &off_D645C;
          *((_DWORD *)v45 + 1) = v45 + 8;
          *((_DWORD *)v45 + 2) = 0;
          *((_DWORD *)v45 + 3) = 0;
          *((_DWORD *)v45 + 4) = v45 + 20;
          *((_DWORD *)v45 + 5) = 0;
          *((_DWORD *)v45 + 6) = 0;
          *((_DWORD *)v45 + 7) = 0;
          *(_DWORD *)(v42 + 472) = v45;
        }
        return sub_28344();
      }
      v35 = 0;
LABEL_76:
      v42 = v66;
      if ( !(*(int (__fastcall **)(int, int, unsigned int, _DWORD, unsigned int, unsigned int, _DWORD, _DWORD))(v66 + 384))(
              v66,
              7,
              v63,
              v37,
              v35,
              v60,
              v37,
              HIDWORD(v37)) )
        return sub_28344();
      *(_DWORD *)v58 = 0;
      *(_DWORD *)(v66 + 432) = 0;
      *v51 = 0;
      *v59 = 0;
      goto LABEL_79;
    }
    if ( !(*(int (__fastcall **)(int, int))(v66 + 384))(v66, 4) )
      JUMPOUT(0x2838A);
    v25 = *v57;
    if ( *v57 <= *v53 )
    {
      v26 = (_WORD *)(v66 + 442);
LABEL_50:
      *v26 = v25;
      goto LABEL_53;
    }
  }
  return sub_28344();
}
// 28138: control flows out of bounds to 2838E
// 281BA: control flows out of bounds to 2838A
// 281F0: control flows out of bounds to 28392
// 282F6: control flows out of bounds to 2836E
// 28272: conditional instruction was optimized away because %var_6C.4==0
// 27AA4: variable 'v2' is possibly undefined
// 27AA4: variable 'v3' is possibly undefined
// 27AA4: variable 'v46' is possibly undefined
// 27AA4: variable 'v47' is possibly undefined
// 27AA4: variable 'v48' is possibly undefined
// 27AA4: variable 'v49' is possibly undefined
// 27AA4: variable 'v50' is possibly undefined
// 27AC8: variable 'v5' is possibly undefined
// 27AC8: variable 'v6' is possibly undefined
// 28344: using guessed type int sub_28344(void);
// D645C: using guessed type _UNKNOWN *off_D645C;
