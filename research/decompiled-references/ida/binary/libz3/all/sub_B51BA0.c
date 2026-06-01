__int64 __fastcall sub_B51BA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  void *v11; // r12
  __int64 v12; // rbx
  char v14; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v15[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF

  v15[0] = 0;
  v15[1] = 0;
  v16[0] = 1;
  v16[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v16);
  v5 = *(__int64 **)(a3 + 8);
  v6 = *(_QWORD *)(a1 + 32);
  BYTE4(v16[0]) &= ~1u;
  v7 = *v5;
  LODWORD(v16[0]) = 1;
  if ( !(unsigned __int8)sub_1673B50(v6, v7, (unsigned int)v15, (unsigned int)&v14, v8, v9) )
  {
    sub_1872CE0("");
    sub_1873130(114, 150);
  }
  sub_182D020(qword_1C7F2C0, v15);
  v10 = sub_15E1AF0(**(_QWORD **)(a1 + 24));
  v11 = qword_1C7F2C0;
  v12 = v10;
  sub_182CBA0(qword_1C7F2C0, v15);
  sub_182CBA0(v11, v16);
  return v12;
}

