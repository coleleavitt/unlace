__int64 __fastcall sub_998980(__int64 a1, int a2, __int64 a3, char a4, char a5)
{
  __int64 v5; // r14
  void *v10; // rdi
  int v11; // eax
  void *v12; // r15
  int v13; // eax
  __int64 result; // rax
  void *v15; // [rsp+8h] [rbp-40h]

  v5 = a1 + 16;
  *(_QWORD *)a1 = &off_1C56158;
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  v10 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    v15 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v5, a3);
    v10 = v15;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
    {
LABEL_3:
      v11 = *(_DWORD *)(a3 + 16);
      *(_BYTE *)(a1 + 36) &= ~1u;
      *(_DWORD *)(a1 + 32) = v11;
      goto LABEL_4;
    }
  }
  sub_182C690(v10, a1 + 32, a3 + 16);
LABEL_4:
  *(_QWORD *)(a1 + 48) = 0;
  v12 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 72) = 0;
  if ( (*(_BYTE *)(a3 + 36) & 1) != 0 )
    sub_182C690(v12, a1 + 48, a3 + 32);
  else
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(a3 + 32);
  if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
  {
    sub_182C690(v12, a1 + 64, a3 + 48);
  }
  else
  {
    v13 = *(_DWORD *)(a3 + 48);
    *(_BYTE *)(a1 + 68) &= ~1u;
    *(_DWORD *)(a1 + 64) = v13;
  }
  result = *(_BYTE *)(a1 + 80) & 0xFC;
  *(_BYTE *)(a1 + 80) = *(_BYTE *)(a1 + 80) & 0xFC | a4 & 1 | (2 * a5) & 3;
  return result;
}

