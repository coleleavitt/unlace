/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91CB0
// Address: 0x00091CB0

//----- (00091CB0) --------------------------------------------------------
int __fastcall sub_91CB0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _BOOL4 v10; // r0
  int v12; // r11
  unsigned int v13; // r11
  _DWORD *v14; // r6
  char v15; // [sp+8h] [bp-28h]
  int v16; // [sp+Ch] [bp-24h]

  v10 = sub_91274(a1, *(_DWORD *)(a2 + 8), a6);
  if ( v10 )
    return sub_918E4(v10, a2, a3, a4, a5);
  v16 = *(unsigned __int8 *)(a2 + 52);
  v15 = *(_BYTE *)(a2 + 53);
  v12 = *(_DWORD *)(a1 + 12);
  *(_BYTE *)(a2 + 52) = 0;
  *(_BYTE *)(a2 + 53) = 0;
  sub_91B02((_DWORD *)(a1 + 16), a2);
  if ( v12 >= 2 )
  {
    v13 = a1 + 16 + 8 * v12;
    v14 = (_DWORD *)(a1 + 24);
    while ( !*(_BYTE *)(a2 + 54) )
    {
      if ( *(_BYTE *)(a2 + 52) )
      {
        if ( *(_DWORD *)(a2 + 24) == 1 || (*(_BYTE *)(a1 + 8) & 2) == 0 )
          break;
      }
      else if ( *(_BYTE *)(a2 + 53) && !(*(unsigned __int8 *)(a1 + 8) << 31) )
      {
        break;
      }
      *(_WORD *)(a2 + 52) = 0;
      sub_91B02(v14, a2);
      v14 += 2;
      if ( (unsigned int)v14 >= v13 )
        break;
    }
  }
  *(_BYTE *)(a2 + 53) = v15;
  *(_BYTE *)(a2 + 52) = v16;
  return v16;
}
