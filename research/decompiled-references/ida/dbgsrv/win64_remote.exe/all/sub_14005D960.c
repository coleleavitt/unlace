/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005D960
// Address: 0x000000014005D960

//----- (000000014005D960) ----------------------------------------------------
unsigned __int64 __fastcall sub_14005D960(__int64 a1, unsigned __int64 a2, _WORD *a3)
{
  unsigned __int64 result; // rax

  if ( a2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, a2, 2u);
  for ( result = *(_QWORD *)(a1 + 8); result < a2; ++result )
    *(_WORD *)(*(_QWORD *)a1 + 2 * result) = *a3;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
