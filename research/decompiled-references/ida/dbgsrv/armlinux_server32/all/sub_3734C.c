/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3734C
// Address: 0x0003734C

//----- (0003734C) --------------------------------------------------------
int __fastcall sub_3734C(_DWORD *a1, int a2)
{
  unsigned int v3; // r3
  int v4; // r7
  int v5; // r2
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r8
  size_t v10; // r6
  const void *v11; // r7
  void *v12; // r2
  int v13; // r6
  void *dest; // [sp+0h] [bp-10h] BYREF
  int v16; // [sp+4h] [bp-Ch]
  int v17; // [sp+8h] [bp-8h]

  v3 = a1[3];
  if ( v3 )
    --v3;
  v4 = a1[8];
  v5 = a1[14];
  if ( v4 < 0 )
  {
    v4 += 1 + v3;
    if ( v4 >= 0 )
    {
      if ( v4 >= v3 )
        v4 = v3;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( v5 < 0 )
  {
    v5 += 1 + v3;
    if ( v5 >= 0 )
    {
      if ( v5 >= v3 )
        v5 = v3;
    }
    else
    {
      v5 = 0;
    }
  }
  v6 = 0;
  v7 = v5 - v4;
  dest = nullptr;
  v16 = 0;
  v17 = 0;
  if ( v7 <= 0 || (v8 = v3 - v4, v8 <= 0) )
  {
    v13 = 0;
    v12 = nullptr;
  }
  else
  {
    if ( v7 >= v8 )
      v7 = v8;
    v9 = v7 + 1;
    v10 = v7;
    v11 = (const void *)(v4 + a1[2]);
    dest = sub_78018((int)&dest, nullptr, v7 + 1, 1u);
    v16 = v9;
    *((_BYTE *)dest + v10) = 0;
    memmove(dest, v11, v10);
    v12 = dest;
    v13 = v16;
    v6 = v17;
  }
  *(_DWORD *)(a2 + 8) = v12;
  *(_BYTE *)a2 = 7;
  *(_DWORD *)(a2 + 12) = v13;
  *(_DWORD *)(a2 + 16) = v6;
  return 0;
}
