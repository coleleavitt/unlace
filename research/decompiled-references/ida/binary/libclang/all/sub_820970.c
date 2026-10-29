__int64 __fastcall sub_820970(__int64 a1, __int64 a2)
{
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  unsigned __int64 v6; // rdx
  size_t v7; // rbp
  int v8; // r13d
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 *v13; // rdi
  __int64 *v14; // rdi

  if ( a1 != a2 )
  {
    v4 = (__int64 *)(a2 + 16);
    v5 = *(__int64 **)a2;
    if ( v5 == v4 )
    {
      v6 = *(unsigned int *)(a2 + 8);
      v7 = *(unsigned int *)(a1 + 8);
      v8 = *(_DWORD *)(a2 + 8);
      if ( v7 >= v6 )
      {
        if ( *(_DWORD *)(a2 + 8) )
        {
          v14 = *(__int64 **)a1;
          if ( v6 == 1 )
          {
            result = *v5;
            *v14 = *v5;
          }
          else
          {
            result = (__int64)memmove(v14, v5, 8 * v6);
          }
        }
        goto LABEL_16;
      }
      if ( *(unsigned int *)(a1 + 12) < v6 )
      {
        *(_DWORD *)(a1 + 8) = 0;
        v7 = 0;
        result = sub_25D6060(a1, a1 + 16, v6, 8);
        v5 = *(__int64 **)a2;
        v12 = *(unsigned int *)(a2 + 8);
      }
      else
      {
        v9 = 8 * v6;
        if ( !*(_DWORD *)(a1 + 8) )
          goto LABEL_9;
        v7 *= 8LL;
        v10 = *(__int64 **)a1;
        if ( v7 == 8 )
        {
          *v10 = *v5;
          result = *(_QWORD *)a2;
          v12 = *(unsigned int *)(a2 + 8);
          v5 = (__int64 *)(*(_QWORD *)a2 + 8LL);
        }
        else
        {
          result = (__int64)memmove(v10, v5, v7);
          v12 = *(unsigned int *)(a2 + 8);
          v5 = (__int64 *)(v7 + *(_QWORD *)a2);
        }
      }
      v9 = 8 * v12;
      if ( v9 == v7 )
      {
LABEL_16:
        *(_DWORD *)(a1 + 8) = v8;
        *(_DWORD *)(a2 + 8) = 0;
        return result;
      }
LABEL_9:
      result = (__int64)memcpy((void *)(v7 + *(_QWORD *)a1), v5, v9 - v7);
      goto LABEL_16;
    }
    v13 = *(__int64 **)a1;
    if ( v13 != (__int64 *)(a1 + 16) )
    {
      free(v13);
      v5 = *(__int64 **)a2;
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    result = *(unsigned int *)(a2 + 12);
    *(_DWORD *)(a1 + 12) = result;
    *(_QWORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = 0;
  }
  return result;
}

