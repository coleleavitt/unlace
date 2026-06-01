_BYTE *__fastcall sub_10474F0(__int64 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  _QWORD v9[4]; // [rsp+10h] [rbp-F8h] BYREF
  __int16 v10; // [rsp+30h] [rbp-D8h]
  _QWORD v11[2]; // [rsp+40h] [rbp-C8h] BYREF
  char *v12; // [rsp+50h] [rbp-B8h]
  __int64 v13; // [rsp+58h] [rbp-B0h]
  __int16 v14; // [rsp+60h] [rbp-A8h]
  _QWORD v15[4]; // [rsp+70h] [rbp-98h] BYREF
  __int16 v16; // [rsp+90h] [rbp-78h]
  __int64 v17; // [rsp+A0h] [rbp-68h]
  __int64 v18; // [rsp+A8h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-58h]
  __int64 v20; // [rsp+B8h] [rbp-50h]
  __int64 v21; // [rsp+C0h] [rbp-48h]

  if ( (*(_BYTE *)(a4 + 4) & 4) != 0 )
  {
    v11[0] = a2;
    v14 = 261;
    v11[1] = a3;
    LOWORD(v21) = 257;
    v15[0] = "1";
    v16 = 259;
    sub_1039E30(a1, (__int64)v11, (__int64)v15, a4, a5, a6, v17, v18, v19, v20, 1u);
  }
  LOWORD(v21) = 257;
  v16 = 259;
  v14 = 1283;
  v11[0] = "__";
  v12 = a2;
  v13 = a3;
  v15[0] = "1";
  sub_1039E30(a1, (__int64)v11, (__int64)v15, 259, a5, a6, v17, v18, v19, v20, 1u);
  v9[0] = "__";
  v15[0] = "1";
  LOWORD(v21) = 257;
  v9[2] = a2;
  v9[3] = a3;
  v12 = "__";
  v16 = 259;
  v10 = 1283;
  v11[0] = v9;
  v14 = 770;
  return sub_1039E30(a1, (__int64)v11, (__int64)v15, v7, 259, 1283, v17, v18, v19, v20, 1u);
}
