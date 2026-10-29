/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F4F8
// Address: 0x000000010005F4F8

//----- (000000010005F4F8) ----------------------------------------------------
void __fastcall sub_10005F4F8(void **a1, _QWORD **a2, void **a3, unsigned __int64 *a4)
{
  int v7; // w0
  size_t v8; // x22
  unsigned __int64 v9; // x9
  _QWORD *v10; // x8
  unsigned __int64 v11; // x1
  const void *v12; // x8
  unsigned __int64 v13; // x9
  _QWORD *v15; // x0
  int v16; // w0
  size_t v17; // x22
  unsigned __int64 v18; // x9
  _QWORD *v19; // x8
  const void *v20; // x1
  unsigned __int64 v21; // x8
  _QWORD *v22; // x0
  char v23; // [xsp+6h] [xbp-2Ah] BYREF
  char v24; // [xsp+7h] [xbp-29h] BYREF

  sub_10005F30C(a1, 1, a4);
  v7 = unpack_dd(a4, a4[1]);
  v8 = v7;
  v9 = (unsigned __int64)a2[1];
  if ( v9 >= v7 )
  {
    if ( v9 != v7 )
    {
      v23 = 0;
      sub_10001B764(a2, v7, &v23);
    }
  }
  else
  {
    v10 = *a2;
    if ( (unsigned __int64)a2[2] < v7 )
    {
      v10 = qvector_reserve(a2, *a2, v7, 1u);
      *a2 = v10;
      v9 = (unsigned __int64)a2[1];
    }
    bzero((char *)v10 + v9, v8 - v9);
    a2[1] = (_QWORD *)v8;
  }
  v12 = (const void *)*a4;
  v11 = a4[1];
  v13 = *a4 + v8;
  if ( v13 >= *a4 && v13 <= v11 )
  {
    v15 = *a2;
    *a4 = v13;
    memcpy(v15, v12, v8);
    v11 = a4[1];
  }
  a2[3] = (_QWORD *)(unpack_dq(a4, v11) - 1);
  v16 = unpack_dd(a4, a4[1]);
  v17 = v16;
  v18 = (unsigned __int64)a2[5];
  if ( v18 >= v16 )
  {
    if ( v18 != v16 )
    {
      v24 = 0;
      sub_10001B764(a2 + 4, v16, &v24);
    }
  }
  else
  {
    v19 = a2[4];
    if ( (unsigned __int64)a2[6] < v16 )
    {
      v19 = qvector_reserve(a2 + 4, a2[4], v16, 1u);
      a2[4] = v19;
      v18 = (unsigned __int64)a2[5];
    }
    bzero((char *)v19 + v18, v17 - v18);
    a2[5] = (_QWORD *)v17;
  }
  v20 = (const void *)*a4;
  v21 = *a4 + v17;
  if ( v21 >= *a4 && v21 <= a4[1] )
  {
    v22 = a2[4];
    *a4 = v21;
    memcpy(v22, v20, v17);
  }
  if ( a3 )
    sub_10005F30C(a3, 0, a4);
}
