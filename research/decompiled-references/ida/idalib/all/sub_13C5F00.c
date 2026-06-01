__int64 __fastcall sub_13C5F00(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax
  _QWORD *v5; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // r12d
  _QWORD *v10; // rdi
  unsigned __int64 v11; // r9
  __int64 *v12; // r8
  __int64 v13; // rsi
  __int64 *v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 *v17; // rdx
  __int64 v18; // rsi

  if ( a1 == a2 )
    return a1;
  v3 = *(__int64 **)a2;
  if ( a2 + 16 != *(_QWORD *)a2 )
  {
    v5 = *(_QWORD **)a1;
    if ( v5 != (_QWORD *)(a1 + 16) )
    {
      free(v5);
      v3 = *(__int64 **)a2;
    }
    *(_QWORD *)a1 = v3;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)a2 = a2 + 16;
    *(_QWORD *)(a2 + 8) = 0;
    return a1;
  }
  v7 = *(unsigned int *)(a2 + 8);
  v8 = *(unsigned int *)(a1 + 8);
  v9 = *(_DWORD *)(a2 + 8);
  if ( v7 <= v8 )
  {
    if ( *(_DWORD *)(a2 + 8) )
    {
      v16 = *(_QWORD **)a1;
      v17 = &v3[2 * v7];
      do
      {
        v18 = *v3;
        v3 += 2;
        v16 += 2;
        *(v16 - 2) = v18;
        *(v16 - 1) = *(v3 - 1);
      }
      while ( v3 != v17 );
    }
  }
  else
  {
    if ( v7 > *(unsigned int *)(a1 + 12) )
    {
      *(_DWORD *)(a1 + 8) = 0;
      sub_2237220(a1, a1 + 16, v7, 16);
      v3 = *(__int64 **)a2;
      v7 = *(unsigned int *)(a2 + 8);
      v11 = 0;
      v10 = *(_QWORD **)a1;
      v8 = 0;
      v14 = *(__int64 **)a2;
    }
    else
    {
      v10 = *(_QWORD **)a1;
      if ( v8 )
      {
        v8 *= 16LL;
        v11 = v8;
        v12 = (__int64 *)((char *)v3 + v8);
        do
        {
          v13 = *v3;
          v3 += 2;
          v10 += 2;
          *(v10 - 2) = v13;
          *(v10 - 1) = *(v3 - 1);
        }
        while ( v3 != v12 );
        v3 = *(__int64 **)a2;
        v10 = *(_QWORD **)a1;
        v14 = (__int64 *)(*(_QWORD *)a2 + v8);
      }
      else
      {
        v14 = *(__int64 **)a2;
        v11 = 0;
      }
    }
    v15 = 2 * v7;
    if ( v14 != &v3[v15] )
      memcpy((char *)v10 + v8, v14, v15 * 8 - v11);
  }
  *(_DWORD *)(a1 + 8) = v9;
  *(_DWORD *)(a2 + 8) = 0;
  return a1;
}
