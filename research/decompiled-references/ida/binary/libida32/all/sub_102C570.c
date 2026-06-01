_BYTE *__fastcall sub_102C570(__int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r9
  _BYTE *result; // rax
  __int64 v8; // r9
  char v9; // [rsp+24h] [rbp-FCh]
  _QWORD v10[2]; // [rsp+28h] [rbp-F8h] BYREF
  char *v11; // [rsp+38h] [rbp-E8h]
  __int64 v12; // [rsp+40h] [rbp-E0h]
  __int16 v13; // [rsp+48h] [rbp-D8h]
  _QWORD v14[2]; // [rsp+58h] [rbp-C8h] BYREF
  char *v15; // [rsp+68h] [rbp-B8h]
  __int64 v16; // [rsp+70h] [rbp-B0h]
  __int16 v17; // [rsp+78h] [rbp-A8h]
  _QWORD v18[4]; // [rsp+88h] [rbp-98h] BYREF
  __int16 v19; // [rsp+A8h] [rbp-78h]
  __int64 v20; // [rsp+B8h] [rbp-68h]
  __int64 v21; // [rsp+C0h] [rbp-60h]
  __int64 v22; // [rsp+C8h] [rbp-58h]
  __int64 v23; // [rsp+D0h] [rbp-50h]
  __int64 v24; // [rsp+D8h] [rbp-48h]

  v9 = a4;
  v19 = 259;
  v17 = 1283;
  v15 = a2;
  v16 = a3;
  LOWORD(v24) = 257;
  v18[0] = "1";
  v14[0] = "__";
  sub_10160F0(a1, (__int64)v14, (__int64)v18, a4, 257, 259, v20, v21, v22, v23, 1u);
  v19 = 259;
  v13 = 1283;
  v14[0] = v10;
  LOWORD(v24) = 257;
  v18[0] = "1";
  v10[0] = "__";
  v11 = a2;
  v12 = a3;
  v15 = "__";
  v17 = 770;
  result = sub_10160F0(a1, (__int64)v14, (__int64)v18, v5, (__int64)v10, v6, v20, v21, v22, v23, 1u);
  if ( v9 )
  {
    LOWORD(v24) = 257;
    v19 = 259;
    v17 = 770;
    v18[0] = "1";
    v13 = 1283;
    v10[0] = "__tune_";
    v11 = a2;
    v12 = a3;
    v14[0] = v10;
    v15 = "__";
    return sub_10160F0(a1, (__int64)v14, (__int64)v18, 1283, (__int64)v10, v8, v20, v21, v22, v23, 1u);
  }
  return result;
}

