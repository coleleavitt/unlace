/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: zip_inflate
// Address: 0x0007A5D8

//----- (0007A5D8) --------------------------------------------------------
int __fastcall zip_inflate(int a1, int (__fastcall *a2)(int, _BYTE *, int), int (__fastcall *a3)(int, _BYTE *, int))
{
  int v4; // r0
  _BOOL4 v5; // r2
  int v6; // r3
  int v7; // r6
  int v8; // r7
  int v9; // r7
  int v10; // r6
  int result; // r0
  _DWORD v14[14]; // [sp+1Ch] [bp-1003Ch] BYREF
  _BYTE v15[32768]; // [sp+54h] [bp-10004h] BYREF
  _BYTE v16[32772]; // [sp+8054h] [bp-8004h] BYREF

  memset(v14, 0, sizeof(v14));
  v14[4] = 0x8000;
  v14[3] = v15;
  v4 = sub_88C8C(v14, "1.3.1", 56);
  if ( !v4 )
  {
    v7 = 1;
    v8 = 0x8000;
    do
    {
      if ( v8 >= 1 && !v14[1] )
      {
        v8 = a2(a1, v16, 0x8000);
        v4 = -777;
        if ( v8 < 0 )
          break;
        v14[1] = v8;
        v14[0] = v16;
        v5 = byte_DF535 == 0;
        if ( !((~v7 | v5) << 31) )
          sub_88D1C((int)v14);
        v7 = 0;
      }
      if ( !v14[4] )
      {
        if ( a3(a1, v15, 0x8000) != 0x8000 )
        {
          v4 = -778;
          break;
        }
        v14[4] = 0x8000;
        v14[3] = v15;
      }
      v4 = sub_88D24(v14, 4 * (v14[1] == 0), v5, v6);
    }
    while ( !v4 );
  }
  v9 = 1;
  if ( !byte_DF535 )
    v9 = v4;
  if ( v4 != -5 )
    v9 = v4;
  sub_8A494(v14);
  if ( (_BYTE *)v14[3] != v15 )
  {
    v10 = v14[3] - (_DWORD)v15;
    if ( a3(a1, v15, v14[3] - (_DWORD)v15) != v10 )
      v9 = -778;
  }
  result = 0;
  if ( v9 < 0 )
    return -v9;
  return result;
}
// 7A6D2: conditional instruction was optimized away because r7.4!=0
// 7A690: variable 'v5' is possibly undefined
// 7A690: variable 'v6' is possibly undefined
// DF535: using guessed type char byte_DF535;
