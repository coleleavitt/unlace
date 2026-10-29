/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D79C
// Address: 0x0005D79C

//----- (0005D79C) --------------------------------------------------------
int __fastcall sub_5D79C(int a1, int a2, int a3)
{
  unsigned int v4; // r4
  unsigned int v6; // r3
  bool v7; // cc
  const void *v8; // r7
  void *v9; // r3

  if ( *(_BYTE *)(a2 + 17) )
  {
    if ( a1 && a2 != a1 )
    {
      v4 = *(_DWORD *)(a2 + 4);
      if ( v4 > 1 )
      {
        v8 = *(const void **)a2;
        v9 = *(void **)a1;
        if ( v4 > *(_DWORD *)(a1 + 8) )
        {
          v9 = sub_78018(a1, *(void **)a1, v4, 1u);
          *(_DWORD *)a1 = v9;
        }
        *(_DWORD *)(a1 + 4) = v4;
        memmove(v9, v8, v4 - 1);
        *(_BYTE *)(*(_DWORD *)a1 + v4 - 1) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 0;
      }
    }
    return 0;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 12);
    v7 = v6 > 0x12;
    if ( v6 != 18 )
      v7 = v6 - 10 > 1;
    if ( v7 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(30222);
    }
    return sub_5CE28(a1, a2, a3);
  }
}
// D6C20: using guessed type char under_debugger;
