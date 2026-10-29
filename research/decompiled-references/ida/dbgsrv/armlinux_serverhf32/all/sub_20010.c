/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20010
// Address: 0x00020010

//----- (00020010) --------------------------------------------------------
int __fastcall sub_20010(int a1, int a2, int a3)
{
  int v6; // r1
  _DWORD *v7; // r0
  int v8; // r3
  int v10; // r3
  _DWORD v11[3]; // [sp+0h] [bp-34h] BYREF
  char v12; // [sp+Ch] [bp-28h]
  int v13; // [sp+10h] [bp-24h]
  int v14; // [sp+14h] [bp-20h]
  int v15; // [sp+18h] [bp-1Ch]
  int v16; // [sp+1Ch] [bp-18h]
  int v17; // [sp+20h] [bp-14h]
  int v18; // [sp+24h] [bp-10h]
  int v19; // [sp+28h] [bp-Ch]

  if ( *(_BYTE *)(a1 + 1114) && !*(_BYTE *)(a1 + 1077) )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(30059);
  }
  v6 = *(_DWORD *)(a1 + 64);
  do
  {
    while ( *(_DWORD *)(a1 + 80) == v6 )
    {
      v11[0] = -1;
      v11[1] = 0;
      v11[2] = -1;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      if ( !sub_1F974(a1, (int)v11, a3) )
      {
        sub_6E318(v11);
        return 0;
      }
      if ( (v13 & 0xFFFFFFF) != 0 )
      {
        v10 = *(_DWORD *)(a1 + 80);
        if ( v10 == *(_DWORD *)(a1 + 88) - 44 )
        {
          sub_1BA70((_DWORD *)(a1 + 56), (int)v11);
        }
        else
        {
          *(_DWORD *)v10 = -1;
          *(_DWORD *)(v10 + 4) = 0;
          *(_DWORD *)(v10 + 8) = -1;
          *(_BYTE *)(v10 + 12) = 0;
          *(_DWORD *)(v10 + 16) = 0;
          sub_6E4A8(v10, (int)v11);
          *(_DWORD *)(a1 + 80) += 44;
        }
        *(_BYTE *)(a1 + 1112) = 0;
      }
      sub_6E318(v11);
      v6 = *(_DWORD *)(a1 + 64);
    }
    sub_6E4A8(a2, v6);
    v7 = *(_DWORD **)(a1 + 64);
    if ( v7 == (_DWORD *)(*(_DWORD *)(a1 + 72) - 44) )
    {
      sub_18A24(a1 + 56);
      v6 = *(_DWORD *)(a1 + 64);
    }
    else
    {
      sub_6E318(v7);
      v6 = *(_DWORD *)(a1 + 64) + 44;
      *(_DWORD *)(a1 + 64) = v6;
    }
  }
  while ( (*(_DWORD *)(a2 + 16) & 0xFFFFFFF) == 0 );
  v8 = *(_DWORD *)(a1 + 228);
  *(_BYTE *)(a1 + 1114) = 1;
  if ( !v8 )
    *(_BYTE *)(a1 + 1113) = 0;
  if ( *(_DWORD *)(a1 + 80) == v6 )
    return 1;
  else
    return 2;
}
// D5C00: using guessed type char under_debugger;
