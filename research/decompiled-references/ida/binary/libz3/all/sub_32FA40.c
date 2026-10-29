_DWORD *__fastcall sub_32FA40(_DWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  void *v5; // r13
  __int64 v6; // rbp
  int v7; // eax
  void *v8; // r14
  int v9; // eax
  void *v10; // r12
  int v11; // eax

  v3 = *(_QWORD *)(a2 + 24);
  if ( !v3 || a3 >= *(_DWORD *)(v3 - 4) )
  {
    memset(a1, 0, 0x60u);
    a1[4] = 1;
    a1[12] = 1;
    a1[20] = 1;
    return a1;
  }
  *((_BYTE *)a1 + 4) &= 0xFCu;
  *((_BYTE *)a1 + 20) &= 0xFCu;
  *a1 = 0;
  v5 = qword_1C7F2C0;
  v6 = 96LL * a3 + v3;
  *((_QWORD *)a1 + 1) = 0;
  a1[4] = 1;
  *((_QWORD *)a1 + 3) = 0;
  if ( (*(_BYTE *)(v6 + 4) & 1) != 0 )
    sub_182C690(v5, a1, v6);
  else
    *a1 = *(_DWORD *)v6;
  if ( (*(_BYTE *)(v6 + 20) & 1) != 0 )
  {
    sub_182C690(v5, a1 + 4, v6 + 16);
  }
  else
  {
    v7 = *(_DWORD *)(v6 + 16);
    *((_BYTE *)a1 + 20) &= ~1u;
    a1[4] = v7;
  }
  *((_BYTE *)a1 + 36) &= 0xFCu;
  v8 = qword_1C7F2C0;
  *((_BYTE *)a1 + 52) &= 0xFCu;
  a1[8] = 0;
  *((_QWORD *)a1 + 5) = 0;
  a1[12] = 1;
  *((_QWORD *)a1 + 7) = 0;
  if ( (*(_BYTE *)(v6 + 36) & 1) != 0 )
    sub_182C690(v8, a1 + 8, v6 + 32);
  else
    a1[8] = *(_DWORD *)(v6 + 32);
  if ( (*(_BYTE *)(v6 + 52) & 1) != 0 )
  {
    sub_182C690(v8, a1 + 12, v6 + 48);
  }
  else
  {
    v9 = *(_DWORD *)(v6 + 48);
    *((_BYTE *)a1 + 52) &= ~1u;
    a1[12] = v9;
  }
  *((_BYTE *)a1 + 68) &= 0xFCu;
  v10 = qword_1C7F2C0;
  *((_BYTE *)a1 + 84) &= 0xFCu;
  a1[16] = 0;
  *((_QWORD *)a1 + 9) = 0;
  a1[20] = 1;
  *((_QWORD *)a1 + 11) = 0;
  if ( (*(_BYTE *)(v6 + 68) & 1) != 0 )
    sub_182C690(v10, a1 + 16, v6 + 64);
  else
    a1[16] = *(_DWORD *)(v6 + 64);
  if ( (*(_BYTE *)(v6 + 84) & 1) != 0 )
  {
    sub_182C690(v10, a1 + 20, v6 + 80);
    return a1;
  }
  v11 = *(_DWORD *)(v6 + 80);
  *((_BYTE *)a1 + 84) &= ~1u;
  a1[20] = v11;
  return a1;
}

