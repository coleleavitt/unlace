/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100073524
// Address: 0x0000000100073524

//----- (0000000100073524) ----------------------------------------------------
void __fastcall sub_100073524(unsigned __int64 *a1, unsigned __int64 a2)
{
  _QWORD *v3; // x20
  unsigned __int64 v4; // x22
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x21
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x23
  _QWORD *v10; // x0
  _QWORD *v11; // x9
  __int128 v12; // q0
  __int128 v13; // q0
  char *v14; // x8
  unsigned __int64 v15; // x8
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x21
  _QWORD *v18; // x0
  _QWORD *v19; // x9
  __int128 v20; // q0
  char *v21; // x8
  __int128 v22; // [xsp+0h] [xbp-50h]
  __int64 v23; // [xsp+10h] [xbp-40h]

  v3 = (_QWORD *)*a1;
  v4 = a1[2];
  if ( *a1 <= a2 && *a1 + 24 * v4 > a2 )
  {
    v22 = *(_OWORD *)a2;
    v23 = *(_QWORD *)(a2 + 16);
    v15 = a1[1];
    if ( v4 < v15 + 1 )
    {
      v3 = qvector_reserve(a1, nullptr, v15 + 1, 0x18u);
      v16 = a1[1];
      v17 = a1[2];
      a1[2] = v4;
      v18 = (_QWORD *)*a1;
      if ( (__int64)(v16 - 1) >= 0 )
      {
        v19 = v3;
        do
        {
          v20 = *(_OWORD *)v18;
          v19[2] = v18[2];
          *(_OWORD *)v19 = v20;
          v19 += 3;
          v18 += 3;
          --v16;
        }
        while ( v16 );
        v18 = (_QWORD *)*a1;
      }
      qfree(v18);
      *a1 = (unsigned __int64)v3;
      a1[2] = v17;
      v15 = a1[1];
    }
    v21 = (char *)&v3[3 * v15];
    *(_OWORD *)v21 = v22;
    *((_QWORD *)v21 + 2) = v23;
  }
  else
  {
    v6 = a1[1];
    if ( v4 < v6 + 1 )
    {
      v7 = a2;
      v3 = qvector_reserve(a1, nullptr, v6 + 1, 0x18u);
      v8 = a1[1];
      v9 = a1[2];
      a1[2] = v4;
      v10 = (_QWORD *)*a1;
      if ( (__int64)(v8 - 1) >= 0 )
      {
        v11 = v3;
        do
        {
          v12 = *(_OWORD *)v10;
          v11[2] = v10[2];
          *(_OWORD *)v11 = v12;
          v11 += 3;
          v10 += 3;
          --v8;
        }
        while ( v8 );
        v10 = (_QWORD *)*a1;
      }
      qfree(v10);
      *a1 = (unsigned __int64)v3;
      a1[2] = v9;
      v6 = a1[1];
      a2 = v7;
    }
    v13 = *(_OWORD *)a2;
    v14 = (char *)&v3[3 * v6];
    *((_QWORD *)v14 + 2) = *(_QWORD *)(a2 + 16);
    *(_OWORD *)v14 = v13;
  }
  ++a1[1];
}
