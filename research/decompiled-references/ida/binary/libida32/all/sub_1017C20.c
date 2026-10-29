__int64 __fastcall sub_1017C20(__int64 a1, _DWORD *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 result; // rax
  __int64 v37; // rdx
  _QWORD v39[4]; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v40; // [rsp+30h] [rbp-A8h]
  _QWORD v41[4]; // [rsp+40h] [rbp-98h] BYREF
  __int16 v42; // [rsp+60h] [rbp-78h]
  __int64 v43; // [rsp+70h] [rbp-68h]
  __int64 v44; // [rsp+78h] [rbp-60h]
  __int64 v45; // [rsp+80h] [rbp-58h]
  __int64 v46; // [rsp+88h] [rbp-50h]
  __int64 v47; // [rsp+90h] [rbp-48h]

  v42 = 259;
  v40 = 259;
  LOWORD(v47) = 257;
  v39[0] = "_LONG_LONG";
  v41[0] = "1";
  sub_10160F0(a4, (__int64)v39, (__int64)v41, (__int64)a4, a5, 257, v43, v44, v45, v46, 1u);
  LOWORD(v47) = 257;
  v42 = 259;
  v39[0] = "__370__";
  v40 = 259;
  v41[0] = "1";
  sub_10160F0(a4, (__int64)v39, (__int64)v41, v6, v7, v8, v43, v44, v45, v46, 1u);
  LOWORD(v47) = 257;
  v42 = 259;
  v39[0] = "__BFP__";
  v40 = 259;
  v41[0] = "1";
  sub_10160F0(a4, (__int64)v39, (__int64)v41, v9, v10, v11, v43, v44, v45, v46, 1u);
  v42 = 259;
  LOWORD(v47) = 257;
  v39[0] = "__BOOL__";
  v40 = 259;
  v41[0] = "1";
  sub_10160F0(a4, (__int64)v39, (__int64)v41, 259, v12, v13, v43, v44, v45, v46, 1u);
  LOWORD(v47) = 257;
  v41[0] = "0x50000000";
  v42 = 259;
  v40 = 259;
  v39[0] = "__COMPILER_VER__";
  sub_10160F0(a4, (__int64)v39, (__int64)v41, v14, 259, 259, v43, v44, v45, v46, 1u);
  v41[0] = "1";
  v39[0] = "__LONGNAME__";
  v42 = 259;
  LOWORD(v47) = 257;
  v40 = 259;
  sub_10160F0(a4, (__int64)v39, (__int64)v41, v15, v16, v17, v43, v44, v45, v46, 1u);
  LOWORD(v47) = 257;
  v42 = 259;
  v39[0] = "__MVS__";
  v40 = 259;
  v41[0] = "1";
  sub_10160F0(a4, (__int64)v39, (__int64)v41, v18, v19, v20, v43, v44, v45, v46, 1u);
  LOWORD(v47) = 257;
  v42 = 259;
  v39[0] = "__THW_370__";
  v40 = 259;
  v41[0] = "1";
  sub_10160F0(a4, (__int64)v39, (__int64)v41, v21, v22, v23, v43, v44, v45, v46, 1u);
  LOWORD(v47) = 257;
  v42 = 259;
  v39[0] = "__THW_BIG_ENDIAN__";
  v40 = 259;
  v41[0] = "1";
  sub_10160F0(a4, (__int64)v39, (__int64)v41, 257, v24, v25, v43, v44, v45, v46, 1u);
  LOWORD(v47) = 257;
  v40 = 259;
  v42 = 259;
  v39[0] = "__TOS_390__";
  v41[0] = "1";
  sub_10160F0(a4, (__int64)v39, (__int64)v41, v26, 257, 259, v43, v44, v45, v46, 1u);
  v42 = 259;
  v39[0] = "__TOS_MVS__";
  LOWORD(v47) = 257;
  v40 = 259;
  v41[0] = "1";
  sub_10160F0(a4, (__int64)v39, (__int64)v41, v27, v28, v29, v43, v44, v45, v46, 1u);
  LOWORD(v47) = 257;
  v42 = 259;
  v39[0] = "__XPLINK__";
  v41[0] = "1";
  v40 = 259;
  sub_10160F0(a4, (__int64)v39, (__int64)v41, v30, v31, v32, v43, v44, v45, v46, 1u);
  if ( *(_BYTE *)(a1 + 8) == 64 )
  {
    LOWORD(v47) = 257;
    v42 = 259;
    v39[0] = "__64BIT__";
    v41[0] = "1";
    v40 = 259;
    sub_10160F0(a4, (__int64)v39, (__int64)v41, v33, 259, v35, v43, v44, v45, v46, 1u);
    if ( (*a2 & 0x10000800) != 0x10000800 )
      goto LABEL_3;
LABEL_5:
    v42 = 259;
    LOWORD(v47) = 257;
    v41[0] = "1";
    v39[0] = "__wchar_t";
    v40 = 259;
    sub_10160F0(a4, (__int64)v39, (__int64)v41, 259, v34, v35, v43, v44, v45, v46, 1u);
    goto LABEL_3;
  }
  if ( (*a2 & 0x10000800) == 0x10000800 )
    goto LABEL_5;
LABEL_3:
  result = sub_2292A00(*(unsigned int *)(a3 + 44));
  *(_QWORD *)(a1 + 360) = result;
  *(_QWORD *)(a1 + 368) = v37;
  return result;
}

