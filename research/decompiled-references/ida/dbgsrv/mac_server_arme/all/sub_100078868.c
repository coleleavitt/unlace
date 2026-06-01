/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100078868
// Address: 0x0000000100078868

//----- (0000000100078868) ----------------------------------------------------
void __fastcall sub_100078868(__int64 *a1, _QWORD **a2)
{
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  _QWORD *v6; // x9
  _QWORD *v7; // x8
  unsigned __int64 v8; // x21
  _BYTE *v9; // x0
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 v12; // x10
  __int64 v13; // x20
  _BYTE *v14; // x22
  _BYTE *v15; // x23
  _BYTE *v16; // x0
  _QWORD *v17; // x8
  _QWORD *v18; // x9
  unsigned __int64 v19; // x20
  char v20; // [xsp+6h] [xbp-3Ah] BYREF
  char v21; // [xsp+7h] [xbp-39h] BYREF

  v4 = a1[1];
  v5 = 21 * v4 + 10;
  v6 = a2[1];
  if ( (unsigned __int64)v6 >= v5 )
  {
    if ( v6 != (_QWORD *)v5 )
    {
      v20 = 0;
      sub_10001B764(a2, 21 * v4 + 10, &v20);
    }
  }
  else
  {
    v7 = *a2;
    if ( (unsigned __int64)a2[2] < v5 )
    {
      v7 = qvector_reserve(a2, *a2, v5, 1u);
      *a2 = v7;
      v6 = a2[1];
    }
    bzero((char *)v6 + (_QWORD)v7, v5 - (_QWORD)v6);
    a2[1] = (_QWORD *)v5;
  }
  v8 = (unsigned __int64)*a2 + v5;
  v9 = pack_dq(*a2, v8, a1[1]);
  v10 = 24 * a1[1];
  if ( v10 )
  {
    v11 = 0;
    v12 = *a1;
    v13 = *a1 + v10;
    v14 = (_BYTE *)(v12 + 16);
    do
    {
      if ( (unsigned __int64)v9 < v8 )
        *v9++ = *v14;
      v15 = v14 - 16;
      v16 = pack_dq(v9, v8, *((_QWORD *)v14 - 2) - v11);
      v9 = pack_dq(v16, v8, *((_QWORD *)v14 - 1) - *((_QWORD *)v14 - 2));
      v11 = *((_QWORD *)v14 - 1);
      v14 += 24;
    }
    while ( v15 + 24 != (_BYTE *)v13 );
  }
  v17 = *a2;
  v18 = a2[1];
  v19 = v9 - (_BYTE *)*a2;
  if ( (unsigned __int64)v18 >= v19 )
  {
    if ( v18 != (_QWORD *)v19 )
    {
      v21 = 0;
      sub_10001B764(a2, v19, &v21);
    }
  }
  else
  {
    if ( (unsigned __int64)a2[2] < v19 )
    {
      v17 = qvector_reserve(a2, *a2, v19, 1u);
      *a2 = v17;
      v18 = a2[1];
    }
    bzero((char *)v18 + (_QWORD)v17, v19 - (_QWORD)v18);
    a2[1] = (_QWORD *)v19;
  }
}
