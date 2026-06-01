_BYTE *__fastcall sub_1020420(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE *result; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+8h] [rbp-B0h]
  __int64 v18; // [rsp+10h] [rbp-A8h]
  __int64 v19; // [rsp+18h] [rbp-A0h]
  __int64 v20; // [rsp+20h] [rbp-98h]
  _QWORD v21[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v22; // [rsp+50h] [rbp-68h]
  const char *v23; // [rsp+60h] [rbp-58h] BYREF
  __int64 v24; // [rsp+68h] [rbp-50h]
  __int64 v25; // [rsp+70h] [rbp-48h]
  __int64 v26; // [rsp+78h] [rbp-40h]
  __int64 v27; // [rsp+80h] [rbp-38h]

  sub_1019BB0(a4, (__int64)"unix", 4, a2, a5, a6);
  v21[0] = "1";
  v22 = 259;
  LOWORD(v27) = 257;
  v16 = "__FreeBSD_kernel__";
  LOWORD(v20) = 259;
  sub_10160F0(a4, (__int64)&v16, (__int64)v21, v7, v8, 257, (char)v23, v24, v25, v26, 1u);
  LOWORD(v27) = 257;
  v22 = 259;
  v16 = "__GLIBC__";
  v21[0] = "1";
  LOWORD(v20) = 259;
  result = sub_10160F0(a4, (__int64)&v16, (__int64)v21, v9, v10, v11, (char)v23, v24, v25, v26, 1u);
  if ( (*(_BYTE *)(a2 + 20) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
      return result;
LABEL_5:
    LOWORD(v20) = 257;
    v21[0] = "1";
    v22 = 259;
    v23 = "_GNU_SOURCE";
    LOWORD(v27) = 259;
    return sub_10160F0(a4, (__int64)&v23, (__int64)v21, 259, v14, v15, (char)v16, v17, v18, v19, 1u);
  }
  v21[0] = "1";
  v22 = 259;
  LOWORD(v27) = 257;
  v16 = "_REENTRANT";
  LOWORD(v20) = 259;
  result = sub_10160F0(a4, (__int64)&v16, (__int64)v21, v13, 259, v15, (char)v23, v24, v25, v26, 1u);
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
    goto LABEL_5;
  return result;
}

