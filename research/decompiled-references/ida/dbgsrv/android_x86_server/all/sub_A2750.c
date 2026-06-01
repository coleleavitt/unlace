/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2750
// Address: 0x000A2750

//----- (000A2750) --------------------------------------------------------
unsigned int __cdecl sub_A2750(int a1, unsigned int a2, const void **a3)
{
  unsigned int v3; // eax
  const void **v4; // ebx
  int v5; // edi
  unsigned int v6; // ecx
  char *v7; // esi
  const void *v8; // edx
  void *v9; // eax
  const void *v11; // [esp+10h] [ebp-1Ch]
  size_t v12; // [esp+14h] [ebp-18h]
  unsigned int v13; // [esp+18h] [ebp-14h]

  if ( *(_DWORD *)(a1 + 8) < a2 )
    *(_DWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0xCu);
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 < a2 )
  {
    v4 = a3;
    v5 = 12 * v3 + 8;
    v6 = a2 - v3;
    do
    {
      v7 = *(char **)a1;
      *(_DWORD *)&v7[v5 - 8] = 0;
      *(_DWORD *)&v7[v5 - 4] = 0;
      *(_DWORD *)&v7[v5] = 0;
      v8 = v4[1];
      if ( v8 )
      {
        v11 = v4[1];
        v12 = 4 * (_DWORD)v8;
        v13 = v6;
        v9 = qalloc_or_throw(4 * (_DWORD)v8);
        *(_DWORD *)&v7[v5 - 8] = v9;
        *(_DWORD *)&v7[v5] = v11;
        memcpy(v9, *a3, v12);
        v6 = v13;
        v4 = a3;
        *(_DWORD *)&v7[v5 - 4] = v11;
      }
      v5 += 12;
      --v6;
    }
    while ( v6 );
  }
  *(_DWORD *)(a1 + 4) = a2;
  return a2;
}
