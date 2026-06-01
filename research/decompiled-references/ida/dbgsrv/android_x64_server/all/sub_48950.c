/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48950
// Address: 0x0000000000048950

//----- (0000000000048950) ----------------------------------------------------
void __fastcall sub_48950(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_48950(a1, *a2);
    sub_48950(a1, a2[1]);
    sub_415E0((__int64)(a2 + 5));
    operator delete(a2);
  }
}
