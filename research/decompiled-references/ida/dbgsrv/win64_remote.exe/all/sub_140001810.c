/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140001810
// Address: 0x0000000140001810

//----- (0000000140001810) ----------------------------------------------------
void *__fastcall sub_140001810(__int64 a1, const void *a2, size_t a3)
{
  size_t v3; // rsi
  void *result; // rax

  v3 = a3 + 1;
  if ( a3 + 1 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, a3 + 1, 1u);
  *(_QWORD *)(a1 + 8) = v3;
  memcpy(*(void **)a1, a2, a3);
  result = *(void **)a1;
  *(_BYTE *)(a3 + *(_QWORD *)a1) = 0;
  return result;
}
