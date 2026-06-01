unsigned __int64 __fastcall sub_14803B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int16 v8; // ax
  int v9; // r13d
  _QWORD *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // eax
  __int64 *v14; // rdi

  v6 = 0;
  v8 = *(_WORD *)(a1 + 32);
  v9 = *(_DWORD *)(a1 + 16);
  if ( (unsigned __int16)(v8 - 7) > 0xCu && v8 != 1 )
    v6 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD **)(*(_QWORD *)(a1 + 96) + 248LL);
  v11 = v10[294];
  v10[304] += 16LL;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10[295] >= v12 + 16 && v11 )
    v10[294] = v12 + 16;
  else
    v12 = sub_986170((__int64)(v10 + 294), 16, 16, 3, a5, a6);
  *(_DWORD *)v12 = v9;
  v13 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)(v12 + 8) = v6;
  v14 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = v13;
  sub_14634E0(v14, (int *)(a1 + 16));
  return v12;
}
