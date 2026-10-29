/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F700
// Address: 0x0045F700

//----- (0045F700) --------------------------------------------------------
int __stdcall sub_45F700(_WORD *a1, _WORD *a2, _WORD *a3)
{
  int v3; // ebx
  int v4; // esi
  int v5; // eax
  __int16 v7; // cx
  _WORD v8[12]; // [esp+Ch] [ebp-34h] BYREF
  _WORD v9[12]; // [esp+24h] [ebp-1Ch] BYREF

  sub_45F620(a1, v9);
  sub_45F620(a2, v8);
  v3 = v9[1];
  v4 = v8[1];
  *(_OWORD *)a3 = 0;
  if ( v3 && v4 )
  {
    v5 = sub_45DD00(v9, (int)v8);
    if ( !sub_45F2B0((int)v8, v5 != 0, 0, v4 + v3 - 16382, 112) )
      return 2;
    v7 = -1;
    if ( v9[0] == v8[0] )
      v7 = 0;
    v8[0] = v7;
    sub_45F690(v8, a3);
  }
  return 1;
}
