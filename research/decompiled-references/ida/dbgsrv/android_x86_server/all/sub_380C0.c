/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_380C0
// Address: 0x000380C0

//----- (000380C0) --------------------------------------------------------
char __cdecl sub_380C0(int a1, int a2, int a3, char a4)
{
  int v4; // ebx
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned int v8; // edi
  int v9; // ebx
  int v10; // eax
  _DWORD *v11; // esi
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // edi
  int v15; // esi
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // edi
  int v20; // esi
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // eax
  __int64 *v24; // edx
  __int64 v25; // xmm0_8
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // ecx
  int v29; // eax
  __int64 *v30; // edx
  __int64 v31; // xmm0_8
  int v32; // ecx
  unsigned int v33; // eax
  int v34; // ecx
  int v35; // eax
  __int64 *v36; // edx
  __int64 v37; // xmm0_8
  int v38; // eax
  __int64 v39; // rax
  unsigned int v40; // edi
  unsigned int v41; // ecx
  int v42; // kr00_4
  unsigned __int64 v43; // kr08_8
  int v44; // eax
  int v45; // edx
  int v46; // esi
  unsigned int v47; // edi
  int v48; // edx
  int v49; // ecx
  char *v50; // eax
  int v51; // esi
  bool v52; // cf
  void (__cdecl *v53)(int, int, int, int, int, int); // edi
  int v54; // eax
  int v55; // edx
  __int64 v57; // [esp-10h] [ebp-8Ch]
  int v58; // [esp+4h] [ebp-78h]
  void **v59; // [esp+Ch] [ebp-70h]
  int v60; // [esp+10h] [ebp-6Ch] BYREF
  int v61; // [esp+14h] [ebp-68h]
  int v62; // [esp+18h] [ebp-64h]
  int v63; // [esp+1Ch] [ebp-60h]
  __int128 v64; // [esp+20h] [ebp-5Ch]
  __int128 v65; // [esp+30h] [ebp-4Ch]
  __int128 v66; // [esp+40h] [ebp-3Ch]
  __int64 v67; // [esp+50h] [ebp-2Ch]
  __int64 v68; // [esp+58h] [ebp-24h]
  unsigned int v69; // [esp+68h] [ebp-14h]

  v69 = __readgsdword(0x14u);
  v4 = a1;
  if ( a4 )
  {
    LODWORD(v6) = *(_DWORD *)(a3 + 416);
    v5 = *(_DWORD *)(a3 + 420);
    HIDWORD(v6) = v5;
    if ( v6 < 1 )
      goto LABEL_6;
    v7 = *(_DWORD *)(a3 + 432);
    v8 = *(_DWORD *)(a3 + 436);
    if ( !*(_QWORD *)(a3 + 432) )
      goto LABEL_6;
    v66 = 0;
    v65 = 0;
    v64 = 0;
    v67 = 0;
    v9 = *(_DWORD *)(a3 + 424);
    DWORD1(v65) = *(_DWORD *)(a3 + 428);
    LODWORD(v65) = v9;
    v4 = a1;
    *((_QWORD *)&v65 + 1) = __PAIR64__(v5, v6);
    *(_QWORD *)&v66 = __PAIR64__(v8, v7);
    HIDWORD(v66) = *(_DWORD *)(a3 + 444);
    DWORD1(v64) = 1879048190;
    v68 = *(unsigned __int16 *)(a3 + 88);
    v10 = 2;
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 152);
    if ( !v21 )
      goto LABEL_21;
    if ( !*(_BYTE *)(a1 + 176) )
    {
      if ( !(_BYTE)under_debugger )
        goto LABEL_54;
      goto LABEL_55;
    }
    if ( *(_DWORD *)(a1 + 60) <= v21 )
      goto LABEL_21;
    v22 = *(_DWORD *)(a1 + 56);
    v23 = v21 << 6;
    v24 = (__int64 *)(v23 + v22);
    if ( !(v23 + v22) )
      goto LABEL_21;
    v68 = v24[7];
    v67 = v24[6];
    v66 = *((_OWORD *)v24 + 2);
    v65 = *((_OWORD *)v24 + 1);
    v25 = *v24;
    *((_QWORD *)&v64 + 1) = v24[1];
    *(_QWORD *)&v64 = v25;
    v26 = *(_DWORD *)(v22 + v23 + 40);
    if ( v26 != *(_DWORD *)(a1 + 124) || (v10 = 1, !*(_DWORD *)(a1 + 224)) )
    {
      if ( v26 != *(_DWORD *)(a1 + 92) )
        goto LABEL_21;
      v10 = 2;
      if ( *(_DWORD *)(a1 + 216) == *(_DWORD *)(a1 + 224) )
        goto LABEL_21;
    }
  }
  v61 = v4;
  v60 = (int)&qword_13ACD8 - 25772;
  v62 = a2;
  v63 = v10;
  sub_387E0(&v60, *((__int64 *)&v65 + 1), v66);
  v4 = a1;
  if ( a4 )
  {
LABEL_6:
    v11 = (_DWORD *)a3;
    LODWORD(v13) = *(_DWORD *)(a3 + 384);
    v12 = *(_DWORD *)(a3 + 388);
    HIDWORD(v13) = v12;
    if ( v13 < 1 )
      goto LABEL_10;
    HIDWORD(v13) = *(_DWORD *)(a3 + 400);
    v14 = *(_DWORD *)(a3 + 404);
    v11 = (_DWORD *)a3;
    if ( !*(_QWORD *)(a3 + 400) )
      goto LABEL_10;
    v66 = 0;
    v65 = 0;
    v64 = 0;
    v67 = 0;
    v15 = *(_DWORD *)(a3 + 392);
    DWORD1(v65) = *(_DWORD *)(a3 + 396);
    v4 = a1;
    LODWORD(v65) = v15;
    v11 = (_DWORD *)a3;
    *((_QWORD *)&v65 + 1) = __PAIR64__(v12, v13);
    *(_QWORD *)&v66 = __PAIR64__(v14, HIDWORD(v13));
    HIDWORD(v66) = *(_DWORD *)(a3 + 412);
    DWORD1(v64) = 1879048189;
    v68 = *(unsigned __int16 *)(a3 + 88);
    v16 = 2;
    goto LABEL_9;
  }
