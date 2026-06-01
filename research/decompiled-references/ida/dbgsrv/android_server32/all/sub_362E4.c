/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_362E4
// Address: 0x000362E4

//----- (000362E4) --------------------------------------------------------
int __fastcall sub_362E4(int a1, int a2, int a3, int a4)
{
  int v7; // r7
  int v8; // r1
  char *v9; // r0
  char *v10; // r1
  int result; // r0

  v7 = *(_DWORD *)(a1 + 8);
  v8 = *(_DWORD *)(v7 + 4);
  if ( *(_DWORD *)(v7 + 8) >= (unsigned int)(v8 + 1) )
  {
    v9 = *(char **)v7;
  }
  else
  {
    v9 = (char *)qvector_reserve(v7, *(void **)v7, v8 + 1, 0x18u);
    *(_DWORD *)v7 = v9;
    v8 = *(_DWORD *)(v7 + 4);
  }
  v10 = &v9[24 * v8];
  *((_DWORD *)v10 + 3) = 0;
  *((_DWORD *)v10 + 2) = 0;
  *((_DWORD *)v10 + 4) = 0;
  ++*(_DWORD *)(v7 + 4);
  *(_DWORD *)v10 = a3;
  *((_DWORD *)v10 + 1) = a4;
  *((_WORD *)v10 + 10) = *(_WORD *)(a2 + 2);
  result = *(unsigned __int16 *)(a2 + 4);
  *((_WORD *)v10 + 11) = result;
  return result;
}
