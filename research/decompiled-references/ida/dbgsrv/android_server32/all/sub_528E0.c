/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_528E0
// Address: 0x000528E0

//----- (000528E0) --------------------------------------------------------
int __fastcall sub_528E0(int a1, int a2, _DWORD *a3)
{
  int result; // r0

  result = sub_51A0C(a1, a2, 0, a3);
  if ( !result )
  {
    if ( *(_DWORD *)(a1 + 32) )
      return sub_52528((char **)a1, a2);
  }
  return result;
}
