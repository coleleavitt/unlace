/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469950
// Address: 0x0000000000469950

//----- (0000000000469950) ----------------------------------------------------
void *__fastcall sub_469950(__int64 a1, void *src, size_t n)
{
  size_t v6; // x21
  void *v7; // x4
  void *result; // x0

  v6 = n + 1;
  v7 = *(void **)a1;
  if ( n + 1 > *(_QWORD *)(a1 + 16) )
  {
    v7 = sub_491288(a1, *(void **)a1, n + 1, 1u);
    *(_QWORD *)a1 = v7;
  }
  *(_QWORD *)(a1 + 8) = v6;
  memmove(v7, src, n);
  result = *(void **)a1;
  *(_BYTE *)(*(_QWORD *)a1 + n) = 0;
  return result;
}
