/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001ACF0
// Address: 0x000000010001ACF0

//----- (000000010001ACF0) ----------------------------------------------------
_QWORD **__fastcall sub_10001ACF0(_QWORD **result, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // x9
  unsigned __int64 v4; // x10
  _QWORD *v6; // x19
  unsigned __int64 v7; // x20
  _QWORD *v8; // x21
  void *v9; // x0
  void *v10; // x8
  __int64 v11; // x8
  __int64 v12; // x21
  _QWORD *v13; // x19
  unsigned __int64 v14; // x20
  void *v15; // x0
  void *v16; // x8

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
    if ( *result <= a3 && &(*result)[v4] > a3 )
    {
      v12 = *a3;
      if ( v4 < a2 )
      {
        v13 = result;
        v14 = a2;
        v15 = qvector_reserve(result, *result, a2, 8u);
        a2 = v14;
        v16 = v15;
        result = (_QWORD **)v13;
        *v13 = v16;
        v3 = v13[1];
      }
      if ( v3 < a2 )
      {
        do
          (*result)[v3++] = v12;
        while ( a2 != v3 );
      }
    }
    else
    {
      if ( v4 < a2 )
      {
        v6 = result;
        v7 = a2;
        v8 = a3;
        v9 = qvector_reserve(result, *result, a2, 8u);
        a3 = v8;
        a2 = v7;
        v10 = v9;
        result = (_QWORD **)v6;
        *v6 = v10;
        v3 = v6[1];
      }
      if ( v3 < a2 )
      {
        v11 = *a3;
        do
          (*result)[v3++] = v11;
        while ( a2 != v3 );
      }
    }
    goto LABEL_2;
  }
  return result;
}
