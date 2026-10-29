__int64 __fastcall sub_999B50(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  void *v6; // r14
  int v7; // eax
  void *v8; // r15
  void *v9; // rdi
  int v10; // eax
  void *v11; // rdi
  int v12; // eax
  void *v13; // r15
  void *v14; // rbp
  _QWORD v16[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v19[9]; // [rsp+40h] [rbp-48h] BYREF

  v4 = sub_999800(a2, a3);
  v16[0] = 0;
  v16[1] = 0;
  v5 = v4;
  v17[0] = 1;
  v6 = qword_1C7F2C0;
  v17[1] = 0;
  if ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v16, v4);
    if ( (*(_BYTE *)(v5 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v16[0]) = *(_DWORD *)v4;
    if ( (*(_BYTE *)(v4 + 20) & 1) == 0 )
    {
LABEL_3:
      v7 = *(_DWORD *)(v5 + 16);
      BYTE4(v17[0]) &= ~1u;
      LODWORD(v17[0]) = v7;
      goto LABEL_4;
    }
  }
  sub_182C690(v6, v17, v5 + 16);
LABEL_4:
  v8 = qword_1C7F2C0;
  v18[0] = 0;
  v18[1] = 0;
  v19[0] = 1;
  v19[1] = 0;
  sub_182CEF0(qword_1C7F2C0, v18);
  sub_182CBA0(v8, v19);
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  v9 = qword_1C7F2C0;
  *(_OWORD *)(a1 + 16) = 0;
  BYTE4(v19[0]) &= ~1u;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  LODWORD(v19[0]) = 1;
  *(_DWORD *)(a1 + 16) = 1;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)a1 = 0;
  if ( (v16[0] & 0x100000000LL) != 0 )
    sub_182C690(v9, a1 + 32, v16);
  else
    *(_DWORD *)(a1 + 32) = v16[0];
  if ( (v17[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v9, a1 + 48, v17);
  }
  else
  {
    v10 = v17[0];
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = v10;
  }
  *(_BYTE *)(a1 + 68) &= 0xFCu;
  v11 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 84) &= 0xFCu;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  if ( (v18[0] & 0x100000000LL) != 0 )
    sub_182C690(v11, a1 + 64, v18);
  else
    *(_DWORD *)(a1 + 64) = v18[0];
  if ( (v19[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v11, a1 + 80, v19);
  }
  else
  {
    v12 = v19[0];
    *(_BYTE *)(a1 + 84) &= ~1u;
    *(_DWORD *)(a1 + 80) = v12;
  }
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v18);
  sub_182CBA0(v13, v19);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v16);
  sub_182CBA0(v14, v17);
  return a1;
}

