_BYTE *__fastcall sub_101C5E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v9[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v10; // [rsp+20h] [rbp-98h]
  _QWORD v11[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v12; // [rsp+50h] [rbp-68h]
  __int64 v13; // [rsp+60h] [rbp-58h]
  __int64 v14; // [rsp+68h] [rbp-50h]
  __int64 v15; // [rsp+70h] [rbp-48h]
  __int64 v16; // [rsp+78h] [rbp-40h]
  __int64 v17; // [rsp+80h] [rbp-38h]

  if ( (*(_BYTE *)(a1 + 20) & 0x20) != 0 )
  {
    LOWORD(v17) = 257;
    v11[0] = "1";
    v12 = 259;
    v9[0] = "_REENTRANT";
    v10 = 259;
    sub_10160F0(a2, (__int64)v9, (__int64)v11, a4, a5, 257, v13, v14, v15, v16, 1u);
    if ( (*(_BYTE *)(a1 + 1) & 8) == 0 )
      goto LABEL_3;
LABEL_5:
    v11[0] = "1";
    v12 = 259;
    LOWORD(v17) = 257;
    v9[0] = "_GNU_SOURCE";
    v10 = 259;
    sub_10160F0(a2, (__int64)v9, (__int64)v11, a4, 259, a6, v13, v14, v15, v16, 1u);
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(a1 + 1) & 8) != 0 )
    goto LABEL_5;
LABEL_3:
  sub_1019BB0(a2, (__int64)"unix", 4, a1, a5, a6);
  v11[0] = "1";
  LOWORD(v17) = 257;
  v12 = 259;
  v9[0] = "__native_client__";
  v10 = 259;
  return sub_10160F0(a2, (__int64)v9, (__int64)v11, 259, v6, v7, v13, v14, v15, v16, 1u);
}

