_BYTE *__fastcall sub_103ECD0(__int64 a1, _BYTE *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE *result; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  const char *v20; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+8h] [rbp-C0h]
  __int64 v22; // [rsp+10h] [rbp-B8h]
  __int64 v23; // [rsp+18h] [rbp-B0h]
  __int64 v24; // [rsp+20h] [rbp-A8h]
  _QWORD v25[4]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v26; // [rsp+50h] [rbp-78h]
  const char *v27; // [rsp+60h] [rbp-68h] BYREF
  __int64 v28; // [rsp+68h] [rbp-60h]
  __int64 v29; // [rsp+70h] [rbp-58h]
  __int64 v30; // [rsp+78h] [rbp-50h]
  __int64 v31; // [rsp+80h] [rbp-48h]

  v26 = 259;
  LOWORD(v31) = 257;
  LOWORD(v24) = 259;
  v20 = "__DragonFly__";
  v25[0] = "1";
  sub_1039E30(a4, (__int64)&v20, (__int64)v25, (__int64)a4, a5, 257, (char)v27, v28, v29, v30, 1u);
  LOWORD(v31) = 257;
  v25[0] = "100001";
  v26 = 259;
  v20 = "__DragonFly_cc_version";
  LOWORD(v24) = 259;
  sub_1039E30(a4, (__int64)&v20, (__int64)v25, v6, v7, v8, (char)v27, v28, v29, v30, 1u);
  LOWORD(v31) = 257;
  v26 = 259;
  v20 = "__KPRINTF_ATTRIBUTE__";
  LOWORD(v24) = 259;
  v25[0] = "1";
  sub_1039E30(a4, (__int64)&v20, (__int64)v25, v9, v10, v11, (char)v27, v28, v29, v30, 1u);
  LOWORD(v31) = 257;
  v26 = 259;
  v20 = "__tune_i386__";
  LOWORD(v24) = 259;
  v25[0] = "1";
  sub_1039E30(a4, (__int64)&v20, (__int64)v25, 259, v12, v13, (char)v27, v28, v29, v30, 1u);
  result = sub_103D8F0(a4, (__int64)"unix", 4, (__int64)a2, v14, v15);
  if ( !*(_BYTE *)(a1 + 278) )
  {
    if ( (*a2 & 2) == 0 )
      return result;
LABEL_5:
    LOWORD(v24) = 257;
    v26 = 259;
    v25[0] = "1";
    v27 = "__STDC_NO_THREADS__";
    LOWORD(v31) = 259;
    return sub_1039E30(a4, (__int64)&v27, (__int64)v25, 259, v18, v19, (char)v20, v21, v22, v23, 1u);
  }
  v25[0] = "1";
  v26 = 259;
  LOWORD(v31) = 257;
  v20 = "__FLOAT128__";
  LOWORD(v24) = 259;
  result = sub_1039E30(a4, (__int64)&v20, (__int64)v25, v17, 259, v19, (char)v27, v28, v29, v30, 1u);
  if ( (*a2 & 2) != 0 )
    goto LABEL_5;
  return result;
}
