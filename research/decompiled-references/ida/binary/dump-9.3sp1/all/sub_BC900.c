__int64 __fastcall sub_BC900(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // r12d
  int i; // ebp
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // r15d
  int j; // r14d
  char *v13; // rdi
  char *v14; // rdx
  char *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  __int64 m; // rax
  int v19; // edx
  __int64 k; // rax
  __int64 v21; // [rsp+8h] [rbp-40h]

  result = sub_330DE0(a1);
  if ( (int)result <= 0 )
    return result;
  v5 = a1[89];
  v6 = result;
  for ( i = 0; i != v6; ++i )
  {
    v8 = a1[88];
    if ( a1[90] < (unsigned __int64)(v5 + 1) )
    {
      v9 = qvector_reserve((__int64)(a1 + 88), v8, v5 + 1, 4);
      v5 = a1[89];
      a1[88] = v9;
      v8 = v9;
    }
    *(_DWORD *)(v8 + 4 * v5) = i;
    v5 = a1[89] + 1LL;
    a1[89] = v5;
  }
  v10 = a1[6];
  v11 = 0;
  v21 = v10;
  while ( 2 )
  {
    for ( j = 0; j != v6; ++j )
    {
      if ( j == v11 )
        goto LABEL_26;
      if ( (unsigned __int8)sub_BC1C0(a2, (unsigned int *)v21, v10, 0) )
      {
        v13 = (char *)a1[88];
        v14 = &v13[4 * a1[89]];
        if ( v14 != v13 )
          goto LABEL_12;
      }
      else
      {
        v19 = 0;
        for ( k = 0; (unsigned __int64)v19 < a2[12]; k = v19 )
        {
          ++v19;
          *(_QWORD *)(a2[8] + 8LL * *(int *)(a2[11] + 4 * k)) = 0;
        }
        a2[12] = 0;
        if ( (unsigned __int8)sub_BC1C0(a2, (unsigned int *)v10, v21, 0) )
        {
          v13 = (char *)a1[88];
          v14 = &v13[4 * a1[89]];
          if ( v13 != v14 )
          {
LABEL_12:
            v15 = v13;
            while ( v11 != *(_DWORD *)v15 )
            {
              v15 += 4;
              if ( v15 == v14 )
                goto LABEL_17;
            }
            if ( v15 != v14 )
            {
              memmove(v15, v15 + 4, v14 - v15 - 4);
              v13 = (char *)a1[88];
              v16 = a1[89] - 1LL;
              a1[89] = v16;
              v14 = &v13[4 * v16];
            }
LABEL_17:
            if ( v13 != v14 )
            {
              while ( j != *(_DWORD *)v13 )
              {
                v13 += 4;
                if ( v13 == v14 )
                  goto LABEL_23;
              }
              if ( v13 != v14 )
              {
                memmove(v13, v13 + 4, v14 - v13 - 4);
                --a1[89];
              }
            }
          }
        }
      }
LABEL_23:
      v17 = 0;
      for ( m = 0; (unsigned __int64)v17 < a2[12]; m = v17 )
      {
        ++v17;
        *(_QWORD *)(a2[8] + 8LL * *(int *)(a2[11] + 4 * m)) = 0;
      }
      a2[12] = 0;
LABEL_26:
      v10 = *(_QWORD *)(v10 + 8);
    }
    ++v11;
    result = *(_QWORD *)(v21 + 8);
    v21 = result;
    if ( v11 != v6 )
    {
      v10 = a1[6];
      continue;
    }
    return result;
  }
}
