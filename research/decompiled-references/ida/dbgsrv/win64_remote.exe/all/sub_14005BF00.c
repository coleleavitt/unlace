/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005BF00
// Address: 0x000000014005BF00

//----- (000000014005BF00) ----------------------------------------------------
void *__fastcall sub_14005BF00(__int64 a1, const void *a2, __int64 a3)
{
  __int64 v3; // rbx
  void *result; // rax

  v3 = a3 + 1;
  if ( (unsigned __int64)(a3 + 1) > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, a3 + 1, 2u);
  *(_QWORD *)(a1 + 8) = v3;
  memcpy(*(void **)a1, a2, 2 * a3);
  result = *(void **)a1;
  *(_WORD *)(2 * a3 + *(_QWORD *)a1) = 0;
  return result;
}
