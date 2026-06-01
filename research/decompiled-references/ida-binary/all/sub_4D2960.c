__int64 __fastcall sub_4D2960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r8
  char *v12; // rcx
  __int64 v13; // rax
  char *v14; // rsi
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  char *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  char *v22; // rax
  __int64 v23; // [rsp+0h] [rbp-40h]
  __int64 v24; // [rsp+0h] [rbp-40h]

  *(_OWORD *)a1 = 0;
  v7 = xmmword_8D1DE8;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v7 )
  {
    v8 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(qword_8D1DE0 + 8 * v8);
        if ( !*(_DWORD *)(v9 + 40) )
          break;
LABEL_3:
        if ( v7 == ++v8 )
          return a1;
      }
      v10 = *(_QWORD *)a1;
      v11 = *(_QWORD *)(a1 + 16);
      if ( !*(_QWORD *)a1 )
        goto LABEL_9;
      if ( *(int *)v10 <= 1 )
      {
        v16 = *(_QWORD *)(a1 + 8);
        v17 = (v10 + 31) & 0xFFFFFFFFFFFFFFF0LL;
        if ( *(_QWORD *)(v10 + 8) - ((__int64)(v16 - v17) >> 3) != v11 )
        {
          *(_QWORD *)(v16 + 8 * v11) = v9;
          ++*(_QWORD *)(a1 + 16);
          goto LABEL_12;
        }
        if ( !v11 && v17 != v16 )
        {
          *(_QWORD *)(v16 - 8) = v9;
          *(_QWORD *)(a1 + 8) -= 8LL;
          ++*(_QWORD *)(a1 + 16);
          goto LABEL_12;
        }
      }
      else if ( !v10 )
      {
        goto LABEL_9;
      }
      if ( *(int *)v10 > 1 )
        goto LABEL_9;
      v18 = *(_QWORD *)a1;
      if ( !*(_QWORD *)a1 )
        goto LABEL_9;
      v19 = *(char **)(a1 + 8);
      v20 = *(_QWORD *)(v18 + 8);
      a6 = (__int64)&v19[-((v18 + 31) & 0xFFFFFFFFFFFFFFF0LL)];
      v13 = *(_QWORD *)(a1 + 16);
      v21 = a6 >> 3;
      if ( v20 - v13 - (a6 >> 3) <= 0 )
        break;
      v14 = &v19[8 * v11];
      if ( v11 < v13 )
      {
LABEL_31:
        memmove(v14 + 8, v14, 8 * (v13 - v11));
        v13 = *(_QWORD *)(a1 + 16);
      }
LABEL_11:
      *(_QWORD *)(a1 + 16) = v13 + 1;
      *(_QWORD *)v14 = v9;
LABEL_12:
      if ( *(_QWORD *)a1 && **(int **)a1 <= 1 )
        goto LABEL_3;
      sub_1C92D0(a1, 0, 0, 0, v11, a6);
      if ( v7 == ++v8 )
        return a1;
    }
    if ( a6 <= 0 || 3 * v13 >= 2 * v20 )
    {
LABEL_9:
      v23 = *(_QWORD *)(a1 + 16);
      sub_1C92D0(a1, 0, 1, 0, v11, a6);
      v12 = *(char **)(a1 + 8);
      v13 = *(_QWORD *)(a1 + 16);
      v11 = v23;
    }
    else
    {
      v12 = &v19[-8 * v21];
      if ( v13 && v12 != v19 && v19 && v12 )
      {
        v24 = *(_QWORD *)(a1 + 16);
        v22 = (char *)memmove(&v19[-8 * v21], v19, 8 * v13);
        v11 = v24;
        v12 = v22;
        v13 = *(_QWORD *)(a1 + 16);
      }
      *(_QWORD *)(a1 + 8) = v12;
    }
    v14 = &v12[8 * v11];
    if ( v11 < v13 )
      goto LABEL_31;
    goto LABEL_11;
  }
  return a1;
}
