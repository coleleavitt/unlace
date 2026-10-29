/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_373EE
// Address: 0x000373EE

//----- (000373EE) --------------------------------------------------------
void __fastcall sub_373EE(int a1, _DWORD *a2)
{
  if ( a2 )
  {
    sub_373EE(a1, *a2);
    sub_373EE(a1, a2[1]);
    operator delete(a2);
  }
}
