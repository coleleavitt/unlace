/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38580
// Address: 0x0000000000038580

//----- (0000000000038580) ----------------------------------------------------
void __fastcall sub_38580(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_38580(a1, *a2);
    sub_38580(a1, a2[1]);
    operator delete(a2);
  }
}
