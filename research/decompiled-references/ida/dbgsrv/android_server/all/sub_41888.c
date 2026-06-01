/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41888
// Address: 0x0000000000041888

//----- (0000000000041888) ----------------------------------------------------
_QWORD *__fastcall sub_41888(_QWORD *result, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  size_t v5; // x22
  _QWORD *v6; // x19
  void *v9; // x0
  size_t v10; // x21
  void *v11; // x0
  _QWORD *v12; // x19

  *result = a2;
  result[1] = a3;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  v5 = *(_QWORD *)(a4 + 8);
  v6 = result;
  if ( v5 )
  {
    v9 = qalloc_or_throw(*(_QWORD *)(a4 + 8));
    v6[2] = v9;
    v6[4] = v5;
    result = memcpy(v9, *(const void **)a4, v5);
    v6[3] = v5;
  }
  v6[6] = 0;
  v6[7] = 0;
  v6[5] = 0;
  v10 = *(_QWORD *)(a5 + 8);
  if ( v10 )
  {
    v11 = qalloc_or_throw(*(_QWORD *)(a5 + 8));
    v6[5] = v11;
    v6[7] = v10;
    result = memcpy(v11, *(const void **)a5, v10);
    v6[6] = v10;
  }
  v6[9] = 0;
  v12 = v6 + 9;
  v12[1] = 0;
  v12[2] = 0;
  *(v12 - 1) = v12;
  v12[6] = 0;
  v12[7] = 0;
  v12[4] = 0;
  v12[5] = 0;
  v12[3] = 0;
  *((_DWORD *)v12 + 16) = 0;
  return result;
}
