/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AE24
// Address: 0x000000000005AE24

//----- (000000000005AE24) ----------------------------------------------------
_QWORD *__fastcall sub_5AE24(_QWORD *result, __int64 *a2)
{
  __int64 v2; // x22
  _QWORD *v3; // x19
  unsigned __int64 v5; // x23
  __int64 v6; // x24
  __int64 v7; // x27
  _QWORD *v8; // x25
  __int64 v9; // x26
  size_t v10; // x21
  void *v11; // x0
  __int64 v12; // x9

  result[1] = 0;
  result[2] = 0;
  *result = 0;
  v2 = a2[1];
  if ( v2 )
  {
    v3 = result;
    result = qalloc_or_throw(40 * v2);
    v5 = 0;
    v6 = 1;
    *v3 = result;
    v3[2] = v2;
    while ( 1 )
    {
      v7 = *a2;
      v8 = &result[v5 / 8];
      v8[1] = 0;
      v8[2] = 0;
      *v8 = 0;
      v9 = v7 + v5;
      v10 = *(_QWORD *)(v7 + v5 + 8);
      if ( v10 )
      {
        v11 = qalloc_or_throw(*(_QWORD *)(v7 + v5 + 8));
        *v8 = v11;
        v8[2] = v10;
        result = memcpy(v11, *(const void **)(v7 + v5), v10);
        v8[1] = v10;
      }
      v12 = *(_QWORD *)(v9 + 24);
      *(_QWORD *)((char *)v8 + 29) = *(_QWORD *)(v9 + 29);
      v8[3] = v12;
      if ( v2 == v6 )
        break;
      result = (_QWORD *)*v3;
      ++v6;
      v5 += 40LL;
    }
    v3[1] = v2;
  }
  return result;
}
