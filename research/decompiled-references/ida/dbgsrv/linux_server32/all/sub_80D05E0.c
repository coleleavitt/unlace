/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D05E0
// Address: 0x080D05E0

//----- (080D05E0) --------------------------------------------------------
char *__cdecl sub_80D05E0(char *a1, int a2)
{
  char *v2; // edx
  char *v3; // eax
  char v4; // bl
  char v5; // cl

  if ( a2 > 1 )
  {
    v2 = &a1[a2 - 1];
    v3 = a1;
    do
    {
      v4 = *v2;
      v5 = *v3++;
      --v2;
      *(v3 - 1) = v4;
      v2[1] = v5;
    }
    while ( v3 != &a1[(unsigned int)a2 >> 1] );
  }
  return a1;
}
