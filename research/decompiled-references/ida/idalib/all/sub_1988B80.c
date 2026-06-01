__int64 __fastcall sub_1988B80(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  unsigned int v11; // r13d
  __int64 v12; // rdi
  char v13; // r14
  bool v14; // bp
  __int64 v15; // rbx
  char v16; // al

  v4 = (unsigned __int64)sub_19885D0(a1, *(_QWORD *)(a2 + 8), a3, a4);
  if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v6 = v4;
  v7 = sub_18CBE40((__int64)a1, *(_QWORD *)(a2 + 16));
  v10 = v7;
  if ( !v7 )
    return 1;
  v11 = *(_DWORD *)(a2 + 24);
  v12 = *a1;
  if ( *(_QWORD *)(a2 + 8) == v6 && v7 == *(_QWORD *)(a2 + 16) )
  {
    sub_1910D40(v12, v11, v7, 1, v8, v9, a3, a4);
    return a2;
  }
  else
  {
    v13 = *(_BYTE *)(a2 + 28) & 1;
    v14 = (*(_BYTE *)(a2 + 28) & 2) != 0;
    v15 = sub_EEE9A0(32, *(_QWORD **)(v12 + 248), 8u);
    *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x6B;
    if ( unk_2CD7484 )
      sub_EE9B50(107);
    v16 = *(_BYTE *)(v15 + 28);
    *(_WORD *)(v15 + 1) &= 0xF801u;
    *(_QWORD *)(v15 + 8) = v6;
    *(_QWORD *)(v15 + 16) = v10;
    *(_DWORD *)(v15 + 24) = v11;
    *(_BYTE *)(v15 + 28) = (2 * v14) | v13 | v16 & 0xFC;
    return v15;
  }
}
