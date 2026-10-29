/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DCA0
// Address: 0x0002DCA0

//----- (0002DCA0) --------------------------------------------------------
void __cdecl sub_2DCA0(_DWORD *a1, void *src, size_t n)
{
  unsigned int v3; // esi
  void *v4; // eax

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( n )
  {
    v3 = n + 1;
    if ( n == -1 )
    {
      v4 = nullptr;
    }
    else
    {
      v4 = qvector_reserve((int)a1, nullptr, v3, 1u);
      *a1 = v4;
    }
    a1[1] = v3;
    memmove(v4, src, n);
    *(_BYTE *)(*a1 + n) = 0;
  }
}
