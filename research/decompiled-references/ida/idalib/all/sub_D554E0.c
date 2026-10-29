__int64 __fastcall sub_D554E0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 result; // rax
  unsigned int v8; // r12d
  __int64 v9; // r15
  unsigned int v10; // r12d
  unsigned __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // edx
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // r12d
  unsigned __int8 **v20; // [rsp+0h] [rbp-D0h]
  __int64 v21; // [rsp+10h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+18h] [rbp-B8h] BYREF
  unsigned int v23; // [rsp+20h] [rbp-B0h]
  void *v24; // [rsp+28h] [rbp-A8h] BYREF
  unsigned int v25; // [rsp+30h] [rbp-A0h]
  void *v26; // [rsp+38h] [rbp-98h] BYREF
  signed __int64 v27; // [rsp+40h] [rbp-90h]
  _BYTE v28[16]; // [rsp+48h] [rbp-88h] BYREF
  void *v29; // [rsp+58h] [rbp-78h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-70h]
  __int128 v31; // [rsp+68h] [rbp-68h]
  __int64 v32; // [rsp+78h] [rbp-58h]
  char v33; // [rsp+80h] [rbp-50h]
  int v34; // [rsp+84h] [rbp-4Ch]
  void **v35; // [rsp+88h] [rbp-48h]

  if ( (unsigned int)(*(_DWORD *)(a3 + 8) - 1) <= 0x1F )
    return 1;
  v30 = 32;
  v29 = (void *)(0xFFFFFFCF / a4);
  sub_CF8100((unsigned __int64 *)&v29);
  v8 = v30;
  if ( v30 > 0x40 )
  {
    v9 = (__int64)v29;
    if ( v29 )
      operator delete[](v29);
  }
  else
  {
    v9 = 0;
    if ( v30 )
      v9 = (__int64)((_QWORD)v29 << (64 - (unsigned __int8)v30)) >> (64 - (unsigned __int8)v30);
  }
  v22 = v9;
  v23 = v8;
  sub_D4B780((__int64)&v24, a3, 0);
  v10 = v25;
  if ( v25 > 0x40 )
  {
    v12 = v10 - sub_2206780(&v24);
LABEL_12:
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v14 = sub_F56FC0(v13);
    v15 = v25;
    if ( v14 < v12 )
      goto LABEL_13;
    goto LABEL_28;
  }
  if ( v24 )
  {
    _BitScanReverse64(&v11, (unsigned __int64)v24);
    v12 = 64 - (v11 ^ 0x3F);
    goto LABEL_12;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  sub_F56FC0(v18);
LABEL_28:
  sub_D4B720((__int64)&v29, (__int64 *)a3);
  sub_D4B720((__int64)&v26, &v22);
  v19 = sub_2205E20(&v29, &v26);
  if ( (unsigned int)v27 > 0x40 && v26 )
    operator delete[](v26);
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  v15 = v25;
  if ( v19 <= 0 )
  {
    if ( v25 <= 0x40 || !v24 )
      return 1;
    operator delete[](v24);
    return 1;
  }
LABEL_13:
  if ( v15 > 0x40 && v24 )
    operator delete[](v24);
  result = 0;
  if ( !(_BYTE)a5 )
  {
    v21 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v16 = sub_D55480((__int64 *)a3);
    v17 = 2448;
    if ( !v16 )
      v17 = 2452;
    v20 = (unsigned __int8 **)sub_E33BA0(a1, &v21, v17, 0);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v26 = v28;
    v31 = 0;
    v29 = &off_2BEBE68;
    v27 = 0;
    v28[0] = 0;
    v30 = 0;
    v33 = 0;
    v34 = 1;
    v32 = 0;
    v35 = &v26;
    sub_227B8B0(&v29, 0, 0, 0);
    sub_D4B720((__int64)&v24, (__int64 *)a3);
    sub_220C370(&v24, &v29, 1);
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
    v29 = &off_2BEBE68;
    sub_227B7A0(&v29);
    if ( v20 )
      sub_AEC220(v20, v26, v27);
    if ( v26 != v28 )
      operator delete(v26);
    return a5;
  }
  return result;
}
