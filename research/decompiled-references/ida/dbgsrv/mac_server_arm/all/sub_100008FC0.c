/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008FC0
// Address: 0x0000000100008FC0

//----- (0000000100008FC0) ----------------------------------------------------
void __fastcall sub_100008FC0(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_100008FC0(a1, *a2);
    sub_100008FC0(a1, a2[1]);
    operator delete(a2);
  }
}
