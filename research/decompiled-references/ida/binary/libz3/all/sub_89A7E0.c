__int64 __fastcall sub_89A7E0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // r15
  int v6; // eax
  void *v7; // rdi
  int v8; // eax
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rbp
  void *v12; // rbp
  _QWORD v14[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v17[9]; // [rsp+40h] [rbp-48h] BYREF

  v14[0] = 0;
  v14[1] = 0;
  v5 = qword_1C7F2C0;
  v15[0] = 1;
  v15[1] = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, v14, a2);
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    LODWORD(v14[0]) = *(_DWORD *)a2;
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
    {
LABEL_3:
      v6 = *(_DWORD *)(a2 + 16);
      BYTE4(v15[0]) &= ~1u;
      LODWORD(v15[0]) = v6;
      goto LABEL_4;
    }
  }
  sub_182C690(v5, v15, a2 + 16);
LABEL_4:
  v16[0] = 0;
  v7 = qword_1C7F2C0;
  v16[1] = 0;
  v17[0] = 1;
  v17[1] = 0;
  if ( (*(_BYTE *)(a2 + 36) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v16, a2 + 32);
  else
    LODWORD(v16[0]) = *(_DWORD *)(a2 + 32);
  if ( (*(_BYTE *)(a2 + 52) & 1) != 0 )
  {
    sub_182C690(v7, v17, a2 + 48);
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 48);
    BYTE4(v17[0]) &= ~1u;
    LODWORD(v17[0]) = v8;
  }
  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v14, a3, (__int64)v14);
  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v16, a3 + 32, (__int64)v16);
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  v9 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  sub_27B950((__int64)v9, a1, (int *)v14);
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  v10 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  sub_27B950((__int64)v10, a1 + 32, (int *)v16);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v16);
  sub_182CBA0(v11, v17);
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v14);
  sub_182CBA0(v12, v15);
  return a1;
}

