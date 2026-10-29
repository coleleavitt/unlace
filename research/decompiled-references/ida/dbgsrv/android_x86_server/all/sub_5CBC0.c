/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CBC0
// Address: 0x0005CBC0

//----- (0005CBC0) --------------------------------------------------------
unsigned int __cdecl sub_5CBC0(int a1)
{
  int v1; // eax
  _BYTE *v2; // eax
  int v3; // ecx
  int v4; // ecx
  char *v5; // esi

  v1 = *(_DWORD *)(a1 + 16);
  if ( !v1 )
  {
    if ( *(_DWORD *)(a1 + 20) )
    {
      v2 = *(_BYTE **)(a1 + 12);
      v3 = 0;
    }
    else
    {
      v2 = qvector_reserve(a1 + 12, *(void **)(a1 + 12), 1u, 0x14u);
      *(_DWORD *)(a1 + 12) = v2;
      v3 = *(_DWORD *)(a1 + 16);
    }
    v4 = 5 * v3;
    v2[4 * v4] = 2;
    *(_DWORD *)&v2[4 * v4 + 16] = 0;
    *(_DWORD *)&v2[4 * v4 + 12] = 0;
    *(_DWORD *)&v2[4 * v4 + 8] = 0;
    *(_DWORD *)&v2[4 * v4 + 4] = 0;
    v1 = *(_DWORD *)(a1 + 16) + 1;
    *(_DWORD *)(a1 + 16) = v1;
  }
  v5 = (char *)(*(_DWORD *)(a1 + 12) + 20 * v1 - 20);
  sub_5CC60(v5);
  return sub_5C800(a1, (int)v5);
}
