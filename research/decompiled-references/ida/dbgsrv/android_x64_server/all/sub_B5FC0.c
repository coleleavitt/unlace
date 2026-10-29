/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B5FC0
// Address: 0x00000000000B5FC0

//----- (00000000000B5FC0) ----------------------------------------------------
void __fastcall sub_B5FC0(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_B5FC0(a1, *a2);
    sub_B5FC0(a1, a2[1]);
    operator delete(a2);
  }
}
