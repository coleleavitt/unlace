__int64 __fastcall Z3_mk_real(__int64 a1, int a2, int a3)
{
  int v3; // r13d
  int v4; // r12d
  char v5; // bp
  __int64 v6; // r14
  void *v7; // r14
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  void *v11; // r15
  __int64 v13; // [rsp+8h] [rbp-70h]
  _QWORD v14[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v16[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = a2;
  v4 = a3;
  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
  {
    sub_2976E0();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !v4 )
    {
      sub_24EA30(a1, 3u, nullptr);
      sub_2BB620(0);
      v6 = 0;
LABEL_14:
      byte_1C7EBA0 = 1;
      return v6;
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
  v13 = sub_15D2CD0(*(_QWORD *)(a1 + 232), 5, 0, 0, 0);
  v15[0] = 0;
  v15[1] = 0;
  v7 = qword_1C7F2C0;
  v16[0] = 0;
  v16[1] = 0;
  if ( v4 < 0 )
  {
    v3 = -a2;
    v4 = -v4;
  }
  LODWORD(v15[0]) = v3;
  LODWORD(v16[0]) = v4;
  v14[0] = 0;
  v14[1] = 0;
  sub_1832C70(qword_1C7F2C0, v15, v16, v14);
  if ( (v14[0] & 0x100000000LL) != 0 || LODWORD(v14[0]) != 1 )
  {
    sub_1833EB0(v7, v15, v14, v15);
    sub_1833EB0(v7, v16, v14, v16);
  }
  sub_182CBA0(v7, v14);
  v6 = sub_252180(a1, (__int64)v15, v13, v8, v9, v10);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v15);
  sub_182CBA0(v11, v16);
  if ( v5 )
  {
    sub_2BB620(v6);
    goto LABEL_14;
  }
  return v6;
}

