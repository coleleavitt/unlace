/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_824E0
// Address: 0x000824E0

//----- (000824E0) --------------------------------------------------------
_DWORD *__fastcall sub_824E0(_DWORD *a1, int *a2)
{
  int v3; // r3

  v3 = *a2;
  if ( *(int *)(*a2 - 4) >= 0 )
  {
    sub_8244C(a2);
    v3 = *a2;
  }
  *a1 = v3;
  return a1;
}
