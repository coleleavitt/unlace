__int64 __fastcall sub_D572C0(__int64 a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  void *v5; // r12
  __int64 v6; // rbx
  char v8; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  v9[0] = 0;
  v9[1] = 0;
  v10[0] = 1;
  v10[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v10);
  BYTE4(v10[0]) &= ~1u;
  LODWORD(v10[0]) = 1;
  if ( !(unsigned __int8)sub_1673B50((int)a1 + 232, a2, (unsigned int)v9, (unsigned int)&v8, v2, v3) )
  {
    sub_1872CE0("");
    sub_1873130(114, 4464);
  }
  sub_182D020(qword_1C7F2C0, v9);
  v4 = sub_15E1AF0(*(_QWORD *)(a1 + 432));
  v5 = qword_1C7F2C0;
  v6 = v4;
  sub_182CBA0(qword_1C7F2C0, v9);
  sub_182CBA0(v5, v10);
  return v6;
}

