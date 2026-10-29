/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46CAE6
// Address: 0x0046CAE6

//----- (0046CAE6) --------------------------------------------------------
char *__cdecl sub_46CAE6(char *a1, int a2, char a3)
{
  char v3; // al

  if ( a2 >= 10 || a3 )
    v3 = a2 / 10 + 48;
  else
    v3 = 32;
  *a1 = v3;
  a1[1] = a2 % 10 + 48;
  return a1 + 2;
}
