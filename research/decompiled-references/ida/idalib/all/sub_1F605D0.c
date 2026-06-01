__int64 __fastcall sub_1F605D0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // r12
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // r8d
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rbp
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  __int64 result; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9

  sub_1F58FC0(a1, a2);
  v3 = *(unsigned int *)(*a1 + 24);
  v4 = *(_QWORD *)(*a1 + 32);
  v5 = *(_DWORD *)(*a1 + 24);
  v6 = *(_QWORD *)(v4 + 8 * v3);
  *(_DWORD *)(*a1 + 24) = v3 + 2;
  *(_DWORD *)(a2 + 20) = *(_QWORD *)(v4 + 8LL * (unsigned int)(v5 + 1));
  *(_DWORD *)(a2 + 24) = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 28) = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 32) = sub_1EE7490(*a1);
  v7 = *a1;
  if ( (_DWORD)v6 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    v9 = a2 + 48;
    v10 = *(_DWORD *)(v8 + 13072);
    v11 = v10 - v6;
    do
    {
      v12 = v10--;
      v9 += 8;
      *(_QWORD *)(v9 - 8) = *(_QWORD *)(*(_QWORD *)(v8 + 13064) + 8 * v12 - 8);
    }
    while ( v11 != v10 );
    *(_DWORD *)(v8 + 13072) = v11;
  }
  v13 = *(unsigned int *)(v7 + 24);
  v14 = *(_QWORD *)(v7 + 32);
  v15 = (unsigned int)(v13 + 1);
  v16 = *(_QWORD *)(v14 + 8 * v13) == 0;
  v17 = *(_DWORD *)(v7 + 24);
  *(_DWORD *)(v7 + 24) = v15;
  if ( !v16 )
  {
    v16 = *(_QWORD *)(v14 + 8 * v15) == 0;
    v18 = *(_QWORD *)(v7 + 8);
    *(_DWORD *)(v7 + 24) = v17 + 2;
    if ( v16 )
    {
      v22 = sub_1EE13A0(v18, *(_QWORD *)(v7 + 16), (__int64 *)(v7 + 32), (_DWORD *)(v7 + 24));
      *(_QWORD *)(a2 + 40) = sub_1EDB980((_QWORD *)v18, v22, v23, v24, v25, v26) | 2;
    }
    else
    {
      v19 = *(_QWORD *)(*(_QWORD *)(v18 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v18 + 13072))-- - 8);
      *(_QWORD *)(a2 + 40) = v19 & 0xFFFFFFFFFFFFFFFDLL;
    }
  }
  v20 = sub_B659B0(a2);
  *(_BYTE *)(a2 + 1) = (v20 << 6) | *(_BYTE *)(a2 + 1) & 0x3F;
  result = *(_BYTE *)(a2 + 2) & 0xF8 | (v20 >> 2) & 7u;
  *(_BYTE *)(a2 + 2) = result;
  return result;
}
