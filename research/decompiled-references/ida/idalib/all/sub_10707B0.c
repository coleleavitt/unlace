_BYTE *__fastcall sub_10707B0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _BOOL8 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD vars0[4]; // [rsp+8h] [rbp+0h] BYREF
  __int16 vars20; // [rsp+28h] [rbp+20h]
  _QWORD vars30[4]; // [rsp+38h] [rbp+30h] BYREF
  __int16 vars50; // [rsp+58h] [rbp+50h]
  __int64 vars60; // [rsp+68h] [rbp+60h]
  __int64 vars68; // [rsp+70h] [rbp+68h]
  __int64 vars70; // [rsp+78h] [rbp+70h]
  __int64 vars78; // [rsp+80h] [rbp+78h]
  __int64 vars80; // [rsp+88h] [rbp+80h]

  vars30[0] = "1";
  vars50 = 259;
  LOWORD(vars80) = 257;
  vars20 = 259;
  vars0[0] = "_M_ARM_NT";
  sub_1039E30(a2, (__int64)vars0, (__int64)vars30, a4, 257, 259, vars60, vars68, vars70, vars78, 1u);
  vars30[0] = "_M_ARM";
  vars50 = 259;
  vars0[0] = "_M_ARMT";
  LOWORD(vars80) = 257;
  vars20 = 259;
  sub_1039E30(a2, (__int64)vars0, (__int64)vars30, v4, v5, v6, vars60, vars68, vars70, vars78, 1u);
  LOWORD(vars80) = 257;
  vars50 = 259;
  vars0[0] = "_M_THUMB";
  vars20 = 259;
  vars30[0] = "_M_ARM";
  sub_1039E30(a2, (__int64)vars0, (__int64)vars30, v7, v8, v9, vars60, vars68, vars70, vars78, 1u);
  v10 = *(_DWORD *)(a1 + 672) != 1;
  LOWORD(vars80) = 257;
  v11 = sub_22B7480(a1 + 640);
  v15 = 2 * v10 + 4;
  v16 = 0;
  if ( v12 >= v15 )
  {
    v17 = v12;
    v12 = v15;
    v16 = v17 - v15;
  }
  vars30[1] = v16;
  vars30[0] = v11 + v12;
  vars50 = 261;
  vars0[0] = "_M_ARM";
  vars20 = 259;
  sub_1039E30(a2, (__int64)vars0, (__int64)vars30, v16, v13, v14, vars60, vars68, vars70, vars78, vars80);
  vars30[0] = "31";
  vars50 = 259;
  vars20 = 259;
  LOWORD(vars80) = 257;
  vars0[0] = "_M_ARM_FP";
  return sub_1039E30(a2, (__int64)vars0, (__int64)vars30, 257, v18, v19, vars60, vars68, vars70, vars78, 1u);
}