LABEL_21:
  v27 = *(_DWORD *)(v4 + 148);
  v11 = (_DWORD *)a3;
  if ( !v27 )
    goto LABEL_29;
  if ( !*(_BYTE *)(v4 + 176) )
  {
    if ( !(_BYTE)under_debugger )
      goto LABEL_54;
    goto LABEL_55;
  }
  if ( *(_DWORD *)(v4 + 60) <= v27
    || (v28 = *(_DWORD *)(v4 + 56), v29 = v27 << 6, (v30 = (__int64 *)(v29 + v28)) == nullptr)
    || ((v68 = v30[7],
         v67 = v30[6],
         v66 = *((_OWORD *)v30 + 2),
         v65 = *((_OWORD *)v30 + 1),
         v31 = *v30,
         *((_QWORD *)&v64 + 1) = v30[1],
         *(_QWORD *)&v64 = v31,
         v32 = *(_DWORD *)(v28 + v29 + 40),
         v32 != *(_DWORD *)(v4 + 124))
     || (v16 = 1, !*(_DWORD *)(v4 + 224)))
    && (v32 != *(_DWORD *)(v4 + 92) || (v16 = 2, *(_DWORD *)(v4 + 216) == *(_DWORD *)(v4 + 224))) )
  {
LABEL_29:
    v33 = *(_DWORD *)(v4 + 156);
    if ( !v33 )
      return 1;
    if ( *(_BYTE *)(v4 + 176) )
    {
      if ( *(_DWORD *)(v4 + 60) <= v33 )
        return 1;
      v34 = *(_DWORD *)(v4 + 56);
      v35 = v33 << 6;
      v36 = (__int64 *)(v35 + v34);
      if ( !(v35 + v34) )
        return 1;
      v68 = v36[7];
      v67 = v36[6];
      v66 = *((_OWORD *)v36 + 2);
      v65 = *((_OWORD *)v36 + 1);
      v37 = *v36;
      *((_QWORD *)&v64 + 1) = v36[1];
      *(_QWORD *)&v64 = v37;
      v38 = *(_DWORD *)(v34 + v35 + 40);
      if ( (v38 != *(_DWORD *)(v4 + 124) || !*(_DWORD *)(v4 + 224))
        && (v38 != *(_DWORD *)(v4 + 92) || *(_DWORD *)(v4 + 216) == *(_DWORD *)(v4 + 224)) )
      {
        return 1;
      }
      goto LABEL_37;
    }
    if ( !(_BYTE)under_debugger )
LABEL_54:
      interr(20099);
LABEL_55:
    BUG();
  }
