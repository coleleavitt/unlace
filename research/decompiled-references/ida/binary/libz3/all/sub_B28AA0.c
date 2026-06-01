__int64 __fastcall sub_B28AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  void *v10; // rdi
  __int64 v11; // r15
  int v12; // edx
  void *v13; // r12
  int v14; // eax
  void *v16; // [rsp+8h] [rbp-40h]

  v5 = a1 + 16;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  v10 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    v16 = qword_1C7F2C0;
    v11 = a3 + 16;
    sub_182C690(qword_1C7F2C0, v5, a3);
    v10 = v16;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    v11 = a3 + 16;
    *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
    {
LABEL_3:
      v12 = *(_DWORD *)(a3 + 16);
      *(_BYTE *)(a1 + 36) &= ~1u;
      *(_DWORD *)(a1 + 32) = v12;
      goto LABEL_4;
    }
  }
  sub_182C690(v10, a1 + 32, v11);
LABEL_4:
  *(_QWORD *)(a1 + 48) = 1;
  v13 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 1;
  *(_QWORD *)(a1 + 80) = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    sub_182C690(v13, a1 + 56, a3);
  else
    *(_DWORD *)(a1 + 56) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
  {
    sub_182C690(v13, a1 + 72, v11);
  }
  else
  {
    v14 = *(_DWORD *)(a3 + 16);
    *(_BYTE *)(a1 + 76) &= ~1u;
    *(_DWORD *)(a1 + 72) = v14;
  }
  *(_QWORD *)(a1 + 96) = a4;
  *(_WORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 104) = a5;
  return 0;
}

