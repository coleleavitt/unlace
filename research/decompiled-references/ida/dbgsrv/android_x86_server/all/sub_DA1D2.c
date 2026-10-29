/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DA1D2
// Address: 0x000DA1D2

//----- (000DA1D2) --------------------------------------------------------
int __usercall sub_DA1D2@<eax>(int a1@<eax>, int a2@<edx>)
{
  int result; // eax

  sub_D9F44(a1, a2);
  result = *(_DWORD *)(a2 + 180);
  if ( *(_DWORD *)(a2 + 8 * result + 4) == 6 )
  {
    *(_DWORD *)(a1 + 76) = 0;
  }
  else
  {
    result = Unwind_GetGR(a1, result);
    *(_DWORD *)(a1 + 76) = result;
  }
  return result;
}
