__int64 __fastcall sub_D4A3B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 result; // rax
  unsigned int v8; // r15d
  unsigned __int64 v9; // rax
  unsigned int v10; // r15d
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned __int8 **v14; // r15
  __int64 v15; // rax
  int v16; // r15d
  __int64 v17; // [rsp+10h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+18h] [rbp-B8h] BYREF
  int v19; // [rsp+20h] [rbp-B0h]
  void *v20; // [rsp+28h] [rbp-A8h] BYREF
  unsigned int v21; // [rsp+30h] [rbp-A0h]
  void *v22; // [rsp+38h] [rbp-98h] BYREF
  signed __int64 v23; // [rsp+40h] [rbp-90h]
  _BYTE v24[16]; // [rsp+48h] [rbp-88h] BYREF
  void *v25; // [rsp+58h] [rbp-78h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-70h]
  __int128 v27; // [rsp+68h] [rbp-68h]
  __int64 v28; // [rsp+78h] [rbp-58h]
  char v29; // [rsp+80h] [rbp-50h]
  int v30; // [rsp+84h] [rbp-4Ch]
  void **v31; // [rsp+88h] [rbp-48h]

  if ( *(_DWORD *)(a3 + 8) <= 0x1Fu )
    return 1;
  v19 = 32;
  v18 = 0xFFFFFFCF / a4;
  sub_D47D10((__int64)&v20, a3, 0);
  v8 = v21;
  if ( v21 > 0x40 )
  {
    v10 = v8 - sub_2206780(&v20);
LABEL_7:
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v12 = sub_F56FC0(v11);
    v13 = v21;
    if ( v12 < v10 )
      goto LABEL_8;
    goto LABEL_21;
  }
  if ( v20 )
  {
    _BitScanReverse64(&v9, (unsigned __int64)v20);
    v10 = 64 - (v9 ^ 0x3F);
    goto LABEL_7;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  sub_F56FC0(v15);
LABEL_21:
  sub_D47CB0((__int64)&v25, (__int64 *)a3);
  sub_D47CB0((__int64)&v22, &v18);
  v16 = sub_2205DB0(&v25, &v22);
  if ( (unsigned int)v23 > 0x40 && v22 )
    operator delete[](v22);
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  v13 = v21;
  if ( v16 <= 0 )
  {
    if ( v21 <= 0x40 || !v20 )
      return 1;
    operator delete[](v20);
    return 1;
  }
LABEL_8:
  if ( v13 > 0x40 && v20 )
    operator delete[](v20);
  result = 0;
  if ( !(_BYTE)a5 )
  {
    v17 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v14 = (unsigned __int8 **)sub_E33BA0(a1, &v17, 2452, 0);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v22 = v24;
    v27 = 0;
    v24[0] = 0;
    v25 = &off_2BEBE68;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v30 = 1;
    v28 = 0;
    v31 = &v22;
    sub_227B8B0(&v25, 0, 0, 0);
    sub_D47CB0((__int64)&v20, (__int64 *)a3);
    sub_220C370(&v20, &v25, 0);
    if ( v21 > 0x40 && v20 )
      operator delete[](v20);
    v25 = &off_2BEBE68;
    sub_227B7A0(&v25);
    if ( v14 )
      sub_AEC220(v14, v22, v23);
    if ( v22 != v24 )
      operator delete(v22);
    return a5;
  }
  return result;
}
