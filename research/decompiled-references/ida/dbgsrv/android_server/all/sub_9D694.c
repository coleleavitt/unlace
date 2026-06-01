/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D694
// Address: 0x000000000009D694

//----- (000000000009D694) ----------------------------------------------------
_QWORD *__fastcall sub_9D694(_QWORD *result, __int64 *a2)
{
  __int64 v2; // x21
  _QWORD *v3; // x19
  _QWORD *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x23
  __int64 v8; // x24
  __int64 v9; // x0
  __int64 v10; // x1

  result[1] = 0;
  result[2] = 0;
  *result = 0;
  v2 = a2[1];
  if ( v2 )
  {
    v3 = result;
    v5 = qalloc_or_throw(32 * v2);
    *v3 = v5;
    v3[2] = v2;
    v6 = *a2;
    *(_DWORD *)v5 = -2;
    v5[2] = 0;
    v5[3] = 0;
    v5[1] = 0;
    result = (_QWORD *)sub_98928((__int64)v5, v6);
    v7 = v2 - 1;
    if ( v2 != 1 )
    {
      v8 = 32;
      do
      {
        v9 = *v3 + v8;
        v10 = *a2 + v8;
        *(_DWORD *)v9 = -2;
        *(_QWORD *)(v9 + 16) = 0;
        *(_QWORD *)(v9 + 24) = 0;
        *(_QWORD *)(v9 + 8) = 0;
        result = (_QWORD *)sub_98928(v9, v10);
        --v7;
        v8 += 32;
      }
      while ( v7 );
    }
    v3[1] = v2;
  }
  return result;
}
