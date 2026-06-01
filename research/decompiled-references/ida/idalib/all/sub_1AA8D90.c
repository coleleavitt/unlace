__int64 __fastcall sub_1AA8D90(__int64 *a1, unsigned int a2, unsigned int a3, char *a4, __int64 a5, __m128 a6)
{
  unsigned int v9; // eax
  unsigned int v10; // r12d
  char v12; // [rsp+Fh] [rbp-C9h] BYREF
  _BYTE v13[200]; // [rsp+10h] [rbp-C8h] BYREF

  sub_18C3E40(*a1);
  sub_190D5E0(*a1, a6);
  v9 = sub_1AD5040(a1, a2, a3, a4, a5);
  if ( (_BYTE)v9 )
    return 1;
  v10 = v9;
  if ( (_BYTE)a2 == 19 )
  {
    if ( !(unsigned __int8)sub_1AA88A0(a1, a3, a4, a5) )
      return v10;
    return 1;
  }
  v12 = a2;
  if ( (unsigned __int8)a2 <= 0x12u && ((1LL << a2) & 0x6DFFF) != 0 )
  {
    sub_168B9F0((__int64)v13, a1, a3, 0xB45u, 0);
    v10 = *(unsigned __int8 *)(sub_1AA3B30((__int64)v13, &v12) + 120);
    sub_15F7200(v13);
  }
  return v10;
}
