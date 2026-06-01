/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D490
// Address: 0x000000000009D490

//----- (000000000009D490) ----------------------------------------------------
_QWORD *__fastcall sub_9D490(_QWORD *result, __int64 a2)
{
  _QWORD *v3; // x19
  size_t v4; // x21
  void *v5; // x0
  size_t v6; // x21
  void *v7; // x0
  __int64 v8; // x9

  v3 = result;
  *(_OWORD *)result = *(_OWORD *)a2;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_QWORD *)(a2 + 24));
    v3[2] = v5;
    v3[4] = v4;
    result = memcpy(v5, *(const void **)(a2 + 16), v4);
    v3[3] = v4;
  }
  v3[6] = 0;
  v3[7] = 0;
  v3[5] = 0;
  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
  {
    v7 = qalloc_or_throw(*(_QWORD *)(a2 + 48));
    v3[5] = v7;
    v3[7] = v6;
    result = memcpy(v7, *(const void **)(a2 + 40), v6);
    v3[6] = v6;
  }
  v8 = *(_QWORD *)(a2 + 64);
  *((_WORD *)v3 + 36) = *(_WORD *)(a2 + 72);
  v3[8] = v8;
  return result;
}
