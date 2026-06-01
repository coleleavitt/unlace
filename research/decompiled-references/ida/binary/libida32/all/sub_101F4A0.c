_BYTE *__fastcall sub_101F4A0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  _BYTE *result; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  const char *v14; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+8h] [rbp-B0h]
  __int64 v16; // [rsp+10h] [rbp-A8h]
  __int64 v17; // [rsp+18h] [rbp-A0h]
  __int64 v18; // [rsp+20h] [rbp-98h]
  _QWORD v19[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v20; // [rsp+50h] [rbp-68h]
  char *v21; // [rsp+60h] [rbp-58h] BYREF
  __int64 v22; // [rsp+68h] [rbp-50h]
  __int64 v23; // [rsp+70h] [rbp-48h]
  __int64 v24; // [rsp+78h] [rbp-40h]
  __int64 v25; // [rsp+80h] [rbp-38h]

  if ( (*(_BYTE *)(a2 + 20) & 0x20) != 0 )
  {
    LOWORD(v18) = 257;
    v20 = 259;
    v21 = "_REENTRANT";
    v19[0] = "1";
    LOWORD(v25) = 259;
    sub_10160F0(a4, (__int64)&v21, (__int64)v19, (__int64)a4, a5, a6, (char)v14, v15, v16, v17, 1u);
    if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
      goto LABEL_3;
  }
  else if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
  {
    goto LABEL_3;
  }
  v19[0] = "1";
  LOWORD(v18) = 257;
  v20 = 259;
  v21 = "_GNU_SOURCE";
  LOWORD(v25) = 259;
  sub_10160F0(a4, (__int64)&v21, (__int64)v19, (__int64)a4, a5, a6, (char)v14, v15, v16, v17, 1u);
LABEL_3:
  v21 = "__FLOAT128__";
  LOWORD(v25) = 259;
  v20 = 259;
  v19[0] = "1";
  sub_10160F0(a4, (__int64)&v21, (__int64)v19, (__int64)a4, 259, a6, (char)v14, v15, v16, v17, 1u);
  sub_1019BB0(a4, (__int64)"unix", 4, a2, v7, v8);
  v19[0] = "1";
  v20 = 259;
  LOWORD(v25) = 257;
  v14 = "__EMSCRIPTEN__";
  LOWORD(v18) = 259;
  result = sub_10160F0(a4, (__int64)&v14, (__int64)v19, v9, v10, 257, (char)v21, v22, v23, v24, 1u);
  if ( (*(_BYTE *)(a2 + 20) & 0x20) != 0 )
  {
    LOWORD(v18) = 257;
    v19[0] = "1";
    v20 = 259;
    v21 = "__EMSCRIPTEN_PTHREADS__";
    LOWORD(v25) = 259;
    return sub_10160F0(a4, (__int64)&v21, (__int64)v19, 259, v12, v13, (char)v14, v15, v16, v17, 1u);
  }
  return result;
}

