/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B5F80
// Address: 0x00000000000B5F80

//----- (00000000000B5F80) ----------------------------------------------------
void __fastcall sub_B5F80(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_B5F80(a1, *a2);
    sub_B5F80(a1, a2[1]);
    operator delete(a2);
  }
}
