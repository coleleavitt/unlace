void __fastcall sub_E397D0(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  _BYTE *v5; // rdi
  size_t v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  size_t v9; // rax
  _BYTE *v10; // rdi
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  size_t vars8; // [rsp+8h] [rbp+8h]
  _QWORD vars10[2]; // [rsp+10h] [rbp+10h] BYREF
  __m128i vars20; // [rsp+20h] [rbp+20h] BYREF
  _BYTE vars30[16]; // [rsp+30h] [rbp+30h] BYREF
  void *src; // [rsp+40h] [rbp+40h] BYREF
  size_t n; // [rsp+48h] [rbp+48h]
  __int128 vars50; // [rsp+50h] [rbp+50h] BYREF
  __int64 vars60; // [rsp+60h] [rbp+60h]
  char vars68; // [rsp+68h] [rbp+68h]
  int vars6C; // [rsp+6Ch] [rbp+6Ch]
  void **vars70; // [rsp+70h] [rbp+70h]

  v3 = *(_QWORD *)(a2 + 64);
  LOBYTE(vars10[0]) = 0;
  vars8 = 0;
  vars0 = vars10;
  if ( v3 )
  {
    vars50 = 0;
    LODWORD(n) = 0;
    vars68 = 0;
    vars6C = 1;
    vars60 = 0;
    src = &off_2BC1EC8;
    vars70 = &vars0;
    sub_2257B70(&src, 0, 0, 0);
    v4 = sub_B685F0(a2);
    sub_E6C510(v3, &src, v4 + 17464, 0, 1);
    src = &off_2BC1EC8;
    sub_2257A60(&src);
  }
  sub_B62CC0((__int64)&src, (__int64 *)(a2 + 40));
  v5 = vars0;
  v6 = n + vars8;
  if ( vars0 == vars10 )
    v7 = 15;
  else
    v7 = vars10[0];
  if ( v6 > v7 )
  {
    sub_974DF0((__int64)&vars0, vars8, 0, src, n);
    v5 = vars0;
  }
  else if ( n )
  {
    v10 = (char *)vars0 + vars8;
    if ( n == 1 )
      *v10 = *(_BYTE *)src;
    else
      memcpy(v10, src, n);
    v5 = vars0;
  }
  vars8 = v6;
  v5[v6] = 0;
  if ( src != &vars50 )
    operator delete(src);
  vars20.m128i_i64[0] = (__int64)vars30;
  v8 = a1 + 1048;
  sub_E34980(&vars20, vars0, (__int64)vars0 + vars8);
  sub_E35650((__int64)&src, &vars20);
  v9 = j__strlen("name");
  sub_2206E30(v8, "name", v9);
  sub_2208D80(v8, &src);
  sub_2205EB0(v8);
  sub_2207560(&src);
  if ( (_BYTE *)vars20.m128i_i64[0] != vars30 )
    operator delete((void *)vars20.m128i_i64[0]);
  if ( vars0 != &vars0 )
    operator delete(vars0);
}

