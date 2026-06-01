__int64 __fastcall sub_B581D0(__int64 a1)
{
  __int64 v1; // rbp
  void *v2; // r12
  int v3; // eax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, *(_QWORD *)(a1 + 8), a1 + 16);
    if ( (*(_BYTE *)(a1 + 36) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 16);
    *(_BYTE *)(v1 + 4) &= ~1u;
    *(_DWORD *)v1 = v3;
    if ( (*(_BYTE *)(a1 + 36) & 1) == 0 )
    {
LABEL_3:
      result = *(unsigned int *)(a1 + 32);
      *(_BYTE *)(v1 + 20) &= ~1u;
      *(_DWORD *)(v1 + 16) = result;
      return result;
    }
  }
  return sub_182C690(v2, v1 + 16, a1 + 32);
}

