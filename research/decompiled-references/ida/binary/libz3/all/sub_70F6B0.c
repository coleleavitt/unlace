__int64 __fastcall sub_70F6B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // si
  __int64 v8; // rax
  void *v9; // rbx
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+8h] [rbp-40h]
  __int64 v13; // [rsp+10h] [rbp-38h] BYREF
  __int64 v14; // [rsp+18h] [rbp-30h]

  v11 = 2;
  v12 = 0;
  v13 = 1;
  v14 = 0;
  sub_182CBA0(qword_1C7F2C0, &v13);
  LODWORD(v11) = *(_DWORD *)a4;
  v5 = *(_QWORD *)(a4 + 8);
  *(_DWORD *)a4 = 2;
  v6 = v12;
  v12 = v5;
  LOBYTE(v5) = *(_BYTE *)(a4 + 4);
  *(_QWORD *)(a4 + 8) = v6;
  LOBYTE(v6) = v5 & 0xFC;
  v7 = *(_BYTE *)(a4 + 20);
  BYTE4(v11) = v5 & 3;
  LODWORD(v5) = *(_DWORD *)(a4 + 16);
  *(_BYTE *)(a4 + 4) = v6;
  LODWORD(v13) = v5;
  v8 = *(_QWORD *)(a4 + 24);
  *(_QWORD *)(a4 + 24) = v14;
  v14 = v8;
  LOBYTE(v8) = BYTE4(v13);
  *(_DWORD *)(a4 + 16) = 1;
  *(_BYTE *)(a4 + 20) = v7 & 0xFC | v8 & 2;
  v9 = qword_1C7F2C0;
  BYTE4(v13) = v7 & 1 | v7 & 2 | v8 & 0xFC;
  sub_182CBA0(qword_1C7F2C0, &v11);
  sub_182CBA0(v9, &v13);
  return 1;
}

