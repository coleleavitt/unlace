__int64 __fastcall sub_CB1EF0(int a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // ebx
  void *v7; // r12
  char v9; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v10[2]; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v10[0] = 0;
  v10[1] = 0;
  v11[0] = 1;
  v11[1] = 0;
  v6 = sub_1673B50(a1 + 16, a2, (unsigned int)v10, (unsigned int)&v9, a5, a6);
  if ( (_BYTE)v6 )
    LOBYTE(v6) = LODWORD(v10[0]) == 0;
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v10);
  sub_182CBA0(v7, v11);
  return v6;
}

