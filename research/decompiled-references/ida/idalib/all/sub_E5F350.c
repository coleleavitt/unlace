__int64 __fastcall sub_E5F350(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  const char *v3; // rax
  size_t v4; // rdx
  __int64 v5; // r12
  __m128i v7; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v9[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a1 + 1048;
  v3 = (const char *)sub_EEDD70(a2);
  v4 = 0;
  v5 = (__int64)v3;
  if ( v3 )
    v4 = j__strlen(v3);
  sub_E59830((__int64)v9, v5, v4);
  sub_222AB70(v2, "name", 4);
  sub_222CAC0(v2, v9);
  sub_2229BF0(v2);
  sub_222B2A0(v9);
  sub_E5E570(&v7, *(_QWORD *)(a2 + 8));
  sub_E59390((__int64)v9, &v7);
  sub_222AB70(v2, "declId", 6);
  sub_222CAC0(v2, v9);
  sub_2229BF0(v2);
  sub_222B2A0(v9);
  if ( (__int64 *)v7.m128i_i64[0] != &v8 )
    operator delete((void *)v7.m128i_i64[0]);
  return sub_E59B90(a1, (__int64)"sideEntry", 9, *(_BYTE *)(a2 + 24));
}
