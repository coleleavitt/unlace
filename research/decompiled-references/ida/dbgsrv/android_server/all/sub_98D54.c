/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98D54
// Address: 0x0000000000098D54

//----- (0000000000098D54) ----------------------------------------------------
_QWORD *__fastcall sub_98D54(_QWORD *result, __int64 a2)
{
  size_t v2; // x21
  _QWORD *v4; // x19
  void *v5; // x0
  size_t v6; // x21
  void *v7; // x0
  __int64 v8; // x23
  void *v9; // x0

  result[1] = 0;
  result[2] = 0;
  *result = 0;
  v2 = *(_QWORD *)(a2 + 8);
  v4 = result;
  if ( v2 )
  {
    v5 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    *v4 = v5;
    v4[2] = v2;
    result = memcpy(v5, *(const void **)a2, v2);
    v4[1] = v2;
  }
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v6 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    v7 = qalloc_or_throw(*(_QWORD *)(a2 + 32));
    v4[3] = v7;
    v4[5] = v6;
    result = memcpy(v7, *(const void **)(a2 + 24), v6);
    v4[4] = v6;
  }
  v4[7] = 0;
  v4[8] = 0;
  v4[6] = 0;
  v8 = *(_QWORD *)(a2 + 56);
  if ( v8 )
  {
    v9 = qalloc_or_throw(16 * v8);
    v4[6] = v9;
    v4[8] = v8;
    result = memcpy(v9, *(const void **)(a2 + 48), 16 * v8);
    v4[7] = v8;
  }
  *((_DWORD *)v4 + 18) = *(_DWORD *)(a2 + 72);
  return result;
}
