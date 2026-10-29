unsigned __int64 __fastcall sub_190C990(__int64 a1, int a2, int a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v7; // rbx
  char v8; // r14
  __int64 v9; // r15
  char v10; // al
  unsigned __int8 v11; // al

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 45LL) & 0x20) != 0
    && (*(_BYTE *)(a1 + 225) & 2) != 0
    && ((*(_BYTE *)(a4 + 1) >> 1) & 3) != 1
    && sub_F580C0(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    return sub_190C6E0((_QWORD *)a1, a3, 0x85u, a5, a6);
  }
  v7 = sub_EEE9A0(32, *(_QWORD **)(a1 + 248), 8u);
  v8 = *(_BYTE *)(a4 + 1);
  v9 = *(_QWORD *)(a4 + 8);
  *(_WORD *)v7 = *(_WORD *)v7 & 0xFE00 | 0x14;
  if ( unk_2CD7484 )
    sub_EE9B50(20);
  v10 = *(_BYTE *)(v7 + 1);
  *(_BYTE *)(v7 + 2) &= 0xF0u;
  *(_QWORD *)(v7 + 8) = v9;
  *(_DWORD *)(v7 + 16) = a2;
  *(_DWORD *)(v7 + 20) = a3;
  *(_BYTE *)(v7 + 1) = v8 & 0x3E | v10 & 1;
  *(_QWORD *)(v7 + 24) = a4;
  v11 = sub_B62400(v7);
  *(_BYTE *)(v7 + 1) = (v11 << 6) | *(_BYTE *)(v7 + 1) & 0x3F;
  *(_BYTE *)(v7 + 2) = *(_BYTE *)(v7 + 2) & 0xF8 | (v11 >> 2) & 7;
  return v7;
}
