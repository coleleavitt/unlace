/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B148C
// Address: 0x00000000000B148C

//----- (00000000000B148C) ----------------------------------------------------
void __fastcall sub_B148C(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_B148C(a1, *a2);
    sub_B148C(a1, a2[1]);
    operator delete(a2);
  }
}
