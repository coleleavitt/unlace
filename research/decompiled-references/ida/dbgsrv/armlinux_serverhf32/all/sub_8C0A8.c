/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C0A8
// Address: 0x0008C0A8

//----- (0008C0A8) --------------------------------------------------------
int __fastcall sub_8C0A8(int a1, int a2)
{
  _BYTE *v3; // r1
  _BYTE *v4; // r2
  _BYTE *v5; // t1
  _BYTE *v7; // r3
  int v8; // r0
  size_t v10; // r2
  _BYTE *v11; // r3

  v5 = *(_BYTE **)a2;
  v3 = (_BYTE *)(a2 + 8);
  v4 = v5;
  v7 = *(_BYTE **)a1;
  if ( v3 == v5 )
  {
    v10 = *(_DWORD *)(a2 + 4);
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        *v7 = *(_BYTE *)(a2 + 8);
        v7 = *(_BYTE **)a1;
      }
      else
      {
        memcpy(*(void **)a1, v3, v10);
        v7 = *(_BYTE **)a1;
      }
      v10 = *(_DWORD *)(a2 + 4);
    }
    *(_DWORD *)(a1 + 4) = v10;
    v7[v10] = 0;
    v11 = *(_BYTE **)a2;
    *(_DWORD *)(a2 + 4) = 0;
    *v11 = 0;
    return a1;
  }
  else
  {
    *(_DWORD *)a1 = v4;
    if ( v7 == (_BYTE *)(a1 + 8) )
    {
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      if ( v7 )
      {
        *(_DWORD *)(a2 + 8) = v8;
        *(_DWORD *)a2 = v7;
        *(_DWORD *)(a2 + 4) = 0;
        *v7 = 0;
        return a1;
      }
    }
    *(_DWORD *)a2 = v3;
    *(_DWORD *)(a2 + 4) = 0;
    *v3 = 0;
    return a1;
  }
}
