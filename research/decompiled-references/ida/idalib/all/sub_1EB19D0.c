void __fastcall sub_1EB19D0(__int64 a1, _BYTE *a2, __int64 a3)
{
  __m128i vars0; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars10[40]; // [rsp+10h] [rbp+10h] BYREF

  vars0.m128i_i64[0] = (__int64)vars10;
  sub_1EA9D80(&vars0, a2, (__int64)&a2[a3]);
  sub_A82C60(a1 + 368, &vars0);
  if ( (_BYTE *)vars0.m128i_i64[0] != vars10 )
    operator delete((void *)vars0.m128i_i64[0]);
}
