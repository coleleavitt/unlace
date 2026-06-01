_BYTE *__fastcall sub_102F3C0(__int64 a1, char *a2, __int64 *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *result; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  const char *v20; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+8h] [rbp-B0h]
  __int64 v22; // [rsp+10h] [rbp-A8h]
  __int64 v23; // [rsp+18h] [rbp-A0h]
  __int64 v24; // [rsp+20h] [rbp-98h]
  _QWORD v25[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v26; // [rsp+50h] [rbp-68h]
  const char *v27; // [rsp+60h] [rbp-58h] BYREF
  __int64 v28; // [rsp+68h] [rbp-50h]
  __int64 v29; // [rsp+70h] [rbp-48h]
  __int64 v30; // [rsp+78h] [rbp-40h]
  __int64 v31; // [rsp+80h] [rbp-38h]

  sub_109D620();
  v20 = "_X86_";
  LOWORD(v24) = 259;
  LOWORD(v31) = 257;
  v26 = 259;
  v25[0] = "1";
  sub_10160F0(a3, (__int64)&v20, (__int64)v25, v4, 259, v5, (char)v27, v28, v29, v30, 1u);
  LOWORD(v31) = 257;
  LOWORD(v24) = 259;
  v26 = 259;
  v20 = "__CYGWIN__";
  v25[0] = "1";
  sub_10160F0(a3, (__int64)&v20, (__int64)v25, v6, v7, 257, (char)v27, v28, v29, v30, 1u);
  LOWORD(v31) = 257;
  v26 = 259;
  v20 = "__CYGWIN32__";
  LOWORD(v24) = 259;
  v25[0] = "1";
  sub_10160F0(a3, (__int64)&v20, (__int64)v25, v8, v9, v10, (char)v27, v28, v29, v30, 1u);
  sub_102EC90(a2, a3, v11, v12, v13, v14);
  result = sub_1019BB0(a3, (__int64)"unix", 4, (__int64)a2, v15, v16);
  if ( (a2[1] & 8) != 0 )
  {
    LOWORD(v24) = 257;
    v25[0] = "1";
    v26 = 259;
    v27 = "_GNU_SOURCE";
    LOWORD(v31) = 259;
    return sub_10160F0(a3, (__int64)&v27, (__int64)v25, 259, v18, v19, (char)v20, v21, v22, v23, 1u);
  }
  return result;
}

