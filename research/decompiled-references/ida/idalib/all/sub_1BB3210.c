__int64 __fastcall sub_1BB3210(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 v11; // rdi
  unsigned int v12; // r14d
  char v13; // r13
  bool v14; // bp
  __int64 v15; // rbx
  char v16; // al

  v5 = (unsigned __int64)sub_1BB2C30(a1, *(_QWORD *)(a2 + 8), a3, a4);
  if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v7 = v5;
  v10 = sub_1B03C10((__int64)a1, *(_QWORD *)(a2 + 16));
  if ( !v10 )
    return 1;
  v11 = *a1;
  v12 = *(_DWORD *)(a2 + 24);
  if ( !*(_DWORD *)(*a1 + 12632) && v7 == *(_QWORD *)(a2 + 8) && v10 == *(_QWORD *)(a2 + 16) )
  {
    sub_1910D40(v11, v12, v10, 1, v8, v9, a3, a4);
    return a2;
  }
  else
  {
    v13 = *(_BYTE *)(a2 + 28) & 1;
    v14 = (*(_BYTE *)(a2 + 28) & 2) != 0;
    v15 = sub_EEE9A0(32, *(_QWORD **)(v11 + 248), 8u);
    *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x6B;
    if ( unk_2CD7484 )
      sub_EE9B50(107);
    v16 = *(_BYTE *)(v15 + 28);
    *(_WORD *)(v15 + 1) &= 0xF801u;
    *(_QWORD *)(v15 + 8) = v7;
    *(_QWORD *)(v15 + 16) = v10;
    *(_DWORD *)(v15 + 24) = v12;
    *(_BYTE *)(v15 + 28) = (2 * v14) | v13 | v16 & 0xFC;
    return v15;
  }
}
