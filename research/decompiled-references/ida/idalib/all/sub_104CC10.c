_BYTE *__fastcall sub_104CC10(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  size_t v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE *result; // rax
  __int64 v19; // rdx
  size_t v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD v24[4]; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v25; // [rsp+30h] [rbp-A8h]
  _QWORD v26[4]; // [rsp+40h] [rbp-98h] BYREF
  __int16 v27; // [rsp+60h] [rbp-78h]
  __int64 v28; // [rsp+70h] [rbp-68h]
  __int64 v29; // [rsp+78h] [rbp-60h]
  __int64 v30; // [rsp+80h] [rbp-58h]
  __int64 v31; // [rsp+88h] [rbp-50h]
  __int64 v32; // [rsp+90h] [rbp-48h]

  sub_103D8F0(a4, (__int64)"unix", 4, a2, a5, a6);
  v8 = j__strlen("linux");
  sub_10474F0(a4, "linux", v8, a2, v9, v10);
  v14 = *(_DWORD *)(a3 + 48) == 17;
  v26[0] = "1";
  LOWORD(v32) = 257;
  v27 = 259;
  if ( !v14 )
  {
    v25 = 259;
    v24[0] = "__gnu_linux__";
    sub_1039E30(a4, (__int64)v24, (__int64)v26, v11, v12, v13, v28, v29, v30, v31, v32);
    goto LABEL_3;
  }
  v25 = 259;
  v24[0] = "__ANDROID__";
  sub_1039E30(a4, (__int64)v24, (__int64)v26, v11, v12, v13, v28, v29, v30, v31, v32);
  v20 = j__strlen("android");
  *(_QWORD *)(a1 + 360) = "android";
  *(_QWORD *)(a1 + 368) = v20;
  v21 = sub_22B7A20(a3);
  *(_QWORD *)(a1 + 376) = v21;
  *(_QWORD *)(a1 + 384) = v22;
  if ( !(_DWORD)v21 )
  {
LABEL_3:
    if ( (*(_BYTE *)(a2 + 20) & 0x20) == 0 )
      goto LABEL_4;
    goto LABEL_12;
  }
  LODWORD(v24[0]) = v21;
  v25 = 265;
  v26[0] = "__ANDROID_MIN_SDK_VERSION__";
  v27 = 259;
  LOWORD(v32) = 257;
  sub_1039E30(a4, (__int64)v26, (__int64)v24, 265, v16, v17, v28, v29, v30, v31, 1u);
  v26[0] = "__ANDROID_MIN_SDK_VERSION__";
  LOWORD(v32) = 257;
  v27 = 259;
  v24[0] = "__ANDROID_API__";
  v25 = 259;
  sub_1039E30(a4, (__int64)v24, (__int64)v26, v23, 259, 259, v28, v29, v30, v31, 1u);
  if ( (*(_BYTE *)(a2 + 20) & 0x20) == 0 )
  {
LABEL_4:
    if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
      goto LABEL_5;
LABEL_13:
    v26[0] = "1";
    v27 = 259;
    LOWORD(v32) = 257;
    v24[0] = "_GNU_SOURCE";
    v25 = 259;
    sub_1039E30(a4, (__int64)v24, (__int64)v26, v15, 259, v17, v28, v29, v30, v31, 1u);
    if ( !*(_BYTE *)(a1 + 278) )
      goto LABEL_6;
LABEL_14:
    LOWORD(v32) = 257;
    v27 = 259;
    v26[0] = "1";
    v24[0] = "__FLOAT128__";
    v25 = 259;
    sub_1039E30(a4, (__int64)v24, (__int64)v26, 259, v16, v17, v28, v29, v30, v31, 1u);
    goto LABEL_6;
  }
LABEL_12:
  v26[0] = "1";
  LOWORD(v32) = 257;
  v27 = 259;
  v24[0] = "_REENTRANT";
  v25 = 259;
  sub_1039E30(a4, (__int64)v24, (__int64)v26, v15, v16, 257, v28, v29, v30, v31, 1u);
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
    goto LABEL_13;
LABEL_5:
  if ( *(_BYTE *)(a1 + 278) )
    goto LABEL_14;
LABEL_6:
  result = (_BYTE *)*(unsigned int *)(a3 + 48);
  v19 = *(_DWORD *)(a3 + 48) & 0xFFFFFFFB;
  if ( (_DWORD)v19 == 2 || (_DWORD)result == 8 )
    return sub_103D7F0(a4, (__int64)v24, v19, v15, v16, v17);
  return result;
}
