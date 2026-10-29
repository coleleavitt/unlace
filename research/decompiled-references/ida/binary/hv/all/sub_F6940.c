unsigned __int64 __fastcall sub_F6940(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, int *a6)
{
  unsigned __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  int v12; // r13d
  int v13; // r13d
  int v14; // r13d
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // ebx

  result = a4;
  v7 = *a1;
  v8 = 0;
  v9 = a4 & 0xFFFFFFFFFFFFFFFCLL;
  while ( v8 != v9 )
  {
    v7 = qword_1358C0[*(unsigned __int8 *)(a3 + v8)] + 2 * v7;
    v10 = v8 + 1;
    if ( (v7 & a2) == 0 && (*(_QWORD *)(a5 + 8LL * (unsigned int)*a6) = v10, v12 = *a6 + 1, *a6 = v12, v12 == 64)
      || (v7 = qword_1358C0[*(unsigned __int8 *)(a3 + v8 + 1)] + 2 * v7, v10 = v8 + 2, (v7 & a2) == 0)
      && (*(_QWORD *)(a5 + 8LL * (unsigned int)*a6) = v10, v13 = *a6 + 1, *a6 = v13, v13 == 64) )
    {
      result = v10;
LABEL_9:
      *a1 = v7;
      return result;
    }
    v7 = qword_1358C0[*(unsigned __int8 *)(a3 + v8 + 2)] + 2 * v7;
    if ( (v7 & a2) == 0 )
    {
      *(_QWORD *)(a5 + 8LL * (unsigned int)*a6) = v8 + 3;
      v14 = (*a6)++;
      if ( v14 == 63 )
      {
        result = v8 + 3;
        goto LABEL_9;
      }
    }
    v11 = *(unsigned __int8 *)(a3 + v8 + 3);
    v8 += 4;
    v7 = qword_1358C0[v11] + 2 * v7;
    if ( (v7 & a2) == 0 )
    {
      *(_QWORD *)(a5 + 8LL * (unsigned int)*a6) = v8;
      v15 = *a6 + 1;
      *a6 = v15;
      if ( v15 == 64 )
        goto LABEL_15;
    }
  }
  if ( result > v9 )
  {
    while ( 1 )
    {
      v16 = *(unsigned __int8 *)(a3 + v9++);
      v7 = qword_1358C0[v16] + 2 * v7;
      if ( (v7 & a2) == 0 )
      {
        *(_QWORD *)(a5 + 8LL * (unsigned int)*a6) = v9;
        v17 = (*a6)++;
        if ( v17 == 63 )
          break;
      }
      if ( result == v9 )
        goto LABEL_9;
    }
    result = v9;
    goto LABEL_9;
  }
LABEL_15:
  *a1 = v7;
  return v8;
}

