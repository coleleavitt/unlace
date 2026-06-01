/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100073B40
// Address: 0x0000000100073B40

//----- (0000000100073B40) ----------------------------------------------------
void __fastcall sub_100073B40(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_100073B40(a1, *a2);
    sub_100073B40(a1, a2[1]);
    operator delete(a2);
  }
}
