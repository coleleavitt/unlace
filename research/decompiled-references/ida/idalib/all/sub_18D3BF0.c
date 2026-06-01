__int64 __fastcall sub_18D3BF0(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, double a5, double a6)
{
  unsigned __int8 v8; // al
  unsigned int v10; // [rsp+4h] [rbp-54h] BYREF
  __int16 *v11; // [rsp+8h] [rbp-50h] BYREF
  __int16 v12; // [rsp+10h] [rbp-48h] BYREF
  char v13; // [rsp+12h] [rbp-46h]
  int v14; // [rsp+14h] [rbp-44h]
  __int64 v15; // [rsp+18h] [rbp-40h]
  __int64 v16; // [rsp+20h] [rbp-38h]

  v12 = v12 & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
    sub_EE9B50(26);
  v14 = a2;
  v15 = a4;
  v16 = 0;
  HIBYTE(v12) &= 1u;
  v13 &= 0xF0u;
  v8 = sub_B62360((__int64)&v12);
  v11 = &v12;
  HIBYTE(v12) = (v8 << 6) | HIBYTE(v12) & 0x3F;
  v13 = v13 & 0xF8 | (v8 >> 2) & 7;
  return sub_18D2070(a1, a3, (unsigned __int64 *)&v11, &v10, 0, a5, a6);
}
