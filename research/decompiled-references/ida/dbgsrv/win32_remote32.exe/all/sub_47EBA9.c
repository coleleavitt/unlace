/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47EBA9
// Address: 0x0047EBA9

//----- (0047EBA9) --------------------------------------------------------
unsigned int __cdecl sub_47EBA9(int a1, int a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  __int16 v5; // ax
  int v6; // ecx
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  unsigned int v19; // [esp+4h] [ebp-Ch]
  __int16 v20; // [esp+8h] [ebp-8h]

  v2 = 16 * (v20 & 1);
  if ( (v20 & 4) != 0 )
    v2 |= 8u;
  if ( (v20 & 8) != 0 )
    v2 |= 4u;
  if ( (v20 & 0x10) != 0 )
    v2 |= 2u;
  if ( (v20 & 0x20) != 0 )
    v2 |= 1u;
  if ( (v20 & 2) != 0 )
    v2 |= 0x80000u;
  v3 = v20 & 0xC00;
  if ( (v20 & 0xC00) != 0 )
  {
    switch ( v3 )
    {
      case 1024:
        v2 |= 0x100u;
        break;
      case 2048:
        v2 |= 0x200u;
        break;
      case 3072:
        v2 |= 0x300u;
        break;
    }
  }
  if ( (v20 & 0x300) != 0 )
  {
    if ( (v20 & 0x300) == 0x200 )
      v2 |= 0x10000u;
  }
  else
  {
    v2 |= 0x20000u;
  }
  if ( (v20 & 0x1000) != 0 )
    v2 |= 0x40000u;
  v4 = a2 & a1 | v2 & ~a2;
  if ( v4 != v2 )
  {
    v5 = sub_47EEAA(a2 & a1 | v2 & ~a2);
    v4 = 16 * (v5 & 1);
    if ( (v5 & 4) != 0 )
      v4 |= 8u;
    if ( (v5 & 8) != 0 )
      v4 |= 4u;
    if ( (v5 & 0x10) != 0 )
      v4 |= 2u;
    if ( (v5 & 0x20) != 0 )
      v4 |= 1u;
    if ( (v5 & 2) != 0 )
      v4 |= 0x80000u;
    v6 = v5 & 0xC00;
    if ( v6 )
    {
      switch ( v6 )
      {
        case 1024:
          v4 |= 0x100u;
          break;
        case 2048:
          v4 |= 0x200u;
          break;
        case 3072:
          v4 |= 0x300u;
          break;
      }
    }
    if ( (v5 & 0x300) != 0 )
    {
      if ( (v5 & 0x300) == 0x200 )
        v4 |= 0x10000u;
    }
    else
    {
      v4 |= 0x20000u;
    }
    if ( (v5 & 0x1000) != 0 )
      v4 |= 0x40000u;
  }
  if ( dword_4B7844 < 1 )
    return v4;
  v7 = _mm_getcsr();
  v8 = (v7 >> 3) & 0x10;
  if ( (v7 & 0x200) != 0 )
    v8 |= 8u;
  if ( (v7 & 0x400) != 0 )
    v8 |= 4u;
  if ( (v7 & 0x800) != 0 )
    v8 |= 2u;
  if ( (v7 & 0x1000) != 0 )
    v8 |= 1u;
  if ( (v7 & 0x100) != 0 )
    v8 |= 0x80000u;
  v9 = v7 & 0x6000;
  if ( (v7 & 0x6000) != 0 )
  {
    switch ( v9 )
    {
      case 8192:
        v8 |= 0x100u;
        break;
      case 16384:
        v8 |= 0x200u;
        break;
      case 24576:
        v8 |= 0x300u;
        break;
    }
  }
  v10 = (v7 & 0x8040) - 64;
  if ( v10 )
  {
    v11 = v10 - 32704;
    if ( v11 )
    {
      if ( v11 == 64 )
        v8 |= 0x1000000u;
    }
    else
    {
      v8 |= 0x3000000u;
    }
  }
  else
  {
    v8 |= 0x2000000u;
  }
  v12 = a1 & a2 & 0x308031F | v8 & ~(a2 & 0x308031F);
  if ( v12 != v8 )
  {
    v19 = sub_47EA24(v12);
    sub_47E0CF(v19);
    v13 = _mm_getcsr();
    v8 = (v13 >> 3) & 0x10;
    if ( (v13 & 0x200) != 0 )
      v8 |= 8u;
    if ( (v13 & 0x400) != 0 )
      v8 |= 4u;
    if ( (v13 & 0x800) != 0 )
      v8 |= 2u;
    if ( (v13 & 0x1000) != 0 )
      v8 |= 1u;
    if ( (v13 & 0x100) != 0 )
      v8 |= 0x80000u;
    v14 = v13 & 0x6000;
    if ( (v13 & 0x6000) != 0 )
    {
      switch ( v14 )
      {
        case 8192:
          v8 |= 0x100u;
          break;
        case 16384:
          v8 |= 0x200u;
          break;
        case 24576:
          v8 |= 0x300u;
          break;
      }
    }
    v15 = (v13 & 0x8040) - 64;
    if ( v15 )
    {
      v16 = v15 - 32704;
      if ( v16 )
      {
        if ( v16 == 64 )
          v8 |= 0x1000000u;
      }
      else
      {
        v8 |= 0x3000000u;
      }
    }
    else
    {
      v8 |= 0x2000000u;
    }
  }
  v17 = v4 | v8;
  if ( ((v4 ^ v8) & 0x8031F) != 0 )
    return v17 | 0x80000000;
  return v17;
}
// 47EBBC: variable 'v20' is possibly undefined
// 4B7844: using guessed type int dword_4B7844;
