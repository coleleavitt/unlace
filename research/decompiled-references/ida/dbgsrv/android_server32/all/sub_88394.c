/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88394
// Address: 0x00088394

//----- (00088394) --------------------------------------------------------
int __fastcall sub_88394(unsigned int *a1, int a2)
{
  unsigned int v3; // r2
  int result; // r0
  unsigned int v5; // r3
  int v6; // r1
  unsigned int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r5
  unsigned int v13; // r0
  int v14; // r6
  int v15; // r5
  int v16; // r6
  int v17; // r5
  int v18; // r6
  unsigned __int8 v19; // r2
  unsigned int *v20; // r2
  unsigned int v21; // r0
  unsigned int *v22; // r0
  int v23; // r2
  unsigned int v24; // r6
  unsigned int v25; // r5
  unsigned int v26; // r6
  unsigned int v27; // r3
  int v28; // r6
  const void *v29; // r1
  int v30; // r3
  int v31; // r0
  unsigned int v32; // r6
  int v33; // r7
  size_t v34; // r5
  size_t v35; // r0
  int v36; // r0
  int v37; // r1
  int v38; // r2
  int v39; // r1
  int v40; // r2
  int v41; // r1
  int v42; // r2
  int v43; // r0
  const void *v44; // r1
  unsigned int v45; // r6
  int v46; // r7
  size_t v47; // r5
  size_t v48; // r0
  _DWORD *v49; // r5
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int v53; // r2
  int v54; // r3
  int v55; // r2
  int v56; // r3
  unsigned int v57; // r0
  int v58; // r1
  int v59; // r2
  const void *v60; // r1
  unsigned int v61; // r7
  int v62; // r5
  size_t v63; // r6
  size_t v64; // r0
  int v65; // r2
  const void *v66; // r1
  unsigned int v67; // r6
  int v68; // r5
  size_t v69; // r7
  size_t v70; // r0
  _DWORD *v71; // [sp+0h] [bp-2Ch]
  unsigned int *v72; // [sp+4h] [bp-28h]
  int *v74; // [sp+10h] [bp-1Ch]
  int *v75; // [sp+14h] [bp-18h]
  _DWORD *v76; // [sp+18h] [bp-14h]
  unsigned int v77; // [sp+1Ch] [bp-10h]
  unsigned int v78; // [sp+20h] [bp-Ch]
  int v79; // [sp+24h] [bp-8h]
  int v80; // [sp+24h] [bp-8h]

  v74 = (int *)(a1 + 1449);
  v75 = (int *)(a1 + 1446);
  v76 = a1 + 1448;
  v71 = a1 + 34;
  v72 = a1 + 32;
  while ( 1 )
  {
    if ( a1[29] >= 0x106 )
      goto LABEL_7;
    sub_85CA0(a1);
    v3 = a1[29];
    result = 0;
    if ( !a2 && v3 < 0x106 )
      return result;
    if ( !v3 )
      break;
    if ( v3 <= 2 )
    {
      v8 = a1[24];
      a1[30] = v8;
      v11 = a1[28];
      v10 = 2;
      a1[24] = 2;
      a1[25] = v11;
LABEL_14:
      if ( v8 >= 3 )
        goto LABEL_15;
LABEL_33:
      if ( a1[26] )
      {
        v36 = *(unsigned __int8 *)(a1[14] + a1[27] - 1);
        v37 = *v75;
        v38 = (*v76)++;
        *(_BYTE *)(v37 + v38) = 0;
        v39 = *v75;
        v40 = (*v76)++;
        *(_BYTE *)(v39 + v40) = 0;
        v41 = *v75;
        v42 = (*v76)++;
        *(_BYTE *)(v41 + v42) = v36;
        ++LOWORD(a1[v36 + 37]);
        if ( *v76 == *v74 )
        {
          v43 = a1[23];
          v44 = nullptr;
          if ( v43 >= 0 )
            v44 = (const void *)(a1[14] + v43);
          sub_8B3C8((int)a1, v44, a1[27] - v43, 0);
          a1[23] = a1[27];
          v45 = *a1;
          v46 = *(_DWORD *)(*a1 + 28);
          sub_8B2BC(v46);
          v47 = *(_DWORD *)(v45 + 16);
          if ( *(_DWORD *)(v46 + 20) <= v47 )
            v47 = *(_DWORD *)(v46 + 20);
          if ( v47 )
          {
            qmemcpy(*(void **)(v45 + 12), *(const void **)(v46 + 16), v47);
            *(_DWORD *)(v45 + 12) += v47;
            *(_DWORD *)(v46 + 16) += v47;
            *(_DWORD *)(v45 + 16) -= v47;
            *(_DWORD *)(v45 + 20) += v47;
            v48 = *(_DWORD *)(v46 + 20) - v47;
            *(_DWORD *)(v46 + 20) = v48;
            if ( !v48 )
              *(_DWORD *)(v46 + 16) = *(_DWORD *)(v46 + 8);
          }
        }
        ++a1[27];
        --a1[29];
LABEL_44:
        result = 0;
        if ( !*(_DWORD *)(*a1 + 16) )
          return result;
      }
      else
      {
        a1[26] = 1;
        ++a1[27];
        --a1[29];
      }
    }
    else
    {
LABEL_7:
      v5 = a1[27];
      v6 = (*(unsigned __int8 *)(a1[14] + v5 + 2) ^ (a1[18] << a1[22])) & a1[21];
      a1[18] = v6;
      v7 = *(unsigned __int16 *)(a1[17] + 2 * v6);
      *(_WORD *)(a1[16] + 2 * (a1[13] & v5)) = v7;
      *(_WORD *)(a1[17] + 2 * a1[18]) = a1[27];
      v8 = a1[24];
      a1[30] = v8;
      v9 = a1[28];
      v10 = 2;
      a1[24] = 2;
      a1[25] = v9;
      if ( !v7 )
        goto LABEL_14;
      v10 = 2;
      if ( v8 < *v72 && a1[27] - v7 <= a1[11] - 262 )
      {
        v10 = sub_88844(a1, v7);
        a1[24] = v10;
        if ( v10 <= 5 )
        {
          if ( *v71 == 1 || v10 == 3 && (v10 = 3, a1[27] - a1[28] >= 0x1001) )
          {
            v10 = 2;
            a1[24] = 2;
          }
        }
      }
      v8 = a1[30];
      if ( v8 < 3 )
        goto LABEL_33;
LABEL_15:
      if ( v10 > v8 )
        goto LABEL_33;
      v78 = a1[29];
      v79 = *v75;
      v12 = a1[27];
      v13 = a1[25];
      v14 = (*v76)++;
      v77 = v12;
      LOWORD(v13) = ~(_WORD)v13 + v12;
      *(_BYTE *)(v79 + v14) = v13;
      v15 = *v75;
      v16 = (*v76)++;
      *(_BYTE *)(v15 + v16) = BYTE1(v13);
      v17 = *v75;
      v18 = (*v76)++;
      v19 = v8 - 3;
      *(_BYTE *)(v17 + v18) = v19;
      v20 = &a1[*((unsigned __int8 *)&word_C8A12 + v19) | 0x100];
      ++*((_WORD *)v20 + 76);
      v21 = (unsigned __int16)(v13 - 1);
      if ( v21 >= 0x100 )
        v21 = (v21 >> 7) + 256;
      v22 = &a1[(unsigned __int8)byte_C8812[v21]];
      ++*((_WORD *)v22 + 1220);
      v80 = *v74;
      v23 = *v76;
      v24 = a1[30];
      v25 = v24 - 2;
      a1[30] = v24 - 2;
      a1[29] += 1 - v24;
      do
      {
        v26 = a1[27];
        v27 = v26 + 1;
        a1[27] = v26 + 1;
        if ( v26 + 1 <= v77 + v78 - 3 )
        {
          v28 = (*(unsigned __int8 *)(a1[14] + v26 + 3) ^ (a1[18] << a1[22])) & a1[21];
          a1[18] = v28;
          *(_WORD *)(a1[16] + 2 * (a1[13] & v27)) = *(_WORD *)(a1[17] + 2 * v28);
          *(_WORD *)(a1[17] + 2 * a1[18]) = a1[27];
          v25 = a1[30];
        }
        a1[30] = --v25;
      }
      while ( v25 );
      a1[24] = 2;
      v29 = nullptr;
      a1[26] = 0;
      v30 = a1[27] + 1;
      a1[27] = v30;
      if ( v23 == v80 )
      {
        v31 = a1[23];
        if ( v31 >= 0 )
          v29 = (const void *)(a1[14] + v31);
        sub_8B3C8((int)a1, v29, v30 - v31, 0);
        a1[23] = a1[27];
        v32 = *a1;
        v33 = *(_DWORD *)(*a1 + 28);
        sub_8B2BC(v33);
        v34 = *(_DWORD *)(v32 + 16);
        if ( *(_DWORD *)(v33 + 20) <= v34 )
          v34 = *(_DWORD *)(v33 + 20);
        if ( v34 )
        {
          qmemcpy(*(void **)(v32 + 12), *(const void **)(v33 + 16), v34);
          *(_DWORD *)(v32 + 12) += v34;
          *(_DWORD *)(v33 + 16) += v34;
          *(_DWORD *)(v32 + 16) -= v34;
          *(_DWORD *)(v32 + 20) += v34;
          v35 = *(_DWORD *)(v33 + 20) - v34;
          *(_DWORD *)(v33 + 20) = v35;
          if ( !v35 )
            *(_DWORD *)(v33 + 16) = *(_DWORD *)(v33 + 8);
        }
        goto LABEL_44;
      }
    }
  }
  v49 = v76;
  if ( a1[26] )
  {
    v50 = *(unsigned __int8 *)(a1[14] + a1[27] - 1);
    v51 = *v75;
    v52 = (*v76)++;
    *(_BYTE *)(v51 + v52) = 0;
    v53 = *v75;
    v54 = (*v76)++;
    *(_BYTE *)(v53 + v54) = 0;
    v55 = *v75;
    v56 = (*v76)++;
    v49 = v76;
    *(_BYTE *)(v55 + v56) = v50;
    ++LOWORD(a1[v50 + 37]);
    a1[26] = 0;
  }
  v57 = a1[27];
  v58 = v57;
  if ( v57 >= 2 )
    v58 = 2;
  a1[1453] = v58;
  if ( a2 == 4 )
  {
    v59 = a1[23];
    v60 = nullptr;
    if ( v59 >= 0 )
      v60 = (const void *)(a1[14] + v59);
    sub_8B3C8((int)a1, v60, v57 - v59, 1);
    a1[23] = a1[27];
    v61 = *a1;
    v62 = *(_DWORD *)(*a1 + 28);
    sub_8B2BC(v62);
    v63 = *(_DWORD *)(v61 + 16);
    if ( *(_DWORD *)(v62 + 20) <= v63 )
      v63 = *(_DWORD *)(v62 + 20);
    if ( v63 )
    {
      qmemcpy(*(void **)(v61 + 12), *(const void **)(v62 + 16), v63);
      *(_DWORD *)(v61 + 12) += v63;
      *(_DWORD *)(v62 + 16) += v63;
      *(_DWORD *)(v61 + 16) -= v63;
      *(_DWORD *)(v61 + 20) += v63;
      v64 = *(_DWORD *)(v62 + 20) - v63;
      *(_DWORD *)(v62 + 20) = v64;
      if ( !v64 )
        *(_DWORD *)(v62 + 16) = *(_DWORD *)(v62 + 8);
    }
    result = 2;
    if ( *(_DWORD *)(*a1 + 16) )
      return 3;
  }
  else
  {
    if ( !*v49 )
      return 1;
    v65 = a1[23];
    v66 = nullptr;
    if ( v65 >= 0 )
      v66 = (const void *)(a1[14] + v65);
    sub_8B3C8((int)a1, v66, v57 - v65, 0);
    a1[23] = a1[27];
    v67 = *a1;
    v68 = *(_DWORD *)(*a1 + 28);
    sub_8B2BC(v68);
    v69 = *(_DWORD *)(v67 + 16);
    if ( *(_DWORD *)(v68 + 20) <= v69 )
      v69 = *(_DWORD *)(v68 + 20);
    if ( v69 )
    {
      qmemcpy(*(void **)(v67 + 12), *(const void **)(v68 + 16), v69);
      *(_DWORD *)(v67 + 12) += v69;
      *(_DWORD *)(v68 + 16) += v69;
      *(_DWORD *)(v67 + 16) -= v69;
      *(_DWORD *)(v67 + 20) += v69;
      v70 = *(_DWORD *)(v68 + 20) - v69;
      *(_DWORD *)(v68 + 20) = v70;
      if ( !v70 )
        *(_DWORD *)(v68 + 16) = *(_DWORD *)(v68 + 8);
    }
    result = 0;
    if ( *(_DWORD *)(*a1 + 16) )
      return 1;
  }
  return result;
}
// C8A12: using guessed type __int16 word_C8A12;
