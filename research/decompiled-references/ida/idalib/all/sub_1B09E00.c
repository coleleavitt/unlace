__int64 __fastcall sub_1B09E00(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v5; // r14
  unsigned int v6; // [rsp+8h] [rbp-110h]
  int v7; // [rsp+10h] [rbp-108h] BYREF
  int v8; // [rsp+14h] [rbp-104h]
  __m128i v9; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v10; // [rsp+30h] [rbp-E8h] BYREF
  void *v11[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v13[184]; // [rsp+60h] [rbp-B8h] BYREF

  result = 0;
  if ( a2 == 5 && a4 )
  {
    v6 = 0;
    if ( a3 != 5 )
    {
      v7 = a3;
      v6 = 1;
      if ( a3 == 7 )
      {
        v8 = 6;
        v6 = 2;
      }
      else if ( a3 == 6 )
      {
        v8 = 7;
        v6 = 2;
      }
    }
    sub_168B9F0((__int64)v13, (__int64 *)(a1 + 8), a4, 0x1217u, 0);
    sub_1AEE640(v11, 90, 6u, 9u, &v7, v6);
    v5 = sub_1682AF0((__int64)v13, (__int64)v11);
    sub_1AF81E0(&v9, 0x5Au);
    sub_1682AF0(v5, (__int64)&v9);
    if ( (__int64 *)v9.m128i_i64[0] != &v10 )
      operator delete((void *)v9.m128i_i64[0]);
    if ( v11[0] != &v12 )
      operator delete(v11[0]);
    sub_15F7200(v13);
    return 1;
  }
  return result;
}
