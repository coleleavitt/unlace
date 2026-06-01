/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39D58
// Address: 0x00039D58

//----- (00039D58) --------------------------------------------------------
int __fastcall sub_39D58(int a1)
{
  char *v2; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r5
  int v6; // r3
  _BYTE *v7; // r2
  _BYTE *v9; // r0
  int v10; // [sp+0h] [bp-Ch] BYREF

  v2 = (char *)sub_4BBE8(*(_DWORD **)(*(_DWORD *)(a1 + 64) + 16), &v10, nullptr, 0);
  sub_391C0(a1, v2, v10);
  *(_DWORD *)(*(_DWORD *)(a1 + 108) + 12) = *(_DWORD *)(a1 + 84);
  v3 = *(_DWORD *)(a1 + 108);
  if ( *(_DWORD *)(a1 + 124) == 2 && *(_DWORD *)(v3 + 12) != 1 )
    return sub_70B98(1585);
  v4 = *(_DWORD *)(v3 + 36);
  if ( v4 && v4 + *(_DWORD *)(a1 + 244) != *(_DWORD *)(v3 + 12) )
    return sub_70B98(1268);
  v5 = *(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 120) = -91;
  v6 = *(_DWORD *)(v5 + 4);
  if ( (unsigned int)(v6 + 1) > *(_DWORD *)(v5 + 8) )
  {
    v9 = sub_78018(v5, *(void **)v5, v6 + 1, 1u);
    v6 = *(_DWORD *)(v5 + 4);
    v7 = v9;
    *(_DWORD *)v5 = v9;
  }
  else
  {
    v7 = *(_BYTE **)v5;
  }
  v7[v6] = -91;
  ++*(_DWORD *)(v5 + 4);
  ++*(_DWORD *)(a1 + 116);
  sub_39CA8(a1, 0);
  return 0;
}
