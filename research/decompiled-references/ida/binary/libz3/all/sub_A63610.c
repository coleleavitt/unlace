__int64 __fastcall sub_A63610(__int64 a1, unsigned int *a2)
{
  void *v2; // r14
  unsigned int v3; // eax
  void *v4; // rbp
  unsigned int v5; // ebx
  void *v6; // rbp
  char v8; // [rsp+Fh] [rbp-69h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v10[2]; // [rsp+20h] [rbp-58h] BYREF
  int v11[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  _QWORD v13[7]; // [rsp+40h] [rbp-38h] BYREF

  v9[0] = 0;
  v9[1] = 0;
  v10[0] = 1;
  v10[1] = 0;
  if ( !(unsigned __int8)sub_1666AE0(a1 + 344, a2, v9, &v8) )
  {
    sub_1872CE0("");
    sub_1873130(114, 745);
  }
  *(_QWORD *)v11 = 0;
  v12 = 0;
  v13[0] = 1;
  v2 = qword_1C7F2C0;
  v13[1] = 0;
  if ( (v9[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v11, v9);
    if ( (v10[0] & 0x100000000LL) == 0 )
      goto LABEL_5;
LABEL_8:
    sub_182C690(v2, v13, v10);
    goto LABEL_6;
  }
  v11[0] = v9[0];
  if ( (v10[0] & 0x100000000LL) != 0 )
    goto LABEL_8;
LABEL_5:
  BYTE4(v13[0]) &= ~1u;
  LODWORD(v13[0]) = v10[0];
LABEL_6:
  v3 = sub_A63280(a1, a2, v11);
  v4 = qword_1C7F2C0;
  v5 = v3;
  sub_182CBA0(qword_1C7F2C0, v11);
  sub_182CBA0(v4, v13);
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v9);
  sub_182CBA0(v6, v10);
  return v5;
}

