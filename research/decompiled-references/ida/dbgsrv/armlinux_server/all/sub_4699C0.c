/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4699C0
// Address: 0x00000000004699C0

//----- (00000000004699C0) ----------------------------------------------------
_QWORD *__fastcall sub_4699C0(_QWORD *a1, __int64 a2)
{
  size_t v3; // x19
  void *v5; // x0

  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v5 = sub_491248(*(_QWORD *)(a2 + 8));
    *a1 = v5;
    a1[2] = v3;
    memcpy(v5, *(const void **)a2, v3);
    a1[1] = v3;
  }
  return a1;
}
