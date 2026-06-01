_BYTE *__fastcall sub_103A0F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  _BYTE *result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
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
  vars50 = 259;
  vars0[0] = "__NetBSD__";
  vars20 = 259;
  vars30[0] = "1";
  sub_1039E30(a4, (__int64)vars0, (__int64)vars30, (__int64)a4, 259, a6, vars60, vars68, vars70, vars78, 1u);
  vars30[0] = "1";
  vars0[0] = "__unix__";
  LOWORD(vars80) = 257;
  vars50 = 259;
  vars20 = 259;
  result = sub_1039E30(a4, (__int64)vars0, (__int64)vars30, v7, v8, 257, vars60, vars68, vars70, vars78, 1u);
  if ( (*(_BYTE *)(a2 + 20) & 0x20) == 0 )
  {
    if ( !*(_BYTE *)(a1 + 278) )
      return result;
    return sub_103A070(a4, (__int64)vars0, v10, v11, v12, v13);
  }
  vars50 = 259;
  LOWORD(vars80) = 257;
  vars30[0] = "1";
  vars0[0] = "_REENTRANT";
  vars20 = 259;
  result = sub_1039E30(a4, (__int64)vars0, (__int64)vars30, 259, v12, v13, vars60, vars68, vars70, vars78, 1u);
  if ( *(_BYTE *)(a1 + 278) )
    return sub_103A070(a4, (__int64)vars0, v10, v11, v12, v13);
  return result;
}
