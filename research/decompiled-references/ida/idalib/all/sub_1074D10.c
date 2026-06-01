_BYTE *__fastcall sub_1074D10(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, __int64, __int64, __int64); // rax
  __int64 v13; // r8
  __int64 v14; // r9
  const char *v16; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+10h] [rbp-B0h]
  __int64 v18; // [rsp+18h] [rbp-A8h]
  __int64 v19; // [rsp+20h] [rbp-A0h]
  __int64 v20; // [rsp+28h] [rbp-98h]
  _QWORD v21[4]; // [rsp+38h] [rbp-88h] BYREF
  __int16 v22; // [rsp+58h] [rbp-68h]
  const char *v23; // [rsp+68h] [rbp-58h] BYREF
  __int64 v24; // [rsp+70h] [rbp-50h]
  __int64 v25; // [rsp+78h] [rbp-48h]
  __int64 v26; // [rsp+80h] [rbp-40h]
  __int64 v27; // [rsp+88h] [rbp-38h]

  v23 = "__ARMEL__";
  LOWORD(v20) = 257;
  v22 = 259;
  LOWORD(v27) = 259;
  v21[0] = "1";
  sub_1039E30(a3, (__int64)&v23, (__int64)v21, a4, 259, a6, (char)v16, v17, v18, v19, 1u);
  sub_1071740(a1, a2, a3, v8, v9, v10);
  v11 = a1 + 216;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 984LL);
  if ( v12 == sub_106F600 )
    sub_1098540(v11, a2, a3);
  else
    v12(a1, a2, a1 + 216, (__int64)a3);
  v21[0] = "1";
  LOWORD(v27) = 257;
  v22 = 259;
  v16 = "_ARM_";
  LOWORD(v20) = 259;
  return sub_1039E30(a3, (__int64)&v16, (__int64)v21, 259, v13, v14, (char)v23, v24, v25, v26, 1u);
}
