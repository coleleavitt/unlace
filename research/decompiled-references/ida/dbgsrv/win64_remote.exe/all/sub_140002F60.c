/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140002F60
// Address: 0x0000000140002F60

//----- (0000000140002F60) ----------------------------------------------------
void __fastcall sub_140002F60(__int64 a1, unsigned __int64 a2)
{
  if ( a2 <= *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 8) = a2;
  }
  else
  {
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, a2, 1u);
    *(_QWORD *)(a1 + 8) = a2;
  }
}
