/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38C60
// Address: 0x00038C60

//----- (00038C60) --------------------------------------------------------
int __fastcall sub_38C60(int a1)
{
  int v2; // r5
  char v3; // r6
  int v4; // r3
  _BYTE *v5; // r0
  int v6; // r3
  int v7; // r5
  int v8; // r3
  _BYTE *v9; // r2
  _BYTE *v11; // r0

  v2 = *(_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 124) == 1 )
    v3 = 112;
  else
    v3 = -32;
  *(_BYTE *)(a1 + 120) = v3;
  v4 = *(_DWORD *)(v2 + 4);
  if ( (unsigned int)(v4 + 1) > *(_DWORD *)(v2 + 8) )
  {
    v5 = sub_78018(v2, *(void **)v2, v4 + 1, 1u);
    v4 = *(_DWORD *)(v2 + 4);
    *(_DWORD *)v2 = v5;
  }
  else
  {
    v5 = *(_BYTE **)v2;
  }
  v5[v4] = v3;
  ++*(_DWORD *)(v2 + 4);
  v6 = *(_DWORD *)(a1 + 116);
  v7 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -81;
  *(_DWORD *)(a1 + 116) = v6 + 1;
  v8 = *(_DWORD *)(v7 + 4);
  if ( (unsigned int)(v8 + 1) > *(_DWORD *)(v7 + 8) )
  {
    v11 = sub_78018(v7, *(void **)v7, v8 + 1, 1u);
    v8 = *(_DWORD *)(v7 + 4);
    v9 = v11;
    *(_DWORD *)v7 = v11;
  }
  else
  {
    v9 = *(_BYTE **)v7;
  }
  v9[v8] = -81;
  ++*(_DWORD *)(v7 + 4);
  ++*(_DWORD *)(a1 + 116);
  return 0;
}
