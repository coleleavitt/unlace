/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF230
// Address: 0x00000000000BF230

//----- (00000000000BF230) ----------------------------------------------------
size_t __fastcall sub_BF230(__int64 a1, unsigned __int64 a2, void *a3, size_t a4)
{
  unsigned __int64 v4; // rbx
  size_t v5; // rbx

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 < a2 )
    a2 = *(_QWORD *)(a1 + 8);
  v5 = v4 - a2;
  if ( v5 >= a4 )
    v5 = a4;
  memcpy(a3, (const void *)(*(_QWORD *)(a1 + 24) + a2), v5);
  return v5;
}
