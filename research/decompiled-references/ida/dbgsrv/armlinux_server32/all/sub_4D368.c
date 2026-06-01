/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D368
// Address: 0x0004D368

//----- (0004D368) --------------------------------------------------------
_DWORD *__fastcall sub_4D368(_DWORD *a1, int a2, unsigned int a3, _DWORD *a4)
{
  int v8; // r3
  unsigned int v9; // r2
  _DWORD *v10; // r3
  int v12; // [sp+8h] [bp-14h] BYREF
  _BYTE v13[4]; // [sp+Ch] [bp-10h] BYREF
  unsigned int v14; // [sp+10h] [bp-Ch]

  v8 = a1[3];
  v9 = a1[1];
  v12 = a1[5];
  sub_83B80((int)v13, (int)(a1 + 4), v9, v8, 1);
  if ( v13[0] )
  {
    sub_4D2CC((int)a1, v14, (int)&v12, v13[0]);
    a2 = a3 % a1[1];
  }
  a4[3] = a3;
  v10 = *(_DWORD **)(*a1 + 4 * a2);
  if ( v10 )
  {
    *a4 = *v10;
    **(_DWORD **)(*a1 + 4 * a2) = a4;
  }
  else
  {
    *a4 = a1[2];
    a1[2] = a4;
    if ( *a4 )
      *(_DWORD *)(*a1 + 4 * (*(_DWORD *)(*a4 + 12) % a1[1])) = a4;
    *(_DWORD *)(*a1 + 4 * a2) = a1 + 2;
  }
  ++a1[3];
  return a4;
}
