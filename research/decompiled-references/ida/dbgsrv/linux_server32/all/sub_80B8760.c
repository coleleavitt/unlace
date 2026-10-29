/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B8760
// Address: 0x080B8760

//----- (080B8760) --------------------------------------------------------
unsigned int __cdecl sub_80B8760(int a1, unsigned int *a2)
{
  const char *v2; // ebp
  unsigned int result; // eax
  size_t v4; // esi
  unsigned int v5; // edx
  void *v6; // eax
  unsigned int v7; // [esp+0h] [ebp-20h]

  *(_DWORD *)a1 = sub_80CDEC0(a2, a2[1]);
  *(_BYTE *)(a1 + 4) = sub_80CDEC0(a2, a2[1]) != 0;
  *(_DWORD *)(a1 + 8) = sub_80CE010(a2, a2[1]) - 1;
  v2 = (const char *)*a2;
  result = *a2;
  do
  {
    if ( result >= a2[1] )
      goto LABEL_4;
    ++result;
  }
  while ( *(_BYTE *)(result - 1) );
  *a2 = result;
  if ( !v2 || (result = strlen(v2), (v4 = result) == 0) )
  {
LABEL_4:
    *(_DWORD *)(a1 + 16) = 0;
    return result;
  }
  v5 = result + 1;
  v6 = *(void **)(a1 + 12);
  if ( *(_DWORD *)(a1 + 20) < v5 )
  {
    v7 = v5;
    v6 = sub_80CF920(a1 + 12, v6, v5, 1u);
    v5 = v7;
    *(_DWORD *)(a1 + 12) = v6;
  }
  *(_DWORD *)(a1 + 16) = v5;
  memmove(v6, v2, v4);
  result = *(_DWORD *)(a1 + 12);
  *(_BYTE *)(result + v4) = 0;
  return result;
}
