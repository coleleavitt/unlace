/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CB1A4
// Address: 0x00000000000CB1A4

//----- (00000000000CB1A4) ----------------------------------------------------
__int64 __fastcall sub_CB1A4(_DWORD *a1, int a2)
{
  __int64 v2; // x8
  unsigned int v5; // w26
  unsigned int v6; // w10
  unsigned int v7; // w9
  bool v8; // cf
  unsigned int v9; // w10
  __int64 v10; // x12
  __int64 v11; // x24
  int v12; // w9
  unsigned int v13; // w11
  unsigned int v14; // w28
  _BOOL4 v15; // w8
  _BOOL4 v16; // w9
  int v17; // w21
  __int64 v18; // x29
  __int64 v19; // x22
  unsigned int v20; // w25
  unsigned int v21; // w9
  __int64 v22; // x8
  size_t v23; // x22
  __int64 v24; // x29
  unsigned __int8 **v25; // x8
  unsigned __int8 *v26; // x22
  unsigned int v27; // w9
  unsigned int v28; // w24
  const void *v29; // x1
  void *v30; // x0
  int v31; // w8
  __int64 v32; // x0
  __int64 v33; // x9
  int v34; // w22
  int v35; // w9
  unsigned int v36; // w23
  size_t v37; // x2
  __int64 v38; // x8
  char *v39; // x0
  size_t v40; // x8
  unsigned int v41; // w8
  int v42; // w10
  unsigned int v43; // w9
  unsigned int v44; // w8
  unsigned __int64 v45; // x9
  unsigned int v47; // w10
  unsigned int v48; // w21
  __int64 v49; // x10
  __int64 v50; // x9
  bool v51; // cc
  __int64 v52; // x10
  char *v53; // x0
  size_t v54; // x2
  unsigned int v55; // w8
  __int64 v56; // x24
  unsigned int v57; // w9
  const void *v58; // x1
  _QWORD *v59; // x23
  int v60; // w8
  __int64 v61; // x0
  __int64 v62; // x9
  int v63; // w10
  unsigned int v64; // w9
  unsigned int v65; // w10
  __int64 v66; // x8
  unsigned __int64 v67; // x9
  unsigned int v68; // w11
  unsigned int v69; // w10
  unsigned int v70; // w11
  _BOOL4 v71; // w20
  __int64 v72; // x21
  __int64 v73; // x22
  __int64 v74; // x19
  unsigned int v75; // w23
  unsigned int v76; // w9
  __int64 v77; // x8
  int v78; // [xsp+Ch] [xbp-64h]

  v2 = *(_QWORD *)a1;
  if ( *((_QWORD *)a1 + 3) - 5LL <= (unsigned __int64)(unsigned int)a1[20] )
    v5 = a1[6] - 5;
  else
    v5 = a1[20];
  v78 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  do
  {
    v6 = *(_DWORD *)(v2 + 32);
    v7 = (a1[1485] + 42) >> 3;
    v8 = v6 >= v7;
    v9 = v6 - v7;
    if ( !v8 )
    {
      v34 = 0;
      goto LABEL_43;
    }
    v10 = *(unsigned int *)(v2 + 8);
    v11 = (unsigned int)(a1[43] - a1[38]);
    v12 = v11 + v10;
    if ( (unsigned __int64)(v11 + v10) >= 0xFFFF )
      v13 = 0xFFFF;
    else
      v13 = v11 + v10;
    if ( v13 <= v9 )
      v14 = v13;
    else
      v14 = v9;
    if ( v14 < v5 )
    {
      v34 = 0;
      if ( v14 != v12 || !a2 || a2 != 4 && v14 == 0 )
        goto LABEL_43;
    }
    v15 = a2 == 4;
    v16 = v14 == v12;
    v17 = v15 && v16;
    sub_CFA98((char *)a1, nullptr, 0, v15 && v16);
    *(_WORD *)(*((_QWORD *)a1 + 2) + *((_QWORD *)a1 + 5) - 4LL) = v14;
    *(_WORD *)(*((_QWORD *)a1 + 2) + *((_QWORD *)a1 + 5) - 2LL) = ~(_WORD)v14;
    v18 = *(_QWORD *)a1;
    v19 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
    sub_CFC1C(v19);
    if ( *(_DWORD *)(v18 + 32) >= *(_DWORD *)(v19 + 40) )
      v20 = *(_DWORD *)(v19 + 40);
    else
      v20 = *(_DWORD *)(v18 + 32);
    if ( v20
      && (memcpy(*(void **)(v18 + 24), *(const void **)(v19 + 32), v20),
          *(_QWORD *)(v18 + 24) += v20,
          *(_QWORD *)(v19 + 32) += v20,
          v21 = *(_DWORD *)(v18 + 32) - v20,
          *(_QWORD *)(v18 + 40) += v20,
          *(_DWORD *)(v18 + 32) = v21,
          v22 = *(_QWORD *)(v19 + 40) - v20,
          (*(_QWORD *)(v19 + 40) = v22) == 0) )
    {
      *(_QWORD *)(v19 + 32) = *(_QWORD *)(v19 + 16);
      if ( !(_DWORD)v11 )
        goto LABEL_27;
    }
    else if ( !(_DWORD)v11 )
    {
      goto LABEL_27;
    }
    if ( (unsigned int)v11 <= v14 )
      v23 = (unsigned int)v11;
    else
      v23 = v14;
    memcpy(*(void **)(*(_QWORD *)a1 + 24LL), (const void *)(*((_QWORD *)a1 + 12) + *((_QWORD *)a1 + 19)), v23);
    v14 -= v23;
    *(_QWORD *)(*(_QWORD *)a1 + 24LL) += v23;
    *(_DWORD *)(*(_QWORD *)a1 + 32LL) -= v23;
    *(_QWORD *)(*(_QWORD *)a1 + 40LL) += v23;
    *((_QWORD *)a1 + 19) += v23;
LABEL_27:
    if ( !v14 )
      goto LABEL_41;
    v24 = *(_QWORD *)a1;
    v25 = (unsigned __int8 **)(*(_QWORD *)a1 + 24LL);
    v26 = *v25;
    v27 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
    if ( v27 <= v14 )
      v28 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
    else
      v28 = v14;
    if ( v28 )
    {
      v29 = *(const void **)v24;
      v30 = *(void **)(*(_QWORD *)a1 + 24LL);
      *(_DWORD *)(v24 + 8) = v27 - v28;
      memcpy(v30, v29, v28);
      v31 = *(_DWORD *)(*(_QWORD *)(v24 + 56) + 48LL);
      if ( v31 == 2 )
      {
        v32 = sub_C8324(*(_QWORD *)(v24 + 96), v26, v28);
LABEL_38:
        *(_QWORD *)(v24 + 96) = v32;
      }
      else if ( v31 == 1 )
      {
        v32 = sub_D4634(*(_QWORD *)(v24 + 96), v26, v28);
        goto LABEL_38;
      }
      v33 = *(_QWORD *)(v24 + 16) + v28;
      *(_QWORD *)v24 += v28;
      *(_QWORD *)(v24 + 16) = v33;
      v25 = (unsigned __int8 **)(*(_QWORD *)a1 + 24LL);
      v26 = *v25;
    }
    *v25 = &v26[v14];
    *(_DWORD *)(*(_QWORD *)a1 + 32LL) -= v14;
    *(_QWORD *)(*(_QWORD *)a1 + 40LL) += v14;
LABEL_41:
    v2 = *(_QWORD *)a1;
  }
  while ( !v17 );
  v34 = 1;
LABEL_43:
  v35 = *(_DWORD *)(v2 + 8);
  v36 = v78 - v35;
  if ( v78 == v35 )
  {
    v45 = (unsigned int)a1[43];
    v44 = a1[43];
  }
  else
  {
    v37 = (unsigned int)a1[20];
    if ( v36 >= (unsigned int)v37 )
    {
      a1[1482] = 2;
      memcpy(*((void **)a1 + 12), (const void *)(*(_QWORD *)v2 - v37), v37);
      v44 = a1[20];
      a1[43] = v44;
      a1[1483] = v44;
    }
    else
    {
      v38 = (unsigned int)a1[43];
      if ( *((_QWORD *)a1 + 13) - v38 <= (unsigned __int64)v36 )
      {
        v39 = *((char **)a1 + 12);
        v40 = (unsigned int)(v38 - v37);
        a1[43] = v40;
        memcpy(v39, &v39[v37], v40);
        v41 = a1[1482];
        if ( v41 <= 1 )
          a1[1482] = v41 + 1;
        LODWORD(v38) = a1[43];
        if ( a1[1483] > (unsigned int)v38 )
          a1[1483] = v38;
      }
      memcpy((void *)(*((_QWORD *)a1 + 12) + (unsigned int)v38), (const void *)(**(_QWORD **)a1 - v36), v36);
      v42 = a1[1483];
      v43 = a1[20] - v42;
      if ( v36 <= v43 )
        v43 = v36;
      v44 = a1[43] + v36;
      a1[43] = v44;
      a1[1483] = v43 + v42;
    }
    v45 = v44;
    *((_QWORD *)a1 + 19) = v44;
  }
  if ( *((_QWORD *)a1 + 743) < v45 )
    *((_QWORD *)a1 + 743) = v45;
  if ( v34 )
    return 3;
  v47 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( (a2 | 4) == 4 || v47 )
  {
    v48 = a1[26] - v44;
    if ( v47 > v48 )
    {
      v49 = *((_QWORD *)a1 + 19);
      v50 = (unsigned int)a1[20];
      v51 = v49 < v50;
      v52 = v49 - v50;
      if ( !v51 )
      {
        v53 = *((char **)a1 + 12);
        v54 = v44 - (unsigned int)v50;
        *((_QWORD *)a1 + 19) = v52;
        a1[43] = v54;
        memcpy(v53, &v53[v50], v54);
        v55 = a1[1482];
        if ( v55 <= 1 )
          a1[1482] = v55 + 1;
        v44 = a1[43];
        v48 += a1[20];
        if ( a1[1483] > v44 )
          a1[1483] = v44;
      }
    }
  }
  else
  {
    if ( *((_QWORD *)a1 + 19) == v45 )
      return 1;
    v48 = a1[26] - v44;
  }
  v56 = *(_QWORD *)a1;
  v57 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v48 > v57 )
    v48 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v48 )
  {
    v58 = *(const void **)v56;
    v59 = (_QWORD *)(*((_QWORD *)a1 + 12) + v44);
    *(_DWORD *)(v56 + 8) = v57 - v48;
    memcpy(v59, v58, v48);
    v60 = *(_DWORD *)(*(_QWORD *)(v56 + 56) + 48LL);
    if ( v60 == 2 )
    {
      v61 = sub_C8324(*(_QWORD *)(v56 + 96), v59, v48);
LABEL_78:
      *(_QWORD *)(v56 + 96) = v61;
    }
    else if ( v60 == 1 )
    {
      v61 = sub_D4634(*(_QWORD *)(v56 + 96), (unsigned __int8 *)v59, v48);
      goto LABEL_78;
    }
    v62 = *(_QWORD *)(v56 + 16) + v48;
    *(_QWORD *)v56 += v48;
    *(_QWORD *)(v56 + 16) = v62;
    v63 = a1[1483];
    v64 = a1[20] - v63;
    if ( v48 <= v64 )
      v64 = v48;
    v44 = a1[43] + v48;
    a1[43] = v44;
    a1[1483] = v64 + v63;
  }
  v65 = v44;
  if ( *((_QWORD *)a1 + 743) < (unsigned __int64)v44 )
    *((_QWORD *)a1 + 743) = v44;
  v66 = *((_QWORD *)a1 + 19);
  v67 = *((_QWORD *)a1 + 3) - (unsigned int)((a1[1485] + 42) >> 3);
  if ( v67 >= 0xFFFF )
    LODWORD(v67) = 0xFFFF;
  if ( a1[20] >= (unsigned int)v67 )
    v68 = v67;
  else
    v68 = a1[20];
  v69 = v65 - v66;
  if ( v69 < v68 && (!a2 || a2 != 4 && v69 == 0 || v69 > (unsigned int)v67 || *(_DWORD *)(*(_QWORD *)a1 + 8LL)) )
    return 0;
  if ( v69 <= (unsigned int)v67 )
    v70 = v69;
  else
    v70 = v67;
  v71 = a2 == 4 && !*(_DWORD *)(*(_QWORD *)a1 + 8LL) && v69 <= (unsigned int)v67;
  v72 = v70;
  sub_CFA98((char *)a1, (const void *)(*((_QWORD *)a1 + 12) + v66), v70, v71);
  v73 = *(_QWORD *)a1;
  *((_QWORD *)a1 + 19) += v72;
  v74 = *(_QWORD *)(v73 + 56);
  sub_CFC1C(v74);
  if ( *(_DWORD *)(v73 + 32) >= *(_DWORD *)(v74 + 40) )
    v75 = *(_DWORD *)(v74 + 40);
  else
    v75 = *(_DWORD *)(v73 + 32);
  if ( v75
    && (memcpy(*(void **)(v73 + 24), *(const void **)(v74 + 32), v75),
        *(_QWORD *)(v73 + 24) += v75,
        *(_QWORD *)(v74 + 32) += v75,
        v76 = *(_DWORD *)(v73 + 32) - v75,
        *(_QWORD *)(v73 + 40) += v75,
        *(_DWORD *)(v73 + 32) = v76,
        v77 = *(_QWORD *)(v74 + 40) - v75,
        (*(_QWORD *)(v74 + 40) = v77) == 0) )
  {
    *(_QWORD *)(v74 + 32) = *(_QWORD *)(v74 + 16);
    if ( !v71 )
      return 0;
    return 2;
  }
  else
  {
    if ( v71 )
      return 2;
    return 0;
  }
}
