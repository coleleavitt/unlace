/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009BC4
// Address: 0x0000000100009BC4

//----- (0000000100009BC4) ----------------------------------------------------
void __fastcall sub_100009BC4(char **a1, _QWORD *a2)
{
  char *v4; // x24
  char *v5; // x21
  char *v6; // x22
  __int64 v7; // kr00_8
  char *v8; // x21
  signed __int64 v9; // x23
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x25
  __int64 v12; // x23
  char *v13; // x0
  char *v14; // x8
  bool v15; // zf
  signed __int64 v16; // x10
  unsigned __int64 v17; // x11
  char *v18; // x10
  char *v19; // x14
  __int64 v20; // x11
  __int64 v21; // x13
  char *v22; // x13
  _OWORD *v23; // x14
  __int128 *v24; // x15
  __int64 v25; // x16
  __int128 v26; // q0
  __int128 v27; // q1
  __int128 v28; // q2
  __int128 v29; // q3
  __int64 v30; // t1

  v4 = a1[2];
  if ( v4 != a1[3] )
    goto LABEL_19;
  v5 = *a1;
  v6 = a1[1];
  if ( v6 > *a1 )
  {
    v7 = ((v6 - *a1) >> 3) + 1;
    v8 = &v6[-8 * (v7 / 2)];
    v9 = v4 - v6;
    if ( v4 != v6 )
    {
      memmove(&v6[-8 * (v7 / 2)], a1[1], v4 - v6);
      v6 = a1[1];
    }
    v4 = &v8[v9];
    a1[1] = &v6[8 * (v7 / -2)];
    a1[2] = &v8[v9];
    goto LABEL_19;
  }
  v10 = (v4 - v5) >> 2;
  if ( v4 == v5 )
    v10 = 1;
  if ( v10 >> 61 )
    sub_100009D48();
  v11 = v10 >> 2;
  v12 = 8 * v10;
  v13 = (char *)operator new(8 * v10);
  v14 = &v13[8 * v11];
  v16 = v4 - v6;
  v15 = v4 == v6;
  v4 = v14;
  if ( !v15 )
  {
    v4 = &v14[v16];
    v17 = v16 - 8;
    if ( (unsigned __int64)(v16 - 8) < 0x38 )
    {
      v18 = &v13[8 * v11];
      do
      {
LABEL_16:
        v30 = *(_QWORD *)v6;
        v6 += 8;
        *(_QWORD *)v18 = v30;
        v18 += 8;
      }
      while ( v18 != v4 );
      goto LABEL_17;
    }
    v19 = &v13[8 * v11];
    v18 = v19;
    if ( (unsigned __int64)(v19 - v6) < 0x40 )
      goto LABEL_16;
    v20 = (v17 >> 3) + 1;
    v21 = 8 * (v20 & 0x3FFFFFFFFFFFFFF8LL);
    v18 = &v14[v21];
    v22 = &v6[v21];
    v23 = v19 + 32;
    v24 = (__int128 *)(v6 + 32);
    v25 = v20 & 0x3FFFFFFFFFFFFFF8LL;
    do
    {
      v26 = *(v24 - 2);
      v27 = *(v24 - 1);
      v28 = *v24;
      v29 = v24[1];
      v24 += 4;
      *(v23 - 2) = v26;
      *(v23 - 1) = v27;
      *v23 = v28;
      v23[1] = v29;
      v23 += 4;
      v25 -= 8;
    }
    while ( v25 );
    v6 = v22;
    if ( v20 != (v20 & 0x3FFFFFFFFFFFFFF8LL) )
      goto LABEL_16;
  }
LABEL_17:
  *a1 = v13;
  a1[1] = v14;
  a1[2] = v4;
  a1[3] = &v13[v12];
  if ( v5 )
  {
    operator delete(v5);
    v4 = a1[2];
  }
LABEL_19:
  *(_QWORD *)v4 = *a2;
  a1[2] += 8;
}
