_BYTE *__fastcall sub_1043870(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  _BYTE *result; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v10; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+10h] [rbp-B0h]
  __int64 v12; // [rsp+18h] [rbp-A8h]
  __int64 v13; // [rsp+20h] [rbp-A0h]
  __int64 v14; // [rsp+28h] [rbp-98h]
  _QWORD v15[4]; // [rsp+38h] [rbp-88h] BYREF
  __int16 v16; // [rsp+58h] [rbp-68h]
  const char *v17; // [rsp+68h] [rbp-58h] BYREF
  __int64 v18; // [rsp+70h] [rbp-50h]
  __int64 v19; // [rsp+78h] [rbp-48h]
  __int64 v20; // [rsp+80h] [rbp-40h]
  __int64 v21; // [rsp+88h] [rbp-38h]

  LOWORD(v21) = 257;
  v16 = 259;
  v15[0] = "1";
  v10 = "__rtems__";
  LOWORD(v14) = 259;
  result = sub_1039E30(a4, (__int64)&v10, (__int64)v15, (__int64)a4, 259, a6, (char)v17, v18, v19, v20, 1u);
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
  {
    LOWORD(v14) = 257;
    v15[0] = "1";
    v16 = 259;
    v17 = "_GNU_SOURCE";
    LOWORD(v21) = 259;
    return sub_1039E30(a4, (__int64)&v17, (__int64)v15, 259, v8, v9, (char)v10, v11, v12, v13, 1u);
  }
  return result;
}
