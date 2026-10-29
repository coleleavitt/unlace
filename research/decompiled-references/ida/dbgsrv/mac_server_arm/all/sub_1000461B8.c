/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000461B8
// Address: 0x00000001000461B8

//----- (00000001000461B8) ----------------------------------------------------
_QWORD *__usercall sub_1000461B8@<X0>(__int64 a1@<X0>, __int64 a2@<X1>, __int64 a3@<X2>, __int64 a4@<X8>)
{
  __int64 v7; // x23
  _QWORD *result; // x0
  _QWORD *v9; // x21
  size_t v10; // x22
  void *v11; // x0

  v7 = a1 + 16;
  result = operator new(0x48u);
  v9 = result;
  *(_QWORD *)a4 = result;
  *(_QWORD *)(a4 + 8) = v7;
  *(_BYTE *)(a4 + 16) = 0;
  *result = 0;
  result[1] = a2;
  if ( *(char *)(a3 + 23) < 0 )
  {
    result = sub_100046308((_BYTE *)result + 16, *(const void **)a3, *(_QWORD *)(a3 + 8));
  }
  else
  {
    *((_OWORD *)result + 1) = *(_OWORD *)a3;
    result[4] = *(_QWORD *)(a3 + 16);
  }
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v10 = *(_QWORD *)(a3 + 32);
  if ( v10 )
  {
    v11 = qalloc_or_throw(*(_QWORD *)(a3 + 32));
    v9[5] = v11;
    v9[7] = v10;
    result = memcpy(v11, *(const void **)(a3 + 24), v10);
    v9[6] = v10;
  }
  *((_WORD *)v9 + 32) = *(_WORD *)(a3 + 48);
  *(_BYTE *)(a4 + 16) = 1;
  return result;
}
