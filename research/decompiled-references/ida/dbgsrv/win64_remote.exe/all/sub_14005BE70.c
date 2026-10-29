/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005BE70
// Address: 0x000000014005BE70

//----- (000000014005BE70) ----------------------------------------------------
__int64 __fastcall sub_14005BE70(__int64 a1, __int16 a2)
{
  __int64 v2; // rax
  __int64 v5; // rsi

  v2 = *(_QWORD *)(a1 + 8);
  v5 = v2 - 1;
  if ( !v2 )
    v5 = 0;
  if ( (unsigned __int64)(v5 + 2) > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v5 + 2, 2u);
  *(_QWORD *)(a1 + 8) = v5 + 2;
  *(_WORD *)(*(_QWORD *)a1 + 2 * v5) = a2;
  *(_WORD *)(*(_QWORD *)a1 + 2 * v5 + 2) = 0;
  return a1;
}
