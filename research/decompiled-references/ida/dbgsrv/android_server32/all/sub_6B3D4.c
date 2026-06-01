/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B3D4
// Address: 0x0006B3D4

//----- (0006B3D4) --------------------------------------------------------
unsigned int __fastcall sub_6B3D4(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int (__fastcall ***a6)(_DWORD, char *, int))
{
  int v8; // r3
  int v9; // r0
  unsigned int v10; // r5
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v16; // [sp+4h] [bp-8h]

  v8 = a5;
  if ( (*(_BYTE *)(a1 + 16) & 8) != 0 )
  {
    v10 = *(unsigned __int8 *)(a4 + 20);
    v9 = 0;
    if ( v10 != 160 )
    {
      if ( v10 < 0x10 || v10 - 61 < 0x20 )
      {
        v16 = a5;
        v12 = (**a6)(a6, off_DA3A0[v10], a5);
      }
      else
      {
        if ( (v10 | 2) != 0x12 )
        {
          sub_2BC80((int)"Bad register number passed to arm.get_register_value: %d");
          v8 = a5;
          v9 = 0;
          goto LABEL_15;
        }
        v16 = a5;
        v12 = (**a6)(a6, "PSR", a5);
      }
      v13 = *(_DWORD *)(v12 + 8);
      v14 = 4;
      if ( !a3 )
        v14 = 8;
      v9 = v13 + v14;
      if ( v10 != 15 )
        v9 = v13;
      v8 = v16;
    }
  }
  else
  {
    v9 = *(_DWORD *)(a4 + 8);
  }
LABEL_15:
  switch ( *(_BYTE *)(a4 + 21) )
  {
    case 0:
      a2 <<= v9;
      return a2;
    case 1:
      a2 >>= v9;
      return a2;
    case 2:
      return (int)a2 >> v9;
    case 3:
      return rotate_left(a2, -v9, 0, 0x20u);
    case 4:
      return ((4 * *(_DWORD *)((**a6)(a6, "PSR", v8) + 8)) & 0x80000000) + (a2 >> 1);
    default:
      return a2;
  }
}
// DA3A0: using guessed type char *off_DA3A0[195];
