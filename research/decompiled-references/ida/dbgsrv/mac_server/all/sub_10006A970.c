/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006A970
// Address: 0x000000010006A970

//----- (000000010006A970) ----------------------------------------------------
void __fastcall sub_10006A970(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_10006A970(a1, *a2);
    sub_10006A970(a1, a2[1]);
    operator delete(a2);
  }
}
