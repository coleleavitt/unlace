void __fastcall sub_E36190(__int64 a1, _DWORD *a2, __int64 a3)
{
  void *v4; // [rsp+0h] [rbp-8h] BYREF
  __int64 vars0; // [rsp+8h] [rbp+0h] BYREF
  char vars8; // [rsp+10h] [rbp+8h] BYREF
  __m128i vars18; // [rsp+20h] [rbp+18h] BYREF
  _BYTE vars28[16]; // [rsp+30h] [rbp+28h] BYREF
  _BYTE vars38[48]; // [rsp+40h] [rbp+38h] BYREF
  __int64 (__fastcall **vars68)(); // [rsp+70h] [rbp+68h] BYREF
  int vars70; // [rsp+78h] [rbp+70h]
  __int128 vars78; // [rsp+80h] [rbp+78h]
  __int64 vars88; // [rsp+90h] [rbp+88h]
  char vars90; // [rsp+98h] [rbp+90h]
  int vars94; // [rsp+9Ch] [rbp+94h]
  void **vars98; // [rsp+A0h] [rbp+98h]
  __int64 *varsB8; // [rsp+C0h] [rbp+B8h]

  varsB8 = &vars0;
  vars78 = 0;
  vars0 = 0;
  v4 = &vars8;
  vars8 = 0;
  vars70 = 0;
  vars68 = &off_2BC1EC8;
  vars90 = 0;
  vars94 = 1;
  vars88 = 0;
  vars98 = &v4;
  sub_2257B70(&vars68, 0, 0, 0);
  sub_A2FDA0(a2, (char *)&vars68, *(_QWORD *)(a1 + 1232), a3, 0.0);
  vars18.m128i_i64[0] = (__int64)vars28;
  sub_E34980(&vars18, v4, (__int64)v4 + vars0);
  sub_E35650((__int64)vars38, &vars18);
  sub_2206E30(a1 + 1048, "value", 5);
  sub_2208D80(a1 + 1048, vars38);
  sub_2205EB0(a1 + 1048);
  sub_2207560(vars38);
  if ( (_BYTE *)vars18.m128i_i64[0] != vars28 )
    operator delete((void *)vars18.m128i_i64[0]);
  vars68 = &off_2BC1EC8;
  sub_2257A60(&vars68);
  if ( v4 != &vars0 )
    operator delete(v4);
}

