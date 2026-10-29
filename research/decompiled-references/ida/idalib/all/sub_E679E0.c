void __fastcall sub_E679E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 *v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  size_t v6; // rax
  __m128i vars0; // [rsp+0h] [rbp+0h] BYREF
  int vars10; // [rsp+10h] [rbp+10h] BYREF
  __int16 vars20; // [rsp+20h] [rbp+20h] BYREF
  __int64 vars28; // [rsp+28h] [rbp+28h]
  __int64 vars30; // [rsp+30h] [rbp+30h]
  int vars38; // [rsp+38h] [rbp+38h]

  v2 = a1 + 1048;
  v3 = *(unsigned __int64 **)(a2 + 16);
  sub_E5E570(&vars0, (unsigned __int64)v3);
  sub_E59390((__int64)&vars20, &vars0);
  sub_222AB70(a1 + 1048, "temp", 4);
  sub_222CAC0(a1 + 1048, &vars20);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&vars20);
  if ( (int *)vars0.m128i_i64[0] != &vars10 )
    operator delete((void *)vars0.m128i_i64[0]);
  if ( *v3 )
  {
    sub_E673B0((__int64)&vars0, a1, *v3);
    vars20 = 7;
    v4 = vars0.m128i_i64[0];
    vars0.m128i_i64[0] = 0;
    vars28 = v4;
    v5 = vars0.m128i_i64[1];
    vars0.m128i_i64[1] = 0;
    vars30 = v5;
    LODWORD(v5) = vars10;
    vars10 = 0;
    vars38 = v5;
    v6 = j__strlen("dtor");
    sub_222AB70(v2, "dtor", v6);
    sub_222CAC0(v2, &vars20);
    sub_2229BF0(v2);
    sub_222B2A0(&vars20);
    sub_E5D2E0(vars0.m128i_i64);
  }
}
