__int64 __fastcall sub_111350(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  int v6; // eax
  char *v7; // rdi
  __int64 v8; // rdx
  char *v9; // rdx
  char *v10; // rdi
  __int64 v11; // rcx
  char *v12; // rdx
  __int64 result; // rax

  v5 = *(_DWORD *)(a1 + 24);
  BYTE1(v5) &= ~2u;
  LOBYTE(v5) = v5 | 0x80;
  *(_DWORD *)(a1 + 24) = v5;
  if ( *(_DWORD *)(a2 + 76) != 1 )
  {
    v6 = *(_DWORD *)(a2 + 24);
    BYTE1(v6) &= ~2u;
    LOBYTE(v6) = v6 | 0x80;
    *(_DWORD *)(a2 + 24) = v6;
  }
  v7 = *(char **)(a1 + 368);
  v8 = *(_QWORD *)(a1 + 376);
  *(_DWORD *)(a1 + 76) = 3;
  v9 = &v7[4 * v8];
  if ( v7 != v9 )
  {
    while ( *(_DWORD *)(a3 + 72) != *(_DWORD *)v7 )
    {
      v7 += 4;
      if ( v9 == v7 )
        goto LABEL_9;
    }
    if ( v9 != v7 )
    {
      memmove(v7, v7 + 4, v9 - v7 - 4);
      --*(_QWORD *)(a1 + 376);
    }
  }
LABEL_9:
  v10 = *(char **)(a3 + 344);
  v11 = *(_QWORD *)(a3 + 352);
  v12 = &v10[4 * v11];
  if ( v10 != v12 )
  {
    while ( *(_DWORD *)(a1 + 72) != *(_DWORD *)v10 )
    {
      v10 += 4;
      if ( v12 == v10 )
        goto LABEL_15;
    }
    if ( v10 != v12 )
    {
      memmove(v10, v10 + 4, v12 - v10 - 4);
      v11 = *(_QWORD *)(a3 + 352) - 1LL;
      *(_QWORD *)(a3 + 352) = v11;
    }
  }
LABEL_15:
  if ( !v11 )
    **(_DWORD **)(a3 + 64) |= 0x400u;
  **(_DWORD **)(a1 + 64) |= 0x400u;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
  if ( result )
    *(_DWORD *)(result + 48) = 63;
  return result;
}
