/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A738
// Address: 0x0005A738

//----- (0005A738) --------------------------------------------------------
int __fastcall sub_5A738(int a1, int a2, int a3)
{
  int result; // r0
  unsigned int v5; // r6
  const void *v6; // r7
  void *v7; // r0

  if ( *(_BYTE *)(a2 + 17) )
  {
    result = 0;
    if ( a1 && a2 != a1 )
    {
      v5 = *(_DWORD *)(a2 + 4);
      if ( v5 < 2 )
      {
        result = 0;
        *(_DWORD *)(a1 + 4) = 0;
      }
      else
      {
        v6 = *(const void **)a2;
        if ( *(_DWORD *)(a1 + 8) >= v5 )
        {
          v7 = *(void **)a1;
        }
        else
        {
          v7 = qvector_reserve(a1, *(void **)a1, v5, 1u);
          *(_DWORD *)a1 = v7;
        }
        *(_DWORD *)(a1 + 4) = v5;
        memmove(v7, v6, v5 - 1);
        *(_BYTE *)(*(_DWORD *)a1 + v5 - 1) = 0;
        return 0;
      }
    }
  }
  else
  {
    if ( (unsigned int)(*(_DWORD *)(a2 + 12) - 10) >= 2 && *(_DWORD *)(a2 + 12) != 18 )
    {
      if ( !under_debugger )
        interr(30222);
      __debugbreak();
    }
    return sub_591D0(a1, a2, a3);
  }
  return result;
}
// E0550: using guessed type char under_debugger;
