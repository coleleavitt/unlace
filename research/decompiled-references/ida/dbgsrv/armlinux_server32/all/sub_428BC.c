/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428BC
// Address: 0x000428BC

//----- (000428BC) --------------------------------------------------------
int __fastcall sub_428BC(int a1, int a2)
{
  int v3; // r0
  unsigned int v4; // r5
  const void *v6; // r7
  void *v7; // r0

  if ( !a2 || *(_BYTE *)a2 != 5 )
    return sub_70B98(1532);
  if ( a1 )
  {
    v3 = sub_3F378(*(_DWORD *)(*(_DWORD *)(a2 + 8) + 28));
    if ( a1 != v3 + 32 )
    {
      v4 = *(_DWORD *)(v3 + 36);
      if ( v4 > 1 )
      {
        v6 = *(const void **)(v3 + 32);
        v7 = *(void **)a1;
        if ( v4 > *(_DWORD *)(a1 + 8) )
        {
          v7 = sub_78018(a1, *(void **)a1, v4, 1u);
          *(_DWORD *)a1 = v7;
        }
        *(_DWORD *)(a1 + 4) = v4;
        memmove(v7, v6, v4 - 1);
        *(_BYTE *)(*(_DWORD *)a1 + v4 - 1) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 0;
      }
    }
  }
  return 0;
}
