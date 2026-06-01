/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26E64
// Address: 0x00026E64

//----- (00026E64) --------------------------------------------------------
int __fastcall sub_26E64(int a1, __int64 a2, char *s)
{
  int v4; // r1
  int v5; // r4
  size_t v6; // r0
  size_t v7; // r6
  unsigned int v8; // r7
  void *v9; // r0

  v4 = 0;
  if ( a2 == 14 )
  {
    v5 = *(_DWORD *)(a1 + 8);
    if ( s && (v6 = strlen(s)) != 0 )
    {
      v7 = v6;
      v8 = v6 + 1;
      if ( *(_DWORD *)(v5 + 8) >= v6 + 1 )
      {
        v9 = *(void **)v5;
      }
      else
      {
        v9 = qvector_reserve(v5, *(void **)v5, v8, 1u);
        *(_DWORD *)v5 = v9;
      }
      *(_DWORD *)(v5 + 4) = v8;
      memmove(v9, s, v7);
      *(_BYTE *)(*(_DWORD *)v5 + v7) = 0;
    }
    else
    {
      *(_DWORD *)(v5 + 4) = 0;
    }
    return 1;
  }
  return v4;
}
