__int64 __fastcall sub_9A9130(__int64 a1, __int64 a2)
{
  void *v2; // rbp

  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 || *(_DWORD *)(a2 + 16) != 1 )
  {
    *(_BYTE *)(a1 + 4) &= 0xFCu;
    *(_BYTE *)(a1 + 20) &= 0xFCu;
    v2 = qword_1C7F2C0;
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 24) = 0;
    sub_18495B0(v2, a2, a1);
    sub_182CBA0(v2, a1 + 16);
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = 1;
    return a1;
  }
  if ( *(int *)(a2 + 32) < 0 )
  {
    sub_3EBB80(a1, a2, (__int64)&qword_1C7F280);
    return a1;
  }
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  sub_27B950((__int64)qword_1C7F2C0, a1, (int *)a2);
  return a1;
}

