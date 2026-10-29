/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84764
// Address: 0x00084764

//----- (00084764) --------------------------------------------------------
void __fastcall sub_84764(void *src, size_t n, int a3)
{
  size_t v5; // r5
  size_t v7; // r3
  int v8; // r7
  void *v9; // r0

  v5 = *(_DWORD *)(a3 + 8);
  v7 = n + 1 + *(_DWORD *)(a3 + 4);
  v8 = *(_DWORD *)(a3 + 12);
  if ( v7 <= v5 )
  {
    if ( v8 )
      return;
LABEL_4:
    memcpy((void *)(*(_DWORD *)a3 + *(_DWORD *)(a3 + 4)), src, n);
    *(_BYTE *)(*(_DWORD *)a3 + n + *(_DWORD *)(a3 + 4)) = v8;
    *(_DWORD *)(a3 + 4) += n;
    return;
  }
  if ( !v8 )
  {
    if ( v5 || (v5 = 2, v7 > 2) )
    {
      do
        v5 *= 2;
      while ( v7 > v5 );
    }
    v9 = realloc(*(void **)a3, v5);
    if ( !v9 )
    {
      free(*(void **)a3);
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
      *(_DWORD *)(a3 + 8) = 0;
      *(_DWORD *)(a3 + 12) = 1;
      return;
    }
    v8 = *(_DWORD *)(a3 + 12);
    *(_DWORD *)a3 = v9;
    *(_DWORD *)(a3 + 8) = v5;
    if ( !v8 )
      goto LABEL_4;
  }
}
