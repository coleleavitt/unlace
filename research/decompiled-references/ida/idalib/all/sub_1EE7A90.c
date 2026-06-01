__int64 __fastcall sub_1EE7A90(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // eax
  __int64 v11; // rdi
  __int64 result; // rax

  v4 = a2 + 24;
  if ( !a2 )
    v4 = 0;
  sub_1EACA60(a1, v4);
  v5 = *a1;
  v6 = *(unsigned int *)(*a1 + 24);
  v7 = *(_QWORD *)(*a1 + 8);
  *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_DWORD *)(a2 + 36) = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6);
  v8 = sub_1F61940(v7);
  v9 = *a1;
  *(_QWORD *)(a2 + 16) = v8;
  v10 = sub_1EE7490(v9);
  v11 = *a1;
  *(_DWORD *)(a2 + 40) = v10;
  result = sub_1EE7490(v11);
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
