/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002BC28
// Address: 0x000000010002BC28

//----- (000000010002BC28) ----------------------------------------------------
_QWORD **__fastcall sub_10002BC28(_QWORD **result, unsigned __int64 a2, _OWORD *a3)
{
  unsigned __int64 v3; // x9
  unsigned __int64 v4; // x10
  _QWORD *v6; // x19
  unsigned __int64 v7; // x20
  _OWORD *v8; // x21
  void *v9; // x0
  void *v10; // x8
  unsigned __int64 v11; // x8
  __int64 v12; // x9
  _QWORD *v13; // x19
  unsigned __int64 v14; // x20
  void *v15; // x0
  void *v16; // x8
  unsigned __int64 v17; // x8
  __int64 v18; // x9
  __int128 v19; // [xsp+0h] [xbp-40h]

  v3 = (unsigned __int64)result[1];
  if ( v3 > a2 )
  {
LABEL_2:
    result[1] = (_QWORD *)a2;
    return result;
  }
  if ( v3 < a2 )
  {
    v4 = (unsigned __int64)result[2];
    if ( *result <= (_QWORD *)a3 && &(*result)[2 * v4] > (_QWORD *)a3 )
    {
      v19 = *a3;
      if ( v4 < a2 )
      {
        v13 = result;
        v14 = a2;
        v15 = qvector_reserve(result, *result, a2, 0x10u);
        a2 = v14;
        v16 = v15;
        result = (_QWORD **)v13;
        *v13 = v16;
        v3 = v13[1];
      }
      v17 = a2 - v3;
      if ( a2 > v3 )
      {
        v18 = 2 * v3;
        do
        {
          *(_OWORD *)&(*result)[v18] = v19;
          v18 += 2;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      if ( v4 < a2 )
      {
        v6 = result;
        v7 = a2;
        v8 = a3;
        v9 = qvector_reserve(result, *result, a2, 0x10u);
        a3 = v8;
        a2 = v7;
        v10 = v9;
        result = (_QWORD **)v6;
        *v6 = v10;
        v3 = v6[1];
      }
      v11 = a2 - v3;
      if ( a2 > v3 )
      {
        v12 = 2 * v3;
        do
        {
          *(_OWORD *)&(*result)[v12] = *a3;
          v12 += 2;
          --v11;
        }
        while ( v11 );
      }
    }
    goto LABEL_2;
  }
  return result;
}
