__int64 __fastcall sub_1F62A10(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  *(_DWORD *)(a2 + 16) = sub_1EE7490(*a1);
  v6 = *(_QWORD **)(*(_QWORD *)(*a1 + 8) + 144LL);
  v7 = v6[294];
  v6[304] += 24LL;
  v8 = (_QWORD *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v6[295] >= (unsigned __int64)(v8 + 3) && v7 )
    v6[294] = v8 + 3;
  else
    v8 = (_QWORD *)sub_986170((__int64)(v6 + 294), 24, 24, 3, v4, v5);
  v9 = *a1;
  v8[1] = 0;
  v8[2] = 0;
  v10 = *(_QWORD *)(v9 + 8);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v10 + 13072))-- - 8);
  *v8 = v11;
  *(_QWORD *)(a2 + 40) = v8;
  v12 = *a1;
  v13 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v12 + 24) = v13 + 1;
  *(_DWORD *)(a2 + 48) = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8 * v13);
  v14 = *a1;
  v15 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v14 + 24) = v15 + 1;
  result = *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v15);
  *(_DWORD *)(a2 + 52) = result;
  return result;
}
