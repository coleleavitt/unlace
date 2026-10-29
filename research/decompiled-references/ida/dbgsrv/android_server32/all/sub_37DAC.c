/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37DAC
// Address: 0x00037DAC

//----- (00037DAC) --------------------------------------------------------
int __fastcall sub_37DAC(_DWORD *a1, int a2)
{
  int v3; // r2
  unsigned int v4; // r1
  int v5; // r3
  int v6; // r2
  unsigned int v7; // r5
  unsigned int v8; // r5
  int v9; // r7
  int v10; // r3
  signed int v11; // r5
  bool v12; // cc
  int v13; // r1
  void *v14; // r6
  const void *v15; // r1
  void *v16; // r0
  const void *v18; // [sp+8h] [bp-18h]
  void *v19; // [sp+10h] [bp-10h] BYREF
  int v20; // [sp+14h] [bp-Ch]
  int v21; // [sp+18h] [bp-8h]

  v3 = a1[3];
  v4 = v3 - 1;
  if ( !v3 )
    v4 = 0;
  v5 = a1[14];
  v6 = a1[8];
  if ( v6 < 0 )
  {
    v7 = (v4 + v6 + 1) & ~((int)(v4 + v6 + 1) >> 31);
    v6 = v4;
    if ( v7 <= v4 )
      v6 = v7;
  }
  if ( v5 < 0 )
  {
    v8 = (v4 + v5 + 1) & ~((int)(v4 + v5 + 1) >> 31);
    v5 = v4;
    if ( v8 <= v4 )
      v5 = v8;
  }
  v9 = 0;
  v20 = 0;
  v19 = nullptr;
  v21 = 0;
  v10 = v5 - v6;
  if ( v10 < 1 )
  {
    v13 = 0;
    v14 = nullptr;
  }
  else
  {
    v11 = v4 - v6;
    v12 = (int)(v4 - v6) < 1;
    v13 = 0;
    v14 = nullptr;
    if ( !v12 )
    {
      v15 = (const void *)(a1[2] + v6);
      if ( v10 <= v11 )
        v11 = v10;
      v16 = nullptr;
      if ( v11 != -1 )
      {
        v18 = v15;
        v16 = qvector_reserve((int)&v19, nullptr, v11 + 1, 1u);
        v19 = v16;
        v15 = v18;
      }
      v20 = v11 + 1;
      *((_BYTE *)v16 + v11) = 0;
      memmove(v19, v15, v11);
      v9 = v21;
      v13 = v20;
      v14 = v19;
    }
  }
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 8) = v14;
  *(_DWORD *)(a2 + 12) = v13;
  *(_DWORD *)(a2 + 16) = v9;
  return 0;
}
