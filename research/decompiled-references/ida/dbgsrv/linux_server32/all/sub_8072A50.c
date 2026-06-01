/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072A50
// Address: 0x08072A50

//----- (08072A50) --------------------------------------------------------
int __cdecl sub_8072A50(int a1, int a2)
{
  const char *v2; // eax

  if ( *(_DWORD *)(a1 + 8) )
    v2 = *(const char **)(a1 + 4);
  else
    v2 = (const char *)&dword_80DDFD8;
  *(_DWORD *)(a2 + 4) = strtol(v2, nullptr, 10);
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
