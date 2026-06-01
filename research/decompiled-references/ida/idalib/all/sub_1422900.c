void __fastcall sub_1422900(__int64 *a1)
{
  unsigned int v1; // edx
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int16 v4; // ax
  unsigned int v5; // ebp
  unsigned int v6; // r12d
  __int64 v7; // rbp
  __int64 *v8; // rdi
  void (__fastcall *v9)(__int64, __int64, __int64, _QWORD, _QWORD); // r13
  unsigned int (*v10)(void); // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  int v13; // ecx
  unsigned int v14; // [rsp+Ch] [rbp-35Ch] BYREF
  int v15[8]; // [rsp+10h] [rbp-358h] BYREF
  int v16[4]; // [rsp+30h] [rbp-338h] BYREF
  __int16 v17; // [rsp+40h] [rbp-328h]
  char v18; // [rsp+42h] [rbp-326h]
  unsigned int v19[20]; // [rsp+50h] [rbp-318h] BYREF
  unsigned __int8 *v20[6]; // [rsp+A0h] [rbp-2C8h] BYREF
  void *v21; // [rsp+D0h] [rbp-298h]
  _DWORD v22[130]; // [rsp+E8h] [rbp-280h] BYREF
  void *ptr; // [rsp+2F0h] [rbp-78h]
  _BYTE v24[96]; // [rsp+308h] [rbp-60h] BYREF

  sub_14634E0(a1, v15);
  if ( (unsigned __int8)sub_141A960((__int64)v15, &v14, 1148, a1, 0) )
    return;
  v1 = v14;
  if ( !v14 )
  {
    sub_FC70B0((__int64)v20, a1[6], v15[0], 1246);
    sub_AEA040((__int64)v20);
    v1 = v14;
  }
  v2 = a1[7];
  v3 = 0x80000000LL;
  v4 = *(_WORD *)v2 & 0x1001;
  if ( !v4 )
    v3 = 0x8000;
  if ( (v4 == 0 ? 0x8000 : 0x80000000) <= v1 )
  {
    sub_FC70B0((__int64)v20, a1[6], v15[0], 1245);
    sub_AE9DF0(v20, v3, 3u);
    sub_AEA040((__int64)v20);
  }
  else if ( (*(_BYTE *)(v2 + 1) & 0x10) != 0 && v1 > 0x7FFF )
  {
    sub_FC70B0((__int64)v20, a1[6], v15[0], 1345);
    sub_AEA040((__int64)v20);
  }
  sub_14634E0(a1, v16);
  if ( v17 == 2 )
  {
    v5 = -1;
LABEL_20:
    v6 = sub_1021680(a1[11], v15[0]);
    sub_1021710(a1[11], v15[0], v14, v5, 0, 0, v6);
    v7 = a1[149];
    if ( v7 )
    {
      v8 = (__int64 *)a1[140];
      v9 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 16LL);
      v10 = *(unsigned int (**)(void))(*v8 + 32);
      if ( (char *)v10 == (char *)sub_13D0890 )
        v11 = (unsigned int)sub_13D1500((__int64)v8, v8[19], 1);
      else
        v11 = v10();
      v9(v7, v11, 3, v6, 0);
    }
    return;
  }
  if ( v17 != 14 )
  {
    v12 = a1[6];
    v13 = 1147;
LABEL_26:
    sub_FC70B0((__int64)v20, v12, v16[0], v13);
    sub_AEA040((__int64)v20);
    sub_141A820((__int64)a1, (unsigned int *)v20);
    return;
  }
  if ( (v18 & 0x20) != 0 )
  {
    v12 = a1[6];
    v13 = 29;
    goto LABEL_26;
  }
  sub_13EE5A0((__int64)v20, v16, 1, a1, 0);
  if ( v24[44] )
  {
    sub_141A820((__int64)a1, v19);
  }
  else
  {
    if ( !v24[45] )
    {
      v5 = sub_1022E90(a1[11], v21, (unsigned int)(v22[128] - (_DWORD)v21));
      sub_1421C50((__int64)a1, (__int64)"line", 1);
      if ( ptr != v24 )
        free(ptr);
      if ( v21 != v22 )
        free(v21);
      goto LABEL_20;
    }
    sub_FC70B0((__int64)v19, a1[6], v16[0], 1149);
    sub_AEA040((__int64)v19);
    sub_141A820((__int64)a1, v19);
  }
  if ( ptr != v24 )
    free(ptr);
  if ( v21 != v22 )
    free(v21);
}
