_BYTE *__fastcall sub_103B7B0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  _QWORD v8[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v9; // [rsp+20h] [rbp-98h]
  _QWORD v10[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v11; // [rsp+50h] [rbp-68h]
  __int64 v12; // [rsp+60h] [rbp-58h]
  __int64 v13; // [rsp+68h] [rbp-50h]
  __int64 v14; // [rsp+70h] [rbp-48h]
  __int64 v15; // [rsp+78h] [rbp-40h]
  __int64 v16; // [rsp+80h] [rbp-38h]

  if ( (*(_BYTE *)(a2 + 20) & 0x20) != 0 )
  {
    LOWORD(v16) = 257;
    v10[0] = "1";
    v11 = 259;
    v8[0] = "_REENTRANT";
    v9 = 259;
    sub_1039E30(a4, (__int64)v8, (__int64)v10, (__int64)a4, a5, 257, v12, v13, v14, v15, 1u);
    if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
      goto LABEL_3;
LABEL_5:
    v10[0] = "1";
    v11 = 259;
    LOWORD(v16) = 257;
    v8[0] = "_GNU_SOURCE";
    v9 = 259;
    sub_1039E30(a4, (__int64)v8, (__int64)v10, (__int64)a4, 259, a6, v12, v13, v14, v15, 1u);
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
    goto LABEL_5;
LABEL_3:
  v10[0] = "1";
  LOWORD(v16) = 257;
  v11 = 259;
  v8[0] = "__FLOAT128__";
  v9 = 259;
  return sub_1039E30(a4, (__int64)v8, (__int64)v10, 259, a5, a6, v12, v13, v14, v15, 1u);
}
