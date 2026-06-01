/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E180
// Address: 0x000000000003E180

//----- (000000000003E180) ----------------------------------------------------
__int64 __fastcall sub_3E180(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v6; // x0
  unsigned int v7; // w1
  __int64 v8; // x2
  unsigned __int64 *v9; // x3
  unsigned __int64 v10; // x4
  char v11; // w5
  int *v12; // x11
  int *v13; // x8
  int v14; // w10
  int *v15; // x9
  int *v16; // x10
  int *v17; // x11
  __int64 v18; // x11
  int *v19; // x12
  __int64 v20; // x12
  int *v21; // t1
  int *v22; // x10
  unsigned int v23; // w11
  int *v24; // x11
  __int64 v25; // x11
  int *v26; // x12
  __int64 v27; // x12
  int *v28; // t1
  int *v29; // x10
  __int64 v30; // x10
  __int64 v31; // x11
  int *v32; // t1
  unsigned int v33; // w19
  int v34; // w8
  char v36; // w19
  unsigned __int64 v37; // x20
  unsigned __int64 *v38; // x21
  __int64 v39; // x22
  unsigned int v40; // w23
  unsigned __int64 v41; // x24
  unsigned __int8 v42; // w25
  unsigned __int64 v43; // x8
  int v44; // w4
  int v45; // w0
  __int64 v46; // x8

  if ( !*(_DWORD *)(a1 + 1928) )
    return 0;
  v6 = sub_9DBB4();
  v12 = *(int **)(a1 + 1744);
  v13 = (int *)(a1 + 1744);
  if ( v12 )
  {
    v14 = *(_DWORD *)(a1 + 172);
    v15 = (int *)(a1 + 1744);
    do
    {
      if ( v12[8] >= v14 )
        v15 = v12;
      v12 = *(int **)&v12[2 * (v12[8] < v14)];
    }
    while ( v12 );
    if ( v15 != v13 && v14 >= v15[8] && *((_BYTE *)v15 + 65) && v15[12] <= 0 && v15[11] <= 0 && v15 != v13 )
    {
LABEL_55:
      if ( v15 == v13 )
        goto LABEL_58;
      *a2 = v15[8];
      *a3 = v15[17];
      *((_BYTE *)v15 + 65) = 0;
      v34 = *(_DWORD *)(a1 + 1928) - 1;
      *(_DWORD *)(a1 + 1928) = v34;
      if ( v34 >= 0 )
      {
        v33 = 1;
        goto LABEL_59;
      }
      if ( !under_debugger )
        v6 = (__int64)interr(30186);
      __break(1u);
      if ( v10 )
      {
        v36 = v11;
        v37 = v10;
        v38 = v9;
        v39 = v8;
        v40 = v7;
        v41 = v6;
        v42 = v11 ^ 1;
        while ( 1 )
        {
          v43 = 4096 - (v39 & 0xFFF);
          if ( v43 >= v37 )
            LODWORD(v43) = v37;
          if ( (((int)v43 > 128) & v42) != 0 )
            v44 = 128;
          else
            v44 = v43;
          v45 = sub_3E500(v41, v40, v39, v38, v44, v36 & 1);
          if ( v45 < 0 )
            return 0;
          if ( v45 )
            break;
LABEL_75:
          v39 += v45;
          v37 -= v45;
          v38 = (unsigned __int64 *)((char *)v38 + v45);
          if ( !v37 )
            return 1;
        }
        v46 = 0;
        while ( *((_BYTE *)v38 + v46) )
        {
          if ( (int)++v46 >= v45 )
            goto LABEL_75;
        }
      }
      return 1;
    }
  }
  v15 = *(int **)(a1 + 1736);
  if ( v15 == v13 )
    goto LABEL_58;
  v16 = *(int **)(a1 + 1736);
  while ( v16[12] > 0 || v16[11] > 0 || !*((_BYTE *)v16 + 65) || !*((_BYTE *)v16 + 56) )
  {
    v17 = *((int **)v16 + 1);
    if ( v17 )
    {
      do
      {
        v16 = v17;
        v17 = *(int **)v17;
      }
      while ( v17 );
LABEL_22:
      if ( v16 == v13 )
        break;
    }
    else
    {
      v18 = (__int64)(v16 + 4);
      v19 = *((int **)v16 + 2);
      if ( *(int **)v19 != v16 )
      {
        do
        {
          v20 = *(_QWORD *)v18;
          v21 = *(int **)(*(_QWORD *)v18 + 16LL);
          v18 = *(_QWORD *)v18 + 16LL;
          v16 = v21;
        }
        while ( *(_QWORD *)v21 != v20 );
        goto LABEL_22;
      }
      v16 = *((int **)v16 + 2);
      if ( v19 == v13 )
        break;
    }
  }
  if ( v15 == v13 )
    goto LABEL_58;
  v22 = *(int **)(a1 + 1736);
LABEL_32:
  do
  {
    if ( v22[12] <= 0 && v22[11] <= 0 )
    {
      if ( *((_BYTE *)v22 + 65) )
      {
        v23 = v22[17];
        if ( (~(_BYTE)v23 & 0x7F) == 0 && ((v23 >> 8) & 0xFE | 1) == 5 )
          break;
      }
    }
    v24 = *((int **)v22 + 1);
    if ( v24 )
    {
      do
      {
        v22 = v24;
        v24 = *(int **)v24;
      }
      while ( v24 );
    }
    else
    {
      v25 = (__int64)(v22 + 4);
      v26 = *((int **)v22 + 2);
      if ( *(int **)v26 == v22 )
      {
        v22 = *((int **)v22 + 2);
        if ( v26 == v13 )
          break;
        goto LABEL_32;
      }
      do
      {
        v27 = *(_QWORD *)v25;
        v28 = *(int **)(*(_QWORD *)v25 + 16LL);
        v25 = *(_QWORD *)v25 + 16LL;
        v22 = v28;
      }
      while ( *(_QWORD *)v28 != v27 );
    }
  }
  while ( v22 != v13 );
  while ( v15 != v13 )
  {
    if ( v15[12] <= 0 && v15[11] <= 0 && *((_BYTE *)v15 + 65) )
      goto LABEL_55;
    v29 = *((int **)v15 + 1);
    if ( v29 )
    {
      do
      {
        v15 = v29;
        v29 = *(int **)v29;
      }
      while ( v29 );
    }
    else
    {
      v30 = (__int64)(v15 + 4);
      if ( **((int ***)v15 + 2) == v15 )
      {
        v15 = *((int **)v15 + 2);
      }
      else
      {
        do
        {
          v31 = *(_QWORD *)v30;
          v32 = *(int **)(*(_QWORD *)v30 + 16LL);
          v30 = *(_QWORD *)v30 + 16LL;
          v15 = v32;
        }
        while ( *(_QWORD *)v32 != v31 );
      }
    }
  }
LABEL_58:
  v33 = 0;
LABEL_59:
  sub_9DBBC();
  return v33;
}
// 3E448: variable 'v10' is possibly undefined
// 3E44C: variable 'v11' is possibly undefined
// 3E454: variable 'v9' is possibly undefined
// 3E458: variable 'v8' is possibly undefined
// 3E45C: variable 'v7' is possibly undefined
// 168DF0: using guessed type char under_debugger;
