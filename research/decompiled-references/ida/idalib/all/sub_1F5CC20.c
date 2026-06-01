__int64 __fastcall sub_1F5CC20(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rsi
  int v11; // r8d
  __int64 v12; // rcx

  sub_1F58FC0(a1, a2);
  v3 = *(unsigned int *)(*a1 + 24);
  v4 = *(_QWORD *)(*a1 + 32);
  v5 = *(_QWORD *)(v4 + 8 * v3);
  v6 = (unsigned int)(*(_DWORD *)(*a1 + 24) + 1);
  *(_DWORD *)(*a1 + 24) = v3 + 2;
  *(_WORD *)(a2 + 6) = *(_QWORD *)(v4 + 8 * v6);
  v7 = *(_QWORD *)(*a1 + 8);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8LL * *(unsigned int *)(v7 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v7 + 13072) - 1);
  *(_DWORD *)(v7 + 13072) = result;
  *(_QWORD *)(a2 + 16) = v8;
  if ( (_DWORD)v5 )
  {
    v10 = a2 + 24;
    v11 = result - v5;
    do
    {
      v12 = (unsigned int)result;
      result = (unsigned int)(result - 1);
      v10 += 8;
      *(_QWORD *)(v10 - 8) = *(_QWORD *)(*(_QWORD *)(v7 + 13064) + 8 * v12 - 8);
    }
    while ( v11 != (_DWORD)result );
    *(_DWORD *)(v7 + 13072) = v11;
  }
  return result;
}
