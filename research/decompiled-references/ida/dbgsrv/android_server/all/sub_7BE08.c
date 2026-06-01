/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BE08
// Address: 0x000000000007BE08

//----- (000000000007BE08) ----------------------------------------------------
__int64 __fastcall sub_7BE08(__int64 a1, __int64 a2)
{
  size_t v2; // x21
  void *v5; // x0

  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = 0;
  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v5 = qalloc_or_throw(*(_QWORD *)(a2 + 8));
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 16) = v2;
    memcpy(v5, *(const void **)a2, v2);
    *(_QWORD *)(a1 + 8) = v2;
  }
  *(_BYTE *)(a1 + 24) = 2;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  return copy_idcv((unsigned __int8 *)(a1 + 24), (unsigned __int8 *)(a2 + 24));
}
