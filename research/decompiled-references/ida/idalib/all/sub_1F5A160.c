__int64 __fastcall sub_1F5A160(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned int v9; // eax
  int v10; // r9d
  __int64 v11; // rsi
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  if ( (_DWORD)v6 )
  {
    v7 = *(_QWORD *)(v4 + 8);
    v8 = a2 + 24;
    v9 = *(_DWORD *)(v7 + 13072);
    v10 = v9 - v6;
    do
    {
      v11 = v9--;
      v8 += 8;
      *(_QWORD *)(v8 - 8) = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8 * v11 - 8);
    }
    while ( v10 != v9 );
    *(_DWORD *)(v7 + 13072) = v10;
  }
  *(_DWORD *)(a2 + 16) = sub_1EE7490(v4);
  result = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 20) = result;
  return result;
}
