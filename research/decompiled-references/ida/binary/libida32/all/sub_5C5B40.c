__int64 __fastcall sub_5C5B40(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax

  if ( 8LL * (*(_DWORD *)(a1 + 64) + 1) < (unsigned __int64)(*(_DWORD *)(a1 + 64) + 1) )
  {
    *(_QWORD *)(a1 + 56) = 0;
    return 0;
  }
  v5 = qrealloc(*(_QWORD *)(a1 + 56));
  *(_QWORD *)(a1 + 56) = v5;
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = *(int *)(a1 + 64);
  if ( a3 )
  {
    *(_QWORD *)(v6 + 8 * v7) = a2;
  }
  else
  {
    memmove((void *)(v6 + 8), (const void *)v6, 8 * v7);
    **(_QWORD **)(a1 + 56) = a2;
  }
  ++*(_DWORD *)(a1 + 64);
  return 1;
}

