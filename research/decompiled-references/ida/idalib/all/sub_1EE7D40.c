__int64 __fastcall sub_1EE7D40(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // edx
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rdi
  __int64 result; // rax

  v4 = a2 + 16;
  if ( !a2 )
    v4 = 0;
  sub_1EACA60(a1, v4);
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 32);
  v7 = *(_QWORD *)(*a1 + 8);
  v8 = *(_DWORD *)(*a1 + 24);
  *(_DWORD *)(a2 + 32) = *(_QWORD *)(v6 + 8LL * v8);
  *(_DWORD *)(a2 + 36) = *(_QWORD *)(v6 + 8LL * (v8 + 1));
  v9 = v8 + 3;
  v10 = *(_QWORD *)(v6 + 8LL * (v8 + 2));
  *(_DWORD *)(v5 + 24) = v9;
  *(_DWORD *)(a2 + 40) = v10;
  v11 = sub_1F61940(v7);
  v12 = *a1;
  *(_QWORD *)(a2 + 64) = v11;
  v13 = sub_1EE7490(v12);
  v14 = *a1;
  *(_DWORD *)(a2 + 28) = v13;
  v15 = sub_1EE7490(v14);
  v16 = *a1;
  *(_DWORD *)(a2 + 44) = v15;
  v17 = sub_1EE7490(v16);
  v18 = *a1;
  *(_DWORD *)(a2 + 48) = v17;
  v19 = sub_1EE7490(v18);
  v20 = *a1;
  *(_DWORD *)(a2 + 52) = v19;
  result = sub_1EE7490(v20);
  *(_DWORD *)(a2 + 56) = result;
  return result;
}
