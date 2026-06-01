__int64 __fastcall sub_8A6550(__int64 a1, __int64 a2)
{
  void *v2; // r13
  int v3; // eax
  void *v4; // r14
  int v5; // eax
  void *v6; // r12
  __int64 result; // rax

  v2 = qword_1C7F2C0;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    sub_182C690(v2, a1, a2);
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
    {
LABEL_3:
      v3 = *(_DWORD *)(a2 + 16);
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v3;
      goto LABEL_4;
    }
  }
  sub_182C690(v2, a1 + 16, a2 + 16);
LABEL_4:
  *(_QWORD *)(a1 + 32) = 0;
  v4 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  if ( (*(_BYTE *)(a2 + 36) & 1) != 0 )
    sub_182C690(v4, a1 + 32, a2 + 32);
  else
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  if ( (*(_BYTE *)(a2 + 52) & 1) != 0 )
  {
    sub_182C690(v4, a1 + 48, a2 + 48);
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = v5;
  }
  *(_QWORD *)(a1 + 64) = 0;
  v6 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  if ( (*(_BYTE *)(a2 + 68) & 1) != 0 )
    sub_182C690(v6, a1 + 64, a2 + 64);
  else
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  if ( (*(_BYTE *)(a2 + 84) & 1) != 0 )
    return sub_182C690(v6, a1 + 80, a2 + 80);
  result = *(unsigned int *)(a2 + 80);
  *(_BYTE *)(a1 + 84) &= ~1u;
  *(_DWORD *)(a1 + 80) = result;
  return result;
}

