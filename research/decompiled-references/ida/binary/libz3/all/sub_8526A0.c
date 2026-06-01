__int64 __fastcall sub_8526A0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // rdi
  bool v6; // al
  void *v7; // r15
  void *v8; // rbp
  void *v10; // [rsp+8h] [rbp-80h]
  void *v11; // [rsp+8h] [rbp-80h]
  _QWORD v12[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v15[9]; // [rsp+40h] [rbp-48h] BYREF

  v12[0] = 0;
  v12[1] = 0;
  v13[0] = 1;
  v13[1] = 0;
  if ( !(unsigned __int8)sub_1666AE0(a1 + 832, a3, v12, v14) )
    goto LABEL_12;
  v14[0] = 0;
  v14[1] = 0;
  v15[0] = 1;
  v15[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v15);
  BYTE4(v15[0]) &= ~1u;
  v5 = qword_1C7F2C0;
  LODWORD(v15[0]) = 1;
  if ( (v12[0] & 0x100000000LL) != 0 || (v14[0] & 0x100000000LL) != 0 )
  {
    if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v12, v14) )
      goto LABEL_5;
LABEL_11:
    v7 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v14);
    sub_182CBA0(v7, v15);
LABEL_12:
    a2 = sub_15E1B70(*(_QWORD *)(a1 + 832));
    goto LABEL_13;
  }
  if ( LODWORD(v12[0]) != LODWORD(v14[0]) )
    goto LABEL_11;
LABEL_5:
  if ( (v13[0] & 0x100000000LL) != 0 || (v15[0] & 0x100000000LL) != 0 )
    v6 = (unsigned int)sub_182C7B0(v5, v13, v15) == 0;
  else
    v6 = LODWORD(v13[0]) == LODWORD(v15[0]);
  if ( !v6 )
  {
    v11 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v14);
    sub_182CBA0(v11, v15);
    goto LABEL_12;
  }
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v10, v15);
LABEL_13:
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v12);
  sub_182CBA0(v8, v13);
  return a2;
}

