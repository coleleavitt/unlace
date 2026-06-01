/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_87F30
// Address: 0x00087F30

//----- (00087F30) --------------------------------------------------------
unsigned int __cdecl sub_87F30(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // eax
  _DWORD *v4; // ecx
  unsigned int v5; // edx
  int v6; // edi
  char *v7; // esi
  void *v8; // eax
  __int64 v9; // xmm0_8
  size_t v11; // [esp+0h] [ebp-1Ch]
  unsigned int v12; // [esp+8h] [ebp-14h]

  if ( *(_DWORD *)(a1 + 8) < a2 )
    *(_DWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x24u);
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 < a2 )
  {
    v4 = (_DWORD *)a3;
    v5 = a2 - v3;
    v6 = 36 * v3 + 16;
    do
    {
      v12 = v5;
      v7 = *(char **)a1;
      *(_DWORD *)&v7[v6 - 16] = *v4;
      *(_DWORD *)&v7[v6 - 12] = 0;
      *(_DWORD *)&v7[v6 - 8] = 0;
      *(_DWORD *)&v7[v6 - 4] = 0;
      if ( v4[2] )
      {
        v11 = v4[2];
        v8 = qalloc_or_throw(v11);
        *(_DWORD *)&v7[v6 - 12] = v8;
        *(_DWORD *)&v7[v6 - 4] = v11;
        memcpy(v8, *(const void **)(a3 + 4), v11);
        v4 = (_DWORD *)a3;
        *(_DWORD *)&v7[v6 - 8] = v11;
      }
      *(_DWORD *)&v7[v6 + 16] = *(_DWORD *)(a3 + 32);
      v9 = *(_QWORD *)(a3 + 16);
      *(_QWORD *)&v7[v6 + 8] = *(_QWORD *)(a3 + 24);
      *(_QWORD *)&v7[v6] = v9;
      v6 += 36;
      v5 = v12 - 1;
    }
    while ( v12 != 1 );
  }
  *(_DWORD *)(a1 + 4) = a2;
  return a2;
}
