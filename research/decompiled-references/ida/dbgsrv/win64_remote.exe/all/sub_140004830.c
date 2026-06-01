/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140004830
// Address: 0x0000000140004830

//----- (0000000140004830) ----------------------------------------------------
__int64 __fastcall sub_140004830(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v5; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  v5 = v2 - 1;
  if ( !v2 )
    v5 = 0;
  if ( (unsigned __int64)(v5 + 2) > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v5 + 2, 1u);
  *(_QWORD *)(a1 + 8) = v5 + 2;
  *(_BYTE *)(v5 + *(_QWORD *)a1) = a2;
  *(_BYTE *)(*(_QWORD *)a1 + v5 + 1) = 0;
  return a1;
}
