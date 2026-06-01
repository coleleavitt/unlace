/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45EF70
// Address: 0x0045EF70

//----- (0045EF70) --------------------------------------------------------
int __stdcall sub_45EF70(_WORD *a1, _WORD *a2, _WORD *a3)
{
  int v3; // ebx
  int v5; // esi
  int v6; // eax
  __int16 v7; // cx
  __int16 v8; // [esp+Ch] [ebp-34h] BYREF
  unsigned __int16 v9; // [esp+Eh] [ebp-32h]
  _WORD v10[12]; // [esp+24h] [ebp-1Ch] BYREF

  sub_45F620(a1, &v8);
  sub_45F620(a2, v10);
  v3 = v10[1];
  *(_OWORD *)a3 = 0;
  if ( !v3 )
    return 4;
  v5 = v9;
  if ( v9 )
  {
    v6 = sub_45DA20(v10, (int)&v8);
    if ( !sub_45F2B0((int)&v8, v6 != 0, 0, v5 - v3 + 0x3FFF, 112) )
      return 2;
    v7 = -1;
    if ( v8 == v10[0] )
      v7 = 0;
    v8 = v7;
    sub_45F690(&v8, a3);
  }
  return 1;
}
