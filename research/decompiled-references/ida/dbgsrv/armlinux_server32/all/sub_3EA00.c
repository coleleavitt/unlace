/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3EA00
// Address: 0x0003EA00

//----- (0003EA00) --------------------------------------------------------
bool __fastcall sub_3EA00(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  int v4; // r4
  int v5; // r3
  unsigned int v6; // r4
  signed int v7; // r9
  int v8; // r11
  unsigned int v9; // r6
  unsigned int v10; // r7
  unsigned int v11; // r10
  unsigned int v12; // r0
  _BOOL4 v13; // r2
  unsigned __int8 *v16; // [sp+8h] [bp-Ch] BYREF

  v4 = a1[1] - 2;
  v5 = *(__int16 *)(*a1 + v4);
  v6 = v4 + *a1;
  if ( v5 <= 0 )
    return 0;
  v16 = (unsigned __int8 *)(*a1 + a1[3]);
  v7 = sub_762E4(&v16, v6);
  if ( v7 <= 0 || v6 <= (unsigned int)v16 )
    return 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    v10 += sub_762E4(&v16, v6);
    v9 += sub_762E4(&v16, v6);
    v11 = sub_762E4(&v16, v6);
    v12 = sub_762E4(&v16, v6);
    v13 = v9 > a2;
    if ( v10 > a2 )
      v13 = 0;
    if ( v13 )
      break;
    if ( v7 == ++v8 || v6 <= (unsigned int)v16 )
      return 0;
  }
  *a3 = v10;
  a3[1] = v9;
  a3[2] = v11;
  a3[3] = v12;
  return v13;
}
