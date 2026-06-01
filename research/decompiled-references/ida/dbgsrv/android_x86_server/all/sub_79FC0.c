/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79FC0
// Address: 0x00079FC0

//----- (00079FC0) --------------------------------------------------------
char __cdecl sub_79FC0(int a1, int a2, char a3, char a4, int a5, int *a6)
{
  size_t v6; // ecx

  memset((void *)(a1 + 4), 0, 0x1408u);
  if ( (unsigned int)a6[1] > 1 )
    qstrncpy(a1 + 1034, *a6, 4096);
  else
    *(_BYTE *)(a1 + 1034) = 0;
  v6 = 1024;
  if ( *(_DWORD *)(a5 + 4) < 0x400u )
    v6 = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(a1 + 4) = a2;
  *(_WORD *)(a1 + 8) = v6;
  memmove((void *)(a1 + 10), *(const void **)a5, v6);
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = a4;
  return a4;
}
