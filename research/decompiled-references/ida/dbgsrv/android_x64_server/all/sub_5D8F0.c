/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D8F0
// Address: 0x000000000005D8F0

//----- (000000000005D8F0) ----------------------------------------------------
void __fastcall sub_5D8F0(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_5D8F0(a1, *a2);
    sub_5D8F0(a1, a2[1]);
    operator delete(a2);
  }
}
