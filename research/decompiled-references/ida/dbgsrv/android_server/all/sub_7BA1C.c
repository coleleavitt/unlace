/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BA1C
// Address: 0x000000000007BA1C

//----- (000000000007BA1C) ----------------------------------------------------
void __fastcall sub_7BA1C(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_7BA1C(a1, *a2);
    sub_7BA1C(a1, a2[1]);
    operator delete(a2);
  }
}
