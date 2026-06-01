__int64 __fastcall sub_1016990(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  __int64 result; // rax
  _QWORD v12[4]; // [rsp+8h] [rbp-C8h] BYREF
  __int16 v13; // [rsp+28h] [rbp-A8h]
  _QWORD v14[4]; // [rsp+38h] [rbp-98h] BYREF
  __int16 v15; // [rsp+58h] [rbp-78h]
  __int64 v16; // [rsp+68h] [rbp-68h]
  __int64 v17; // [rsp+70h] [rbp-60h]
  __int64 v18; // [rsp+78h] [rbp-58h]
  __int64 v19; // [rsp+80h] [rbp-50h]
  __int64 v20; // [rsp+88h] [rbp-48h]

  v12[0] = "__Fuchsia__";
  LOWORD(v20) = 257;
  v15 = 259;
  v14[0] = "1";
  v13 = 259;
  sub_10160F0(a4, (__int64)v12, (__int64)v14, (__int64)a4, a5, a6, v16, v17, v18, v19, 1u);
  if ( (*(_BYTE *)(a2 + 20) & 0x20) != 0 )
  {
    v14[0] = "1";
    v12[0] = "_REENTRANT";
    LOWORD(v20) = 257;
    v15 = 259;
    v13 = 259;
    sub_10160F0(a4, (__int64)v12, (__int64)v14, v7, v8, 257, v16, v17, v18, v19, 1u);
    if ( (*(_BYTE *)(a2 + 1) & 8) == 0 )
      goto LABEL_3;
LABEL_5:
    v14[0] = "1";
    v15 = 259;
    LOWORD(v20) = 257;
    v12[0] = "_GNU_SOURCE";
    v13 = 259;
    sub_10160F0(a4, (__int64)v12, (__int64)v14, v7, 259, v9, v16, v17, v18, v19, 1u);
    goto LABEL_3;
  }
  if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
    goto LABEL_5;
LABEL_3:
  LOWORD(v20) = 257;
  v10 = *(_DWORD *)(a2 + 192);
  v13 = 265;
  LODWORD(v12[0]) = v10;
  v14[0] = "__Fuchsia_API_level__";
  v15 = 259;
  sub_10160F0(a4, (__int64)v14, (__int64)v12, 259, v8, v9, v16, v17, v18, v19, 1u);
  a1[46] = 7;
  a1[45] = "fuchsia";
  result = *(unsigned int *)(a2 + 192);
  a1[47] = (unsigned int)result;
  a1[48] = 0;
  return result;
}

