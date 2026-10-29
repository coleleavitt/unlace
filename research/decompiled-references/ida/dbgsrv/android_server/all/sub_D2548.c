/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D2548
// Address: 0x00000000000D2548

//----- (00000000000D2548) ----------------------------------------------------
__int64 __fastcall sub_D2548(
        __int64 a1,
        int32x2_t *a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 a8,
        unsigned __int64 a9)
{
  _QWORD *v9; // x19
  unsigned int (__fastcall **v14)(_QWORD, _QWORD, __int64, unsigned __int64); // x21
  _QWORD *v15; // x27
  unsigned int v16; // w23
  __int64 v17; // x23
  __int64 v18; // x28
  __int64 v19; // x28
  __int64 v20; // x28
  __int64 v21; // x28
  __int64 v22; // x28
  __int64 v23; // x28
  __int64 v24; // x28
  __int64 v25; // x28
  __int64 v26; // x28
  __int64 v27; // x28
  __int64 v28; // x28
  __int64 v29; // x28
  unsigned __int64 v30; // x29
  __int64 v31; // x28
  __int64 v32; // x28
  __int64 v33; // x28
  unsigned __int64 v34; // x20
  unsigned __int64 v35; // x28
  unsigned __int64 v36; // x28
  unsigned __int64 v37; // x26
  __int64 v38; // x0
  unsigned __int64 v39; // x24
  unsigned __int64 v40; // x25
  unsigned __int64 v41; // x8
  unsigned __int64 v42; // x24
  __int64 v43; // x0
  unsigned __int64 v44; // x8
  unsigned __int64 v45; // x25
  __int64 v46; // x28
  __int64 v47; // x25
  unsigned __int64 v48; // x26
  __int64 v49; // x25
  unsigned __int64 v50; // x25
  int v51; // w0
  __int64 v52; // x26
  __int64 v53; // x26
  __int64 v54; // x26
  __int64 v55; // x26
  __int64 v56; // x8
  _BOOL4 v57; // w8
  unsigned __int64 *v58; // x15
  unsigned __int64 v60; // [xsp+10h] [xbp-100h]
  unsigned __int64 v61; // [xsp+18h] [xbp-F8h]
  unsigned __int64 v62; // [xsp+20h] [xbp-F0h]
  unsigned __int64 v63; // [xsp+28h] [xbp-E8h]
  unsigned __int64 v64; // [xsp+30h] [xbp-E0h]
  unsigned __int64 v65; // [xsp+38h] [xbp-D8h]
  unsigned __int64 v66; // [xsp+40h] [xbp-D0h]
  unsigned __int64 v67; // [xsp+48h] [xbp-C8h]
  unsigned __int64 v71; // [xsp+68h] [xbp-A8h]
  unsigned __int64 v73; // [xsp+78h] [xbp-98h]
  unsigned __int64 v74; // [xsp+80h] [xbp-90h]
  unsigned __int64 v75; // [xsp+88h] [xbp-88h]
  unsigned __int64 v76; // [xsp+90h] [xbp-80h]
  unsigned __int64 v77; // [xsp+98h] [xbp-78h]
  _QWORD v78[2]; // [xsp+A0h] [xbp-70h] BYREF

  v78[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a1 )
    return (unsigned int)-102;
  v9 = (_QWORD *)(a1 + 96);
  if ( sub_D4FC4(a1) )
  {
    v14 = (unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int64))(a1 + 8);
    v15 = (_QWORD *)(a1 + 56);
    v16 = -1;
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 96);
    v14 = (unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int64))(a1 + 8);
    v15 = (_QWORD *)(a1 + 56);
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))(a1 + 8))(
           *(_QWORD *)(a1 + 56),
           v17,
           v78,
           4) == 4 )
    {
      if ( (LOBYTE(v78[0])
          | (unsigned __int64)(unsigned __int16)(BYTE1(v78[0]) << 8)
          | ((unsigned __int64)BYTE2(v78[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
          | ((unsigned __int64)BYTE3(v78[0]) << 24)) == 0x2014B50 )
        v16 = 0;
      else
        v16 = -103;
    }
    else if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v17) )
    {
      v16 = -1;
    }
    else
    {
      v16 = -103;
    }
  }
  v18 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 2u) == 2 )
  {
    v67 = LOBYTE(v78[0]) | ((unsigned __int64)BYTE1(v78[0]) << 8);
  }
  else
  {
    v67 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v18) )
      v16 = -1;
  }
  v19 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 2u) == 2 )
  {
    v66 = LOBYTE(v78[0]) | ((unsigned __int64)BYTE1(v78[0]) << 8);
  }
  else
  {
    v66 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v19) )
      v16 = -1;
  }
  v20 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 2u) == 2 )
  {
    v65 = LOBYTE(v78[0]) | ((unsigned __int64)BYTE1(v78[0]) << 8);
  }
  else
  {
    v65 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v20) )
      v16 = -1;
  }
  v21 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 2u) == 2 )
  {
    v64 = LOBYTE(v78[0]) | ((unsigned __int64)BYTE1(v78[0]) << 8);
  }
  else
  {
    v64 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v21) )
      v16 = -1;
  }
  v22 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 4u) == 4 )
  {
    v63 = LOBYTE(v78[0])
        | (unsigned __int64)(unsigned __int16)(BYTE1(v78[0]) << 8)
        | ((unsigned __int64)BYTE2(v78[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
        | ((unsigned __int64)BYTE3(v78[0]) << 24);
  }
  else
  {
    v63 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v22) )
      v16 = -1;
  }
  v23 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 4u) == 4 )
  {
    v62 = LOBYTE(v78[0])
        | (unsigned __int64)(unsigned __int16)(BYTE1(v78[0]) << 8)
        | ((unsigned __int64)BYTE2(v78[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
        | ((unsigned __int64)BYTE3(v78[0]) << 24);
  }
  else
  {
    v62 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v23) )
      v16 = -1;
  }
  v24 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 4u) == 4 )
  {
    v76 = LOBYTE(v78[0])
        | (unsigned __int64)(unsigned __int16)(BYTE1(v78[0]) << 8)
        | ((unsigned __int64)BYTE2(v78[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
        | ((unsigned __int64)BYTE3(v78[0]) << 24);
  }
  else
  {
    v76 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v24) )
      v16 = -1;
  }
  v25 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 4u) == 4 )
  {
    v75 = LOBYTE(v78[0])
        | (unsigned __int64)(unsigned __int16)(BYTE1(v78[0]) << 8)
        | ((unsigned __int64)BYTE2(v78[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
        | ((unsigned __int64)BYTE3(v78[0]) << 24);
  }
  else
  {
    v75 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v25) )
      v16 = -1;
  }
  v26 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 2u) == 2 )
  {
    v74 = LOBYTE(v78[0]) | ((unsigned __int64)BYTE1(v78[0]) << 8);
  }
  else
  {
    v74 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v26) )
      v16 = -1;
  }
  v27 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 2u) == 2 )
  {
    v77 = LOBYTE(v78[0]) | ((unsigned __int64)BYTE1(v78[0]) << 8);
  }
  else
  {
    v77 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v27) )
      v16 = -1;
  }
  v28 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 2u) == 2 )
  {
    v71 = LOBYTE(v78[0]) | ((unsigned __int64)BYTE1(v78[0]) << 8);
  }
  else
  {
    v71 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v28) )
      v16 = -1;
  }
  v29 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 2u) == 2 )
  {
    v30 = LOBYTE(v78[0]) | ((unsigned __int64)BYTE1(v78[0]) << 8);
  }
  else
  {
    v30 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v29) )
      v16 = -1;
  }
  v31 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 2u) == 2 )
  {
    v61 = LOBYTE(v78[0]) | ((unsigned __int64)BYTE1(v78[0]) << 8);
  }
  else
  {
    v61 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v31) )
      v16 = -1;
  }
  v32 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 4u) == 4 )
  {
    v60 = LOBYTE(v78[0])
        | (unsigned __int64)(unsigned __int16)(BYTE1(v78[0]) << 8)
        | ((unsigned __int64)BYTE2(v78[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
        | ((unsigned __int64)BYTE3(v78[0]) << 24);
  }
  else
  {
    v60 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v32) )
      v16 = -1;
  }
  v33 = *v9;
  if ( (*v14)(*v15, *v9, (__int64)v78, 4u) == 4 )
  {
    v34 = LOBYTE(v78[0])
        | (unsigned __int64)(unsigned __int16)(BYTE1(v78[0]) << 8)
        | ((unsigned __int64)BYTE2(v78[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
        | ((unsigned __int64)BYTE3(v78[0]) << 24);
  }
  else
  {
    v34 = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v33) )
    {
      v35 = v74;
      v16 = -1;
      goto LABEL_99;
    }
  }
  if ( !a4 )
  {
    v35 = v74;
    if ( a6 )
      goto LABEL_83;
LABEL_99:
    v40 = v77;
    v41 = v35 + v77;
    if ( v16 )
      return v16;
    goto LABEL_100;
  }
  v35 = v74;
  if ( !v16 )
  {
    v36 = a5;
    if ( v74 < a5 )
    {
      v36 = v74;
      *(_BYTE *)(a4 + v74) = 0;
    }
    v16 = 0;
    if ( a5 && v74 )
    {
      if ( ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, unsigned __int64))*v14)(*v15, *v9, a4, v36) == v36 )
        v16 = 0;
      else
        v16 = -1;
    }
    v35 = v74 - v36;
  }
  if ( !a6 )
    goto LABEL_99;
