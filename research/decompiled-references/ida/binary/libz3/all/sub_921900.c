__int64 __fastcall sub_921900(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  void *v6; // r12
  __int64 result; // rax

  v6 = qword_1C7F2C0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 8) = a4;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  if ( (*(_BYTE *)(a5 + 4) & 1) != 0 )
  {
    sub_182C690(v6, a1 + 16, a5);
    if ( (*(_BYTE *)(a5 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = *(_DWORD *)a5;
    if ( (*(_BYTE *)(a5 + 20) & 1) == 0 )
    {
LABEL_3:
      result = *(unsigned int *)(a5 + 16);
      *(_BYTE *)(a1 + 36) &= ~1u;
      *(_DWORD *)(a1 + 32) = result;
      return result;
    }
  }
  return sub_182C690(v6, a1 + 32, a5 + 16);
}

