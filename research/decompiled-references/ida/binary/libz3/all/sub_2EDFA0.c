__int64 __fastcall sub_2EDFA0(_QWORD *a1, unsigned int a2, __int64 a3, int *a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // r8d
  int v12; // r9d
  void *v13; // rbx
  __int64 v16; // [rsp+8h] [rbp-B0h]
  __int64 v17; // [rsp+18h] [rbp-A0h]
  char v18; // [rsp+27h] [rbp-91h] BYREF
  void (***v19)(void); // [rsp+28h] [rbp-90h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-68h] BYREF
  int v23; // [rsp+60h] [rbp-58h] BYREF
  char v24; // [rsp+64h] [rbp-54h]
  __int64 v25; // [rsp+68h] [rbp-50h]
  int v26; // [rsp+70h] [rbp-48h] BYREF
  char v27; // [rsp+74h] [rbp-44h]
  __int64 v28; // [rsp+78h] [rbp-40h]

  v5 = a1[76];
  v22[0] = 1;
  v21[0] = 0;
  v6 = v5 + 104LL * a2;
  v21[1] = 0;
  v7 = *(_QWORD *)(v6 + 8);
  v22[1] = 0;
  if ( !v7 )
  {
    LODWORD(v13) = 1;
    goto LABEL_18;
  }
  v8 = *(_QWORD *)(v6 + 16);
  ++*(_DWORD *)(v7 + 8);
  v24 &= 0xFCu;
  v27 &= 0xFCu;
  v17 = v8;
  v23 = 0;
  v25 = 0;
  v26 = 1;
  v28 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v23, a4);
  if ( *(_BYTE *)(v6 + 80) )
    sub_1831620(qword_1C7F2C0, &v23);
  sub_2FC4A0(qword_1C7F2C0, &v23, v6 + 48, &v23);
  v16 = a1[1];
  v9 = sub_1377B20(a3);
  v19 = (void (***)(void))v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 16);
  (*(void (__fastcall **)(_QWORD *, void (****)(void)))(*a1 + 176LL))(a1, &v19);
  sub_1374250(v20, v19, v7);
  v10 = v20[0];
  if ( (unsigned __int8)sub_1666AE0(a1 + 21, v20[0], v21, &v18)
    || (unsigned __int8)sub_1673B50((int)a1 + 184, v10, (unsigned int)v21, (unsigned int)v20, v11, v12) )
  {
    v13 = qword_1C7F2C0;
    if ( (v21[0] & 0x100000000LL) != 0 || (v24 & 1) != 0 )
    {
      if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v21, &v23) )
        goto LABEL_11;
    }
    else if ( LODWORD(v21[0]) == v23 )
    {
LABEL_11:
      if ( (v22[0] & 0x100000000LL) != 0 || (v27 & 1) != 0 )
        LOBYTE(v13) = (unsigned int)sub_182C7B0(v13, v22, &v26) == 0;
      else
        LOBYTE(v13) = LODWORD(v22[0]) == v26;
      goto LABEL_16;
    }
  }
  LODWORD(v13) = 0;
LABEL_16:
  sub_2EB6D0(v19);
  sub_2EB430(v10, v16);
  sub_25A130((char *)&v23);
  if ( (*(_DWORD *)(v7 + 8))-- == 1 )
    sub_15D7BC0(v17, v7);
LABEL_18:
  sub_25A130((char *)v21);
  return (unsigned int)v13;
}

