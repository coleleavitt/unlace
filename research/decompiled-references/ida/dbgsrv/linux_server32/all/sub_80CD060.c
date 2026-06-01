/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD060
// Address: 0x080CD060

//----- (080CD060) --------------------------------------------------------
size_t __cdecl sub_80CD060(int a1, unsigned __int64 a2, void *dest, unsigned int a4)
{
  int v4; // edx
  size_t v5; // esi

  v4 = a2;
  v5 = a4;
  if ( *(_QWORD *)(a1 + 4) < a2 )
    v4 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 4) - v4 <= a4 )
    v5 = *(_DWORD *)(a1 + 4) - v4;
  memcpy(dest, (const void *)(*(_DWORD *)(a1 + 16) + v4), v5);
  return v5;
}
