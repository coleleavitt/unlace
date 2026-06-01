_BYTE *__fastcall sub_104F260(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  size_t v7; // rax
  char *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE *result; // rax
  __int64 v17; // rax
  char *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  size_t v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // [rsp-18h] [rbp-F0h]
  char *v25; // [rsp+0h] [rbp-D8h]
  __int64 v26; // [rsp+8h] [rbp-D0h]
  _QWORD v27[4]; // [rsp+10h] [rbp-C8h] BYREF
  __int16 v28; // [rsp+30h] [rbp-A8h]
  _QWORD v29[4]; // [rsp+40h] [rbp-98h] BYREF
  __int16 v30; // [rsp+60h] [rbp-78h]
  __int64 v31; // [rsp+70h] [rbp-68h]
  __int64 v32; // [rsp+78h] [rbp-60h]
  __int64 v33; // [rsp+80h] [rbp-58h]
  __int64 v34; // [rsp+88h] [rbp-50h]
  __int64 v35; // [rsp+90h] [rbp-48h]

  v7 = j__strlen("unix");
  v9 = "unix";
  sub_103D8F0(a4, (__int64)"unix", v7, a2, v10, v11);
  if ( *(_DWORD *)(a3 + 48) != 49 )
  {
    result = (_BYTE *)*(unsigned int *)(a3 + 44);
    if ( (_DWORD)result != 39 )
    {
      if ( (_DWORD)result != 7 )
        goto LABEL_4;
      goto LABEL_22;
    }
  }
  v29[0] = "1";
  v30 = 259;
  LOWORD(v35) = 257;
  v27[0] = "__OHOS_FAMILY__";
  v28 = 259;
  sub_1039E30(a4, (__int64)v27, (__int64)v29, v13, v14, v15, v31, v32, v33, v34, 1u);
  v17 = sub_22B7A20(a3);
  v25 = v18;
  v26 = v17;
  *(_QWORD *)(a1 + 368) = j__strlen("ohos");
  LODWORD(v27[0]) = v26;
  *(_QWORD *)(a1 + 384) = v25;
  LOWORD(v35) = 257;
  v28 = 265;
  v29[0] = "__OHOS_Major__";
  v30 = 259;
  *(_QWORD *)(a1 + 360) = "ohos";
  v24 = v34;
  *(_QWORD *)(a1 + 376) = v26;
  sub_1039E30(a4, (__int64)v29, (__int64)v27, v26, v19, v20, v31, v32, v33, v24, 1u);
  v13 = v26;
  if ( v26 < 0 )
  {
    LOWORD(v35) = 257;
    v29[0] = "__OHOS_Minor__";
    v28 = 265;
    LODWORD(v27[0]) = HIDWORD(v26) & 0x7FFFFFFF;
    v30 = 259;
    sub_1039E30(a4, (__int64)v29, (__int64)v27, HIDWORD(v26) & 0x7FFFFFFF, 265, 259, v31, v32, v33, v34, 1u);
    v9 = v25;
    if ( SBYTE3(v25) >= 0 )
    {
LABEL_10:
      if ( *(_DWORD *)(a3 + 48) != 49 )
        goto LABEL_11;
      goto LABEL_21;
    }
  }
  else
  {
    v9 = v25;
    if ( SBYTE3(v25) >= 0 )
      goto LABEL_10;
  }
  v28 = 265;
  LODWORD(v27[0]) = (unsigned int)v9 & 0x7FFFFFFF;
  LOWORD(v35) = 257;
  v30 = 259;
  v9 = (char *)v29;
  v29[0] = "__OHOS_Micro__";
  sub_1039E30(a4, (__int64)v29, (__int64)v27, 265, v14, v15, v31, v32, v33, v34, 1u);
  if ( *(_DWORD *)(a3 + 48) != 49 )
  {
LABEL_11:
    result = (_BYTE *)*(unsigned int *)(a3 + 44);
    if ( (_DWORD)result != 7 )
      goto LABEL_12;
LABEL_22:
    v21 = j__strlen("linux");
    v9 = "linux";
    result = sub_10474F0(a4, "linux", v21, a2, v22, v23);
LABEL_4:
    if ( (*(_BYTE *)(a2 + 20) & 0x20) == 0 )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_21:
  v9 = (char *)v27;
  LOWORD(v35) = 257;
  v29[0] = "1";
  v30 = 259;
  v27[0] = "__OHOS__";
  v28 = 259;
  sub_1039E30(a4, (__int64)v27, (__int64)v29, v13, v14, v15, v31, v32, v33, v34, 1u);
  result = (_BYTE *)*(unsigned int *)(a3 + 44);
  if ( (_DWORD)result == 7 )
    goto LABEL_22;
LABEL_12:
  if ( (_DWORD)result != 39 )
    goto LABEL_4;
  v9 = (char *)v27;
  v29[0] = "1";
  LOWORD(v35) = 257;
  v30 = 259;
  v27[0] = "__LITEOS__";
  v28 = 259;
  result = sub_1039E30(a4, (__int64)v27, (__int64)v29, v13, v14, 257, v31, v32, v33, v34, 1u);
  if ( (*(_BYTE *)(a2 + 20) & 0x20) == 0 )
  {
LABEL_5:
    if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
      goto LABEL_6;
    goto LABEL_15;
  }
LABEL_14:
  LOWORD(v35) = 257;
  v9 = (char *)v27;
  v29[0] = "1";
  v30 = 259;
  v27[0] = "_REENTRANT";
  v28 = 259;
  result = sub_1039E30(a4, (__int64)v27, (__int64)v29, v13, 259, v15, v31, v32, v33, v34, 1u);
  if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
  {
LABEL_6:
    if ( !*(_BYTE *)(a1 + 278) )
      return result;
    return sub_103A070(a4, (__int64)v9, v12, v13, v14, v15);
  }
LABEL_15:
  LOWORD(v35) = 257;
  v9 = (char *)v27;
  v29[0] = "1";
  v30 = 259;
  v27[0] = "_GNU_SOURCE";
  v28 = 259;
  result = sub_1039E30(a4, (__int64)v27, (__int64)v29, 259, v14, v15, v31, v32, v33, v34, 1u);
  if ( *(_BYTE *)(a1 + 278) )
    return sub_103A070(a4, (__int64)v9, v12, v13, v14, v15);
  return result;
}
