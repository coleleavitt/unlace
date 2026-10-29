void __fastcall sub_E598C0(__int64 a1, const char *a2)
{
  size_t v2; // r12
  __m128i v3; // [rsp+0h] [rbp-78h] BYREF
  __int64 v4; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v5[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  if ( a2 )
    v2 = strlen(a2);
  *(_QWORD *)(a1 + 8) = a2;
  *(_WORD *)a1 = 5;
  *(_QWORD *)(a1 + 16) = v2;
  if ( !(unsigned __int8)sub_22296D0(a2, v2, 0) )
  {
    sub_222A8E0(&v3, a2, v2);
    sub_E59390((__int64)v5, &v3);
    sub_222B2A0(a1);
    sub_2229580(a1, v5);
    sub_222B2A0(v5);
    if ( (__int64 *)v3.m128i_i64[0] != &v4 )
      operator delete((void *)v3.m128i_i64[0]);
  }
}
