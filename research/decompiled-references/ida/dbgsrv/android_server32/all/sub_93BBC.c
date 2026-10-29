/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93BBC
// Address: 0x00093BBC

//----- (00093BBC) --------------------------------------------------------
void *__fastcall sub_93BBC(int a1, int a2)
{
  void *result; // r0
  size_t v4; // r2
  size_t v5; // r1
  void *v6; // r0

  result = *(void **)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = (size_t)result + a2;
  if ( v5 >= v4 )
  {
    v6 = *(void **)a1;
    if ( v5 <= 2 * v4 )
      v5 = 2 * v4;
    *(_DWORD *)(a1 + 8) = v5;
    result = realloc(v6, v5);
    *(_DWORD *)a1 = result;
  }
  return result;
}
