_BYTE *__fastcall sub_1040150(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v10[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v11; // [rsp+20h] [rbp-98h]
  _QWORD v12[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v13; // [rsp+50h] [rbp-68h]
  __int64 v14; // [rsp+60h] [rbp-58h]
  __int64 v15; // [rsp+68h] [rbp-50h]
  __int64 v16; // [rsp+70h] [rbp-48h]
  __int64 v17; // [rsp+78h] [rbp-40h]
  __int64 v18; // [rsp+80h] [rbp-38h]

  if ( (*(_BYTE *)(a2 + 20) & 0x20) != 0 )
  {
    LOWORD(v18) = 257;
    v12[0] = "1";
    v13 = 259;
    v10[0] = "_REENTRANT";
    v11 = 259;
    sub_1039E30(a4, (__int64)v10, (__int64)v12, (__int64)a4, a5, 257, v14, v15, v16, v17, 1u);
    if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
      goto LABEL_3;
LABEL_5:
    v12[0] = "1";
    v13 = 259;
    LOWORD(v18) = 257;
    v10[0] = "_GNU_SOURCE";
    v11 = 259;
    sub_1039E30(a4, (__int64)v10, (__int64)v12, (__int64)a4, 259, a6, v14, v15, v16, v17, 1u);
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
    goto LABEL_5;
LABEL_3:
  sub_103D8F0(a4, (__int64)"unix", 4, a2, a5, a6);
  v12[0] = "1";
  LOWORD(v18) = 257;
  v13 = 259;
  v10[0] = "__native_client__";
  v11 = 259;
  return sub_1039E30(a4, (__int64)v10, (__int64)v12, 259, v7, v8, v14, v15, v16, v17, 1u);
}
