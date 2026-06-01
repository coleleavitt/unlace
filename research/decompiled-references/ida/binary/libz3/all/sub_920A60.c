__int64 __fastcall sub_920A60(__int64 a1, __int16 a2, __int16 a3, int a4, __int64 a5)
{
  void *v6; // r14
  int v7; // eax
  void *v8; // r12
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
      v7 = *(_DWORD *)(a5 + 16);
      *(_BYTE *)(a1 + 28) &= ~1u;
      *(_DWORD *)(a1 + 24) = v7;
      goto LABEL_4;
    }
  }
  sub_182C690(v6, a1 + 24, a5 + 16);
LABEL_4:
  *(_QWORD *)(a1 + 40) = 0;
  v8 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 1;
  *(_QWORD *)(a1 + 64) = 0;
  if ( (*(_BYTE *)(a5 + 36) & 1) != 0 )
    sub_182C690(v8, a1 + 40, a5 + 32);
  else
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a5 + 32);
  if ( (*(_BYTE *)(a5 + 52) & 1) != 0 )
    return sub_182C690(v8, a1 + 56, a5 + 48);
  result = *(unsigned int *)(a5 + 48);
  *(_BYTE *)(a1 + 60) &= ~1u;
  *(_DWORD *)(a1 + 56) = result;
  return result;
}

