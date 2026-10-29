__int64 __fastcall sub_989830(__int64 a1, unsigned __int64 a2, int a3, __int64 *a4, unsigned int *a5)
{
  __int64 v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v19; // rax

  v9 = *(_QWORD *)(a1 + 56);
  if ( v9 )
    *(_DWORD *)(v9 - 4) = 0;
  v10 = *(_QWORD **)(a1 + 72);
  if ( v10 )
  {
    v11 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v11 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = *(_QWORD *)(a1 + 64);
          if ( (*(_DWORD *)(v12 + 8))-- == 1 )
            break;
        }
        if ( ++v10 >= v11 )
          goto LABEL_10;
      }
      sub_15D7BC0(v13, v12);
      ++v10;
    }
    while ( v10 < v11 );
LABEL_10:
    v10 = *(_QWORD **)(a1 + 72);
    if ( v10 )
LABEL_11:
      *((_DWORD *)v10 - 1) = 0;
  }
  *a4 = a2;
  *a5 = dword_1C7EC90;
  if ( a3 != -2 )
    *a5 = a3 ^ 1;
  v15 = sub_985C00(a1, *a5, *a4);
  v16 = *(_QWORD *)(a1 + 24);
  v17 = 1;
  *(_DWORD *)(a1 + 48) = v15;
  if ( *(_DWORD *)(v16 + 9472) >= v15 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 712LL) )
    {
      sub_988960((_QWORD *)a1, a2, a3);
      v16 = *(_QWORD *)(a1 + 24);
    }
    v19 = *(_QWORD *)(v16 + 9336);
    if ( v19 && *(_DWORD *)(v19 - 4) && *(_DWORD *)(v16 + 9468) < *(_DWORD *)(v16 + 9472) )
      sub_9857F0(a1, a2, a3);
    return 0;
  }
  return v17;
}

