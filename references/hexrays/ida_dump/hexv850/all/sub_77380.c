_BYTE *__fastcall sub_77380(__int64 *a1, const void **a2, unsigned __int64 a3)
{
  _BYTE *v3; // r13
  _BYTE *result; // rax
  __int64 v5; // r12
  size_t v6; // rbx
  size_t v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax

  v3 = *a2;
  result = *a2;
  while ( (unsigned __int64)result < a3 )
  {
    if ( !*result++ )
    {
      *a2 = result;
      if ( v3 )
      {
        v5 = a1[1];
        v6 = result - v3 - 1;
        v7 = v6;
        if ( v5 )
        {
          --v5;
          v7 = v6 + v5;
        }
        v8 = *a1;
        if ( a1[2] < v7 + 1 )
        {
          v9 = qvector_reserve(a1, v8, v7 + 1, 1);
          *a1 = v9;
          v8 = v9;
        }
        a1[1] = v7 + 1;
        *(_BYTE *)(v8 + v7) = 0;
        return memmove((void *)(v5 + *a1), v3, v6);
      }
      return result;
    }
  }
  return result;
}
