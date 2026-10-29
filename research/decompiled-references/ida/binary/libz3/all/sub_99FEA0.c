__int64 __fastcall sub_99FEA0(__int64 a1, int a2, int a3, __int64 a4, char a5)
{
  __int64 v5; // r15
  void *v9; // rdi
  int v10; // eax
  char v11; // al
  void *v12; // r13
  __int64 result; // rax
  void *v14; // [rsp+8h] [rbp-40h]

  v5 = a1 + 16;
  *(_QWORD *)a1 = &off_1C56290;
  *(_DWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  v9 = qword_1C7F2C0;
  if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
  {
    v14 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v5, &qword_1C7F2A0);
    v9 = v14;
    if ( (qword_1C7F2B0 & 0x100000000LL) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = qword_1C7F2A0;
    if ( (qword_1C7F2B0 & 0x100000000LL) == 0 )
    {
LABEL_3:
      v10 = qword_1C7F2B0;
      *(_BYTE *)(a1 + 36) &= ~1u;
      *(_DWORD *)(a1 + 32) = v10;
      goto LABEL_4;
    }
  }
  sub_182C690(v9, a1 + 32, &qword_1C7F2B0);
LABEL_4:
  v11 = *(_BYTE *)(a1 + 48);
  *(_DWORD *)(a1 + 52) = a2;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 1;
  *(_BYTE *)(a1 + 48) = v11 & 0xFC | 2;
  *(_QWORD *)a1 = &off_1C562C8;
  *(_QWORD *)(a1 + 80) = 0;
  v12 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, a1 + 56, a4);
  else
    *(_DWORD *)(a1 + 56) = *(_DWORD *)a4;
  if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
  {
    result = sub_182C690(v12, a1 + 72, a4 + 16);
  }
  else
  {
    result = *(unsigned int *)(a4 + 16);
    *(_BYTE *)(a1 + 76) &= ~1u;
    *(_DWORD *)(a1 + 72) = result;
  }
  *(_BYTE *)(a1 + 88) = a5 & 3 | *(_BYTE *)(a1 + 88) & 0xF8;
  return result;
}

