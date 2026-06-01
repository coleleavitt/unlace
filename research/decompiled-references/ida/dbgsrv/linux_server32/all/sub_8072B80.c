/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072B80
// Address: 0x08072B80

//----- (08072B80) --------------------------------------------------------
int __cdecl sub_8072B80(int a1, int a2)
{
  char *v2; // eax

  if ( *(_DWORD *)(a1 + 8) )
    v2 = *(char **)(a1 + 4);
  else
    v2 = (char *)&dword_80DDFD8;
  *(_DWORD *)(a2 + 4) = sub_80CF0E0(v2);
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
