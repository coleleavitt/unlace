/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26F18
// Address: 0x00026F18

//----- (00026F18) --------------------------------------------------------
int __fastcall sub_26F18(int a1, const char *a2, int a3)
{
  _BYTE *v5; // r0
  unsigned int v6; // r0
  unsigned int v7; // r6
  _BYTE *v8; // r0

  v5 = *(_BYTE **)a1;
  if ( v5 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v5);
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 0;
  }
  v6 = qvsnprintf(nullptr, 0, a2, a3);
  if ( v6 )
  {
    v7 = v6 + 1;
    if ( *(_DWORD *)(a1 + 8) >= v6 + 1 )
    {
      v8 = *(_BYTE **)a1;
    }
    else
    {
      v8 = qvector_reserve(a1, *(void **)a1, v7, 1u);
      *(_DWORD *)a1 = v8;
    }
    *(_DWORD *)(a1 + 4) = v7;
    qvsnprintf(v8, v7, a2, a3);
  }
  return a1;
}
