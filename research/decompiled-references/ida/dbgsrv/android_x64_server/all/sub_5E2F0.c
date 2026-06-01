/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E2F0
// Address: 0x000000000005E2F0

//----- (000000000005E2F0) ----------------------------------------------------
void __fastcall sub_5E2F0(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_5E2F0(a1, *a2);
    sub_5E2F0(a1, a2[1]);
    sub_5D8F0((__int64)(a2 + 5), (_QWORD *)a2[6]);
    operator delete(a2);
  }
}
