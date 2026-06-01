__int64 __fastcall sub_9208E0(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  void *v7; // r15
  int v8; // eax
  void *v9; // r13
  __int64 result; // rax

  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_QWORD *)(a1 + 8) = 0;
  v7 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 32) = 0;
  if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
  {
    sub_182C690(v7, a1 + 8, a4);
    if ( (*(_BYTE *)(a4 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = *(_DWORD *)a4;
    if ( (*(_BYTE *)(a4 + 20) & 1) == 0 )
    {
LABEL_3:
      v8 = *(_DWORD *)(a4 + 16);
      *(_BYTE *)(a1 + 28) &= ~1u;
      *(_DWORD *)(a1 + 24) = v8;
      goto LABEL_4;
    }
  }
  sub_182C690(v7, a1 + 24, a4 + 16);
LABEL_4:
  *(_QWORD *)(a1 + 40) = 0;
  v9 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 64) = 0;
  if ( (*(_BYTE *)(a4 + 36) & 1) != 0 )
    sub_182C690(v9, a1 + 40, a4 + 32);
  else
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a4 + 32);
  if ( (*(_BYTE *)(a4 + 52) & 1) != 0 )
  {
    result = sub_182C690(v9, a1 + 56, a4 + 48);
  }
  else
  {
    result = *(unsigned int *)(a4 + 48);
    *(_BYTE *)(a1 + 60) &= ~1u;
    *(_DWORD *)(a1 + 56) = result;
  }
  *(_DWORD *)(a1 + 72) = a5;
  return result;
}

