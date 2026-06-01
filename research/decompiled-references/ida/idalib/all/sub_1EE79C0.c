__int64 __fastcall sub_1EE79C0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 result; // rax

  v4 = a2 + 16;
  if ( !a2 )
    v4 = 0;
  sub_1EACA60(a1, v4);
  v5 = *a1;
  v6 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_DWORD *)(a2 + 44) = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6);
  v7 = sub_1EE7490(v5);
  v8 = *a1;
  *(_DWORD *)(a2 + 48) = v7;
  *(_DWORD *)(a2 + 40) = sub_1EE7490(v8);
  v9 = sub_1F61940(*(_QWORD *)(*a1 + 8));
  v10 = *a1;
  *(_QWORD *)(a2 + 32) = v9;
  result = sub_1EE7490(v10);
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
