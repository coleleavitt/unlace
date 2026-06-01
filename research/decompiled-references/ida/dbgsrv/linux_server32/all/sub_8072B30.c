/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072B30
// Address: 0x08072B30

//----- (08072B30) --------------------------------------------------------
int __cdecl sub_8072B30(_DWORD *a1, int a2)
{
  char *v2; // ecx
  char *v3; // edx

  v2 = (char *)&dword_80DDFD8;
  if ( a1[7] )
    v2 = (char *)a1[6];
  v3 = (char *)&dword_80DDFD8;
  if ( a1[2] )
    v3 = (char *)a1[1];
  *(_DWORD *)(a2 + 4) = sub_80CF130(v3, v2);
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
