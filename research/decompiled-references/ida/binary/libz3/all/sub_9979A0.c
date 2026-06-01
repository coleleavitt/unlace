__int64 __fastcall sub_9979A0(__int64 a1, __int64 a2, int a3)
{
  void *v4; // r13
  __int64 result; // rax

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 1;
  v4 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    sub_182C690(v4, a1, a2);
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
    {
LABEL_3:
      result = *(unsigned int *)(a2 + 16);
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 32) = a3;
      *(_DWORD *)(a1 + 16) = result;
      return result;
    }
  }
  result = sub_182C690(v4, a1 + 16, a2 + 16);
  *(_DWORD *)(a1 + 32) = a3;
  return result;
}

