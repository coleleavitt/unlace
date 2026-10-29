_BYTE *__fastcall sub_1025B70(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *result; // rax
  __int64 v18; // rdx
  size_t v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD v23[4]; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v24; // [rsp+30h] [rbp-A8h]
  _QWORD v25[4]; // [rsp+40h] [rbp-98h] BYREF
  __int16 v26; // [rsp+60h] [rbp-78h]
  __int64 v27; // [rsp+70h] [rbp-68h]
  __int64 v28; // [rsp+78h] [rbp-60h]
  __int64 v29; // [rsp+80h] [rbp-58h]
  __int64 v30; // [rsp+88h] [rbp-50h]
  __int64 v31; // [rsp+90h] [rbp-48h]

  sub_1019BB0(a4, (__int64)"unix", 4, a2, a5, a6);
  sub_10237B0(a4, "linux", 5, a2, v8, v9);
  v13 = *(_DWORD *)(a3 + 48) == 17;
  v25[0] = "1";
  LOWORD(v31) = 257;
  v26 = 259;
  if ( !v13 )
  {
    v24 = 259;
    v23[0] = "__gnu_linux__";
    sub_10160F0(a4, (__int64)v23, (__int64)v25, v10, v11, v12, v27, v28, v29, v30, v31);
    goto LABEL_3;
  }
  v24 = 259;
  v23[0] = "__ANDROID__";
  sub_10160F0(a4, (__int64)v23, (__int64)v25, v10, v11, v12, v27, v28, v29, v30, v31);
  v19 = j__strlen("android");
  *(_QWORD *)(a1 + 360) = "android";
  *(_QWORD *)(a1 + 368) = v19;
  v20 = sub_2293CE0(a3);
  *(_QWORD *)(a1 + 376) = v20;
  *(_QWORD *)(a1 + 384) = v21;
  if ( !(_DWORD)v20 )
  {
LABEL_3:
    if ( (*(_BYTE *)(a2 + 20) & 0x20) == 0 )
      goto LABEL_4;
    goto LABEL_12;
  }
  LODWORD(v23[0]) = v20;
  v24 = 265;
  v25[0] = "__ANDROID_MIN_SDK_VERSION__";
  v26 = 259;
  LOWORD(v31) = 257;
  sub_10160F0(a4, (__int64)v25, (__int64)v23, 265, v15, v16, v27, v28, v29, v30, 1u);
  v25[0] = "__ANDROID_MIN_SDK_VERSION__";
  LOWORD(v31) = 257;
  v26 = 259;
  v23[0] = "__ANDROID_API__";
  v24 = 259;
  sub_10160F0(a4, (__int64)v23, (__int64)v25, v22, 259, 259, v27, v28, v29, v30, 1u);
  if ( (*(_BYTE *)(a2 + 20) & 0x20) == 0 )
  {
LABEL_4:
    if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
      goto LABEL_5;
LABEL_13:
    v25[0] = "1";
    v26 = 259;
    LOWORD(v31) = 257;
    v23[0] = "_GNU_SOURCE";
    v24 = 259;
    sub_10160F0(a4, (__int64)v23, (__int64)v25, v14, 259, v16, v27, v28, v29, v30, 1u);
    if ( !*(_BYTE *)(a1 + 278) )
      goto LABEL_6;
LABEL_14:
    LOWORD(v31) = 257;
    v26 = 259;
    v25[0] = "1";
    v23[0] = "__FLOAT128__";
    v24 = 259;
    sub_10160F0(a4, (__int64)v23, (__int64)v25, 259, v15, v16, v27, v28, v29, v30, 1u);
    goto LABEL_6;
  }
LABEL_12:
  v25[0] = "1";
  LOWORD(v31) = 257;
  v26 = 259;
  v23[0] = "_REENTRANT";
  v24 = 259;
  sub_10160F0(a4, (__int64)v23, (__int64)v25, v14, v15, 257, v27, v28, v29, v30, 1u);
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
    goto LABEL_13;
LABEL_5:
  if ( *(_BYTE *)(a1 + 278) )
    goto LABEL_14;
LABEL_6:
  result = (_BYTE *)*(unsigned int *)(a3 + 48);
  v18 = *(_DWORD *)(a3 + 48) & 0xFFFFFFFB;
  if ( (_DWORD)v18 == 2 || (_DWORD)result == 8 )
    return sub_1019AB0(a4, (__int64)v23, v18, v14, v15, v16);
  return result;
}

