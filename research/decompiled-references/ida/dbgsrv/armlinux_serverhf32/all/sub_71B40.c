/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71B40
// Address: 0x00071B40

//----- (00071B40) --------------------------------------------------------
int __fastcall sub_71B40(__int64 *a1, int *a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r4
  int v12; // r3
  int v13; // r3
  int result; // r0
  int v15; // r4
  __int64 v16; // r6
  _WORD *p_dest; // r3
  bool v18; // cf
  _DWORD v19[3]; // [sp+4h] [bp-30h] BYREF
  int v20; // [sp+10h] [bp-24h]
  _WORD v21[2]; // [sp+14h] [bp-20h] BYREF
  unsigned __int16 dest; // [sp+18h] [bp-1Ch] BYREF
  _BYTE v23[14]; // [sp+1Ah] [bp-1Ah] BYREF
  __int16 v24; // [sp+28h] [bp-Ch]

  if ( a4 )
  {
    v7 = *a2;
    v8 = a2[1];
    v9 = a2[2];
    v10 = a2[3];
    v19[0] = v7;
    v19[1] = v8;
    v19[2] = v9;
    v20 = v10;
    v11 = SHIWORD(v10);
    sub_71918((int)dword_B3ED0, (int)v19, v19, (unsigned int)SHIWORD(v10) >> 31);
    if ( v11 < 0 && HIWORD(v20) )
      HIWORD(v20) ^= 0x8000u;
    sub_7152C((int)v19, v21);
  }
  else
  {
    sub_7152C((int)a2, v21);
  }
  v12 = v21[1];
  *a1 = 0;
  v13 = v12 - 16382;
  if ( v13 <= 0 )
    return 1;
  if ( v13 > a3 )
    return 5;
  if ( v13 <= 16 )
  {
    sub_713F4((int)v21, v13);
    v16 = dest;
  }
  else
  {
    v15 = v13 - (v13 & 0xF);
    sub_713F4((int)v21, v13 & 0xF);
    v16 = dest;
    p_dest = &dest;
    do
    {
      v15 -= 16;
      p_dest = memmove(p_dest, v23, 0x10u);
      v24 = 0;
      HIDWORD(v16) = v16 >> 16;
      LODWORD(v16) = dest | ((_DWORD)v16 << 16);
    }
    while ( v15 > 0 );
  }
  if ( !v21[0] )
    goto LABEL_13;
  if ( a3 == 64 )
    return 5;
  v18 = (_DWORD)v16 == 0;
  LODWORD(v16) = -(int)v16;
  HIDWORD(v16) -= 2 * HIDWORD(v16) + !v18;
LABEL_13:
  result = 1;
  *a1 = v16;
  return result;
}
// B3ED0: using guessed type int dword_B3ED0[3];
