__int64 __fastcall sub_1C160F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  char v3; // r14
  int v4; // r12d
  __int64 v5; // rbx
  char v6; // al
  unsigned __int8 v7; // al
  char v8; // al
  __int64 v9; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_BYTE *)(a2 + 1);
  v4 = *(_DWORD *)(a1 + 20);
  v5 = sub_EEE9A0(24, *(_QWORD **)(*(_QWORD *)(a1 + 8) + 248LL), 8u);
  *(_WORD *)v5 = *(_WORD *)v5 & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
    sub_EE9B50(26);
  v6 = *(_BYTE *)(v5 + 1);
  *(_BYTE *)(v5 + 2) &= 0xF0u;
  *(_QWORD *)(v5 + 8) = v2;
  *(_QWORD *)(v5 + 16) = a2;
  *(_DWORD *)(v5 + 4) = v4;
  *(_BYTE *)(v5 + 1) = v3 & 0x3E | v6 & 1;
  v7 = sub_B62360(v5);
  *(_BYTE *)(v5 + 1) = (v7 << 6) | *(_BYTE *)(v5 + 1) & 0x3F;
  v8 = (v7 >> 2) & 7 | *(_BYTE *)(v5 + 2) & 0xF8;
  *(_BYTE *)(v5 + 2) = v8;
  if ( *(_BYTE *)(a1 + 24) )
    *(_BYTE *)(v5 + 2) = v8 | 8;
  v9 = *(unsigned int *)(a1 + 40);
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
  {
    sub_2237220(a1 + 32, a1 + 48, v9 + 1, 8);
    v9 = *(unsigned int *)(a1 + 40);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v9) = v5;
  ++*(_DWORD *)(a1 + 40);
  return v5;
}
