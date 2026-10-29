/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8793C
// Address: 0x0008793C

//----- (0008793C) --------------------------------------------------------
int __fastcall sub_8793C(_DWORD *a1, int a2)
{
  int v3; // r7
  unsigned int v4; // r1
  unsigned int v5; // r0
  _DWORD *v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r2
  size_t v9; // r6
  unsigned int v10; // r1
  unsigned int v11; // r2
  int v12; // r4
  int v13; // r7
  size_t v14; // r5
  size_t v15; // r0
  size_t v16; // r5
  int v17; // r4
  size_t v18; // r1
  size_t v19; // r7
  char *v20; // r5
  _DWORD *v21; // r0
  int v22; // r0
  unsigned int v23; // r0
  int v24; // r1
  size_t v25; // r6
  size_t v26; // r2
  unsigned int v27; // r0
  unsigned int *v28; // r4
  size_t v29; // r1
  int v30; // r3
  unsigned int v31; // r1
  unsigned int v32; // r2
  int v33; // r2
  size_t *v34; // r7
  int result; // r0
  size_t v36; // r0
  int *v37; // r4
  size_t v38; // r5
  int v39; // r3
  int v40; // r0
  unsigned int v41; // r1
  int v42; // r4
  size_t v43; // r0
  size_t v44; // r6
  int v45; // r2
  unsigned __int8 *v46; // r5
  int v47; // r0
  unsigned int v48; // r0
  int v49; // r1
  size_t v50; // r2
  int v51; // r0
  size_t v52; // r1
  unsigned int v53; // r2
  unsigned int v54; // r3
  size_t v55; // r5
  _BOOL4 v56; // r6
  int v57; // r7
  int v58; // r4
  size_t v59; // r5
  size_t v60; // r0
  int v61; // [sp+4h] [bp-20h]
  unsigned int v62; // [sp+8h] [bp-1Ch]
  _DWORD *v63; // [sp+Ch] [bp-18h]
  int v64; // [sp+10h] [bp-14h]
  int v65; // [sp+14h] [bp-10h]
  int *v66; // [sp+18h] [bp-Ch]
  _BOOL4 v67; // [sp+1Ch] [bp-8h]
  unsigned int v68; // [sp+20h] [bp-4h]

  v3 = (int)a1;
  v63 = a1 + 1455;
  v4 = a1[11];
  v5 = a1[3] - 5;
  v62 = v4;
  if ( v5 <= v4 )
    v62 = v5;
  v6 = *(_DWORD **)v3;
  v61 = *(_DWORD *)(*(_DWORD *)v3 + 4);
  v66 = (int *)v3;
  v65 = a2;
  while ( 1 )
  {
    v7 = v6[4];
    v8 = (*v63 + 42) >> 3;
    if ( v7 < v8 )
      break;
    v9 = v7 - v8;
    v68 = *(_DWORD *)(v3 + 108) - *(_DWORD *)(v3 + 92);
    v10 = v68 + v6[1];
    v11 = v10;
    if ( v10 >= 0xFFFF )
      v11 = 0xFFFF;
    if ( v11 <= v9 )
      v9 = v11;
    if ( v9 < v62 )
    {
      v64 = 0;
      if ( v9 != v10 || !a2 || a2 != 4 && v9 == 0 )
        goto LABEL_37;
    }
    v67 = (a2 ^ 4 | v10 ^ v9) == 0;
    sub_8B1CC(v3, nullptr, 0, v67);
    *(_WORD *)(*(_DWORD *)(v3 + 8) + *(_DWORD *)(v3 + 20) - 4) = v9;
    v64 = 1;
    *(_WORD *)(*(_DWORD *)(v3 + 8) + *(_DWORD *)(v3 + 20) - 2) = ~(_WORD)v9;
    v12 = *(_DWORD *)v3;
    v13 = *(_DWORD *)(*(_DWORD *)v3 + 28);
    sub_8B2BC(v13);
    v14 = *(_DWORD *)(v12 + 16);
    if ( *(_DWORD *)(v13 + 20) <= v14 )
      v14 = *(_DWORD *)(v13 + 20);
    if ( v14 )
    {
      qmemcpy(*(void **)(v12 + 12), *(const void **)(v13 + 16), v14);
      *(_DWORD *)(v12 + 12) += v14;
      *(_DWORD *)(v13 + 16) += v14;
      *(_DWORD *)(v12 + 16) -= v14;
      *(_DWORD *)(v12 + 20) += v14;
      v15 = *(_DWORD *)(v13 + 20) - v14;
      *(_DWORD *)(v13 + 20) = v15;
      if ( !v15 )
        *(_DWORD *)(v13 + 16) = *(_DWORD *)(v13 + 8);
    }
    if ( v68 )
    {
      v16 = v9;
      if ( v68 <= v9 )
        v16 = v68;
      v3 = (int)v66;
      qmemcpy(*(void **)(*v66 + 12), (const void *)(v66[14] + v66[23]), v16);
      *(_DWORD *)(*v66 + 12) += v16;
      *(_DWORD *)(*v66 + 16) -= v16;
      *(_DWORD *)(*v66 + 20) += v16;
      v66[23] += v16;
      v9 -= v16;
    }
    else
    {
      v3 = (int)v66;
    }
    a2 = v65;
    if ( v9 )
    {
      v17 = *(_DWORD *)v3;
      v18 = *(_DWORD *)(*(_DWORD *)v3 + 4);
      v19 = v9;
      if ( v18 <= v9 )
        v19 = v18;
      v20 = *(char **)(v17 + 12);
      v21 = (_DWORD *)(v17 + 12);
      if ( v19 )
      {
        *(_DWORD *)(v17 + 4) = v18 - v19;
        qmemcpy(v20, *(const void **)v17, v19);
        v22 = *(_DWORD *)(*(_DWORD *)(v17 + 28) + 24);
        if ( v22 == 2 )
        {
          v23 = sub_85468(*(_DWORD *)(v17 + 48), (unsigned __int8 *)v20, v19);
LABEL_33:
          *(_DWORD *)(v17 + 48) = v23;
        }
        else if ( v22 == 1 )
        {
          v23 = sub_8EC00(*(_DWORD *)(v17 + 48), (unsigned __int8 *)v20, v19);
          goto LABEL_33;
        }
        *(_DWORD *)v17 += v19;
        *(_DWORD *)(v17 + 8) += v19;
        v3 = (int)v66;
        v20 = *(char **)(*v66 + 12);
        v21 = (_DWORD *)(*v66 + 12);
      }
      else
      {
        v3 = (int)v66;
      }
      *v21 = &v20[v9];
      *(_DWORD *)(*(_DWORD *)v3 + 16) -= v9;
      *(_DWORD *)(*(_DWORD *)v3 + 20) += v9;
      a2 = v65;
    }
    v6 = *(_DWORD **)v3;
    if ( v67 )
      goto LABEL_37;
  }
  v64 = 0;
LABEL_37:
  v24 = v6[1];
  v25 = v61 - v24;
  if ( v61 == v24 )
  {
    v29 = *(_DWORD *)(v3 + 108);
    v30 = v64;
  }
  else
  {
    v26 = *(_DWORD *)(v3 + 44);
    if ( v25 >= v26 )
    {
      *(_DWORD *)(v3 + 5808) = 2;
      qmemcpy(*(void **)(v3 + 56), (const void *)(*v6 - v26), v26);
      v29 = *(_DWORD *)(v3 + 44);
      *(_DWORD *)(v3 + 5812) = v29;
      *(_DWORD *)(v3 + 108) = v29;
    }
    else
    {
      v27 = *(_DWORD *)(v3 + 108);
      if ( *(_DWORD *)(v3 + 60) - v27 <= v25 )
      {
        *(_DWORD *)(v3 + 108) = v27 - v26;
        qmemcpy(*(void **)(v3 + 56), (const void *)(*(_DWORD *)(v3 + 56) + v26), v27 - v26);
        v31 = *(_DWORD *)(v3 + 5808);
        if ( v31 <= 1 )
          *(_DWORD *)(v3 + 5808) = v31 + 1;
        v28 = (unsigned int *)(v3 + 5812);
        v27 = *(_DWORD *)(v3 + 108);
        if ( *(_DWORD *)(v3 + 5812) > v27 )
          *v28 = v27;
      }
      else
      {
        v28 = (unsigned int *)(v3 + 5812);
      }
      qmemcpy((void *)(*(_DWORD *)(v3 + 56) + v27), (const void *)(**(_DWORD **)v3 - v25), v25);
      v29 = *(_DWORD *)(v3 + 108) + v25;
      *(_DWORD *)(v3 + 108) = v29;
      v32 = *(_DWORD *)(v3 + 44) - *v28;
      if ( v25 <= v32 )
        v32 = v25;
      *v28 += v32;
    }
    v30 = v64;
    *(_DWORD *)(v3 + 92) = v29;
  }
  v33 = v3;
  v34 = (size_t *)(v3 + 5824);
  if ( *(_DWORD *)(v33 + 5824) < v29 )
    *v34 = v29;
  result = 3;
  if ( v30 )
    return result;
  v36 = *(_DWORD *)(*v66 + 4);
  if ( (a2 | 4) == 4 || v36 )
  {
    v37 = v66;
    v38 = v66[15] - v29;
    if ( v36 > v38 )
    {
      v39 = v66[11];
      v40 = v66[23];
      if ( v40 >= v39 )
      {
        v66[27] = v29 - v39;
        v66[23] = v40 - v39;
        qmemcpy((void *)v66[14], (const void *)(v66[14] + v39), v29 - v39);
        v41 = v66[1452];
        if ( v41 <= 1 )
          v66[1452] = v41 + 1;
        v38 += v66[11];
        v29 = v66[27];
        if ( v66[1453] > v29 )
          v66[1453] = v29;
        v37 = v66;
      }
    }
LABEL_65:
    v42 = *v37;
    v43 = *(_DWORD *)(v42 + 4);
    v44 = v43;
    if ( v38 <= v43 )
      v44 = v38;
    if ( !v44 )
      goto LABEL_76;
    v45 = v66[14];
    *(_DWORD *)(v42 + 4) = v43 - v44;
    v46 = (unsigned __int8 *)(v45 + v29);
    qmemcpy((void *)(v45 + v29), *(const void **)v42, v44);
    v47 = *(_DWORD *)(*(_DWORD *)(v42 + 28) + 24);
    if ( v47 == 2 )
    {
      v48 = sub_85468(*(_DWORD *)(v42 + 48), v46, v44);
    }
    else
    {
      if ( v47 != 1 )
      {
LABEL_73:
        *(_DWORD *)v42 += v44;
        *(_DWORD *)(v42 + 8) += v44;
        v49 = v66[1453];
        v50 = v66[11] - v49;
        if ( v44 <= v50 )
          v50 = v44;
        v66[1453] = v50 + v49;
        v29 = v66[27] + v44;
        v66[27] = v29;
LABEL_76:
        if ( *v34 < v29 )
          *v34 = v29;
        v51 = v66[23];
        v52 = v29 - v51;
        v53 = v66[3] - ((*v63 + 42) >> 3);
        if ( v53 >= 0xFFFF )
          v53 = 0xFFFF;
        v54 = v66[11];
        if ( v53 <= v54 )
          v54 = v53;
        if ( v52 < v54 && (!v65 || v65 != 4 && v52 == 0 || v52 > v53 || *(_DWORD *)(*v66 + 4)) )
          return 0;
        v55 = v53;
        if ( v52 <= v53 )
          v55 = v52;
        v56 = 0;
        if ( v65 == 4 && !*(_DWORD *)(*v66 + 4) )
          v56 = v52 <= v53;
        sub_8B1CC((int)v66, (const void *)(v66[14] + v51), v55, v56);
        v66[23] += v55;
        v57 = *v66;
        v58 = *(_DWORD *)(*v66 + 28);
        sub_8B2BC(v58);
        v59 = *(_DWORD *)(v57 + 16);
        if ( *(_DWORD *)(v58 + 20) <= v59 )
          v59 = *(_DWORD *)(v58 + 20);
        if ( v59 )
        {
          qmemcpy(*(void **)(v57 + 12), *(const void **)(v58 + 16), v59);
          *(_DWORD *)(v57 + 12) += v59;
          *(_DWORD *)(v58 + 16) += v59;
          *(_DWORD *)(v57 + 16) -= v59;
          *(_DWORD *)(v57 + 20) += v59;
          v60 = *(_DWORD *)(v58 + 20) - v59;
          *(_DWORD *)(v58 + 20) = v60;
          if ( !v60 )
            *(_DWORD *)(v58 + 16) = *(_DWORD *)(v58 + 8);
        }
        result = 2;
        if ( !v56 )
          return 0;
        return result;
      }
      v48 = sub_8EC00(*(_DWORD *)(v42 + 48), v46, v44);
    }
    *(_DWORD *)(v42 + 48) = v48;
    goto LABEL_73;
  }
  result = 1;
  if ( v29 != v66[23] )
  {
    v37 = v66;
    v38 = v66[15] - v29;
    goto LABEL_65;
  }
  return result;
}
