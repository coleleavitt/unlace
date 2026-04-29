__int64 __fastcall sub_165180(__int64 a1)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi

  if ( *(_DWORD *)(a1 + 76) != 4 )
    return 0;
  v3 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v3 + 64) != 7 )
    return 0;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(unsigned int *)(v3 + 72);
  if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 64) )
    sub_1638F0(a1);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 528) + 8 * v5);
  if ( sub_32BD80(v6) != 1 )
    return 0;
  v7 = *(_QWORD *)(v6 + 56);
  if ( *(_DWORD *)v7 != 55 )
    return 0;
  if ( *(_BYTE *)(v7 + 32) != 7 )
    return 0;
  if ( *(_DWORD *)(v7 + 40) != *(_DWORD *)(a1 + 72) + 1 )
    return 0;
  v8 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v8 + 6) & 2) != 0 )
    return 0;
  sub_155940(v8, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), a1, *(_QWORD *)(a1 + 56), 0);
  sub_1193A0(*(_QWORD *)(a1 + 56));
  v9 = *(_DWORD *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 8);
  BYTE1(v9) &= ~2u;
  LOBYTE(v9) = v9 | 0x80;
  *(_DWORD *)(a1 + 24) = v9;
  sub_1370C0(v10);
  sub_10E350(a1, *(_QWORD *)(a1 + 8), v6);
  sub_62DA0(*(_QWORD *)(a1 + 64), 1u, (__int64)"REMOVE_USELESS_JX2");
  return 1;
}
