/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000B52C
// Address: 0x000000010000B52C

//----- (000000010000B52C) ----------------------------------------------------
void __fastcall sub_10000B52C(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_10000B52C(a1, *a2);
    sub_10000B52C(a1, a2[1]);
    operator delete(a2);
  }
}
