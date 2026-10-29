_BYTE *__fastcall sub_10213D0(__int64 a1, _BYTE *a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE *result; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-C0h]
  __int64 v15; // [rsp+10h] [rbp-B8h]
  __int64 v16; // [rsp+18h] [rbp-B0h]
  __int64 v17; // [rsp+20h] [rbp-A8h]
  _QWORD v18[4]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v19; // [rsp+50h] [rbp-78h]
  const char *v20; // [rsp+60h] [rbp-68h] BYREF
  __int64 v21; // [rsp+68h] [rbp-60h]
  __int64 v22; // [rsp+70h] [rbp-58h]
  __int64 v23; // [rsp+78h] [rbp-50h]
  __int64 v24; // [rsp+80h] [rbp-48h]

  v13 = "__OpenBSD__";
  LOWORD(v24) = 257;
  v19 = 259;
  v18[0] = "1";
  LOWORD(v17) = 259;
  sub_10160F0(a4, (__int64)&v13, (__int64)v18, (__int64)a4, a5, a6, (char)v20, v21, v22, v23, 1u);
  result = sub_1019BB0(a4, (__int64)"unix", 4, (__int64)a2, v7, v8);
  if ( (a2[20] & 0x20) != 0 )
  {
    v18[0] = "1";
    v13 = "_REENTRANT";
    LOWORD(v24) = 257;
    v19 = 259;
    LOWORD(v17) = 259;
    result = sub_10160F0(a4, (__int64)&v13, (__int64)v18, v10, v11, 257, (char)v20, v21, v22, v23, 1u);
    if ( !*(_BYTE *)(a1 + 278) )
    {
LABEL_3:
      if ( (*a2 & 2) == 0 )
        return result;
LABEL_7:
      LOWORD(v17) = 257;
      v19 = 259;
      v18[0] = "1";
      v20 = "__STDC_NO_THREADS__";
      LOWORD(v24) = 259;
      return sub_10160F0(a4, (__int64)&v20, (__int64)v18, 259, v11, v12, (char)v13, v14, v15, v16, 1u);
    }
  }
  else if ( !*(_BYTE *)(a1 + 278) )
  {
    goto LABEL_3;
  }
  v18[0] = "1";
  v19 = 259;
  LOWORD(v24) = 257;
  v13 = "__FLOAT128__";
  LOWORD(v17) = 259;
  result = sub_10160F0(a4, (__int64)&v13, (__int64)v18, v10, 259, v12, (char)v20, v21, v22, v23, 1u);
  if ( (*a2 & 2) != 0 )
    goto LABEL_7;
  return result;
}

