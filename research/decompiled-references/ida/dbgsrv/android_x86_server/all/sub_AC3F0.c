/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC3F0
// Address: 0x000AC3F0

//----- (000AC3F0) --------------------------------------------------------
size_t __cdecl sub_AC3F0(int a1, unsigned __int64 a2, void *dest, size_t n)
{
  int v4; // eax
  size_t v5; // esi

  v4 = a2;
  if ( *(_QWORD *)(a1 + 4) < a2 )
    v4 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(a1 + 4) - v4;
  if ( v5 >= n )
    v5 = n;
  memcpy(dest, (const void *)(*(_DWORD *)(a1 + 16) + v4), v5);
  return v5;
}
