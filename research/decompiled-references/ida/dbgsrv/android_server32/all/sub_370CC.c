/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_370CC
// Address: 0x000370CC

//----- (000370CC) --------------------------------------------------------
void __fastcall sub_370CC(int a1, _DWORD *a2)
{
  if ( a2 )
  {
    sub_370CC(a1, *a2);
    sub_370CC(a1, a2[1]);
    sub_369A8((int)(a2 + 5), (_DWORD *)a2[6]);
    operator delete(a2);
  }
}
