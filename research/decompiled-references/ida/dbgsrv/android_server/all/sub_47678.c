/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47678
// Address: 0x0000000000047678

//----- (0000000000047678) ----------------------------------------------------
void __fastcall sub_47678(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_47678(a1, *a2);
    sub_47678(a1, a2[1]);
    sub_41960((__int64)(a2 + 5));
    operator delete(a2);
  }
}
