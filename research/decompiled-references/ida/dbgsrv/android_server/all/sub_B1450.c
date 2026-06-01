/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B1450
// Address: 0x00000000000B1450

//----- (00000000000B1450) ----------------------------------------------------
void __fastcall sub_B1450(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_B1450(a1, *a2);
    sub_B1450(a1, a2[1]);
    operator delete(a2);
  }
}
