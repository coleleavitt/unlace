_BYTE *__fastcall sub_1022720(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE *result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD vars0[4]; // [rsp+0h] [rbp+0h] BYREF
  __int16 vars20; // [rsp+20h] [rbp+20h]
  _QWORD vars30[4]; // [rsp+30h] [rbp+30h] BYREF
  __int16 vars50; // [rsp+50h] [rbp+50h]
  __int64 vars60; // [rsp+60h] [rbp+60h]
  __int64 vars68; // [rsp+68h] [rbp+68h]
  __int64 vars70; // [rsp+70h] [rbp+70h]
  __int64 vars78; // [rsp+78h] [rbp+78h]
  __int64 vars80; // [rsp+80h] [rbp+80h]

  LOWORD(vars80) = 257;
  vars50 = 259;
  vars0[0] = "__HAIKU__";
  vars20 = 259;
  vars30[0] = "1";
  sub_10160F0(a4, (__int64)vars0, (__int64)vars30, (__int64)a4, 259, a6, vars60, vars68, vars70, vars78, 1u);
  result = sub_1019BB0(a4, (__int64)"unix", 4, a2, v7, v8);
  if ( *(_BYTE *)(a1 + 278) )
  {
    vars50 = 259;
    LOWORD(vars80) = 257;
    vars30[0] = "1";
    vars0[0] = "__FLOAT128__";
    vars20 = 259;
    return sub_10160F0(a4, (__int64)vars0, (__int64)vars30, 259, v10, v11, vars60, vars68, vars70, vars78, 1u);
  }
  return result;
}

