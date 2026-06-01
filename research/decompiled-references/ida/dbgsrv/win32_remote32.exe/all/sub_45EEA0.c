/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45EEA0
// Address: 0x0045EEA0

//----- (0045EEA0) --------------------------------------------------------
int __stdcall sub_45EEA0(_WORD *a1, _WORD *a2)
{
  int v3; // edx
  int v4; // esi
  int v5; // ebx
  unsigned __int16 v6; // di
  unsigned __int16 v7; // bp
  _WORD v8[12]; // [esp+4h] [ebp-34h] BYREF
  _WORD v9[12]; // [esp+1Ch] [ebp-1Ch] BYREF

  sub_45F620(a1, v8);
  sub_45F620(a2, v9);
  if ( v8[0] != v9[0] )
    return 2 * (v8[0] == 0) - 1;
  v3 = 10;
  v4 = 0;
  v5 = 2 * (v8[0] == 0) - 1;
  while ( 1 )
  {
    v6 = v8[v4];
    v7 = v9[v4];
    if ( v6 != v7 )
      break;
    ++v4;
    if ( !--v3 )
      return 0;
  }
  if ( v6 <= v7 )
    return 1 - 2 * (v8[0] == 0);
  return v5;
}
