/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4288A8
// Address: 0x00000000004288A8

//----- (00000000004288A8) ----------------------------------------------------
__int64 __fastcall sub_4288A8(__int64 a1)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x21
  unsigned int v7; // w27
  unsigned int v8; // w20
  __int64 v9; // x22
  unsigned __int64 v10; // x0
  unsigned int v11; // w22
  __int64 v12; // x0
  unsigned __int64 v13; // x1
  unsigned __int64 v14; // x20
  unsigned __int64 v15; // x1
  __int64 v16; // x25
  __int64 v17; // x20
  int v18; // w23
  _QWORD *v19; // x28
  void **v20; // x26
  unsigned __int64 v21; // x1
  __int64 v22; // x24
  __int64 v23; // x21
  _QWORD *v24; // x20
  int v25; // w0
  unsigned __int64 v26; // x0
  char *v27; // x0
  __int64 v28; // x3
  unsigned __int64 v29; // x2
  char *v30; // x1
  unsigned __int64 v31; // x0
  unsigned __int64 v32; // x1
  char *v33; // x0
  unsigned __int64 v34; // x2
  char *v35; // x0
  unsigned __int64 v36; // x7
  unsigned __int64 v37; // x5
  unsigned __int64 v38; // x4
  __int64 v39; // x0
  int v40; // w1
  _QWORD *v41; // x0
  unsigned __int64 v42; // x2
  __int64 v43; // x0
  __int64 v44; // [xsp+60h] [xbp-10h]
  char **v45; // [xsp+68h] [xbp-8h]

  if ( !*(_QWORD *)(a1 + 536) )
    return 0;
  v3 = sub_48C428(*(_QWORD *)(a1 + 472), 0, 1);
  v4 = *(_QWORD *)(a1 + 480);
  v44 = v3 - v4;
  v5 = sub_48C428(*(_QWORD *)(a1 + 472), v4 + *(_QWORD *)(a1 + 536), 0);
  v6 = *(_QWORD *)(a1 + 472);
  if ( v5 == -1 )
  {
LABEL_12:
    v11 = 0;
    goto LABEL_13;
  }
  v7 = *(unsigned __int16 *)(a1 + 560);
  v8 = *(unsigned __int16 *)(a1 + 558);
  v9 = sub_48C428(*(_QWORD *)(a1 + 472), 0, 1);
  v10 = sub_48C400(v6) - v9;
  v11 = v9 >= 0 && (v10 & 0x8000000000000000LL) == 0LL;
  if ( !v11 || v8 * (unsigned __int64)v7 > v10 )
    sub_420558("%s is incorrect, maximum possible value is %u%s");
  v15 = *(_QWORD *)(a1 + 40);
  v45 = (char **)(a1 + 32);
  if ( (unsigned __int16)v7 > v15 )
  {
    v33 = *(char **)(a1 + 32);
    if ( (unsigned __int64)(unsigned __int16)v7 > *(_QWORD *)(a1 + 48) )
    {
      v33 = (char *)sub_491288((__int64)v45, *(void **)(a1 + 32), (unsigned __int16)v7, 0x38u);
      *(_QWORD *)(a1 + 32) = v33;
      v15 = *(_QWORD *)(a1 + 40);
    }
    memset(&v33[56 * v15], 0, 56 * ((unsigned __int16)v7 - v15));
    *(_QWORD *)(a1 + 40) = (unsigned __int16)v7;
  }
  else if ( (unsigned __int16)v7 != v15 && (unsigned __int16)v7 < v15 )
  {
    *(_QWORD *)(a1 + 40) = (unsigned __int16)v7;
  }
  *(_BYTE *)(a1 + 72) = 1;
  v6 = *(_QWORD *)(a1 + 472);
  if ( !v7 )
    goto LABEL_13;
  v16 = 1;
  v17 = 0;
  v18 = 0;
  v19 = nullptr;
  v20 = (void **)(a1 + 576);
  v21 = *(_QWORD *)(a1 + 536);
  while ( 1 )
  {
    if ( sub_48C428(v6, v21 + *(_QWORD *)(a1 + 480), 0) == -1 )
      goto LABEL_47;
    v11 = *(unsigned __int8 *)(a1 + 72);
    if ( !*(_BYTE *)(a1 + 72) )
      sub_4068E0();
    v22 = *(_QWORD *)(a1 + 32);
    v23 = 56 * v17;
    v24 = (_QWORD *)(v22 + 56 * v17);
    if ( (sub_420C98(a1, v24, 4u, 1u) & 0x80000000) != 0 )
      goto LABEL_51;
    if ( *(_BYTE *)(a1 + 617) && (sub_420C98(a1, (char *)v24 + 4, 4u, 1u) & 0x80000000) != 0 )
      goto LABEL_44;
    if ( (sub_420C98(a1, v24 + 1, *(int *)(a1 + 428), 1u) & 0x80000000) != 0 )
      goto LABEL_7;
    if ( (sub_420C98(a1, v24 + 2, *(int *)(a1 + 424), 1u) & 0x80000000) != 0 )
    {
LABEL_51:
      v12 = a1 + 32;
      v13 = *(_QWORD *)(a1 + 40);
      if ( v18 )
      {
        v14 = v18 - 1;
        if ( v14 > v13 )
          goto LABEL_53;
      }
      else
      {
        v14 = 0;
      }
      v11 = 0;
      v6 = *(_QWORD *)(a1 + 472);
      if ( v14 == v13 )
        goto LABEL_13;
      if ( v14 < v13 )
        *(_QWORD *)(a1 + 40) = v14;
      goto LABEL_12;
    }
    if ( (sub_420C98(a1, v24 + 3, *(int *)(a1 + 424), 1u) & 0x80000000) != 0 )
      goto LABEL_44;
    if ( (sub_420C98(a1, v24 + 4, *(int *)(a1 + 432), 1u) & 0x80000000) != 0 )
    {
LABEL_7:
      v12 = a1 + 32;
      v13 = *(_QWORD *)(a1 + 40);
      if ( !v18 )
      {
        v14 = 0;
        goto LABEL_9;
      }
      v14 = v18 - 1;
      if ( v14 <= v13 )
      {
LABEL_9:
        v11 = 0;
        v6 = *(_QWORD *)(a1 + 472);
        if ( v13 == v14 )
          goto LABEL_13;
        if ( v13 > v14 )
          *(_QWORD *)(a1 + 40) = v14;
        goto LABEL_12;
      }
LABEL_53:
      v34 = *(_QWORD *)(v12 + 16);
      v35 = *(char **)(a1 + 32);
      if ( v14 > v34 )
      {
        v35 = (char *)sub_491288((__int64)v45, *(void **)(a1 + 32), v14, 0x38u);
        *(_QWORD *)(a1 + 32) = v35;
        v13 = *(_QWORD *)(a1 + 40);
      }
      v11 = 0;
      memset(&v35[56 * v13], 0, 56 * (v14 - v13));
      *(_QWORD *)(a1 + 40) = v14;
      v6 = *(_QWORD *)(a1 + 472);
      goto LABEL_13;
    }
    if ( (sub_420C98(a1, v24 + 5, *(int *)(a1 + 432), 1u) & 0x80000000) != 0
      || !*(_BYTE *)(a1 + 617) && (sub_420C98(a1, (char *)v24 + 4, 4u, 1u) & 0x80000000) != 0
      || (sub_420C98(a1, v24 + 6, *(int *)(a1 + 432), 1u) & 0x80000000) != 0 )
    {
LABEL_44:
      v32 = v18 - 1;
      if ( !v18 )
        v32 = 0;
      sub_428800(v45, v32);
LABEL_47:
      v11 = 0;
      v6 = *(_QWORD *)(a1 + 472);
      goto LABEL_13;
    }
    v25 = *(_DWORD *)(v22 + v23);
    if ( v25 == 1 )
    {
      v27 = (char *)*v20;
      v28 = *(_QWORD *)(a1 + 584);
      v29 = v28 + 1;
      if ( (unsigned __int64)(v28 + 1) > *(_QWORD *)(a1 + 592) )
      {
        v27 = (char *)sub_491288(a1 + 576, *v20, v29, 0x18u);
        v28 = *(_QWORD *)(a1 + 584);
        *v20 = v27;
        v29 = v28 + 1;
      }
      *(_QWORD *)(a1 + 584) = v29;
      v30 = &v27[24 * v28];
      *(_QWORD *)v30 = v24[1];
      *((_QWORD *)v30 + 1) = v24[4];
      *((_QWORD *)v30 + 2) = v24[2];
      v31 = v24[2];
      if ( v31 < *(_QWORD *)(a1 + 56) )
        *(_QWORD *)(a1 + 56) = v31 & 0xFFFFFFFFFFFFF000LL;
    }
    else if ( v25 == 2 )
    {
      v19 = v24;
    }
    ++v18;
    v6 = *(_QWORD *)(a1 + 472);
    if ( v7 == v18 )
      break;
    v26 = *(_QWORD *)(a1 + 536);
    v21 = v26 + *(unsigned __int16 *)(a1 + 558) * v16;
    if ( v26 > v21 )
      goto LABEL_12;
    v17 = v16++;
  }
  if ( v19 )
  {
    v36 = v19[5];
    v37 = *(_QWORD *)(a1 + 584);
    v38 = v19[2];
    if ( v19[4] >= v36 )
      v36 = v19[4];
    if ( v37 )
    {
      v39 = 0;
      v40 = 0;
      while ( 1 )
      {
        v41 = (_QWORD *)(*(_QWORD *)(a1 + 576) + 24 * v39);
        v42 = v41[2];
        if ( v38 >= v42 && v38 < v42 + v41[1] )
          break;
        v39 = ++v40;
        if ( v40 >= v37 )
          goto LABEL_69;
      }
      v43 = (unsigned int)(v38 - v42) + *v41;
    }
    else
    {
LABEL_69:
      v43 = -1;
    }
    *(_QWORD *)a1 = v43;
    *(_QWORD *)(a1 + 8) = v38;
    *(_QWORD *)(a1 + 16) = v36;
    *(_DWORD *)(a1 + 24) = -1;
  }
LABEL_13:
  sub_48C428(v6, v44 + *(_QWORD *)(a1 + 480), 0);
  return v11;
}
