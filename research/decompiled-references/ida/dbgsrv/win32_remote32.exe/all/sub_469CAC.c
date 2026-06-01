/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469CAC
// Address: 0x00469CAC

//----- (00469CAC) --------------------------------------------------------
char __cdecl sub_469CAC(int *a1, char a2, int a3, _DWORD *a4)
{
  int i; // esi
  char result; // al

  for ( i = 0; i < a3; ++i )
  {
    result = sub_46B251(a1, a2, a4);
    if ( *a4 == -1 )
      break;
  }
  return result;
}
