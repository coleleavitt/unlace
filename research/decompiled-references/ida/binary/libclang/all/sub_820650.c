void *__fastcall sub_820650(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  size_t v5; // r12
  int v6; // r13d
  __int64 v7; // rdx
  void **v8; // rdi
  void **v9; // rsi
  void *result; // rax
  __int64 v11; // rdx
  void **v12; // rdi
  void **v13; // rsi

  if ( a1 != a2 )
  {
    v4 = *(unsigned int *)(a2 + 8);
    v5 = *(unsigned int *)(a1 + 8);
    v6 = *(_DWORD *)(a2 + 8);
    if ( v5 < v4 )
    {
      if ( *(unsigned int *)(a1 + 12) < v4 )
      {
        *(_DWORD *)(a1 + 8) = 0;
        v5 = 0;
        result = (void *)sub_25D6060(a1, a1 + 16, v4, 8);
        v11 = *(unsigned int *)(a2 + 8);
      }
      else
      {
        v7 = 8 * v4;
        if ( !*(_DWORD *)(a1 + 8) )
          goto LABEL_9;
        v5 *= 8LL;
        v8 = *(void ***)a1;
        v9 = *(void ***)a2;
        if ( v5 == 8 )
        {
          result = *v9;
          *v8 = *v9;
        }
        else
        {
          result = memmove(v8, v9, v5);
        }
        v11 = *(unsigned int *)(a2 + 8);
      }
      v7 = 8 * v11;
      if ( v7 == v5 )
      {
LABEL_10:
        *(_DWORD *)(a1 + 8) = v6;
        return result;
      }
LABEL_9:
      result = memcpy((void *)(v5 + *(_QWORD *)a1), (const void *)(v5 + *(_QWORD *)a2), v7 - v5);
      goto LABEL_10;
    }
    if ( !*(_DWORD *)(a2 + 8) )
      goto LABEL_10;
    v12 = *(void ***)a1;
    v13 = *(void ***)a2;
    if ( v4 == 1 )
    {
      result = *v13;
      *v12 = *v13;
      goto LABEL_10;
    }
    result = memmove(v12, v13, 8 * v4);
    *(_DWORD *)(a1 + 8) = v6;
  }
  return result;
}

