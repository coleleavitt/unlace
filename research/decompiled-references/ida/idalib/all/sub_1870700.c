__int64 __fastcall sub_1870700(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // eax
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  unsigned int v18; // eax
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int v23; // [rsp+Ch] [rbp-2Ch] BYREF

  v9 = *(_DWORD *)(a2 + 84) & 0xE0001FFF;
  BYTE1(v9) |= 0x20u;
  *(_DWORD *)(a2 + 84) = v9;
  v10 = *(_QWORD **)(a1 + 248);
  v11 = v10[294];
  v10[304] += 8LL;
  v12 = (_QWORD *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v10[295] >= (unsigned __int64)(v12 + 1) && v11 )
    v10[294] = v12 + 1;
  else
    v12 = (_QWORD *)sub_986170((__int64)(v10 + 294), 8, 8, 3, a5, a6);
  *v12 = a3;
  *(_QWORD *)(a2 + 168) = v12;
  v13 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  if ( (v13 & 4) != 0 )
    v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v14 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v14 )
    v14 -= 64LL;
  v17 = sub_1A69EF0(a1, v14);
  if ( v17 )
  {
    v18 = sub_B98AF0(a3);
    sub_1910D40(a1, v18, v17, 1);
    v23 = sub_B98AF0(a3);
    sub_18F5260(a1, v17, (unsigned int)&v23, 1, 0, 0, 0, 0, 0);
  }
  v19 = *(unsigned int *)(a1 + 4144);
  v20 = *(unsigned int *)(a1 + 4148);
  if ( v19 + 1 > v20 )
  {
    sub_2237220(a1 + 4136, a1 + 4152, v19 + 1, 8);
    v19 = *(unsigned int *)(a1 + 4144);
  }
  v21 = *(_QWORD *)(a1 + 4136);
  *(_QWORD *)(v21 + 8 * v19) = a2;
  ++*(_DWORD *)(a1 + 4144);
  sub_186FAF0(a1, a2, v21, v20, v15, v16);
  return 0;
}
