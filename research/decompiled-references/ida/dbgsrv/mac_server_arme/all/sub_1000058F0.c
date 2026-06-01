/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000058F0
// Address: 0x00000001000058F0

//----- (00000001000058F0) ----------------------------------------------------
_QWORD **__fastcall sub_1000058F0(_QWORD **result, _QWORD *a2)
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
  __int64 v12; // x23
  __int64 v13; // x24
  __int64 v14; // x25
  __int64 v15; // x26
  _QWORD *v16; // x1
  _QWORD *v17; // x8
  _QWORD *v18; // x8

  v2 = result;
  v3 = (_QWORD **)*result;
  v4 = (unsigned __int64)result[2];
  if ( *result <= a2 && &(*result)[7 * v4] > a2 )
  {
    v9 = *a2;
    v10 = a2[1];
    a2[1] = 0;
    v11 = a2[2];
    v12 = a2[3];
    *((_OWORD *)a2 + 1) = 0u;
    v13 = a2[4];
    v14 = a2[5];
    a2[4] = 0;
    v15 = a2[6];
    *(_OWORD *)(a2 + 5) = 0u;
    v16 = *result;
    v17 = result[1];
    if ( result[2] < (_QWORD *)((char *)v17 + 1) )
    {
      result = (_QWORD **)qvector_reserve(result, v16, (unsigned __int64)v17 + 1, 0x38u);
      v16 = result;
      *v2 = result;
      v17 = (_QWORD *)v2[1];
    }
    v18 = &v16[7 * (_QWORD)v17];
    *v18 = v9;
    v18[1] = v10;
    v18[2] = v11;
    v18[3] = v12;
    v18[4] = v13;
    v18[5] = v14;
    v18[6] = v15;
  }
  else
  {
    v6 = result[1];
    if ( v4 < (unsigned __int64)v6 + 1 )
    {
      v7 = a2;
      result = (_QWORD **)qvector_reserve(result, *result, (unsigned __int64)v6 + 1, 0x38u);
      a2 = v7;
      v3 = result;
      *v2 = result;
      v6 = (_QWORD *)v2[1];
    }
    v8 = &v3[7 * (_QWORD)v6];
    *v8 = *a2;
    v8[1] = a2[1];
    a2[1] = 0;
    v8[2] = a2[2];
    a2[2] = 0;
    v8[3] = a2[3];
    a2[3] = 0;
    v8[4] = a2[4];
    a2[4] = 0;
    v8[5] = a2[5];
    a2[5] = 0;
    v8[6] = a2[6];
    a2[6] = 0;
  }
  ++v2[1];
  return result;
}
