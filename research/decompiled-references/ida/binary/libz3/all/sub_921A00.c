__int64 __fastcall sub_921A00(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  void *v7; // r13
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
      result = *(unsigned int *)(a4 + 16);
      *(_BYTE *)(a1 + 28) &= ~1u;
      *(_DWORD *)(a1 + 40) = a5;
      *(_DWORD *)(a1 + 24) = result;
      return result;
    }
  }
  result = sub_182C690(v7, a1 + 24, a4 + 16);
  *(_DWORD *)(a1 + 40) = a5;
  return result;
}

