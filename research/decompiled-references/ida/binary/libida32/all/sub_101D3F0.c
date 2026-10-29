_BYTE *__fastcall sub_101D3F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  _BYTE *result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD v14[4]; // [rsp+0h] [rbp-C8h] BYREF
  __int16 v15; // [rsp+20h] [rbp-A8h]
  _QWORD v16[4]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v17; // [rsp+50h] [rbp-78h]
  __int64 v18; // [rsp+60h] [rbp-68h]
  __int64 v19; // [rsp+68h] [rbp-60h]
  __int64 v20; // [rsp+70h] [rbp-58h]
  __int64 v21; // [rsp+78h] [rbp-50h]
  __int64 v22; // [rsp+80h] [rbp-48h]

  sub_1019BB0(a4, (__int64)"unix", 4, a2, a5, a6);
  v16[0] = "1";
  v17 = 259;
  LOWORD(v22) = 257;
  v14[0] = "__managarm__";
  v15 = 259;
  result = sub_10160F0(a4, (__int64)v14, (__int64)v16, v7, v8, 257, v18, v19, v20, v21, 1u);
  if ( (*(_BYTE *)(a2 + 20) & 0x20) != 0 )
  {
    v16[0] = "1";
    v17 = 259;
    LOWORD(v22) = 257;
    v14[0] = "_REENTRANT";
    v15 = 259;
    result = sub_10160F0(a4, (__int64)v14, (__int64)v16, v11, 259, v13, v18, v19, v20, v21, 1u);
    if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
    {
LABEL_3:
      if ( !*(_BYTE *)(a1 + 278) )
        return result;
      return sub_1016330(a4, (__int64)v14, v10, v11, v12, v13);
    }
  }
  else if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
  {
    goto LABEL_3;
  }
  v17 = 259;
  LOWORD(v22) = 257;
  v16[0] = "1";
  v14[0] = "_GNU_SOURCE";
  v15 = 259;
  result = sub_10160F0(a4, (__int64)v14, (__int64)v16, 259, v12, v13, v18, v19, v20, v21, 1u);
  if ( *(_BYTE *)(a1 + 278) )
    return sub_1016330(a4, (__int64)v14, v10, v11, v12, v13);
  return result;
}

