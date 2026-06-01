_BYTE *__fastcall sub_1048BF0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  size_t v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  size_t v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE *result; // rax
  __int64 v20; // rdx
  size_t v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD v25[4]; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v26; // [rsp+30h] [rbp-A8h]
  _QWORD v27[4]; // [rsp+40h] [rbp-98h] BYREF
  __int16 v28; // [rsp+60h] [rbp-78h]
  __int64 v29; // [rsp+70h] [rbp-68h]
  __int64 v30; // [rsp+78h] [rbp-60h]
  __int64 v31; // [rsp+80h] [rbp-58h]
  __int64 v32; // [rsp+88h] [rbp-50h]
  __int64 v33; // [rsp+90h] [rbp-48h]

  v6 = j__strlen("unix");
  sub_103D8F0(a4, (__int64)"unix", v6, a2, v7, v8);
  v9 = j__strlen("linux");
  sub_10474F0(a4, "linux", v9, a2, v10, v11);
  v15 = *(_DWORD *)(a3 + 48) == 17;
  v27[0] = "1";
  LOWORD(v33) = 257;
  v28 = 259;
  if ( !v15 )
  {
    v26 = 259;
    v25[0] = "__gnu_linux__";
    sub_1039E30(a4, (__int64)v25, (__int64)v27, v12, v13, v14, v29, v30, v31, v32, v33);
    goto LABEL_3;
  }
  v26 = 259;
  v25[0] = "__ANDROID__";
  sub_1039E30(a4, (__int64)v25, (__int64)v27, v12, v13, v14, v29, v30, v31, v32, v33);
  v21 = j__strlen("android");
  *(_QWORD *)(a1 + 360) = "android";
  *(_QWORD *)(a1 + 368) = v21;
  v22 = sub_22B7A20(a3);
  *(_QWORD *)(a1 + 376) = v22;
  *(_QWORD *)(a1 + 384) = v23;
  if ( !(_DWORD)v22 )
  {
LABEL_3:
    if ( (*(_BYTE *)(a2 + 20) & 0x20) == 0 )
      goto LABEL_4;
    goto LABEL_12;
  }
  LODWORD(v25[0]) = v22;
  v26 = 265;
  v27[0] = "__ANDROID_MIN_SDK_VERSION__";
  v28 = 259;
  LOWORD(v33) = 257;
  sub_1039E30(a4, (__int64)v27, (__int64)v25, 265, v17, v18, v29, v30, v31, v32, 1u);
  v27[0] = "__ANDROID_MIN_SDK_VERSION__";
  LOWORD(v33) = 257;
  v28 = 259;
  v25[0] = "__ANDROID_API__";
  v26 = 259;
  sub_1039E30(a4, (__int64)v25, (__int64)v27, v24, 259, 259, v29, v30, v31, v32, 1u);
  if ( (*(_BYTE *)(a2 + 20) & 0x20) == 0 )
  {
LABEL_4:
    if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
      goto LABEL_5;
LABEL_13:
    v27[0] = "1";
    v28 = 259;
    LOWORD(v33) = 257;
    v25[0] = "_GNU_SOURCE";
    v26 = 259;
    sub_1039E30(a4, (__int64)v25, (__int64)v27, v16, 259, v18, v29, v30, v31, v32, 1u);
    if ( !*(_BYTE *)(a1 + 278) )
      goto LABEL_6;
LABEL_14:
    LOWORD(v33) = 257;
    v28 = 259;
    v27[0] = "1";
    v25[0] = "__FLOAT128__";
    v26 = 259;
    sub_1039E30(a4, (__int64)v25, (__int64)v27, 259, v17, v18, v29, v30, v31, v32, 1u);
    goto LABEL_6;
  }
LABEL_12:
  v27[0] = "1";
  LOWORD(v33) = 257;
  v28 = 259;
  v25[0] = "_REENTRANT";
  v26 = 259;
  sub_1039E30(a4, (__int64)v25, (__int64)v27, v16, v17, 257, v29, v30, v31, v32, 1u);
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
    goto LABEL_13;
LABEL_5:
  if ( *(_BYTE *)(a1 + 278) )
    goto LABEL_14;
LABEL_6:
  result = (_BYTE *)*(unsigned int *)(a3 + 48);
  v20 = *(_DWORD *)(a3 + 48) & 0xFFFFFFFB;
  if ( (_DWORD)v20 == 2 || (_DWORD)result == 8 )
    return sub_103D7F0(a4, (__int64)v25, v20, v16, v17, v18);
  return result;
}
