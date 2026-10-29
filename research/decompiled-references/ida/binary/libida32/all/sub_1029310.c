_BYTE *__fastcall sub_1029310(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  size_t v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  size_t v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _BYTE *result; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD v33[4]; // [rsp+0h] [rbp-C8h] BYREF
  __int16 v34; // [rsp+20h] [rbp-A8h]
  _QWORD v35[4]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v36; // [rsp+50h] [rbp-78h]
  __int64 v37; // [rsp+60h] [rbp-68h]
  __int64 v38; // [rsp+68h] [rbp-60h]
  __int64 v39; // [rsp+70h] [rbp-58h]
  __int64 v40; // [rsp+78h] [rbp-50h]
  __int64 v41; // [rsp+80h] [rbp-48h]

  v5 = j__strlen("sun");
  sub_10237B0(a4, "sun", v5, a2, v6, v7);
  v8 = j__strlen("unix");
  sub_1019BB0(a4, (__int64)"unix", v8, a2, v9, v10);
  v33[0] = "__svr4__";
  v36 = 259;
  v34 = 259;
  LOWORD(v41) = 257;
  v35[0] = "1";
  sub_10160F0(a4, (__int64)v33, (__int64)v35, v11, 259, 259, v37, v38, v39, v40, 1u);
  v35[0] = "1";
  v33[0] = "__SVR4";
  LOWORD(v41) = 257;
  v36 = 259;
  v34 = 259;
  sub_10160F0(a4, (__int64)v33, (__int64)v35, v12, v13, v14, v37, v38, v39, v40, 1u);
  LOWORD(v41) = 257;
  v35[0] = "600";
  v36 = 259;
  v33[0] = "_XOPEN_SOURCE";
  v34 = 259;
  sub_10160F0(a4, (__int64)v33, (__int64)v35, v15, v16, v17, v37, v38, v39, v40, 1u);
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
  {
    v35[0] = "1";
    LOWORD(v41) = 257;
    v36 = 259;
    v33[0] = "__C99FEATURES__";
    v34 = 259;
    sub_10160F0(a4, (__int64)v33, (__int64)v35, v18, v19, v20, v37, v38, v39, v40, 1u);
    v35[0] = "64";
    LOWORD(v41) = 257;
    v34 = 259;
    v36 = 259;
    v33[0] = "_FILE_OFFSET_BITS";
    sub_10160F0(a4, (__int64)v33, (__int64)v35, 259, v31, v32, v37, v38, v39, v40, 1u);
  }
  v34 = 259;
  LOWORD(v41) = 257;
  v36 = 259;
  v33[0] = "_LARGEFILE_SOURCE";
  v35[0] = "1";
  sub_10160F0(a4, (__int64)v33, (__int64)v35, v18, 259, v20, v37, v38, v39, v40, 1u);
  v35[0] = "1";
  v33[0] = "_LARGEFILE64_SOURCE";
  LOWORD(v41) = 257;
  v36 = 259;
  v34 = 259;
  sub_10160F0(a4, (__int64)v33, (__int64)v35, v21, v22, 257, v37, v38, v39, v40, 1u);
  LOWORD(v41) = 257;
  v36 = 259;
  v33[0] = "__EXTENSIONS__";
  v35[0] = "1";
  v34 = 259;
  result = sub_10160F0(a4, (__int64)v33, (__int64)v35, v23, v24, v25, v37, v38, v39, v40, 1u);
  if ( (*(_BYTE *)(a2 + 20) & 0x20) != 0 )
  {
    v36 = 259;
    LOWORD(v41) = 257;
    v35[0] = "1";
    v33[0] = "_REENTRANT";
    v34 = 259;
    result = sub_10160F0(a4, (__int64)v33, (__int64)v35, 259, v29, v30, v37, v38, v39, v40, 1u);
  }
  if ( *(_BYTE *)(a1 + 278) )
    return sub_1016330(a4, (__int64)v33, v27, v28, v29, v30);
  return result;
}

