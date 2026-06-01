/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39604
// Address: 0x0000000000039604

//----- (0000000000039604) ----------------------------------------------------
void __fastcall sub_39604(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_39604(a1, *a2);
    sub_39604(a1, a2[1]);
    operator delete(a2);
  }
}
