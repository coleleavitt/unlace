/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A88C
// Address: 0x0007A88C

//----- (0007A88C) --------------------------------------------------------
int __fastcall sub_7A88C(
        int a1,
        int (__fastcall *a2)(int, _DWORD, int, int, int, int, int, int, int, int, int, _BYTE *),
        int a3)
{
  int v5; // r4
  int v6; // r0
  int v7; // r1
  int v9; // [sp+4h] [bp-198h]
  int v10; // [sp+34h] [bp-168h]
  int v11; // [sp+38h] [bp-164h]
  int v13[22]; // [sp+40h] [bp-15Ch] BYREF
  _BYTE v14[256]; // [sp+98h] [bp-104h] BYREF

  v5 = 0;
  sub_8D2A8(a1, v13, (int)v14, 0x100u, 0, 0, 0, 0);
  if ( !v6 )
  {
    v6 = sub_8E470(a1);
    if ( !v6 )
    {
      v11 = sub_8E4AE(a1);
      v10 = v7;
      sub_8D206(a1);
      v6 = a2(a3, a2, v11, v10, v13[3], v9, v13[6], v13[7], v13[8], v13[9], v13[15], v14);
    }
  }
  if ( v6 < 0 )
    return -v6;
  return v5;
}
// 7A8BC: variable 'v6' is possibly undefined
// 7A8D0: variable 'v7' is possibly undefined
// 7A90E: variable 'v9' is possibly undefined