LABEL_83:
  if ( v16 )
    goto LABEL_99;
  if ( v77 >= a7 )
    v37 = a7;
  else
    v37 = v77;
  if ( !v35 )
  {
    v16 = 0;
    v39 = 0;
    if ( a7 )
      goto LABEL_95;
LABEL_123:
    v40 = v77;
    goto LABEL_124;
  }
  v38 = sub_D4FC4(a1);
  if ( v38 )
    v16 = -1;
  else
    v16 = 0;
  if ( v38 )
    v39 = v35;
  else
    v39 = 0;
  if ( !a7 )
    goto LABEL_123;
LABEL_95:
  v40 = v77;
  if ( v77 && ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, unsigned __int64))*v14)(*v15, *v9, a6, v37) != v37 )
    v16 = -1;
LABEL_124:
  v41 = v40 - v37 + v39;
  if ( v16 )
    return v16;
LABEL_100:
  if ( !v40 )
  {
    v73 = v41;
    v16 = 0;
    if ( !a8 )
      goto LABEL_163;
LABEL_110:
    if ( v16 )
      goto LABEL_163;
    v45 = a9;
    if ( v71 < a9 )
    {
      v45 = v71;
      *(_BYTE *)(a8 + v71) = 0;
    }
    if ( v73 )
    {
      if ( sub_D4FC4(a1) )
        v16 = -1;
      else
        v16 = 0;
      if ( a9 )
      {
LABEL_118:
        if ( v71 && ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, unsigned __int64))*v14)(*v15, *v9, a8, v45) != v45 )
          v16 = -1;
      }
    }
    else
    {
      v16 = 0;
      if ( a9 )
        goto LABEL_118;
    }
    v40 = v77;
    goto LABEL_163;
  }
  v42 = v41 - v40;
  if ( v41 == v40 )
  {
    v16 = 0;
    v73 = 0;
  }
  else
  {
    v43 = sub_D4FC4(a1);
    if ( v43 )
      v16 = -1;
    else
      v16 = 0;
    if ( v43 )
      v44 = v42;
    else
      v44 = 0;
    v73 = v44;
  }
  v46 = 0;
  do
  {
    v47 = *v9;
    if ( (*v14)(*v15, *v9, (__int64)v78, 2u) == 2 )
    {
      v48 = LOBYTE(v78[0]) | ((unsigned __int64)BYTE1(v78[0]) << 8);
    }
    else
    {
      v48 = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v47) )
        v16 = -1;
    }
    v49 = *v9;
    if ( (*v14)(*v15, *v9, (__int64)v78, 2u) == 2 )
    {
      v50 = LOBYTE(v78[0]) | ((unsigned __int64)BYTE1(v78[0]) << 8);
      if ( v48 != 1 )
        goto LABEL_141;
    }
    else
    {
      v51 = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v49);
      v50 = 0;
      if ( v51 )
        v16 = -1;
      if ( v48 != 1 )
      {
LABEL_141:
        if ( sub_D4FC4(a1) )
          v16 = -1;
        goto LABEL_161;
      }
    }
    if ( v75 == 0xFFFFFFFF )
    {
      v52 = *v9;
      if ( (*v14)(*v15, *v9, (__int64)v78, 8u) == 8 )
      {
        v75 = v78[0];
      }
      else
      {
        v75 = 0;
        if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v52) )
          v16 = -1;
      }
    }
    if ( v76 == 0xFFFFFFFF )
    {
      v53 = *v9;
      if ( (*v14)(*v15, *v9, (__int64)v78, 8u) == 8 )
      {
        v76 = v78[0];
        if ( v34 == 0xFFFFFFFF )
          goto LABEL_152;
        goto LABEL_156;
      }
      v76 = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v53) )
        v16 = -1;
    }
    if ( v34 == 0xFFFFFFFF )
    {
LABEL_152:
      v54 = *v9;
      if ( (*v14)(*v15, *v9, (__int64)v78, 8u) == 8 )
      {
        v34 = v78[0];
      }
      else
      {
        v34 = 0;
        if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v54) )
          v16 = -1;
      }
    }
