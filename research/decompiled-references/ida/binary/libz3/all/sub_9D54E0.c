__int64 __fastcall sub_9D54E0(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  void *v7; // r15
  void *v8; // r15
  void *v9; // r13
  int v10; // eax
  void *v11; // rdi
  void *v12; // rbp
  int v13; // edx
  __int64 result; // rax
  void *v17; // [rsp+10h] [rbp-A8h]
  void *v18; // [rsp+10h] [rbp-A8h]
  _QWORD v19[2]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v24[9]; // [rsp+70h] [rbp-48h] BYREF

  v7 = qword_1C7F2C0;
  v19[0] = 0;
  v19[1] = 0;
  v20[0] = 1;
  v20[1] = 0;
  v21[0] = 0;
  v21[1] = 0;
  v22[0] = 1;
  v22[1] = 0;
  if ( (qword_1C7F200 & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v21, &qword_1C7F200);
    if ( (qword_1C7F210 & 0x100000000LL) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v21[0]) = qword_1C7F200;
    if ( (qword_1C7F210 & 0x100000000LL) == 0 )
    {
LABEL_3:
      BYTE4(v22[0]) &= ~1u;
      LODWORD(v22[0]) = qword_1C7F210;
      goto LABEL_4;
    }
  }
  sub_182C690(v7, v22, &qword_1C7F210);
LABEL_4:
  v23[0] = 0;
  v8 = qword_1C7F2C0;
  v23[1] = 0;
  v24[0] = 1;
  v24[1] = 0;
  if ( (qword_1C7F220 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, v23, &qword_1C7F220);
  else
    LODWORD(v23[0]) = qword_1C7F220;
  if ( (qword_1C7F230 & 0x100000000LL) != 0 )
  {
    sub_182C690(v8, v24, &qword_1C7F230);
  }
  else
  {
    BYTE4(v24[0]) &= ~1u;
    LODWORD(v24[0]) = qword_1C7F230;
  }
  *(_DWORD *)(a1 + 8) = a3;
  v9 = qword_1C7F2C0;
  *(_QWORD *)a1 = &off_1C563C8;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  if ( (v19[0] & 0x100000000LL) != 0 )
    sub_182C690(v9, a1 + 16, v19);
  else
    *(_DWORD *)(a1 + 16) = v19[0];
  if ( (v20[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v9, a1 + 32, v20);
  }
  else
  {
    v10 = v20[0];
    *(_BYTE *)(a1 + 36) &= ~1u;
    *(_DWORD *)(a1 + 32) = v10;
  }
  sub_91F480(a1 + 48, (__int64)v21);
  v11 = qword_1C7F2C0;
  v17 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xFC | 2;
  sub_182CBA0(v11, v23);
  sub_182CBA0(v17, v24);
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v21);
  sub_182CBA0(v18, v22);
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v19);
  sub_182CBA0(v12, v20);
  *(_DWORD *)(a1 + 116) = a2;
  *(_QWORD *)a1 = &off_1C56400;
  sub_8A6550(a1 + 120, a4);
  v13 = a5 & 3;
  result = v13 | *(_BYTE *)(a1 + 216) & 0xF8u;
  *(_BYTE *)(a1 + 216) = v13 | *(_BYTE *)(a1 + 216) & 0xF8;
  return result;
}

