/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4684E8
// Address: 0x00000000004684E8

//----- (00000000004684E8) ----------------------------------------------------
void *__fastcall sub_4684E8(__int64 a1, unsigned __int64 a2)
{
  char *v4; // x4
  void *result; // x0

  v4 = *(char **)a1;
  if ( *(_QWORD *)(a1 + 16) < a2 )
  {
    v4 = (char *)sub_491288(a1, *(void **)a1, a2, 1u);
    *(_QWORD *)a1 = v4;
  }
  result = memset(&v4[*(_QWORD *)(a1 + 8)], 0, a2 - *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
