__int64 __fastcall sub_1D1FEB0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v11; // r12
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  __int64 v15; // rdi
  unsigned int v16; // r14d
  char v17; // r13
  bool v18; // bp
  __int64 v19; // rbx
  char v20; // al

  v5 = (unsigned __int64)sub_1D1AC70(a1, *(_QWORD *)(a2 + 8), a3, a4);
  if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v11 = v5;
  v14 = sub_1D1B120((__int64)a1, *(_QWORD *)(a2 + 16), a3, a4, v6, v7, v8, v9);
  if ( !v14 )
    return 1;
  v15 = *a1;
  v16 = *(_DWORD *)(a2 + 24);
  if ( !*(_DWORD *)(*a1 + 12632) && v11 == *(_QWORD *)(a2 + 8) && v14 == *(_QWORD *)(a2 + 16) )
  {
    sub_1910D40(v15, v16, v14, 1, v12, v13, a3, a4);
    return a2;
  }
  else
  {
    v17 = *(_BYTE *)(a2 + 28) & 1;
    v18 = (*(_BYTE *)(a2 + 28) & 2) != 0;
    v19 = sub_EEE9A0(32, *(_QWORD **)(v15 + 248), 8u);
    *(_WORD *)v19 = *(_WORD *)v19 & 0xFE00 | 0x6B;
    if ( unk_2CD7484 )
      sub_EE9B50(107);
    v20 = *(_BYTE *)(v19 + 28);
    *(_WORD *)(v19 + 1) &= 0xF801u;
    *(_QWORD *)(v19 + 8) = v11;
    *(_QWORD *)(v19 + 16) = v14;
    *(_DWORD *)(v19 + 24) = v16;
    *(_BYTE *)(v19 + 28) = (2 * v18) | v17 | v20 & 0xFC;
    return v19;
  }
}
