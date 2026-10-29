/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DC94
// Address: 0x0004DC94

//----- (0004DC94) --------------------------------------------------------
_DWORD *__fastcall sub_4DC94(_DWORD *a1, int a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v8; // r2
  _DWORD *v9; // r3
  int v11; // [sp+8h] [bp-14h] BYREF
  _BYTE v12[4]; // [sp+Ch] [bp-10h] BYREF
  unsigned int v13; // [sp+10h] [bp-Ch]

  v8 = a1[1];
  v11 = a1[5];
  sub_83B80((int)v12, (int)(a1 + 4), v8, a1[3], 1);
  if ( v12[0] )
  {
    sub_4DBF8((int)a1, v13, (int)&v11, v12[0]);
    a2 = a3 % a1[1];
  }
  a4[6] = a3;
  v9 = *(_DWORD **)(*a1 + 4 * a2);
  if ( v9 )
  {
    *a4 = *v9;
    **(_DWORD **)(*a1 + 4 * a2) = a4;
  }
  else
  {
    *a4 = a1[2];
    a1[2] = a4;
    if ( *a4 )
      *(_DWORD *)(*a1 + 4 * (*(_DWORD *)(*a4 + 24) % a1[1])) = a4;
    *(_DWORD *)(*a1 + 4 * a2) = a1 + 2;
  }
  ++a1[3];
  return a4;
}
