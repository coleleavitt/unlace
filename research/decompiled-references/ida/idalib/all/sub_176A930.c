__int64 __fastcall sub_176A930(_QWORD *a1, __int64 a2, __m128 a3)
{
  void **v4; // rax
  void **v6; // r12
  __int64 v7; // r15
  __int64 v8; // rdi
  unsigned int v9; // r14d
  char v10; // r13
  bool v11; // bp
  __int64 v12; // rbx
  char v13; // al

  v4 = sub_176A2F0(a1, *(_QWORD *)(a2 + 8), a3);
  if ( ((unsigned __int64)v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v6 = v4;
  v7 = sub_17473B0((__int64)a1, *(_QWORD *)(a2 + 16));
  if ( !v7 )
    return 1;
  v8 = *a1;
  v9 = *(_DWORD *)(a2 + 24);
  if ( !*(_DWORD *)(*a1 + 12632LL) && v6 == *(void ***)(a2 + 8) && v7 == *(_QWORD *)(a2 + 16) )
  {
    sub_1910D40(v8, v9, v7, 1);
    return a2;
  }
  else
  {
    v10 = *(_BYTE *)(a2 + 28) & 1;
    v11 = (*(_BYTE *)(a2 + 28) & 2) != 0;
    v12 = sub_EEE9A0(32, *(_QWORD **)(v8 + 248), 8u);
    *(_WORD *)v12 = *(_WORD *)v12 & 0xFE00 | 0x6B;
    if ( unk_2CD7484 )
      sub_EE9B50(107);
    v13 = *(_BYTE *)(v12 + 28);
    *(_WORD *)(v12 + 1) &= 0xF801u;
    *(_QWORD *)(v12 + 8) = v6;
    *(_QWORD *)(v12 + 16) = v7;
    *(_DWORD *)(v12 + 24) = v9;
    *(_BYTE *)(v12 + 28) = (2 * v11) | v10 | v13 & 0xFC;
    return v12;
  }
}
