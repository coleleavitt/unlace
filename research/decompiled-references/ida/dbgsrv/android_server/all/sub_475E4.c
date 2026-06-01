/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475E4
// Address: 0x00000000000475E4

//----- (00000000000475E4) ----------------------------------------------------
void __fastcall sub_475E4(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_475E4(a1, *a2);
    sub_475E4(a1, a2[1]);
    operator delete(a2);
  }
}
