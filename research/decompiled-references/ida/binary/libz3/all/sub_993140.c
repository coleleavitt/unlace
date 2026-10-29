__int64 __fastcall sub_993140(__int64 a1, __int64 a2, __int64 a3)
{
  void *v5; // r13
  int v6; // edx
  void *v7; // rdi
  int v8; // eax
  void *v10; // [rsp+8h] [rbp-40h]
  void *v11; // [rsp+8h] [rbp-40h]

  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  v5 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    sub_182C690(v5, a1, a3);
  else
    *(_DWORD *)a1 = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    sub_182C690(v5, a1 + 16, a3 + 16);
  }
  else
  {
    v6 = *(_DWORD *)(a3 + 16);
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v6;
  }
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  v7 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  if ( (*(_BYTE *)(a3 + 36) & 1) != 0 )
    sub_182C690(v7, a1 + 32, a3 + 32);
  else
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a3 + 32);
  if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
  {
    sub_182C690(v7, a1 + 48, a3 + 48);
  }
  else
  {
    v8 = *(_DWORD *)(a3 + 48);
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = v8;
  }
  if ( (*(_BYTE *)(a1 + 20) & 1) != 0
    || *(_DWORD *)(a1 + 16) != 1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, a1, a2);
  }
  else
  {
    v11 = qword_1C7F2C0;
    sub_1831650(qword_1C7F2C0, a1, a2);
    sub_182CBA0(v11, a1 + 16);
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = 1;
  }
  if ( (*(_BYTE *)(a1 + 52) & 1) != 0
    || *(_DWORD *)(a1 + 48) != 1
    || (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1 )
  {
    sub_1848FF0(qword_1C7F2C0, a1 + 32, a2);
  }
  else
  {
    v10 = qword_1C7F2C0;
    sub_1831650(qword_1C7F2C0, a1 + 32, a2);
    sub_182CBA0(v10, a1 + 48);
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = 1;
  }
  return a1;
}

