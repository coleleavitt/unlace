/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B450
// Address: 0x0001B450

//----- (0001B450) --------------------------------------------------------
void __fastcall sub_1B450(int a1, _DWORD *a2)
{
  if ( a2 )
  {
    sub_1B450(a1, *a2);
    sub_1B450(a1, a2[1]);
    operator delete(a2);
  }
}
