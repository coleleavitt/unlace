__int64 __fastcall sub_9AB200(__int64 a1, __int64 a2, unsigned int a3)
{
  int *v3; // rbp
  void *v4; // r14
  int v5; // eax
  void *v6; // r12
  int v7; // eax

  if ( a3 != -1 && ((*(_BYTE *)(*(_QWORD *)(a2 + 656) + 4LL * a3 + 3) >> 4) & 3) == 2 )
    v3 = sub_9AA360(a2, a3);
  else
    v3 = (int *)(*(_QWORD *)(a2 + 664) + ((unsigned __int64)a3 << 6));
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  *(_OWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  v4 = qword_1C7F2C0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_OWORD *)a1 = 0;
  if ( (v3[1] & 1) != 0 )
    sub_182C690(v4, a1 + 32, v3);
  else
    *(_DWORD *)(a1 + 32) = *v3;
  if ( (v3[5] & 1) != 0 )
  {
    sub_182C690(v4, a1 + 48, v3 + 4);
  }
  else
  {
    v5 = v3[4];
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = v5;
  }
  *(_BYTE *)(a1 + 68) &= 0xFCu;
  v6 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 84) &= 0xFCu;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  if ( (v3[9] & 1) != 0 )
    sub_182C690(v6, a1 + 64, v3 + 8);
  else
    *(_DWORD *)(a1 + 64) = v3[8];
  if ( (v3[13] & 1) != 0 )
  {
    sub_182C690(v6, a1 + 80, v3 + 12);
  }
  else
  {
    v7 = v3[12];
    *(_BYTE *)(a1 + 84) &= ~1u;
    *(_DWORD *)(a1 + 80) = v7;
  }
  return a1;
}

