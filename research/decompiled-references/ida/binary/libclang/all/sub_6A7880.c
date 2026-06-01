__int64 __fastcall sub_6A7880(__int64 a1, unsigned int **a2)
{
  unsigned __int64 v4; // rdx
  size_t v5; // r12
  int v6; // r13d
  __int64 v7; // rdx
  unsigned int *v8; // rdi
  unsigned int *v9; // rsi
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rdi
  unsigned int *v13; // rsi

  if ( (unsigned int **)a1 != a2 )
  {
    v4 = *((unsigned int *)a2 + 2);
    v5 = *(unsigned int *)(a1 + 8);
    v6 = *((_DWORD *)a2 + 2);
    if ( v5 < v4 )
    {
      if ( *(unsigned int *)(a1 + 12) < v4 )
      {
        *(_DWORD *)(a1 + 8) = 0;
        v5 = 0;
        result = sub_25D6060(a1, a1 + 16, v4, 4);
        v11 = *((unsigned int *)a2 + 2);
      }
      else
      {
        v7 = 4 * v4;
        if ( !*(_DWORD *)(a1 + 8) )
          goto LABEL_9;
        v5 *= 4LL;
        v8 = *(unsigned int **)a1;
        v9 = *a2;
        if ( v5 == 4 )
        {
          result = *v9;
          *v8 = result;
        }
        else
        {
          result = (__int64)memmove(v8, v9, v5);
        }
        v11 = *((unsigned int *)a2 + 2);
      }
      v7 = 4 * v11;
      if ( v7 == v5 )
      {
LABEL_10:
        *(_DWORD *)(a1 + 8) = v6;
        return result;
      }
LABEL_9:
      result = (__int64)memcpy((void *)(v5 + *(_QWORD *)a1), (char *)*a2 + v5, v7 - v5);
      goto LABEL_10;
    }
    if ( !*((_DWORD *)a2 + 2) )
      goto LABEL_10;
    v12 = *(unsigned int **)a1;
    v13 = *a2;
    if ( v4 == 1 )
    {
      result = *v13;
      *v12 = result;
      goto LABEL_10;
    }
    result = (__int64)memmove(v12, v13, 4 * v4);
    *(_DWORD *)(a1 + 8) = v6;
  }
  return result;
}

