_BYTE *__fastcall sub_101CE70(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD v22[4]; // [rsp+0h] [rbp-C8h] BYREF
  __int16 v23; // [rsp+20h] [rbp-A8h]
  _QWORD v24[4]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v25; // [rsp+50h] [rbp-78h]
  __int64 v26; // [rsp+60h] [rbp-68h]
  __int64 v27; // [rsp+68h] [rbp-60h]
  __int64 v28; // [rsp+70h] [rbp-58h]
  __int64 v29; // [rsp+78h] [rbp-50h]
  __int64 v30; // [rsp+80h] [rbp-48h]

  v5 = sub_2293DC0(a3);
  if ( v5 )
  {
    v8 = v5;
    v9 = 100000 * v5 + 1;
  }
  else
  {
    v9 = 800001;
    v8 = 8;
  }
  LODWORD(v22[0]) = v8;
  LOWORD(v30) = 257;
  v23 = 265;
  v25 = 259;
  v24[0] = "__FreeBSD__";
  sub_10160F0(a4, (__int64)v24, (__int64)v22, v6, v7, 257, v26, v27, v28, v29, 1u);
  LOWORD(v30) = 257;
  v23 = 265;
  v24[0] = "__FreeBSD_cc_version";
  LODWORD(v22[0]) = v9;
  v25 = 259;
  sub_10160F0(a4, (__int64)v24, (__int64)v22, v10, v11, v12, v26, v27, v28, v29, 1u);
  LOWORD(v30) = 257;
  v25 = 259;
  v22[0] = "__KPRINTF_ATTRIBUTE__";
  v23 = 259;
  v24[0] = "1";
  sub_10160F0(a4, (__int64)v22, (__int64)v24, v13, v14, v15, v26, v27, v28, v29, 1u);
  sub_1019BB0(a4, (__int64)"unix", 4, a2, v16, v17);
  if ( *(_BYTE *)(a1 + 278) )
  {
    v24[0] = "1";
    v25 = 259;
    LOWORD(v30) = 257;
    v22[0] = "__FLOAT128__";
    v23 = 259;
    sub_10160F0(a4, (__int64)v22, (__int64)v24, v18, 259, v20, v26, v27, v28, v29, 1u);
  }
  v24[0] = "1";
  LOWORD(v30) = 257;
  v25 = 259;
  v22[0] = "__STDC_MB_MIGHT_NEQ_WC__";
  v23 = 259;
  return sub_10160F0(a4, (__int64)v22, (__int64)v24, 259, v19, v20, v26, v27, v28, v29, 1u);
}

