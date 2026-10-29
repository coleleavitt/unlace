_BYTE *__fastcall sub_101A7F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r9
  const char *v24; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+10h] [rbp-B0h]
  __int64 v26; // [rsp+18h] [rbp-A8h]
  __int64 v27; // [rsp+20h] [rbp-A0h]
  __int64 v28; // [rsp+28h] [rbp-98h]
  _QWORD v29[4]; // [rsp+38h] [rbp-88h] BYREF
  __int16 v30; // [rsp+58h] [rbp-68h]
  const char *v31; // [rsp+68h] [rbp-58h] BYREF
  __int64 v32; // [rsp+70h] [rbp-50h]
  __int64 v33; // [rsp+78h] [rbp-48h]
  __int64 v34; // [rsp+80h] [rbp-40h]
  __int64 v35; // [rsp+88h] [rbp-38h]

  LOWORD(v35) = 259;
  v29[0] = "9";
  v30 = 259;
  v31 = "__FreeBSD__";
  sub_10160F0(a4, (__int64)&v31, (__int64)v29, 259, a5, a6, (char)v24, v25, v26, v27, 1u);
  v29[0] = "900001";
  LOWORD(v35) = 259;
  v30 = 259;
  v31 = "__FreeBSD_cc_version";
  sub_10160F0(a4, (__int64)&v31, (__int64)v29, v7, 259, v8, (char)v24, v25, v26, v27, 1u);
  v29[0] = "1";
  v30 = 259;
  LOWORD(v35) = 259;
  v31 = "__KPRINTF_ATTRIBUTE__";
  sub_10160F0(a4, (__int64)&v31, (__int64)v29, v9, v10, 257, (char)v24, v25, v26, v27, 1u);
  sub_1019BB0(a4, (__int64)"unix", 4, a2, v11, v12);
  v30 = 259;
  v31 = "__SCE__";
  v29[0] = "1";
  LOWORD(v35) = 259;
  sub_10160F0(a4, (__int64)&v31, (__int64)v29, v13, v14, v15, (char)v24, v25, v26, v27, 1u);
  v30 = 259;
  v31 = "__STDC_NO_COMPLEX__";
  v29[0] = "1";
  LOWORD(v35) = 259;
  sub_10160F0(a4, (__int64)&v31, (__int64)v29, v16, v17, v18, (char)v24, v25, v26, v27, 1u);
  v29[0] = "1";
  v30 = 259;
  v31 = "__STDC_NO_THREADS__";
  LOWORD(v35) = 259;
  sub_10160F0(a4, (__int64)&v31, (__int64)v29, 259, v19, v20, (char)v24, v25, v26, v27, 1u);
  v29[0] = "1";
  LOWORD(v35) = 257;
  v30 = 259;
  v24 = "__ORBIS__";
  LOWORD(v28) = 259;
  return sub_10160F0(a4, (__int64)&v24, (__int64)v29, v21, 259, v22, (char)v31, v32, v33, v34, 1u);
}

