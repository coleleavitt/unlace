bool __fastcall sub_B72D20(__int64 a1, __int64 a2)
{
  char v2; // al
  _QWORD *v3; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r13
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  char v12; // al
  _QWORD *v13; // r12
  __int64 v14; // rbp

  if ( *(char *)(a2 + 29) < 0 && *(char *)(a1 + 29) < 0 )
    return 0;
  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != v2 || v2 == 18 )
    return 0;
  if ( v2 == 43 )
    return 1;
  v3 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v3 = (_QWORD *)*v3;
  v5 = sub_B8EAA0(v3);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = v5;
  if ( (v6 & 4) != 0 )
    v8 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = sub_B8EAA0(v8);
  if ( !v9 )
    return 0;
  v10 = sub_B91570(v7);
  if ( v10 != sub_B91570(v9) )
    return 0;
  v12 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( v12 != 81 && v12 != 28 )
    __asm { jmp     rax }
  v13 = (_QWORD *)sub_B8C330(a1);
  v14 = sub_AB7570(v13, *(_QWORD *)(a1 + 64));
  return v14 == sub_AB7570(v13, *(_QWORD *)(a2 + 64));
}
