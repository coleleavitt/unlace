/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9510
// Address: 0x00000000000A9510

//----- (00000000000A9510) ----------------------------------------------------
void __fastcall sub_A9510(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_A9510(a1, *a2);
    sub_A9510(a1, a2[1]);
    operator delete(a2);
  }
}
