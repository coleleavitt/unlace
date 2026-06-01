__int64 __fastcall sub_921AE0(__int64 a1, __int16 a2, __int16 a3, int a4, __int64 a5)
{
  void *v6; // r12
  __int64 result; // rax

  v6 = qword_1C7F2C0;
  *(_WORD *)a1 = a2;
  *(_WORD *)(a1 + 2) = a3;
  *(_DWORD *)(a1 + 4) = a4;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 32) = 0;
  if ( (*(_BYTE *)(a5 + 4) & 1) != 0 )
  {
    sub_182C690(v6, a1 + 8, a5);
    if ( (*(_BYTE *)(a5 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = *(_DWORD *)a5;
    if ( (*(_BYTE *)(a5 + 20) & 1) == 0 )
    {
LABEL_3:
      result = *(unsigned int *)(a5 + 16);
      *(_BYTE *)(a1 + 28) &= ~1u;
      *(_DWORD *)(a1 + 24) = result;
      return result;
    }
  }
  return sub_182C690(v6, a1 + 24, a5 + 16);
}

