/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_371E8
// Address: 0x000371E8

//----- (000371E8) --------------------------------------------------------
int __fastcall sub_371E8(int a1, int a2)
{
  int v2; // r3
  int v4; // r5
  int v5; // r7
  _BYTE *v6; // r0
  unsigned int v7; // r3
  _BYTE *v8; // r1
  unsigned int v9; // r5
  _BYTE *v11; // [sp+0h] [bp-10h] BYREF
  unsigned int v12; // [sp+4h] [bp-Ch]
  int v13; // [sp+8h] [bp-8h]

  v2 = 0;
  v4 = *(_DWORD *)(a1 + 32);
  v11 = nullptr;
  v12 = 0;
  v13 = 0;
  if ( v4 <= 0 )
  {
    v9 = 0;
    v8 = nullptr;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 8);
    v6 = sub_78018((int)&v11, nullptr, v4 + 1, 1u);
    v7 = v12;
    v11 = v6;
    if ( v4 + 1 > v12 )
    {
      do
      {
        v6[v7++] = v5;
        v6 = v11;
      }
      while ( v4 + 1 != v7 );
    }
    v12 = v4 + 1;
    v6[v4] = 0;
    v2 = v13;
    v8 = v11;
    v9 = v12;
  }
  *(_DWORD *)(a2 + 8) = v8;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 12) = v9;
  *(_DWORD *)(a2 + 16) = v2;
  return 0;
}
