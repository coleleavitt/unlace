/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9BE20
// Address: 0x0009BE20

//----- (0009BE20) --------------------------------------------------------
char *__cdecl sub_9BE20(int a1)
{
  int v1; // edx

  v1 = 0;
  if ( a1 <= 31 )
    v1 = a1;
  return off_139258[v1];
}
// 139258: using guessed type char *off_139258[33];
