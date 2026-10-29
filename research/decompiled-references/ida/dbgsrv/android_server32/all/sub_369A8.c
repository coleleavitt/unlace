/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_369A8
// Address: 0x000369A8

//----- (000369A8) --------------------------------------------------------
void __fastcall sub_369A8(int a1, _DWORD *a2)
{
  if ( a2 )
  {
    sub_369A8(a1, *a2);
    sub_369A8(a1, a2[1]);
    operator delete(a2);
  }
}
