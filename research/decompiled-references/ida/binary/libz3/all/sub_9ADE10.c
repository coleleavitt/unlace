__int64 __fastcall sub_9ADE10(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // r12d
  void *v7; // rbp
  void *v8; // rbp
  void *v9; // rbx
  int *v11; // rax
  _QWORD v12[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v13[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v17[7]; // [rsp+50h] [rbp-38h] BYREF

  v4 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v12[0] = 0;
  v12[1] = 0;
  v5 = v4;
  v13[0] = 1;
  v13[1] = 0;
  v14[0] = 0;
  v14[1] = 0;
  v15[0] = 1;
  v15[1] = 0;
  v16[0] = 0;
  v16[1] = 0;
  v17[0] = 1;
  v17[1] = 0;
  if ( v4 == -1
    || (v11 = sub_9AD4F0(a1, v4),
        sub_98B5F0((__int64)v12, v11),
        (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4 * v5 + 3) & 0x40) != 0)
    && ((v15[0] & 0x100000000LL) != 0 || LODWORD(v15[0]) != 1 || LODWORD(v16[0]) | LODWORD(v12[0])) )
  {
    v6 = 0;
  }
  else
  {
    v6 = sub_9A66B0(a1, (__int64)v12, (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4 * v5 + 3) & 0x40) != 0, a3);
  }
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v16);
  sub_182CBA0(v7, v17);
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v8, v15);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  sub_182CBA0(v9, v13);
  return v6;
}

