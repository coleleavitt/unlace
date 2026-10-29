_BYTE *__fastcall sub_105F260(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *result; // rax
  __int64 v21; // r8
  __int64 v22; // r9
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
  vars0[0] = "__AARCH64_SIMD__";
  vars20 = 259;
  vars30[0] = "1";
  sub_1039E30(a1, (__int64)vars0, (__int64)vars30, 257, 259, a6, vars60, vars68, vars70, vars78, 1u);
  v6 = sub_22B7EC0(a2);
  vars30[0] = "1";
  LOWORD(vars80) = 257;
  vars50 = 259;
  if ( v6 )
    v9 = "__ARM64_ARCH_8_32__";
  else
    v9 = "__ARM64_ARCH_8__";
  vars0[0] = v9;
  vars20 = 259;
  sub_1039E30(a1, (__int64)vars0, (__int64)vars30, v7, v8, 257, vars60, vars68, vars70, vars78, vars80);
  vars50 = 259;
  vars20 = 259;
  LOWORD(vars80) = 257;
  vars0[0] = "__ARM_NEON__";
  vars30[0] = "1";
  sub_1039E30(a1, (__int64)vars0, (__int64)vars30, v10, 259, 259, vars60, vars68, vars70, vars78, 1u);
  vars0[0] = "__REGISTER_PREFIX__";
  LOWORD(vars80) = 257;
  vars50 = 257;
  vars20 = 259;
  sub_1039E30(a1, (__int64)vars0, (__int64)vars30, v11, v12, v13, vars60, vars68, vars70, vars78, 1u);
  LOWORD(vars80) = 257;
  vars50 = 259;
  vars0[0] = "__arm64";
  vars20 = 259;
  vars30[0] = "1";
  sub_1039E30(a1, (__int64)vars0, (__int64)vars30, v14, v15, v16, vars60, vars68, vars70, vars78, 1u);
  LOWORD(vars80) = 257;
  vars50 = 259;
  vars20 = 259;
  vars30[0] = "1";
  vars0[0] = "__arm64__";
  result = sub_1039E30(a1, (__int64)vars0, (__int64)vars30, v17, v18, v19, vars60, vars68, vars70, vars78, 1u);
  if ( *(_DWORD *)(a2 + 32) == 3 && *(_DWORD *)(a2 + 36) == 35 )
  {
    vars30[0] = "1";
    LOWORD(vars80) = 257;
    vars50 = 259;
    vars0[0] = "__arm64e__";
    vars20 = 259;
    return sub_1039E30(a1, (__int64)vars0, (__int64)vars30, 259, v21, v22, vars60, vars68, vars70, vars78, 1u);
  }
  return result;
}
