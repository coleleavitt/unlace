__int64 __fastcall sub_D81BF0(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  void *v4; // r15
  __int64 v5; // rax
  void *v6; // r12
  __int64 v7; // rbx
  _QWORD v9[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v9[0] = 0;
  v9[1] = 0;
  v4 = qword_1C7F2C0;
  v10[0] = 1;
  v10[1] = 0;
  if ( a2 > 0x7FFFFFFE )
    sub_182C550(qword_1C7F2C0, v9);
  else
    LODWORD(v9[0]) = a2;
  sub_182CBA0(v4, v10);
  BYTE4(v10[0]) &= ~1u;
  LODWORD(v10[0]) = 1;
  v5 = sub_1674520(a1, v9, a3);
  v6 = qword_1C7F2C0;
  v7 = v5;
  sub_182CBA0(qword_1C7F2C0, v9);
  sub_182CBA0(v6, v10);
  return v7;
}

