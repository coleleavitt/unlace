/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A5B0
// Address: 0x0041A5B0

//----- (0041A5B0) --------------------------------------------------------
int __stdcall sub_41A5B0(_DWORD *a1, int a2)
{
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // edi
  int v11; // ecx
  signed int v12; // esi
  _BYTE *v13; // edi
  int v14; // ecx
  unsigned int v16; // [esp+10h] [ebp-18h] BYREF
  int v17; // [esp+14h] [ebp-14h]
  int v18; // [esp+18h] [ebp-10h]
  int v19; // [esp+24h] [ebp-4h]
  unsigned int v20; // [esp+30h] [ebp+8h]

  v2 = a1[8];
  v3 = a1[14];
  v4 = a1[3] != 0 ? a1[3] - 1 : 0;
  if ( v2 < 0 )
  {
    v5 = v2 + 1;
    v2 = 0;
    v6 = v4 + v5;
    if ( v6 >= 0 )
      v2 = v6;
    if ( v2 > v4 )
      v2 = a1[3] != 0 ? a1[3] - 1 : 0;
  }
  if ( v3 < 0 )
  {
    v7 = v3 + 1;
    v3 = 0;
    v8 = v4 + v7;
    if ( v8 >= 0 )
      v3 = v8;
    if ( v3 > v4 )
      v3 = a1[3] != 0 ? a1[3] - 1 : 0;
  }
  v9 = 0;
  v10 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v11 = v3 - v2;
  v19 = 0;
  if ( v11 > 0 )
  {
    v12 = v4 - v2;
    if ( v12 > 0 )
    {
      if ( v11 <= v12 )
        v12 = v11;
      v20 = v2 + a1[2];
      v13 = sub_453B00((int)&v16, nullptr, v12 + 1, 1u);
      v16 = (unsigned int)v13;
      v17 = v12 + 1;
      v13[v12] = 0;
      sub_464310(v16, v20, v12);
      v9 = v17;
      v10 = v16;
    }
  }
  v14 = v18;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = v10;
  *(_DWORD *)(a2 + 12) = v9;
  *(_DWORD *)(a2 + 16) = v14;
  return 0;
}
// 41A644: conditional instruction was optimized away because esi.4>=1
