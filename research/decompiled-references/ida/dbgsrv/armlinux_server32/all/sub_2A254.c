/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A254
// Address: 0x0002A254

//----- (0002A254) --------------------------------------------------------
int __fastcall sub_2A254(int a1, int a2, int a3)
{
  int v3; // r3
  unsigned int v4; // r5
  unsigned int v6; // r2
  int v7; // r2

  v3 = *(_DWORD *)(a1 + 56);
  if ( *(_BYTE *)(a2 + 176) && (v4 = *(_DWORD *)(a2 + 60)) != 0 && *(_WORD *)(a2 + 404) == 1 )
  {
    v6 = *(_DWORD *)(a1 + 60);
  }
  else
  {
    if ( *(_WORD *)(a2 + 406) != 8 || *(unsigned __int16 *)(a2 + 404) != 65440 )
      goto LABEL_5;
    v6 = *(_DWORD *)(a1 + 60);
    if ( !*(_BYTE *)(a2 + 176) )
      sub_14960();
    v4 = *(_DWORD *)(a2 + 60);
  }
  if ( v4 > v6 )
  {
    v7 = *(_DWORD *)(a2 + 56) + (v6 << 6);
    if ( v7 )
    {
      a3 = *(_DWORD *)(v7 + 16);
LABEL_5:
      v3 += a3;
    }
  }
  return v3;
}
