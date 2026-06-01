/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7E804
// Address: 0x0007E804

//----- (0007E804) --------------------------------------------------------
int __fastcall sub_7E804(int a1, int a2)
{
  unsigned int v4; // r1
  unsigned int v5; // r6
  char *v6; // r0
  void *v7; // r0
  _BYTE v9[4]; // [sp+8h] [bp-8h] BYREF
  int v10; // [sp+Ch] [bp-4h]

  if ( a2 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    v5 = a2 + 1;
    if ( v4 >= a2 + 1 )
    {
      if ( v4 != a2 + 1 )
      {
        v9[0] = 0;
        sub_37884((void **)a1, a2 + 1, v9);
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8) >= v5 )
      {
        v6 = *(char **)a1;
      }
      else
      {
        v6 = (char *)qvector_reserve(a1, *(void **)a1, a2 + 1, 1u);
        *(_DWORD *)a1 = v6;
        v4 = *(_DWORD *)(a1 + 4);
      }
      memset(&v6[v4], 0, v5 - v4);
      *(_DWORD *)(a1 + 4) = v5;
    }
    *(_BYTE *)(*(_DWORD *)a1 + a2) = 0;
  }
  else
  {
    v7 = *(void **)a1;
    if ( *(_DWORD *)a1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      qfree(v7);
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)a1 = 0;
    }
  }
  return _stack_chk_guard - v10;
}
