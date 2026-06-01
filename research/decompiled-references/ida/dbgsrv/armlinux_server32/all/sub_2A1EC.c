/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A1EC
// Address: 0x0002A1EC

//----- (0002A1EC) --------------------------------------------------------
bool sub_2A1EC(int a1, int a2, ...)
{
  int v3; // r2
  int v4; // r3
  _BYTE v6[1024]; // [sp+Ch] [bp-404h] BYREF
  int varg_r2; // [sp+428h] [bp+18h] BYREF
  va_list varg_r2a; // [sp+428h] [bp+18h]
  int varg_r3; // [sp+42Ch] [bp+1Ch]
  va_list va1; // [sp+430h] [bp+20h] BYREF

  va_start(va1, a2);
  va_start(varg_r2a, a2);
  varg_r2 = va_arg(va1, _DWORD);
  varg_r3 = va_arg(va1, _DWORD);
  sub_2A050(a1, v6, 1024, a2, (int *)varg_r2a);
  sub_23528((int)"%s", (int)v6, v3, v4);
  return a2 <= 18;
}
// 2A222: variable 'v3' is possibly undefined
// 2A222: variable 'v4' is possibly undefined
