__int64 __fastcall sub_1DDB320(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v10; // r12
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r15
  __int64 v14; // rdi
  unsigned int v15; // r14d
  char v16; // r13
  bool v17; // bp
  __int64 v18; // rbx
  char v19; // al

  v5 = (unsigned __int64)sub_1DD1AB0(a1, *(_QWORD *)(a2 + 8), a3, a4);
  if ( (v5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v10 = v5;
  v13 = sub_1DD8310(a1, *(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 16), v6, v7, v8, a3, a4);
  if ( !v13 )
    return 1;
  v14 = *(_QWORD *)a1;
  v15 = *(_DWORD *)(a2 + 24);
  if ( !*(_DWORD *)(*(_QWORD *)a1 + 12632LL) && v10 == *(_QWORD *)(a2 + 8) && v13 == *(_QWORD *)(a2 + 16) )
  {
    sub_1910D40(v14, v15, v13, 1, v11, v12, a3, a4);
    return a2;
  }
  else
  {
    v16 = *(_BYTE *)(a2 + 28) & 1;
    v17 = (*(_BYTE *)(a2 + 28) & 2) != 0;
    v18 = sub_EEE9A0(32, *(_QWORD **)(v14 + 248), 8u);
    *(_WORD *)v18 = *(_WORD *)v18 & 0xFE00 | 0x6B;
    if ( unk_2CD7484 )
      sub_EE9B50(107);
    v19 = *(_BYTE *)(v18 + 28);
    *(_WORD *)(v18 + 1) &= 0xF801u;
    *(_QWORD *)(v18 + 8) = v10;
    *(_QWORD *)(v18 + 16) = v13;
    *(_DWORD *)(v18 + 24) = v15;
    *(_BYTE *)(v18 + 28) = (2 * v17) | v16 | v19 & 0xFC;
    return v18;
  }
}
