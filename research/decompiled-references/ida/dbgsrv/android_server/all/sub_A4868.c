/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4868
// Address: 0x00000000000A4868

//----- (00000000000A4868) ----------------------------------------------------
void __fastcall sub_A4868(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_A4868(a1, *a2);
    sub_A4868(a1, a2[1]);
    operator delete(a2);
  }
}
