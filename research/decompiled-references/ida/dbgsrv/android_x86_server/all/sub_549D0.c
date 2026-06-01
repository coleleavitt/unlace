/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_549D0
// Address: 0x000549D0

//----- (000549D0) --------------------------------------------------------
int __cdecl sub_549D0(char *s, char *a2)
{
  int result; // eax
  int v3; // edx
  char v4; // cl

  result = strlen(s);
  if ( result <= 0 || s[result - 1] != 4 )
  {
    v4 = 0;
    if ( !a2 )
      return result;
    goto LABEL_8;
  }
  do
  {
    v3 = result;
    if ( result < 2 )
      break;
    --result;
  }
  while ( s[v3 - 2] == 4 );
  v4 = 1;
  result = v3 - 1;
  if ( a2 )
LABEL_8:
    *a2 = v4;
  return result;
}
