/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B430
// Address: 0x0001B430

//----- (0001B430) --------------------------------------------------------
void __fastcall sub_1B430(int a1, _DWORD *a2)
{
  if ( a2 )
  {
    sub_1B430(a1, *a2);
    sub_1B430(a1, a2[1]);
    operator delete(a2);
  }
}
