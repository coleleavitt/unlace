/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C510
// Address: 0x0006C510

//----- (0006C510) --------------------------------------------------------
char __cdecl sub_6C510(int a1, char **a2)
{
  char *v2; // ecx
  char result; // al
  char **i; // esi

  v2 = *a2;
  result = 1;
  if ( *a2 )
  {
    for ( i = a2 + 2; !sub_6ADB0(a1, v2, *(i - 1), 0, 0, nullptr); i += 2 )
    {
      v2 = *i;
      if ( !v2 )
        return 1;
    }
    return 0;
  }
  return result;
}
