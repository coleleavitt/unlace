__int64 __fastcall sub_999E20(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  void *v5; // r14
  int v6; // eax
  void *v7; // r15
  void *v8; // r15
  int v9; // eax
  void *v10; // r15
  int v11; // eax
  void *v12; // r15
  void *v13; // rbp
  _QWORD v15[2]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v18[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = sub_999800(a2 - 56, a3);
  v15[0] = 0;
  v15[1] = 0;
  v4 = v3;
  v16[0] = 1;
  v5 = qword_1C7F2C0;
  v16[1] = 0;
  if ( (*(_BYTE *)(v3 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v15, v3);
    if ( (*(_BYTE *)(v4 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v15[0]) = *(_DWORD *)v3;
    if ( (*(_BYTE *)(v3 + 20) & 1) == 0 )
    {
LABEL_3:
      v6 = *(_DWORD *)(v4 + 16);
      BYTE4(v16[0]) &= ~1u;
      LODWORD(v16[0]) = v6;
      goto LABEL_4;
    }
  }
  sub_182C690(v5, v16, v4 + 16);
LABEL_4:
  v7 = qword_1C7F2C0;
  v17[0] = 0;
  v17[1] = 0;
  v18[0] = 1;
  v18[1] = 0;
  sub_182CEF0(qword_1C7F2C0, v17);
  sub_182CBA0(v7, v18);
  BYTE4(v18[0]) &= ~1u;
  v8 = qword_1C7F2C0;
  LODWORD(v18[0]) = 1;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  if ( (v15[0] & 0x100000000LL) != 0 )
    sub_182C690(v8, a1 + 32, v15);
  else
    *(_DWORD *)(a1 + 32) = v15[0];
  if ( (v16[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v8, a1 + 48, v16);
  }
  else
  {
    v9 = v16[0];
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = v9;
  }
  *(_QWORD *)(a1 + 64) = 0;
  v10 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  if ( (v17[0] & 0x100000000LL) != 0 )
    sub_182C690(v10, a1 + 64, v17);
  else
    *(_DWORD *)(a1 + 64) = v17[0];
  if ( (v18[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v10, a1 + 80, v18);
  }
  else
  {
    v11 = v18[0];
    *(_BYTE *)(a1 + 84) &= ~1u;
    *(_DWORD *)(a1 + 80) = v11;
  }
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v17);
  sub_182CBA0(v12, v18);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v15);
  sub_182CBA0(v13, v16);
  return a1;
}

