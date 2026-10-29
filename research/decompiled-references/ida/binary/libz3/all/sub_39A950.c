__int64 __fastcall sub_39A950(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  __int64 v6; // rbp
  unsigned int v7; // ebx
  void *v8; // rdi
  _DWORD *v9; // rbx
  int v10; // r9d
  __int64 v11; // r13
  int v13; // [rsp+0h] [rbp-2C8h]
  __int64 v15; // [rsp+8h] [rbp-2C0h]
  void *v16; // [rsp+10h] [rbp-2B8h]
  _QWORD *v18; // [rsp+18h] [rbp-2B0h]
  void *v20; // [rsp+28h] [rbp-2A0h]
  __int64 v21; // [rsp+30h] [rbp-298h]
  void *ptr; // [rsp+38h] [rbp-290h] BYREF
  int v23[2]; // [rsp+40h] [rbp-288h] BYREF
  __int64 v24; // [rsp+48h] [rbp-280h]
  _QWORD v25[2]; // [rsp+50h] [rbp-278h] BYREF
  int v26[2]; // [rsp+60h] [rbp-268h] BYREF
  _BYTE v27[80]; // [rsp+278h] [rbp-50h] BYREF

  v6 = *(_QWORD *)(a2 + 8);
  sub_399270((__int64)v26, v6, (__int64)v27);
  v7 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)v26 = &off_1C4CA80;
  v27[8] = 0;
  v8 = qword_1C7F2C0;
  *(_QWORD *)v23 = 0;
  v24 = 0;
  v25[0] = 1;
  v25[1] = 0;
  if ( a5 > 0x7FFFFFFE )
  {
    v20 = qword_1C7F2C0;
    sub_182C550(qword_1C7F2C0, v23);
    v8 = v20;
  }
  else
  {
    v23[0] = a5;
  }
  sub_182CBA0(v8, v25);
  BYTE4(v25[0]) &= ~1u;
  LODWORD(v25[0]) = 1;
  v9 = (_DWORD *)sub_1674520(a2 + 16, v23, v7);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v23);
  sub_182CBA0(v16, v25);
  if ( v9 )
    ++v9[2];
  sub_157BE40((int)v23, (int)v26, a4, 1, (int)&ptr, v10, v13, a1, (int)v16, a3, a4, (int)v20, v21, v9);
  v11 = *(_QWORD *)v23;
  sub_1374250(v15, *v18, *(_QWORD *)v23);
  *(_QWORD *)v26 = &off_1C4CA80;
  sub_267D20(v26);
  sub_399450((__int64)v9, v6);
  sub_399450(v11, v6);
  return v15;
}

