__int64 __fastcall sub_1F5CFB0(__int64 *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 8);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  if ( (_DWORD)v7 )
  {
    v8 = *(_DWORD *)(v6 + 13072);
    v9 = a2 + 40;
    v10 = v8 - v7;
    do
    {
      v11 = v8--;
      v9 += 8;
      *(_QWORD *)(v9 - 8) = *(_QWORD *)(*(_QWORD *)(v6 + 13064) + 8 * v11 - 8);
    }
    while ( v10 != v8 );
    *(_DWORD *)(v6 + 13072) = v10;
  }
  v12 = sub_1EE13A0(v6, *(_QWORD *)(v4 + 16), (__int64 *)(v4 + 32), (_DWORD *)(v4 + 24));
  *(_QWORD *)(a2 + 32) = sub_1EDB980((_QWORD *)v6, v12, v13, v14, v15, v16);
  result = sub_1EEDED0(*(_QWORD *)(*a1 + 8), *(_QWORD *)(*a1 + 16), (_QWORD *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 20) = result;
  return result;
}
