bool __fastcall sub_A7B9A0(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int *v6; // rbx
  unsigned int *v7; // r13
  unsigned int v8; // eax
  __int64 v9; // rsi

  v4 = *(_QWORD *)(a1 + 56);
  *a3 = -1;
  v5 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(v4 + 504)) + 256) + 24LL * a2;
  v6 = *(unsigned int **)v5;
  v7 = *(unsigned int **)(v5 + 8);
  if ( v7 == *(unsigned int **)v5 )
    return *a3 != -1;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *v6;
      if ( *(_DWORD *)(**(_QWORD **)(a1 + 144) + 4 * v9) != 4
        || *(_DWORD *)(sub_FFA040(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), v9) + 32) )
      {
        break;
      }
      v6 += 10;
      if ( v7 == v6 )
        return *a3 != -1;
    }
    if ( *a3 != -1 )
      break;
    v8 = *v6;
    v6 += 10;
    *a3 = v8;
    if ( v7 == v6 )
      return *a3 != -1;
  }
  return 0;
}

