/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C40C
// Address: 0x000000000007C40C

//----- (000000000007C40C) ----------------------------------------------------
_QWORD *__usercall sub_7C40C@<X0>(__int64 a1@<X0>, __int64 *a2@<X2>, __int64 a3@<X8>)
{
  __int64 v3; // x22
  _QWORD *result; // x0
  __int64 v7; // x22
  _QWORD *v8; // x20
  size_t v9; // x21
  void *v10; // x0

  v3 = a1 + 8;
  result = operator new(0x58u);
  *(_QWORD *)a3 = result;
  *(_QWORD *)(a3 + 8) = v3;
  *(_BYTE *)(a3 + 16) = 0;
  v7 = *a2;
  result[5] = 0;
  result[6] = 0;
  result[4] = 0;
  v8 = result;
  v9 = *(_QWORD *)(v7 + 8);
  if ( v9 )
  {
    v10 = qalloc_or_throw(*(_QWORD *)(v7 + 8));
    v8[4] = v10;
    v8[6] = v9;
    result = memcpy(v10, *(const void **)v7, v9);
    v8[5] = v9;
  }
  v8[9] = 0;
  v8[10] = 0;
  v8[8] = 0;
  *((_BYTE *)v8 + 56) = 2;
  *(_BYTE *)(a3 + 16) = 1;
  return result;
}
