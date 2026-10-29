/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000098A4
// Address: 0x00000001000098A4

//----- (00000001000098A4) ----------------------------------------------------
void __fastcall sub_1000098A4(__int64 a1, _QWORD *a2)
{
  char *v4; // x21
  char *v5; // x23
  char *v6; // x22
  unsigned __int64 v7; // x8
  _BYTE *v8; // x25
  __int64 v9; // x23
  bool v10; // zf
  __int64 v11; // x8
  unsigned __int64 v12; // x8
  unsigned __int64 v13; // x26
  __int64 v14; // x24
  char *v15; // x0
  char *v16; // x9
  __int64 v17; // x10
  unsigned __int64 v18; // x12
  char *v19; // x10
  char *v20; // x11
  char *v21; // x14
  __int64 v22; // x12
  __int64 v23; // x11
  _OWORD *v24; // x14
  __int128 *v25; // x15
  __int64 v26; // x16
  __int128 v27; // q0
  __int128 v28; // q1
  __int128 v29; // q2
  __int128 v30; // q3
  __int64 v31; // t1

  v5 = *(char **)a1;
  v4 = *(char **)(a1 + 8);
  if ( v4 == *(char **)a1 )
  {
    v8 = *(_BYTE **)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 24);
    if ( (unsigned __int64)v8 >= v7 )
    {
      v11 = v7 - (_QWORD)v4;
      v10 = v11 == 0;
      v12 = v11 >> 2;
      if ( v10 )
        v12 = 1;
      if ( v12 >> 61 )
        sub_100009D48();
      v13 = (v12 + 3) >> 2;
      v14 = 8 * v12;
      v15 = (char *)operator new(8 * v12);
      v6 = &v15[8 * v13];
      v16 = v6;
      v17 = v8 - v4;
      if ( v8 != v4 )
      {
        v16 = &v6[v17];
        v18 = v17 - 8;
        v19 = &v15[8 * v13];
        v20 = v4;
        if ( v18 < 0x38 )
          goto LABEL_24;
        v21 = &v15[8 * v13];
        v19 = v21;
        v20 = v4;
        if ( (unsigned __int64)(v21 - v4) < 0x40 )
          goto LABEL_24;
        v22 = (v18 >> 3) + 1;
        v23 = 8 * (v22 & 0x3FFFFFFFFFFFFFF8LL);
        v19 = &v6[v23];
        v20 = &v4[v23];
        v24 = v21 + 32;
        v25 = (__int128 *)(v4 + 32);
        v26 = v22 & 0x3FFFFFFFFFFFFFF8LL;
        do
        {
          v27 = *(v25 - 2);
          v28 = *(v25 - 1);
          v29 = *v25;
          v30 = v25[1];
          v25 += 4;
          *(v24 - 2) = v27;
          *(v24 - 1) = v28;
          *v24 = v29;
          v24[1] = v30;
          v24 += 4;
          v26 -= 8;
        }
        while ( v26 );
        if ( v22 != (v22 & 0x3FFFFFFFFFFFFFF8LL) )
        {
LABEL_24:
          do
          {
            v31 = *(_QWORD *)v20;
            v20 += 8;
            *(_QWORD *)v19 = v31;
            v19 += 8;
          }
          while ( v19 != v16 );
        }
      }
      *(_QWORD *)a1 = v15;
      *(_QWORD *)(a1 + 8) = v6;
      *(_QWORD *)(a1 + 16) = v16;
      *(_QWORD *)(a1 + 24) = &v15[v14];
      if ( v4 )
      {
        operator delete(v5);
        v6 = *(char **)(a1 + 8);
      }
    }
    else
    {
      v9 = (((__int64)(v7 - (_QWORD)v8) >> 3) + 1) / 2;
      v6 = &v4[8 * v9];
      if ( v8 != v4 )
      {
        memmove(&v4[8 * v9], v4, v8 - v4);
        v8 = *(_BYTE **)(a1 + 16);
      }
      *(_QWORD *)(a1 + 8) = v6;
      *(_QWORD *)(a1 + 16) = &v8[8 * v9];
    }
  }
  else
  {
    v6 = *(char **)(a1 + 8);
  }
  *((_QWORD *)v6 - 1) = *a2;
  *(_QWORD *)(a1 + 8) -= 8LL;
}
