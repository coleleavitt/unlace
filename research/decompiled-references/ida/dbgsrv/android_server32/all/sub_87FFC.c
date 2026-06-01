/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87FFC
// Address: 0x00087FFC

//----- (00087FFC) --------------------------------------------------------
int __fastcall sub_87FFC(_DWORD *a1, int a2)
{
  int *v3; // r7
  unsigned int v4; // r2
  int result; // r0
  int v6; // r3
  int v7; // r1
  unsigned int v8; // r1
  unsigned int v9; // r2
  int v10; // r1
  int v11; // r3
  int v12; // r5
  int v13; // r6
  int v14; // r3
  int v15; // r6
  int v16; // r3
  _DWORD *v17; // r0
  unsigned int v18; // r0
  _DWORD *v19; // r0
  unsigned int v20; // r1
  unsigned int v21; // r3
  int v22; // r0
  int v23; // r2
  int v24; // r5
  int v25; // r2
  int v26; // r1
  int v27; // r2
  int v28; // r1
  int v29; // r2
  int v30; // r1
  int v31; // r3
  unsigned int v32; // r0
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r2
  int v37; // r3
  int v38; // r2
  int v39; // r3
  int v40; // r1
  int v41; // r3
  int v42; // r0
  const void *v43; // r1
  int v44; // r6
  int v45; // r7
  size_t v46; // r5
  size_t v47; // r0
  unsigned int v48; // r0
  int v49; // r1
  int v50; // r2
  const void *v51; // r1
  int v52; // r7
  int v53; // r5
  size_t v54; // r6
  size_t v55; // r0
  int v56; // r2
  const void *v57; // r1
  int v58; // r6
  int v59; // r5
  size_t v60; // r7
  size_t v61; // r0
  unsigned int *v62; // [sp+0h] [bp-1Ch]
  int *v63; // [sp+4h] [bp-18h]
  int v65; // [sp+Ch] [bp-10h]
  int *v66; // [sp+10h] [bp-Ch]
  int *v67; // [sp+14h] [bp-8h]

  v67 = a1 + 1449;
  v66 = a1 + 1446;
  v3 = a1 + 1448;
  v62 = a1 + 32;
  v63 = a1 + 1448;
  while ( a1[29] >= 0x106u )
  {
LABEL_7:
    v6 = a1[27];
    v7 = (*(unsigned __int8 *)(a1[14] + v6 + 2) ^ (a1[18] << a1[22])) & a1[21];
    a1[18] = v7;
    v8 = *(unsigned __int16 *)(a1[17] + 2 * v7);
    *(_WORD *)(a1[16] + 2 * (a1[13] & v6)) = v8;
    *(_WORD *)(a1[17] + 2 * a1[18]) = a1[27];
    if ( v8 && a1[27] - v8 <= a1[11] - 262 )
    {
      v32 = sub_88844(a1, v8);
      LOBYTE(v9) = v32;
      a1[24] = v32;
      if ( v32 < 3 )
        goto LABEL_22;
LABEL_11:
      v65 = *v66;
      v10 = a1[27];
      v11 = a1[28];
      v12 = (*v3)++;
      LOWORD(v10) = v10 - v11;
      *(_BYTE *)(v65 + v12) = v10;
      v13 = *v66;
      v14 = (*v3)++;
      *(_BYTE *)(v13 + v14) = BYTE1(v10);
      v15 = *v66;
      v16 = (*v3)++;
      *(_BYTE *)(v15 + v16) = v9 - 3;
      v17 = &a1[*((unsigned __int8 *)&word_C8A12 + (unsigned __int8)(v9 - 3)) | 0x100];
      ++*((_WORD *)v17 + 76);
      v18 = (unsigned __int16)(v10 - 1);
      if ( v18 >= 0x100 )
        v18 = (v18 >> 7) + 256;
      v19 = &a1[(unsigned __int8)byte_C8812[v18]];
      ++*((_WORD *)v19 + 1220);
      v20 = a1[24];
      v21 = a1[29] - v20;
      v22 = *v67;
      v23 = *v3;
      a1[29] = v21;
      v24 = v23 - v22;
      if ( v21 < 3 || v20 > *v62 )
      {
        a1[24] = 0;
        v29 = a1[27] + v20;
        a1[27] = v29;
        v30 = a1[14];
        v31 = *(unsigned __int8 *)(v30 + v29);
        a1[18] = v31;
        a1[18] = (*(unsigned __int8 *)(v30 + v29 + 1) ^ (v31 << a1[22])) & a1[21];
        if ( !v24 )
        {
LABEL_23:
          v42 = a1[23];
          v43 = nullptr;
          if ( v42 >= 0 )
            v43 = (const void *)(a1[14] + v42);
          sub_8B3C8((int)a1, v43, v29 - v42, 0);
          a1[23] = a1[27];
          v44 = *a1;
          v45 = *(_DWORD *)(*a1 + 28);
          sub_8B2BC(v45);
          v46 = *(_DWORD *)(v44 + 16);
          if ( *(_DWORD *)(v45 + 20) <= v46 )
            v46 = *(_DWORD *)(v45 + 20);
          if ( v46 )
          {
            qmemcpy(*(void **)(v44 + 12), *(const void **)(v45 + 16), v46);
            *(_DWORD *)(v44 + 12) += v46;
            *(_DWORD *)(v45 + 16) += v46;
            *(_DWORD *)(v44 + 16) -= v46;
            *(_DWORD *)(v44 + 20) += v46;
            v47 = *(_DWORD *)(v45 + 20) - v46;
            *(_DWORD *)(v45 + 20) = v47;
            if ( !v47 )
              *(_DWORD *)(v45 + 16) = *(_DWORD *)(v45 + 8);
          }
          v3 = v63;
          result = 0;
          if ( !*(_DWORD *)(*a1 + 16) )
            return result;
        }
      }
      else
      {
        a1[24] = v20 - 1;
        do
        {
          v25 = a1[27];
          v26 = v25 + 1;
          a1[27] = v25 + 1;
          v27 = (*(unsigned __int8 *)(a1[14] + v25 + 3) ^ (a1[18] << a1[22])) & a1[21];
          a1[18] = v27;
          *(_WORD *)(a1[16] + 2 * (a1[13] & v26)) = *(_WORD *)(a1[17] + 2 * v27);
          *(_WORD *)(a1[17] + 2 * a1[18]) = a1[27];
          v28 = a1[24] - 1;
          a1[24] = v28;
        }
        while ( v28 );
        v29 = a1[27] + 1;
        a1[27] = v29;
        if ( !v24 )
          goto LABEL_23;
      }
    }
    else
    {
LABEL_10:
      v9 = a1[24];
      if ( v9 >= 3 )
        goto LABEL_11;
LABEL_22:
      v33 = *(unsigned __int8 *)(a1[14] + a1[27]);
      v34 = *v66;
      v35 = (*v3)++;
      *(_BYTE *)(v34 + v35) = 0;
      v36 = *v66;
      v37 = (*v3)++;
      *(_BYTE *)(v36 + v37) = 0;
      v38 = *v66;
      v39 = (*v3)++;
      *(_BYTE *)(v38 + v39) = v33;
      ++LOWORD(a1[v33 + 37]);
      v40 = *v67;
      v41 = *v3;
      --a1[29];
      v29 = a1[27] + 1;
      a1[27] = v29;
      if ( v41 == v40 )
        goto LABEL_23;
    }
  }
  sub_85CA0(a1);
  v4 = a1[29];
  result = 0;
  if ( !a2 && v4 < 0x106 )
    return result;
  if ( v4 )
  {
    if ( v4 < 3 )
      goto LABEL_10;
    goto LABEL_7;
  }
  v48 = a1[27];
  v49 = v48;
  if ( v48 >= 2 )
    v49 = 2;
  a1[1453] = v49;
  if ( a2 == 4 )
  {
    v50 = a1[23];
    v51 = nullptr;
    if ( v50 >= 0 )
      v51 = (const void *)(a1[14] + v50);
    sub_8B3C8((int)a1, v51, v48 - v50, 1);
    a1[23] = a1[27];
    v52 = *a1;
    v53 = *(_DWORD *)(*a1 + 28);
    sub_8B2BC(v53);
    v54 = *(_DWORD *)(v52 + 16);
    if ( *(_DWORD *)(v53 + 20) <= v54 )
      v54 = *(_DWORD *)(v53 + 20);
    if ( v54 )
    {
      qmemcpy(*(void **)(v52 + 12), *(const void **)(v53 + 16), v54);
      *(_DWORD *)(v52 + 12) += v54;
      *(_DWORD *)(v53 + 16) += v54;
      *(_DWORD *)(v52 + 16) -= v54;
      *(_DWORD *)(v52 + 20) += v54;
      v55 = *(_DWORD *)(v53 + 20) - v54;
      *(_DWORD *)(v53 + 20) = v55;
      if ( !v55 )
        *(_DWORD *)(v53 + 16) = *(_DWORD *)(v53 + 8);
    }
    result = 2;
    if ( *(_DWORD *)(*a1 + 16) )
      return 3;
  }
  else
  {
    if ( !*v3 )
      return 1;
    v56 = a1[23];
    v57 = nullptr;
    if ( v56 >= 0 )
      v57 = (const void *)(a1[14] + v56);
    sub_8B3C8((int)a1, v57, v48 - v56, 0);
    a1[23] = a1[27];
    v58 = *a1;
    v59 = *(_DWORD *)(*a1 + 28);
    sub_8B2BC(v59);
    v60 = *(_DWORD *)(v58 + 16);
    if ( *(_DWORD *)(v59 + 20) <= v60 )
      v60 = *(_DWORD *)(v59 + 20);
    if ( v60 )
    {
      qmemcpy(*(void **)(v58 + 12), *(const void **)(v59 + 16), v60);
      *(_DWORD *)(v58 + 12) += v60;
      *(_DWORD *)(v59 + 16) += v60;
      *(_DWORD *)(v58 + 16) -= v60;
      *(_DWORD *)(v58 + 20) += v60;
      v61 = *(_DWORD *)(v59 + 20) - v60;
      *(_DWORD *)(v59 + 20) = v61;
      if ( !v61 )
        *(_DWORD *)(v59 + 16) = *(_DWORD *)(v59 + 8);
    }
    result = 0;
    if ( *(_DWORD *)(*a1 + 16) )
      return 1;
  }
  return result;
}
// C8A12: using guessed type __int16 word_C8A12;
