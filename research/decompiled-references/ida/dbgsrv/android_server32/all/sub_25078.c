/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_25078
// Address: 0x00025078

//----- (00025078) --------------------------------------------------------
void __fastcall sub_25078(int a1, _DWORD *a2)
{
  if ( a2 )
  {
    sub_25078(a1, *a2);
    sub_25078(a1, a2[1]);
    operator delete(a2);
  }
}
