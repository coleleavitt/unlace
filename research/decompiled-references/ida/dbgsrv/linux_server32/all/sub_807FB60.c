/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807FB60
// Address: 0x0807FB60

//----- (0807FB60) --------------------------------------------------------
int __cdecl sub_807FB60(int *a1, int a2, int a3)
{
  int result; // eax

  if ( a1[1] - a2 <= 3 )
    sub_807E130();
  result = *a1;
  *(_DWORD *)(*a1 + a2) = a3;
  return result;
}
