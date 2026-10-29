/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8074FB0
// Address: 0x08074FB0

//----- (08074FB0) --------------------------------------------------------
int __cdecl sub_8074FB0(_DWORD *a1)
{
  char *v1; // eax

  if ( a1[6] )
    v1 = (char *)a1[5];
  else
    v1 = (char *)&dword_80DDFD8;
  a1[25] = sub_8081090(v1, 0);
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
