/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427510
// Address: 0x00427510

//----- (00427510) --------------------------------------------------------
int __cdecl sub_427510(const char *a1, char *a2)
{
  char v2; // dl
  int result; // eax

  v2 = 0;
  for ( result = strlen(a1); result > 0; v2 = 1 )
  {
    if ( a1[result - 1] != 4 )
      break;
    --result;
  }
  if ( a2 )
    *a2 = v2;
  return result;
}
