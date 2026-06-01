__int64 __fastcall sub_B7B0D0(__int64 a1, int a2)
{
  int *v2; // rdx
  int *v3; // r13
  void *v4; // r15
  void *v5; // r15
  int *v6; // rdx
  void *v7; // rbp
  void *v8; // rbp
  char v9; // al
  char v10; // dl
  void *v11; // rbp
  void *v12; // rbx
  __int64 v14; // [rsp+0h] [rbp-98h] BYREF
  __int64 v15; // [rsp+8h] [rbp-90h]
  _QWORD v16[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  __int64 v18; // [rsp+28h] [rbp-70h]
  _QWORD v19[2]; // [rsp+30h] [rbp-68h] BYREF
  int v20; // [rsp+40h] [rbp-58h] BYREF
  char v21; // [rsp+44h] [rbp-54h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  int v23; // [rsp+50h] [rbp-48h] BYREF
  char v24; // [rsp+54h] [rbp-44h]
  __int64 v25; // [rsp+58h] [rbp-40h]

  v2 = (int *)(*(_QWORD *)(a1 + 984) + 32LL * (unsigned int)(2 * a2));
  v3 = &v20;
  v21 &= 0xFCu;
  v24 &= 0xFCu;
  v20 = 0;
  v22 = 0;
  v23 = 1;
  v25 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v20, v2);
  v14 = 0;
  v4 = qword_1C7F2C0;
  v15 = 0;
  v16[0] = 1;
  v16[1] = 0;
  if ( (v21 & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v14, &v20);
  else
    LODWORD(v14) = v20;
  if ( (v24 & 1) != 0 )
  {
    sub_182C690(v4, v16, &v23);
  }
  else
  {
    BYTE4(v16[0]) &= ~1u;
    LODWORD(v16[0]) = v23;
  }
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v20);
  sub_182CBA0(v5, &v23);
  v6 = (int *)(*(_QWORD *)(a1 + 984) + 32LL * ((2 * a2) | 1u));
  v21 &= 0xFCu;
  v24 &= 0xFCu;
  v20 = 0;
  v22 = 0;
  v23 = 1;
  v25 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v20, v6);
  v17 = 0;
  v7 = qword_1C7F2C0;
  v18 = 0;
  v19[0] = 1;
  v19[1] = 0;
  if ( (v21 & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v17, &v20);
  else
    LODWORD(v17) = v20;
  if ( (v24 & 1) != 0 )
  {
    sub_182C690(v7, v19, &v23);
  }
  else
  {
    BYTE4(v19[0]) &= ~1u;
    LODWORD(v19[0]) = v23;
  }
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v20);
  sub_182CBA0(v8, &v23);
  v9 = (v16[0] & 0x100000000LL) == 0;
  if ( (v16[0] & 0x100000000LL) == 0 )
  {
    v9 = 0;
    if ( LODWORD(v16[0]) == 1 )
    {
      if ( (v14 & 0x100000000LL) != 0 )
        v9 = (*(_DWORD *)(v15 + 8) & 1) == 0;
      else
        v9 = (v14 & 1) == 0;
    }
  }
  v10 = (v19[0] & 0x100000000LL) == 0;
  if ( (v19[0] & 0x100000000LL) == 0 )
  {
    v10 = 0;
    if ( LODWORD(v19[0]) == 1 )
    {
      if ( (v17 & 0x100000000LL) != 0 )
        v10 = (*(_DWORD *)(v18 + 8) & 1) == 0;
      else
        v10 = (v17 & 1) == 0;
    }
  }
  v11 = qword_1C7F2C0;
  LOBYTE(v3) = v10 == v9;
  sub_182CBA0(qword_1C7F2C0, &v17);
  sub_182CBA0(v11, v19);
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v14);
  sub_182CBA0(v12, v16);
  return (unsigned int)v3;
}

