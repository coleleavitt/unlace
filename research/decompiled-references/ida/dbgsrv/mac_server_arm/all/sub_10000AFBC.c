/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000AFBC
// Address: 0x000000010000AFBC

//----- (000000010000AFBC) ----------------------------------------------------
_QWORD *__fastcall sub_10000AFBC(_QWORD *result, __int64 a2, __int64 a3, const void **a4)
{
  __int64 v7; // x22
  _QWORD *v8; // x1
  __int64 v9; // x8
  _QWORD *v10; // x24
  _QWORD *v11; // x23
  unsigned __int64 v12; // x8
  size_t v13; // x20
  const void *v14; // x19
  _QWORD *v15; // x1

  v7 = result[11];
  v8 = *(_QWORD **)v7;
  v9 = *(_QWORD *)(v7 + 8);
  if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v9 + 1) )
  {
    result = qvector_reserve((_QWORD *)result[11], v8, v9 + 1, 0x28u);
    v8 = result;
    *(_QWORD *)v7 = result;
    v9 = *(_QWORD *)(v7 + 8);
  }
  v10 = &v8[5 * v9];
  v10[4] = 0;
  *(_OWORD *)v10 = 0u;
  *((_OWORD *)v10 + 1) = 0u;
  v11 = v10 + 2;
  ++*(_QWORD *)(v7 + 8);
  *v10 = a2;
  v10[1] = a3;
  if ( v10 + 2 != a4 )
  {
    v12 = (unsigned __int64)a4[1];
    if ( v12 )
      v13 = v12 - 1;
    else
      v13 = 0;
    if ( v12 >= 2 )
    {
      v14 = *a4;
      v15 = (_QWORD *)v10[2];
      if ( v10[4] <= v13 )
      {
        v15 = qvector_reserve(v11, v15, v13 + 1, 1u);
        *v11 = v15;
      }
      v10[3] = v13 + 1;
      result = memmove(v15, v14, v13);
      *(_BYTE *)(v10[2] + v13) = 0;
    }
    else
    {
      v10[3] = 0;
    }
  }
  return result;
}
