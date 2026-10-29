/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E590
// Address: 0x0002E590

//----- (0002E590) --------------------------------------------------------
void __cdecl sub_2E590(int a1, void *src, size_t n)
{
  char *v3; // eax

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( n )
  {
    v3 = (char *)qvector_reserve(a1, nullptr, n, 1u);
    *(_DWORD *)a1 = v3;
    memset(&v3[*(_DWORD *)(a1 + 4)], 0, n - *(_DWORD *)(a1 + 4));
    *(_DWORD *)(a1 + 4) = n;
    memcpy(*(void **)a1, src, n);
  }
}
