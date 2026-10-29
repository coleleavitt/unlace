/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A060
// Address: 0x0007A060

//----- (0007A060) --------------------------------------------------------
char __cdecl sub_7A060(int a1, int a2, char a3, char a4, int a5, int *a6)
{
  int v6; // edx
  size_t v7; // ecx

  v6 = a2;
  if ( (unsigned int)a6[1] > 1 )
  {
    qstrncpy(a1 + 1034, *a6, 4096);
    v6 = a2;
  }
  else
  {
    *(_BYTE *)(a1 + 1034) = 0;
  }
  v7 = 1024;
  if ( *(_DWORD *)(a5 + 4) < 0x400u )
    v7 = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(a1 + 4) = v6;
  *(_WORD *)(a1 + 8) = v7;
  memmove((void *)(a1 + 10), *(const void **)a5, v7);
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = a4;
  return a4;
}