LABEL_156:
    if ( v30 == 0xFFFF )
    {
      v55 = *v9;
      if ( (*v14)(*v15, *v9, (__int64)v78, 4u) == 4 )
      {
        v30 = LOBYTE(v78[0])
            | (unsigned __int64)(unsigned __int16)(BYTE1(v78[0]) << 8)
            | ((unsigned __int64)BYTE2(v78[0]) << 16) & 0xFFFFFFFF00FFFFFFLL
            | ((unsigned __int64)BYTE3(v78[0]) << 24);
      }
      else
      {
        v30 = 0;
        if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 48))(*(_QWORD *)(a1 + 56), v55) )
          v16 = -1;
      }
    }
LABEL_161:
    v56 = v46 + v50;
    v40 = v77;
    v46 = v56 + 4;
  }
  while ( v56 + 4 < v77 );
  if ( a8 )
    goto LABEL_110;
LABEL_163:
  v57 = v16 == 0;
  if ( a2 )
  {
    v58 = a3;
    if ( !v16 )
    {
      a2->n64_u64[0] = v67;
      a2[1].n64_u64[0] = v66;
      a2[2].n64_u64[0] = v65;
      a2[3].n64_u64[0] = v64;
      a2[4].n64_u64[0] = v63;
      a2[5].n64_u64[0] = v62;
      a2[6].n64_u64[0] = v76;
      a2[7].n64_u64[0] = v75;
      a2[8].n64_u64[0] = v74;
      a2[16].n64_u64[0] = vadd_s32(
                            vand_s8(
                              vmovn_s64(vshlq_u64(vdupq_n_s64(v63), vnegq_s64((int64x2_t)xmmword_11FF90))),
                              (int8x8_t)0x7F0000000FLL),
                            (int32x2_t)0x7BCFFFFFFFFLL).n64_u64[0];
      a2[9].n64_u64[0] = v40;
      a2[10].n64_u64[0] = v71;
      a2[11].n64_u64[0] = v30;
      a2[12].n64_u64[0] = v61;
      a2[14].n64_u32[0] = 2 * (v63 & 0x1F);
      a2[14].n64_u32[1] = ((unsigned int)v63 >> 5) & 0x3F;
      a2[15].n64_u32[0] = (unsigned __int16)v63 >> 11;
      a2[15].n64_u32[1] = WORD1(v63) & 0x1F;
      a2[13].n64_u64[0] = v60;
      v57 = 1;
    }
    if ( a3 )
    {
LABEL_167:
      if ( v57 )
        *v58 = v34;
    }
  }
  else
  {
    v58 = a3;
    if ( a3 )
      goto LABEL_167;
  }
  return v16;
}
// 11EBB0: using guessed type __int64[255];
// 11FF90: using guessed type __int128 xmmword_11FF90;
