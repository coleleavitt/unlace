__int64 __fastcall sub_10C730(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rbp
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi

  v7 = a2;
  *(_QWORD *)(a1 + 32) = a1 + 16;
  *(_QWORD *)(a1 + 40) = a1 + 16;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)a1 = &off_234A00;
  *(_QWORD *)(a1 + 56) = 0;
  sub_1765B0(a1, a2, a3, a4, a5, a6);
  v9 = *(unsigned int *)(a2 + 912);
  v10 = *(_DWORD *)(a3 + 112);
  v11 = a1 + 72;
  if ( (v10 & 5) != 0 )
    v9 = *(_DWORD *)(a2 + 912) | 0x20u;
  if ( (v10 & 0x100000) != 0 )
    v9 = (unsigned int)v9 | 1;
  sub_168960(v11, a2, 10, v9, 4294934528LL);
  if ( a2 )
    v7 = a2 + 160;
  return sub_F1FE0((__int64 *)(a1 + 160), v7);
}

