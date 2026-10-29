void __fastcall sub_E35AF0(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v4; // [rsp+0h] [rbp-78h] BYREF
  __int64 v5; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v6[88]; // [rsp+20h] [rbp-58h] BYREF

  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_WORD *)a1 = 5;
  if ( !(unsigned __int8)sub_2205990(a2, a3, 0) )
  {
    sub_2206BA0(&v4, a2, a3);
    sub_E35650((__int64)v6, &v4);
    sub_2207560(a1);
    sub_2205840(a1, v6);
    sub_2207560(v6);
    if ( (__int64 *)v4.m128i_i64[0] != &v5 )
      operator delete((void *)v4.m128i_i64[0]);
  }
}

