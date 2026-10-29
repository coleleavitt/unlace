/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D7F2
// Address: 0x0004D7F2

//----- (0004D7F2) --------------------------------------------------------
void __fastcall sub_4D7F2(int a1, _DWORD *a2)
{
  if ( a2 )
  {
    sub_4D7F2(a1, *a2);
    sub_4D7F2(a1, a2[1]);
    operator delete(a2);
  }
}
