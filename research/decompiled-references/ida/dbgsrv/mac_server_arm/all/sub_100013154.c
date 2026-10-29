/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100013154
// Address: 0x0000000100013154

//----- (0000000100013154) ----------------------------------------------------
_QWORD **__fastcall sub_100013154(_QWORD **result, _QWORD *a2)
{
  _QWORD *v2; // x19
  _QWORD **v3; // x8
  unsigned __int64 v4; // x10
  _QWORD *v6; // x9
  _QWORD *v7; // x20
  _QWORD *v8; // x8
  __int64 v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  _QWORD *v12; // x1
  _QWORD *v13; // x8
  _QWORD *v14; // x8

  v2 = result;
  v3 = (_QWORD **)*result;
  v4 = (unsigned __int64)result[2];
  if ( *result <= a2 && &(*result)[3 * v4] > a2 )
  {
    v9 = *a2;
    v10 = a2[1];
    v11 = a2[2];
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
    v12 = *result;
    v13 = result[1];
    if ( result[2] < (_QWORD *)((char *)v13 + 1) )
    {
      result = (_QWORD **)qvector_reserve(result, v12, (unsigned __int64)v13 + 1, 0x18u);
      v12 = result;
      *v2 = result;
      v13 = (_QWORD *)v2[1];
    }
    v14 = &v12[3 * (_QWORD)v13];
    *v14 = v9;
    v14[1] = v10;
    v14[2] = v11;
  }
  else
  {
    v6 = result[1];
    if ( v4 < (unsigned __int64)v6 + 1 )
    {
      v7 = a2;
      result = (_QWORD **)qvector_reserve(result, *result, (unsigned __int64)v6 + 1, 0x18u);
      a2 = v7;
      v3 = result;
      *v2 = result;
      v6 = (_QWORD *)v2[1];
    }
    v8 = &v3[3 * (_QWORD)v6];
    *v8 = *a2;
    *a2 = 0;
    v8[1] = a2[1];
    a2[1] = 0;
    v8[2] = a2[2];
    a2[2] = 0;
  }
  ++v2[1];
  return result;
}
