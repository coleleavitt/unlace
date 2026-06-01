_BYTE *__fastcall sub_103D7F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r9
  _QWORD vars0[4]; // [rsp+8h] [rbp+0h] BYREF
  __int16 vars20; // [rsp+28h] [rbp+20h]
  _QWORD vars30[4]; // [rsp+38h] [rbp+30h] BYREF
  __int16 vars50; // [rsp+58h] [rbp+50h]
  __int64 vars60; // [rsp+68h] [rbp+60h]
  __int64 vars68; // [rsp+70h] [rbp+68h]
  __int64 vars70; // [rsp+78h] [rbp+70h]
  __int64 vars78; // [rsp+80h] [rbp+78h]
  __int64 vars80; // [rsp+88h] [rbp+80h]

  LOWORD(vars80) = 257;
  vars30[0] = "64";
  vars50 = 259;
  vars0[0] = "_FILE_OFFSET_BITS";
  vars20 = 259;
  sub_1039E30(a1, (__int64)vars0, (__int64)vars30, 259, a5, a6, vars60, vars68, vars70, vars78, 1u);
  vars30[0] = "64";
  LOWORD(vars80) = 257;
  vars50 = 259;
  vars0[0] = "_TIME_BITS";
  vars20 = 259;
  return sub_1039E30(a1, (__int64)vars0, (__int64)vars30, v6, 259, v7, vars60, vars68, vars70, vars78, 1u);
}
