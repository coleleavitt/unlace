/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A63D0
// Address: 0x00000000000A63D0

//----- (00000000000A63D0) ----------------------------------------------------
void __fastcall sub_A63D0(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_A63D0(a1, *a2);
    sub_A63D0(a1, a2[1]);
    operator delete(a2);
  }
}
