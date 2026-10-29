/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46C33C
// Address: 0x0046C33C

//----- (0046C33C) --------------------------------------------------------
int __cdecl sub_46C33C(int a1, int a2)
{
  int result; // eax

  result = a2;
  while ( *(_DWORD *)(result + 4) != a1 )
  {
    result += 12;
    if ( result == a2 + 144 )
      return 0;
  }
  return result;
}
