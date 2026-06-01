/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001A7E0
// Address: 0x000000014001A7E0

//----- (000000014001A7E0) ----------------------------------------------------
unsigned __int64 __fastcall sub_14001A7E0(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  unsigned __int64 result; // rax

  if ( a2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, a2, 1u);
  for ( result = *(_QWORD *)(a1 + 8); result < a2; ++result )
    *(_BYTE *)(result + *(_QWORD *)a1) = *a3;
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