LABEL_9:
  v61 = v4;
  v60 = (int)&qword_13ACD8 - 25756;
  v62 = a2;
  v63 = v16;
  sub_38D60(&v60, *((__int64 *)&v65 + 1), v66);
  v4 = a1;
  if ( !a4 )
    goto LABEL_29;
LABEL_10:
  LODWORD(v18) = v11[112];
  v17 = v11[113];
  HIDWORD(v18) = v17;
  if ( v18 < 1 )
    return 1;
  HIDWORD(v18) = v11[116];
  v19 = v11[117];
  if ( !*((_QWORD *)v11 + 58) )
    return 1;
  v66 = 0;
  v65 = 0;
  v64 = 0;
  v67 = 0;
  v20 = *(_DWORD *)(a3 + 456);
  DWORD1(v65) = *(_DWORD *)(a3 + 460);
  v4 = a1;
  LODWORD(v65) = v20;
  *((_QWORD *)&v65 + 1) = __PAIR64__(v17, v18);
  *(_QWORD *)&v66 = __PAIR64__(v19, HIDWORD(v18));
  HIDWORD(v66) = *(_DWORD *)(a3 + 476);
  DWORD1(v64) = 1879048191;
  v68 = *(unsigned __int16 *)(a3 + 88);
LABEL_37:
  LODWORD(v39) = qlseek(*(_DWORD *)(v4 + 360), 0, 1);
  v40 = *(_DWORD *)(v4 + 368);
  v41 = *(_DWORD *)(v4 + 364);
  v43 = v39 - __PAIR64__(v40, v41);
  v58 = HIDWORD(v43);
  v42 = v43;
  v44 = qlseek(*(_DWORD *)(v4 + 360), *((_QWORD *)&v65 + 1) + __PAIR64__(v40, v41), 0);
  v46 = a2;
  if ( (v45 & v44) != 0xFFFFFFFF && (unsigned __int64)v66 >= 2 )
  {
    v59 = (void **)(a2 + 24);
    v47 = 1;
    while ( 1 )
    {
      v48 = *(_DWORD *)(v46 + 28);
      v49 = v48 + 1;
      if ( *(_DWORD *)(v46 + 32) >= (unsigned int)(v48 + 1) )
      {
        v50 = (char *)*v59;
      }
      else
      {
        v50 = (char *)qvector_reserve((int)v59, *v59, v48 + 1, 2u);
        v46 = a2;
        *(_DWORD *)(a2 + 24) = v50;
        v48 = *(_DWORD *)(a2 + 28);
        v49 = v48 + 1;
      }
      *(_DWORD *)(v46 + 28) = v49;
      HIDWORD(v57) = &v50[2 * v48];
      LODWORD(v57) = *(_DWORD *)(a1 + 360);
      v51 = lreadbytes(v57, 2u, *(_BYTE *)(a1 + 476));
      if ( v51 < 0 )
        break;
      v52 = v47++ < (unsigned int)((unsigned __int64)v66 >> 1);
      v46 = a2;
      if ( !(v52 + (DWORD1(v66) >> 1)) )
        goto LABEL_47;
    }
    v53 = *(void (__cdecl **)(int, int, int, int, int, int))((char *)&off_13AE54 + a1 - 1289432);
    v54 = qlseek(*(int *)((char *)&off_13AE40 + a1 - 1289432), 0, 1);
    v53(a1, 19, 2, v51, v54, v55);
  }
LABEL_47:
  qlseek(
    *(int *)((char *)&off_13AE40 + a1 - 1289432),
    __SPAIR64__(
      *(unsigned int *)((char *)&off_13AE48 + a1 - 1289432)
    + __CFADD__(*(_UNKNOWN **)((char *)&off_13AE44 + a1 - 1289432), v42)
    + v58,
      *(unsigned int *)((char *)&off_13AE44 + a1 - 1289432) + v42),
    0);
  return 1;
}
// 385E3: variable 'v39' is possibly undefined
// 38607: variable 'v45' is possibly undefined
// 386F9: variable 'v55' is possibly undefined
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13AE40: using guessed type _UNKNOWN *off_13AE40;
// 13AE44: using guessed type _UNKNOWN *off_13AE44;
// 13AE48: using guessed type _UNKNOWN *off_13AE48;
// 13AE54: using guessed type _UNKNOWN *off_13AE54;
// 13E34C: using guessed type int under_debugger;
