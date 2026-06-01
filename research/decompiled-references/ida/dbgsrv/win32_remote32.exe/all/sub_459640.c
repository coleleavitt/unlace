/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459640
// Address: 0x00459640

//----- (00459640) --------------------------------------------------------
int __cdecl sub_459640(int a1, unsigned __int16 *a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edx

  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 || (v5 = *(_DWORD *)(a1 + 24), (v5 & 1) != 0) )
  {
    if ( a5 < 4 )
      goto LABEL_4;
    v9 = *a2;
    if ( (unsigned __int16)(v9 + 10240) <= 0x3FFu )
      v9 = (a2[1] & 0x3FF) + (((v9 & 0x3FF) + 64) << 10);
    if ( *(_DWORD *)a1 == 12000 )
    {
      *(_DWORD *)a4 = v9;
      return 4;
    }
    else
    {
      if ( *(_DWORD *)a1 == 12001 )
      {
        *(_BYTE *)a4 = HIBYTE(v9);
        *(_BYTE *)(a4 + 1) = BYTE2(v9);
        *(_BYTE *)(a4 + 3) = v9;
        *(_BYTE *)(a4 + 2) = BYTE1(v9);
      }
      return 4;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 24) = v5 | 1;
    if ( a5 < 4 )
    {
LABEL_4:
      *sub_46B984() = 7;
      return -1;
    }
    if ( *(_DWORD *)a1 == 12000 )
    {
      *(_DWORD *)a4 = 65279;
    }
    else if ( *(_DWORD *)a1 == 12001 )
    {
      *(_DWORD *)a4 = -131072;
    }
    v7 = sub_459640(a1, a2, a3, a4 + 4, a5 - 4);
    v8 = v7 + 4;
    if ( v7 == -1 )
      return -1;
    return v8;
  }
}
