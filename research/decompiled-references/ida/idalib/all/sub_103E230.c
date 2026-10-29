_BYTE *__fastcall sub_103E230(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *result; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+8h] [rbp-B0h]
  __int64 v23; // [rsp+10h] [rbp-A8h]
  __int64 v24; // [rsp+18h] [rbp-A0h]
  __int64 v25; // [rsp+20h] [rbp-98h]
  _QWORD v26[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v27; // [rsp+50h] [rbp-68h]
  const char *v28; // [rsp+60h] [rbp-58h] BYREF
  __int64 v29; // [rsp+68h] [rbp-50h]
  __int64 v30; // [rsp+70h] [rbp-48h]
  __int64 v31; // [rsp+78h] [rbp-40h]
  __int64 v32; // [rsp+80h] [rbp-38h]

  sub_103D8F0(a4, (__int64)"unix", 4, a2, a5, a6);
  v26[0] = "1";
  v27 = 259;
  LOWORD(v32) = 257;
  LOWORD(v25) = 259;
  v21 = "__GNU__";
  sub_1039E30(a4, (__int64)&v21, (__int64)v26, v7, v8, 257, (char)v28, v29, v30, v31, 1u);
  LOWORD(v32) = 257;
  v27 = 259;
  v21 = "__gnu_hurd__";
  LOWORD(v25) = 259;
  v26[0] = "1";
  sub_1039E30(a4, (__int64)&v21, (__int64)v26, v9, v10, v11, (char)v28, v29, v30, v31, 1u);
  LOWORD(v32) = 257;
  v27 = 259;
  v21 = "__MACH__";
  LOWORD(v25) = 259;
  v26[0] = "1";
  sub_1039E30(a4, (__int64)&v21, (__int64)v26, v12, v13, v14, (char)v28, v29, v30, v31, 1u);
  LOWORD(v32) = 257;
  LOWORD(v25) = 259;
  v26[0] = "1";
  v27 = 259;
  v21 = "__GLIBC__";
  result = sub_1039E30(a4, (__int64)&v21, (__int64)v26, 259, v15, v16, (char)v28, v29, v30, v31, 1u);
  if ( (*(_BYTE *)(a2 + 20) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
      return result;
LABEL_5:
    LOWORD(v25) = 257;
    v26[0] = "1";
    v27 = 259;
    v28 = "_GNU_SOURCE";
    LOWORD(v32) = 259;
    return sub_1039E30(a4, (__int64)&v28, (__int64)v26, 259, v19, v20, (char)v21, v22, v23, v24, 1u);
  }
  v26[0] = "1";
  v27 = 259;
  LOWORD(v32) = 257;
  v21 = "_REENTRANT";
  LOWORD(v25) = 259;
  result = sub_1039E30(a4, (__int64)&v21, (__int64)v26, v18, 259, v20, (char)v28, v29, v30, v31, 1u);
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
    goto LABEL_5;
  return result;
}
