_BYTE *__fastcall sub_10428C0(_DWORD *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64); // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  const char *v22; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+10h] [rbp-C0h]
  __int64 v24; // [rsp+18h] [rbp-B8h]
  __int64 v25; // [rsp+20h] [rbp-B0h]
  __int64 v26; // [rsp+28h] [rbp-A8h]
  _QWORD v27[4]; // [rsp+38h] [rbp-98h] BYREF
  __int16 v28; // [rsp+58h] [rbp-78h]
  const char *v29; // [rsp+68h] [rbp-68h] BYREF
  __int64 v30; // [rsp+70h] [rbp-60h]
  __int64 v31; // [rsp+78h] [rbp-58h]
  __int64 v32; // [rsp+80h] [rbp-50h]
  __int64 v33; // [rsp+88h] [rbp-48h]

  v28 = 259;
  v29 = "__AARCH64EL__";
  LOWORD(v33) = 259;
  LOWORD(v26) = 257;
  v27[0] = "1";
  sub_10160F0(a3, (__int64)&v29, (__int64)v27, a4, a5, a6, (char)v22, v23, v24, v25, 1u);
  sub_103E670((__int64)a1, a2, a3, v8, v9, v10);
  v11 = a1 + 54;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 992LL);
  if ( v12 == sub_103A660 )
    sub_1074800(v11, a2, a3);
  else
    v12((__int64)a1, a2, (__int64)(a1 + 54), (__int64)a3);
  if ( a1[62] == 3 && a1[63] == 36 )
  {
    v27[0] = "100";
    LOWORD(v33) = 259;
    v28 = 259;
    v29 = "_M_X64";
    sub_10160F0(a3, (__int64)&v29, (__int64)v27, v13, 259, v15, (char)v22, v23, v24, v25, 1u);
    v27[0] = "100";
    v28 = 259;
    v29 = "_M_AMD64";
    LOWORD(v33) = 259;
    sub_10160F0(a3, (__int64)&v29, (__int64)v27, v17, v18, 257, (char)v22, v23, v24, v25, 1u);
    v27[0] = "1";
    LOWORD(v26) = 257;
    v28 = 259;
    v29 = "_M_ARM64EC";
    LOWORD(v33) = 259;
    return sub_10160F0(a3, (__int64)&v29, (__int64)v27, v19, v20, v21, (char)v22, v23, v24, v25, 1u);
  }
  else
  {
    v28 = 259;
    LOWORD(v33) = 257;
    v27[0] = "1";
    v22 = "_M_ARM64";
    LOWORD(v26) = 259;
    return sub_10160F0(a3, (__int64)&v22, (__int64)v27, 259, v14, v15, (char)v29, v30, v31, v32, 1u);
  }
}

