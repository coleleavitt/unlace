void __fastcall sub_9B0200(int a1, __int64 a2, int *a3)
{
  int v4; // eax
  void *v5; // r14
  int v6; // eax
  void *v7; // rdi
  void *v8; // r12
  void *v9; // rbx
  void *v10; // rbx
  void *v11; // rbx
  void *v12; // rbx
  void *v13; // [rsp+28h] [rbp-120h]
  _BYTE v14[16]; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-108h] BYREF
  int v16; // [rsp+50h] [rbp-F8h] BYREF
  char v17; // [rsp+54h] [rbp-F4h]
  int v18; // [rsp+60h] [rbp-E8h] BYREF
  char v19; // [rsp+64h] [rbp-E4h]
  _QWORD v20[2]; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD v21[2]; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD v22[2]; // [rsp+90h] [rbp-B8h] BYREF
  _QWORD v23[2]; // [rsp+A0h] [rbp-A8h] BYREF
  _QWORD v24[2]; // [rsp+B0h] [rbp-98h] BYREF
  _QWORD v25[2]; // [rsp+C0h] [rbp-88h] BYREF
  int v26[8]; // [rsp+D0h] [rbp-78h] BYREF
  int v27[22]; // [rsp+F0h] [rbp-58h] BYREF

  if ( (*(_BYTE *)(a2 + 4) & 1) != 0
    || *(_DWORD *)a2 != -1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    v4 = *a3;
    if ( *a3 || (a3[9] & 1) != 0 || a3[8] != -1 || (a3[13] & 1) != 0 || a3[12] != 1 || a3[16] )
    {
      v24[0] = 0;
      v24[1] = 0;
      v25[0] = 1;
      v5 = qword_1C7F2C0;
      v25[1] = 0;
      if ( (a3[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v24, a3);
      else
        LODWORD(v24[0]) = v4;
      if ( (a3[5] & 1) != 0 )
      {
        sub_182C690(v5, v25, a3 + 4);
      }
      else
      {
        v6 = a3[4];
        BYTE4(v25[0]) &= ~1u;
        LODWORD(v25[0]) = v6;
      }
      sub_91F480((__int64)v26, (__int64)(a3 + 8));
      sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v24, a2, (__int64)v24);
      sub_3ED4D0((__int64)qword_1C7F2C0, v26, a2, (__int64)v26);
      sub_3ED4D0((__int64)qword_1C7F2C0, v27, a2, (__int64)v27);
      sub_9A9130((__int64)v14, (__int64)v26);
      sub_3EBE30((__int64)&v16, (__int64)v14, a2);
      v20[0] = 0;
      v7 = qword_1C7F2C0;
      v20[1] = 0;
      v21[0] = 1;
      v21[1] = 0;
      if ( (v17 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, v20, &v16);
      else
        LODWORD(v20[0]) = v16;
      if ( (v19 & 1) != 0 )
      {
        sub_182C690(v7, v21, &v18);
      }
      else
      {
        BYTE4(v21[0]) &= ~1u;
        LODWORD(v21[0]) = v18;
      }
      v8 = qword_1C7F2C0;
      v22[0] = 0;
      v22[1] = 0;
      v23[0] = 1;
      v23[1] = 0;
      sub_182CEF0(qword_1C7F2C0, v22);
      sub_182CBA0(v8, v23);
      BYTE4(v23[0]) &= ~1u;
      LODWORD(v23[0]) = 1;
      v13 = qword_1C7F2C0;
      sub_182CEF0(qword_1C7F2C0, a3);
      sub_182CBA0(v13, a3 + 4);
      *((_BYTE *)a3 + 20) &= ~1u;
      a3[4] = 1;
      sub_98B520((__int64)(a3 + 8), (int *)v20);
      v9 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v22);
      sub_182CBA0(v9, v23);
      v10 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v20);
      sub_182CBA0(v10, v21);
      v11 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v16);
      sub_182CBA0(v11, &v18);
      v12 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v14);
      sub_182CBA0(v12, v15);
      sub_2A6060((__int64)v24);
    }
  }
}

