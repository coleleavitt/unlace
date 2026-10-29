_BYTE *__fastcall sub_101F730(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r9
  const char *v10; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+8h] [rbp-B0h]
  __int64 v12; // [rsp+10h] [rbp-A8h]
  __int64 v13; // [rsp+18h] [rbp-A0h]
  __int64 v14; // [rsp+20h] [rbp-98h]
  _QWORD v15[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v16; // [rsp+50h] [rbp-68h]
  char *v17; // [rsp+60h] [rbp-58h] BYREF
  __int64 v18; // [rsp+68h] [rbp-50h]
  __int64 v19; // [rsp+70h] [rbp-48h]
  __int64 v20; // [rsp+78h] [rbp-40h]
  __int64 v21; // [rsp+80h] [rbp-38h]

  if ( (*(_BYTE *)(a2 + 20) & 0x20) != 0 )
  {
    v17 = "_REENTRANT";
    LOWORD(v14) = 257;
    v16 = 259;
    v15[0] = "1";
    LOWORD(v21) = 259;
    sub_10160F0(a4, (__int64)&v17, (__int64)v15, (__int64)a4, a5, a6, (char)v10, v11, v12, v13, 1u);
    if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
      goto LABEL_3;
LABEL_5:
    v15[0] = "1";
    LOWORD(v14) = 257;
    v16 = 259;
    v17 = "_GNU_SOURCE";
    LOWORD(v21) = 259;
    sub_10160F0(a4, (__int64)&v17, (__int64)v15, (__int64)a4, a5, 257, (char)v10, v11, v12, v13, 1u);
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
    goto LABEL_5;
LABEL_3:
  v15[0] = "1";
  v16 = 259;
  v17 = "__FLOAT128__";
  LOWORD(v21) = 259;
  sub_10160F0(a4, (__int64)&v17, (__int64)v15, 259, a5, a6, (char)v10, v11, v12, v13, 1u);
  v15[0] = "1";
  LOWORD(v21) = 257;
  v16 = 259;
  v10 = "__wasi__";
  LOWORD(v14) = 259;
  return sub_10160F0(a4, (__int64)&v10, (__int64)v15, v7, 259, v8, (char)v17, v18, v19, v20, 1u);
}

