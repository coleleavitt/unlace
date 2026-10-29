__int64 __fastcall sub_70FC20(_QWORD *a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  int *v9; // rdx
  void *v10; // rdi
  int v11; // ecx
  int v12; // edx
  __int64 (__fastcall *v13)(__int64, _QWORD *, __int64, __int64, __int64 *); // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  void *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdi
  void *v22; // [rsp+10h] [rbp-88h]
  int *v23; // [rsp+18h] [rbp-80h]
  char v24[8]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v25; // [rsp+30h] [rbp-68h] BYREF
  __int64 v26; // [rsp+38h] [rbp-60h]
  _QWORD v27[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v28[9]; // [rsp+50h] [rbp-48h] BYREF

  v6 = *a3;
  v27[0] = 0;
  sub_1360C00(v24, v6, v27);
  sub_18572D0(v27);
  v7 = a1[1];
  v8 = *a2;
  v25 = 0;
  v26 = v7;
  v27[0] = 0;
  v27[1] = 0;
  v28[0] = 1;
  v28[1] = 0;
  sub_1361190(v24, v8, &v25);
  if ( v25 == *(_QWORD *)(a1[1] + 856LL) )
    v9 = &qword_1C7F280;
  else
    v9 = &qword_1C7F2A0;
  v10 = qword_1C7F2C0;
  if ( (v9[1] & 1) != 0 )
  {
    v23 = v9;
    v22 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v27, v9);
    v9 = v23;
    v10 = v22;
  }
  else
  {
    v11 = *v9;
    BYTE4(v27[0]) &= ~1u;
    LODWORD(v27[0]) = v11;
  }
  if ( (v9[5] & 1) != 0 )
  {
    sub_182C690(v10, v28, v9 + 4);
  }
  else
  {
    v12 = v9[4];
    BYTE4(v28[0]) &= ~1u;
    LODWORD(v28[0]) = v12;
  }
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64, __int64 *))(*a1 + 32LL);
  if ( v13 == sub_70FBA0 )
  {
    v14 = a1[1];
    if ( (v27[0] & 0x100000000LL) != 0 || LODWORD(v27[0]) != 1 || (v28[0] & 0x100000000LL) != 0 || LODWORD(v28[0]) != 1 )
      v15 = *(_QWORD *)(v14 + 864);
    else
      v15 = *(_QWORD *)(v14 + 856);
    sub_14EC390(a1 + 4, *a2, v15, a4);
  }
  else
  {
    v13((__int64)a1, a2, (__int64)v27, a4, nullptr);
  }
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v27);
  sub_182CBA0(v16, v28);
  v17 = v25;
  if ( v25 )
  {
    v18 = v26;
    if ( (*(_DWORD *)(v25 + 8))-- == 1 )
      sub_15D7BC0(v18, v17);
  }
  sub_13606C0(v24);
  return 1;
}

