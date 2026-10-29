__int64 __fastcall sub_304210(__int64 a1, __int64 a2)
{
  void *v2; // r12
  int v3; // eax

  v2 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (*(_BYTE *)(a2 + 76) & 1) != 0 )
  {
    sub_182C690(v2, a1, a2 + 72);
    if ( (*(_BYTE *)(a2 + 92) & 1) == 0 )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)a1 = *(_DWORD *)(a2 + 72);
    if ( (*(_BYTE *)(a2 + 92) & 1) == 0 )
    {
LABEL_3:
      v3 = *(_DWORD *)(a2 + 88);
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v3;
      return a1;
    }
  }
  sub_182C690(v2, a1 + 16, a2 + 88);
  return a1;
}

