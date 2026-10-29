/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072AE0
// Address: 0x08072AE0

//----- (08072AE0) --------------------------------------------------------
int __cdecl sub_8072AE0(_DWORD *a1, int a2)
{
  char *v2; // edx

  if ( a1[2] )
    v2 = (char *)a1[1];
  else
    v2 = (char *)&dword_80DDFD8;
  *(_DWORD *)(a2 + 4) = sub_80CEBA0(v2, a1[6]);
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
