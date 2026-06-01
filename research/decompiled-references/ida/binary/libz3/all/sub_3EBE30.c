__int64 __fastcall sub_3EBE30(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // r15
  int v5; // eax
  void *v6; // r14
  int v7; // eax
  void *v8; // r12
  void *v10; // [rsp+8h] [rbp-60h]
  _QWORD v11[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v11[0] = 0;
  v11[1] = 0;
  v4 = qword_1C7F2C0;
  v12[0] = 1;
  v12[1] = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v11, a2);
  else
    LODWORD(v11[0]) = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
  {
    sub_182C690(v4, v12, a2 + 16);
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 16);
    BYTE4(v12[0]) &= ~1u;
    LODWORD(v12[0]) = v5;
  }
  if ( (v12[0] & 0x100000000LL) != 0
    || LODWORD(v12[0]) != 1
    || (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, v11, a3);
  }
  else
  {
    v10 = qword_1C7F2C0;
    sub_1831650(qword_1C7F2C0, v11, a3);
    sub_182CBA0(v10, v12);
    BYTE4(v12[0]) &= ~1u;
    LODWORD(v12[0]) = 1;
  }
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  v6 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v11[0] & 0x100000000LL) != 0 )
    sub_182C690(v6, a1, v11);
  else
    *(_DWORD *)a1 = v11[0];
  if ( (v12[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v6, a1 + 16, v12);
  }
  else
  {
    v7 = v12[0];
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v7;
  }
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v11);
  sub_182CBA0(v8, v12);
  return a1;
}

