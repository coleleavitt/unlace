/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009004
// Address: 0x0000000100009004

//----- (0000000100009004) ----------------------------------------------------
void __fastcall sub_100009004(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_100009004(a1, *a2);
    sub_100009004(a1, a2[1]);
    operator delete(a2);
  }
}
