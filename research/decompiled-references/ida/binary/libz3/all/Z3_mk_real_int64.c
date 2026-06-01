__int64 __fastcall Z3_mk_real_int64(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r12
  __int64 v5; // r13
  void *v6; // r15
  void *v7; // r14
  void *v8; // r15
  void *v9; // r15
  void *v10; // r15
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  void *v15; // r14
  void *v16; // r14
  void *v17; // rbp
  void *v19; // [rsp+0h] [rbp-E8h]
  __int64 v20; // [rsp+28h] [rbp-C0h]
  _QWORD v21[2]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v25; // [rsp+70h] [rbp-78h] BYREF
  __int64 v26; // [rsp+78h] [rbp-70h]
  int v27; // [rsp+80h] [rbp-68h] BYREF
  char v28; // [rsp+84h] [rbp-64h]
  __int64 v29; // [rsp+88h] [rbp-60h]
  _QWORD v30[2]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v31[9]; // [rsp+A0h] [rbp-48h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_297720();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 )
    {
      sub_24EA30(a1, 3u, nullptr);
      sub_2BB620(0);
      v5 = 0;
LABEL_35:
      byte_1C7EBA0 = 1;
      return v5;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a3 )
    {
      sub_24EA30(a1, 3u, nullptr);
      return 0;
    }
  }
  v20 = sub_15D2CD0(*(_QWORD *)(a1 + 232), 5, 0, 0, 0);
  v23[0] = 0;
  v6 = qword_1C7F2C0;
  v23[1] = 0;
  v24[0] = 1;
  v24[1] = 0;
  if ( (unsigned __int64)(a3 + 0x80000000LL) >> 32 )
    sub_1830C40(qword_1C7F2C0, v23, a3);
  else
    LODWORD(v23[0]) = a3;
  sub_182CBA0(v6, v24);
  BYTE4(v24[0]) &= ~1u;
  v7 = qword_1C7F2C0;
  LODWORD(v24[0]) = 1;
  v21[0] = 0;
  v21[1] = 0;
  v22[0] = 1;
  v22[1] = 0;
  if ( (unsigned __int64)(a2 + 0x80000000LL) >> 32 )
    sub_1830C40(qword_1C7F2C0, v21, a2);
  else
    LODWORD(v21[0]) = a2;
  sub_182CBA0(v7, v22);
  BYTE4(v22[0]) &= ~1u;
  v8 = qword_1C7F2C0;
  LODWORD(v22[0]) = 1;
  v30[0] = 0;
  v30[1] = 0;
  v31[0] = 1;
  v31[1] = 0;
  if ( (v21[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v30, v21);
  else
    LODWORD(v30[0]) = v21[0];
  if ( (v22[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v8, v31, v22);
  }
  else
  {
    BYTE4(v31[0]) &= ~1u;
    LODWORD(v31[0]) = v22[0];
  }
  v19 = qword_1C7F2C0;
  if ( LODWORD(v30[0])
    && ((v23[0] & 0x100000000LL) != 0 || LODWORD(v23[0]) != 1 || (v24[0] & 0x100000000LL) != 0 || LODWORD(v24[0]) != 1) )
  {
    sub_1831650(qword_1C7F2C0, v30, v24);
    sub_1831650(v19, v31, v23);
    if ( SLODWORD(v31[0]) < 0 )
    {
      sub_1831620(v19, v30);
      sub_1831620(v19, v31);
    }
    v25 = 0;
    v26 = 0;
    sub_1832C70(v19, v30, v31, &v25);
    if ( (v25 & 0x100000000LL) != 0 || (_DWORD)v25 != 1 )
    {
      sub_1833EB0(v19, v30, &v25, v30);
      sub_1833EB0(v19, v31, &v25, v31);
      sub_182CBA0(v19, &v25);
    }
    else
    {
      sub_182CBA0(v19, &v25);
    }
  }
  else
  {
    if ( (v30[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v30, v30);
    else
      BYTE4(v30[0]) &= ~1u;
    if ( (v31[0] & 0x100000000LL) != 0 )
      sub_182C690(v19, v31, v31);
    else
      BYTE4(v31[0]) &= ~1u;
  }
  BYTE4(v25) &= 0xFCu;
  v9 = qword_1C7F2C0;
  v28 &= 0xFCu;
  LODWORD(v25) = 0;
  v26 = 0;
  v27 = 1;
  v29 = 0;
  if ( (v30[0] & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v25, v30);
  else
    LODWORD(v25) = v30[0];
  if ( (v31[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v9, &v27, v31);
  }
  else
  {
    v28 &= ~1u;
    v27 = v31[0];
  }
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v30);
  sub_182CBA0(v10, v31);
  v14 = sub_252180(a1, (__int64)&v25, v20, v11, v12, v13);
  v15 = qword_1C7F2C0;
  v5 = v14;
  sub_182CBA0(qword_1C7F2C0, &v25);
  sub_182CBA0(v15, &v27);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v21);
  sub_182CBA0(v16, v22);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v23);
  sub_182CBA0(v17, v24);
  if ( v4 )
  {
    sub_2BB620(v5);
    goto LABEL_35;
  }
  return v5;
}

