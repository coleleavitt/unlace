/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100072F34
// Address: 0x0000000100072F34

//----- (0000000100072F34) ----------------------------------------------------
__int64 __fastcall sub_100072F34(char **a1, char *a2, __int64 a3)
{
  char *v6; // x1
  char *v7; // x8
  char *v8; // x22
  char *v9; // x23
  unsigned __int64 v10; // x10
  unsigned __int64 v11; // x10
  unsigned __int64 v12; // x11
  char *v13; // x12
  unsigned __int64 v14; // x13
  char *v15; // x12
  unsigned __int64 v16; // x9
  unsigned __int64 v17; // x24
  char *v18; // x22
  char *v19; // x0
  char *v20; // x9
  __int64 v21; // x25
  unsigned __int64 v22; // x10
  char *v23; // x9
  unsigned __int64 v24; // x11
  char *v25; // x12
  unsigned __int64 v26; // x13
  char *v27; // x12
  char *v29; // x22
  __int128 v30; // q0
  char *v31; // x26
  __int128 v32; // t1
  __int128 v33; // [xsp+0h] [xbp-60h] BYREF
  char v34; // [xsp+10h] [xbp-50h]

  v6 = *a1;
  v7 = a1[1];
  v8 = &(*a1)[16 * (_QWORD)v7];
  v9 = *a1;
  if ( v7 )
  {
    v10 = *((_QWORD *)v8 - 1);
    if ( v10 == *(_QWORD *)a2 )
    {
      v9 = v8 - 16;
      if ( *(_BYTE *)(a3 + 28) == 1 )
      {
        v33 = *(_OWORD *)v9;
        v34 = 1;
        sub_100073524((unsigned __int64 *)a3, (unsigned __int64)&v33);
      }
      *((_QWORD *)v8 - 1) = *((_QWORD *)a2 + 1);
      goto LABEL_49;
    }
    if ( v10 < *(_QWORD *)a2 )
      goto LABEL_19;
    v9 = *a1;
    if ( ((unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFLL) != 0 )
    {
      v11 = (16 * (__int64)v7) >> 4;
      v9 = *a1;
      do
      {
        v12 = v11 >> 1;
        v13 = &v9[16 * (v11 >> 1)];
        v14 = *((_QWORD *)v13 + 1);
        v15 = v13 + 16;
        v11 += ~(v11 >> 1);
        if ( v14 < *(_QWORD *)a2 )
          v9 = v15;
        else
          v11 = v12;
      }
      while ( v11 );
    }
  }
  if ( v9 == v8 )
  {
LABEL_19:
    v33 = *(_OWORD *)a2;
    if ( a1[2] < v7 + 1 )
    {
      v6 = (char *)qvector_reserve(a1, v6, (unsigned __int64)(v7 + 1), 0x10u);
      *a1 = v6;
      v7 = a1[1];
    }
    *(_OWORD *)&v6[16 * (_QWORD)v7] = v33;
    goto LABEL_36;
  }
  v16 = *(_QWORD *)v9;
  v17 = *((_QWORD *)a2 + 1);
  if ( *(_QWORD *)a2 >= *(_QWORD *)v9 && v17 <= *((_QWORD *)v9 + 1) )
    return 0;
  if ( v16 <= v17 )
  {
    if ( v16 >= *(_QWORD *)a2 )
      v20 = a2;
    else
      v20 = v9;
    v21 = *(_QWORD *)v20;
    v22 = (v8 - v9) >> 4;
    v23 = v9;
    do
    {
      v24 = v22 >> 1;
      v25 = &v23[16 * (v22 >> 1)];
      v26 = *((_QWORD *)v25 + 1);
      v27 = v25 + 16;
      v22 += ~(v22 >> 1);
      if ( v17 < v26 )
        v22 = v24;
      else
        v23 = v27;
    }
    while ( v22 );
    if ( v23 != v8 )
    {
      if ( *(_QWORD *)v23 <= v17 )
      {
        v17 = *((_QWORD *)v23 + 1);
        v8 = v23 + 16;
      }
      else
      {
        v8 = v23;
      }
    }
    if ( v9 == v8 )
    {
      if ( *(_BYTE *)(a3 + 28) )
      {
        v33 = *(_OWORD *)v9;
        v34 = 1;
        sub_100073524((unsigned __int64 *)a3, (unsigned __int64)&v33);
      }
    }
    else
    {
      if ( v9 < v8 && *(_BYTE *)(a3 + 28) )
      {
        v31 = v9;
        do
        {
          v32 = *(_OWORD *)v31;
          v31 += 16;
          v33 = v32;
          v34 = 1;
          sub_100073524((unsigned __int64 *)a3, (unsigned __int64)&v33);
        }
        while ( v31 < v8 );
        v6 = *a1;
        v7 = a1[1];
      }
      memmove(v9 + 16, v8, &v6[16 * (_QWORD)v7] - v8);
      a1[1] -= (v8 - (v9 + 16)) >> 4;
    }
    *(_QWORD *)v9 = v21;
    *((_QWORD *)v9 + 1) = v17;
LABEL_49:
    if ( *(_BYTE *)(a3 + 28) == 1 )
    {
      v30 = *(_OWORD *)v9;
      goto LABEL_51;
    }
    goto LABEL_52;
  }
  v33 = *(_OWORD *)a2;
  if ( a1[2] >= v7 + 1 )
  {
    v19 = v6;
  }
  else
  {
    v18 = v6;
    v19 = (char *)qvector_reserve(a1, v6, (unsigned __int64)(v7 + 1), 0x10u);
    v6 = v18;
    *a1 = v19;
    v7 = a1[1];
  }
  v29 = &v19[v9 - v6];
  memmove(v29 + 16, v29, 16LL * (_QWORD)v7 - (v9 - v6));
  *(_OWORD *)v29 = v33;
LABEL_36:
  ++a1[1];
  if ( *(_BYTE *)(a3 + 28) == 1 )
  {
    v30 = *(_OWORD *)a2;
LABEL_51:
    v33 = v30;
    v34 = 0;
    sub_100073524((unsigned __int64 *)a3, (unsigned __int64)&v33);
  }
LABEL_52:
  a1[3] = nullptr;
  return 1;
}
