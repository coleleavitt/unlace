/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807B5A0
// Address: 0x0807B5A0

//----- (0807B5A0) --------------------------------------------------------
void __cdecl sub_807B5A0(char **a1, unsigned int a2)
{
  unsigned int v2; // edx
  char *v3; // eax

  v2 = (unsigned int)a1[1];
  if ( v2 < a2 )
  {
    v3 = *a1;
    if ( (unsigned int)a1[2] < a2 )
    {
      v3 = (char *)sub_80CF920((int)a1, v3, a2, 4u);
      v2 = (unsigned int)a1[1];
      *a1 = v3;
    }
    memset(&v3[4 * v2], 0, 4 * (a2 - v2));
    a1[1] = (char *)a2;
  }
  else if ( v2 != a2 )
  {
    a1[1] = (char *)a2;
  }
}
