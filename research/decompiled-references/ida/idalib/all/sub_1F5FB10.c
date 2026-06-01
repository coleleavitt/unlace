unsigned __int64 __fastcall sub_1F5FB10(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // r9d
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  ++*(_DWORD *)(*a1 + 24);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v4 + 8);
    v7 = a2 + 32;
    v8 = *(_DWORD *)(v6 + 13072);
    v9 = v8 - v5;
    do
    {
      v10 = v8--;
      v7 += 8;
      *(_QWORD *)(v7 - 8) = *(_QWORD *)(*(_QWORD *)(v6 + 13064) + 8 * v10 - 8);
    }
    while ( v9 != v8 );
    *(_DWORD *)(v6 + 13072) = v9;
  }
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a2 + 16) & 7LL | (unsigned __int64)sub_1F19370(v4);
  v11 = sub_1EE7490(*a1);
  v12 = *a1;
  *(_DWORD *)(a2 + 24) = v11;
  v13 = sub_1EE7490(v12);
  v14 = *a1;
  *(_DWORD *)(a2 + 28) = v13;
  v15 = *(unsigned int *)(v14 + 24);
  *(_DWORD *)(v14 + 24) = v15 + 1;
  result = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFBLL
         | (4LL * *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8 * v15)) & 0x3FFFFFFFCLL;
  *(_QWORD *)(a2 + 16) = result;
  return result;
}
