_BYTE *__fastcall sub_1066600(_DWORD *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD *v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64, __int64); // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  const char *v19; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+10h] [rbp-C0h]
  __int64 v21; // [rsp+18h] [rbp-B8h]
  __int64 v22; // [rsp+20h] [rbp-B0h]
  __int64 v23; // [rsp+28h] [rbp-A8h]
  _QWORD v24[4]; // [rsp+38h] [rbp-98h] BYREF
  __int16 v25; // [rsp+58h] [rbp-78h]
  const char *v26; // [rsp+68h] [rbp-68h] BYREF
  __int64 v27; // [rsp+70h] [rbp-60h]
  __int64 v28; // [rsp+78h] [rbp-58h]
  __int64 v29; // [rsp+80h] [rbp-50h]
  __int64 v30; // [rsp+88h] [rbp-48h]

  v25 = 259;
  v26 = "__AARCH64EL__";
  LOWORD(v30) = 259;
  LOWORD(v23) = 257;
  v24[0] = "1";
  sub_1039E30(a3, (__int64)&v26, (__int64)v24, a4, a5, a6, (char)v19, v20, v21, v22, 1u);
  sub_10623B0(a1, a2, a3);
  v8 = a1 + 54;
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 992LL);
  if ( v9 == sub_105E3A0 )
    sub_1098540(v8, a2, a3);
  else
    v9((__int64)a1, a2, (__int64)(a1 + 54), (__int64)a3);
  if ( a1[62] == 3 && a1[63] == 36 )
  {
    v24[0] = "100";
    LOWORD(v30) = 259;
    v25 = 259;
    v26 = "_M_X64";
    sub_1039E30(a3, (__int64)&v26, (__int64)v24, v10, 259, v12, (char)v19, v20, v21, v22, 1u);
    v24[0] = "100";
    v25 = 259;
    v26 = "_M_AMD64";
    LOWORD(v30) = 259;
    sub_1039E30(a3, (__int64)&v26, (__int64)v24, v14, v15, 257, (char)v19, v20, v21, v22, 1u);
    v24[0] = "1";
    LOWORD(v23) = 257;
    v25 = 259;
    v26 = "_M_ARM64EC";
    LOWORD(v30) = 259;
    return sub_1039E30(a3, (__int64)&v26, (__int64)v24, v16, v17, v18, (char)v19, v20, v21, v22, 1u);
  }
  else
  {
    v25 = 259;
    LOWORD(v30) = 257;
    v24[0] = "1";
    v19 = "_M_ARM64";
    LOWORD(v23) = 259;
    return sub_1039E30(a3, (__int64)&v19, (__int64)v24, 259, v11, v12, (char)v26, v27, v28, v29, 1u);
  }
}
