/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_250CA
// Address: 0x000250CA

//----- (000250CA) --------------------------------------------------------
void __fastcall sub_250CA(int a1, _DWORD *a2)
{
  if ( a2 )
  {
    sub_250CA(a1, *a2);
    sub_250CA(a1, a2[1]);
    sub_21464((int)(a2 + 5));
    operator delete(a2);
  }
}
