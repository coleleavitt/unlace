_BYTE *__fastcall sub_1051130(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *result; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  const char *v23; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+10h] [rbp-B0h]
  __int64 v25; // [rsp+18h] [rbp-A8h]
  __int64 v26; // [rsp+20h] [rbp-A0h]
  __int64 v27; // [rsp+28h] [rbp-98h]
  _QWORD v28[4]; // [rsp+38h] [rbp-88h] BYREF
  __int16 v29; // [rsp+58h] [rbp-68h]
  const char *v30; // [rsp+68h] [rbp-58h] BYREF
  __int64 v31; // [rsp+70h] [rbp-50h]
  __int64 v32; // [rsp+78h] [rbp-48h]
  __int64 v33; // [rsp+80h] [rbp-40h]
  __int64 v34; // [rsp+88h] [rbp-38h]

  LOWORD(v34) = 259;
  v30 = "__ARMEL__";
  v29 = 259;
  v28[0] = "1";
  sub_10160F0(a3, (__int64)&v30, (__int64)v28, a4, 259, a6, (char)v23, v24, v25, v26, 1u);
  sub_104DA00(a1, a2, a3, v7, v8, v9);
  LOWORD(v34) = 257;
  v29 = 259;
  LOWORD(v27) = 259;
  v23 = "_ARM_";
  v28[0] = "1";
  sub_10160F0(a3, (__int64)&v23, (__int64)v28, v10, v11, 257, (char)v30, v31, v32, v33, 1u);
  LOWORD(v34) = 257;
  v29 = 259;
  v23 = "__CYGWIN__";
  LOWORD(v27) = 259;
  v28[0] = "1";
  sub_10160F0(a3, (__int64)&v23, (__int64)v28, v12, v13, v14, (char)v30, v31, v32, v33, 1u);
  LOWORD(v34) = 257;
  v29 = 259;
  v23 = "__CYGWIN32__";
  v28[0] = "1";
  LOWORD(v27) = 259;
  sub_10160F0(a3, (__int64)&v23, (__int64)v28, v15, v16, v17, (char)v30, v31, v32, v33, 1u);
  result = sub_10237B0(a3, "unix", 4, a2, v18, v19);
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
  {
    v28[0] = "1";
    LOWORD(v34) = 257;
    v29 = 259;
    v23 = "_GNU_SOURCE";
    LOWORD(v27) = 259;
    return sub_10160F0(a3, (__int64)&v23, (__int64)v28, 259, v21, v22, (char)v30, v31, v32, v33, 1u);
  }
  return result;
}

