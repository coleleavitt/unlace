/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000669A0
// Address: 0x00000001000669A0

//----- (00000001000669A0) ----------------------------------------------------
void __fastcall sub_1000669A0(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_1000669A0(a1, *a2);
    sub_1000669A0(a1, a2[1]);
    operator delete(a2);
  }
}
