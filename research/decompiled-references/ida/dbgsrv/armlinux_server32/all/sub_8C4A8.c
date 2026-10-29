/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C4A8
// Address: 0x0008C4A8

//----- (0008C4A8) --------------------------------------------------------
int __fastcall sub_8C4A8(int a1, int a2)
{
  _BYTE *v3; // r1
  _BYTE *v4; // r2
  _BYTE *v6; // r3
  int v7; // r0
  size_t v9; // r2
  _BYTE *v10; // r3

  v4 = (_BYTE *)(a2 + 8);
  v3 = *(_BYTE **)a2;
  v6 = *(_BYTE **)a1;
  if ( v3 == v4 )
  {
    v9 = *(_DWORD *)(a2 + 4);
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        *v6 = *(_BYTE *)(a2 + 8);
        v9 = *(_DWORD *)(a2 + 4);
        v6 = *(_BYTE **)a1;
      }
      else
      {
        memcpy(*(void **)a1, v3, v9);
        v9 = *(_DWORD *)(a2 + 4);
        v6 = *(_BYTE **)a1;
      }
    }
    *(_DWORD *)(a1 + 4) = v9;
    v6[v9] = 0;
    v10 = *(_BYTE **)a2;
    *(_DWORD *)(a2 + 4) = 0;
    *v10 = 0;
    return a1;
  }
  else
  {
    *(_DWORD *)a1 = v3;
    if ( v6 == (_BYTE *)(a1 + 8) )
    {
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      if ( v6 )
      {
        *(_DWORD *)(a2 + 8) = v7;
        *(_DWORD *)a2 = v6;
        *(_DWORD *)(a2 + 4) = 0;
        *v6 = 0;
        return a1;
      }
    }
    *(_DWORD *)a2 = v4;
    *(_DWORD *)(a2 + 4) = 0;
    *v4 = 0;
    return a1;
  }
}
