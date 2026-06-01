/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DB14
// Address: 0x0004DB14

//----- (0004DB14) --------------------------------------------------------
_DWORD *__fastcall sub_4DB14(_DWORD *a1, int a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v8; // r2
  double v9; // r0
  int v10; // r3
  _DWORD *v11; // r3
  int v13; // [sp+8h] [bp-14h] BYREF
  unsigned __int8 v14; // [sp+Ch] [bp-10h] BYREF
  unsigned int v15; // [sp+10h] [bp-Ch]

  v8 = a1[1];
  HIDWORD(v9) = a1 + 4;
  v13 = a1[5];
  v10 = a1[3];
  LODWORD(v9) = &v14;
  sub_83DAC(v9, v8, v10, 1);
  if ( v14 )
  {
    sub_4DA78((int)a1, v15, (int)&v13, v14);
    a2 = a3 % a1[1];
  }
  a4[6] = a3;
  v11 = *(_DWORD **)(*a1 + 4 * a2);
  if ( v11 )
  {
    *a4 = *v11;
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
