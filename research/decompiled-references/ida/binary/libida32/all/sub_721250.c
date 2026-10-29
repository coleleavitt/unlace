unsigned __int64 __fastcall sub_721250(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  unsigned __int16 v6; // r12
  unsigned __int64 v7; // rbp
  unsigned __int64 result; // rax
  size_t v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx

  if ( !a3 )
  {
    if ( !under_debugger )
      interr(847);
    BUG();
  }
  v3 = a1 + 6;
  v4 = a1;
  v6 = a2;
  v7 = a1 + 6 + 6LL * *(__int16 *)(a1 + 4);
  result = *(unsigned __int16 *)(v7 + 4);
  if ( (unsigned __int16)result < (unsigned __int16)a2 )
  {
    a1 = (unsigned __int16)result;
    v10 = *(_DWORD *)(v4 - 8);
    v9 = (unsigned __int16)a2 - (unsigned int)(unsigned __int16)result;
    a2 = (unsigned __int16)result;
    v11 = (unsigned int)(unsigned __int16)result - a3;
    if ( (unsigned int)v11 >= (unsigned __int16)result )
      a2 = (unsigned int)v11;
    if ( (unsigned int)a2 < v10 && v10 - (unsigned int)a2 >= v9 && (unsigned __int16)result < v10 )
    {
      a2 = v4 + result;
      if ( (unsigned int)v11 < v10 )
      {
        a1 = v4 + v11;
        result = (unsigned __int64)memmove((void *)(v4 + v11), (const void *)a2, v9);
        goto LABEL_8;
      }
    }
LABEL_17:
    sub_722BF0(a1, a2, v9);
  }
LABEL_8:
  while ( v7 >= v3 )
  {
    result = *(unsigned __int16 *)(v3 + 4);
    if ( (unsigned __int16)result < v6 )
    {
      result = (unsigned int)(result - a3);
      v9 = (unsigned __int16)result;
      if ( *(_DWORD *)(v4 - 8) < (unsigned int)(unsigned __int16)result )
        goto LABEL_17;
      *(_WORD *)(v3 + 4) = result;
    }
    v3 += 6LL;
  }
  return result;
}

