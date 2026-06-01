__int64 __fastcall sub_897250(__int64 a1, int a2, __int64 a3, int a4)
{
  void *v6; // r13
  int v7; // eax
  __int64 result; // rax

  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v6 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 32) = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    sub_182C690(v6, a1 + 8, a3);
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
LABEL_6:
    sub_182C690(v6, a1 + 24, a3 + 16);
    goto LABEL_4;
  }
  *(_DWORD *)(a1 + 8) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
    goto LABEL_6;
LABEL_3:
  v7 = *(_DWORD *)(a3 + 16);
  *(_BYTE *)(a1 + 28) &= ~1u;
  *(_DWORD *)(a1 + 24) = v7;
LABEL_4:
  result = *(unsigned int *)(a3 + 32);
  *(_DWORD *)(a1 + 48) = a4;
  *(_DWORD *)(a1 + 40) = result;
  return result;
}

