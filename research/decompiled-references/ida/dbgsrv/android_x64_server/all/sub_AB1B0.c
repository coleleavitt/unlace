/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB1B0
// Address: 0x00000000000AB1B0

//----- (00000000000AB1B0) ----------------------------------------------------
void __fastcall sub_AB1B0(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_AB1B0(a1, *a2);
    sub_AB1B0(a1, a2[1]);
    operator delete(a2);
  }
}
