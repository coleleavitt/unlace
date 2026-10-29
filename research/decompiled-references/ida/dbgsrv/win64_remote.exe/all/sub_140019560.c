/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140019560
// Address: 0x0000000140019560

//----- (0000000140019560) ----------------------------------------------------
_QWORD *__fastcall sub_140019560(__int64 a1)
{
  unsigned __int64 v2; // r8
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 8) + 1LL;
  if ( v2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v2, 0x18u);
  result = (_QWORD *)(*(_QWORD *)a1 + 24LL * *(_QWORD *)(a1 + 8));
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  ++*(_QWORD *)(a1 + 8);
  return result;
}
