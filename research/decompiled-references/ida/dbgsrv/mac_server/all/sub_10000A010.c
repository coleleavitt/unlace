/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000A010
// Address: 0x000000010000A010

//----- (000000010000A010) ----------------------------------------------------
void __fastcall sub_10000A010(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_10000A010(a1, *a2);
    sub_10000A010(a1, a2[1]);
    operator delete(a2);
  }
}
