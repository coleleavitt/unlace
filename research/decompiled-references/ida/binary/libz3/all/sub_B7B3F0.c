__int64 __fastcall sub_B7B3F0(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  int *v4; // r14
  int v5; // eax
  void *v6; // r15
  void *v7; // r15
  __int64 v8; // rax
  int *v9; // rbp
  int v10; // eax
  void *v11; // r13
  void *v12; // r13
  char v13; // al
  char v14; // dl
  void *v15; // r12
  void *v16; // rbx
  __int64 v18; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+8h] [rbp-A0h]
  _QWORD v20[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v21; // [rsp+20h] [rbp-88h] BYREF
  __int64 v22; // [rsp+28h] [rbp-80h]
  _QWORD v23[2]; // [rsp+30h] [rbp-78h] BYREF
  int v24; // [rsp+40h] [rbp-68h] BYREF
  char v25; // [rsp+44h] [rbp-64h]
  __int64 v26; // [rsp+48h] [rbp-60h]
  int v27; // [rsp+50h] [rbp-58h] BYREF
  char v28; // [rsp+54h] [rbp-54h]
  __int64 v29; // [rsp+58h] [rbp-50h]
  int v30; // [rsp+60h] [rbp-48h]

  v2 = (unsigned int)(2 * a2);
  v3 = *(_QWORD *)(a1 + 992);
  v25 &= 0xFCu;
  v4 = (int *)(v3 + 40 * v2);
  v28 &= 0xFCu;
  v24 = 0;
  v26 = 0;
  v27 = 1;
  v29 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v24, v4);
  v5 = v4[8];
  v18 = 0;
  v19 = 0;
  v6 = qword_1C7F2C0;
  v30 = v5;
  v20[0] = 1;
  v20[1] = 0;
  if ( (v25 & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v18, &v24);
  else
    LODWORD(v18) = v24;
  if ( (v28 & 1) != 0 )
  {
    sub_182C690(v6, v20, &v27);
  }
  else
  {
    BYTE4(v20[0]) &= ~1u;
    LODWORD(v20[0]) = v27;
  }
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v24);
  sub_182CBA0(v7, &v27);
  v8 = *(_QWORD *)(a1 + 992);
  v25 &= 0xFCu;
  v28 &= 0xFCu;
  v9 = (int *)(v8 + 40LL * ((unsigned int)v2 | 1));
  v24 = 0;
  v26 = 0;
  v27 = 1;
  v29 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v24, v9);
  v10 = v9[8];
  v11 = qword_1C7F2C0;
  v21 = 0;
  v22 = 0;
  v30 = v10;
  v23[0] = 1;
  v23[1] = 0;
  if ( (v25 & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v21, &v24);
  else
    LODWORD(v21) = v24;
  if ( (v28 & 1) != 0 )
  {
    sub_182C690(v11, v23, &v27);
  }
  else
  {
    BYTE4(v23[0]) &= ~1u;
    LODWORD(v23[0]) = v27;
  }
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v24);
  sub_182CBA0(v12, &v27);
  v13 = (v20[0] & 0x100000000LL) == 0;
  if ( (v20[0] & 0x100000000LL) == 0 )
  {
    v13 = 0;
    if ( LODWORD(v20[0]) == 1 )
    {
      if ( (v18 & 0x100000000LL) != 0 )
        v13 = (*(_DWORD *)(v19 + 8) & 1) == 0;
      else
        v13 = (v18 & 1) == 0;
    }
  }
  v14 = (v23[0] & 0x100000000LL) == 0;
  if ( (v23[0] & 0x100000000LL) == 0 )
  {
    v14 = 0;
    if ( LODWORD(v23[0]) == 1 )
    {
      if ( (v21 & 0x100000000LL) != 0 )
        v14 = (*(_DWORD *)(v22 + 8) & 1) == 0;
      else
        v14 = (v21 & 1) == 0;
    }
  }
  v15 = qword_1C7F2C0;
  LOBYTE(v12) = v14 == v13;
  sub_182CBA0(qword_1C7F2C0, &v21);
  sub_182CBA0(v15, v23);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v18);
  sub_182CBA0(v16, v20);
  return (unsigned int)v12;
}

