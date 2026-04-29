char *__fastcall sub_2AF8E0(const void **a1, unsigned __int64 a2, void **a3)
{
  char *result; // rax
  size_t v5; // rbp
  unsigned __int64 v6; // rdx
  size_t v7; // rbx
  char *v8; // rsi
  __int64 v9; // rax

  result = (char *)unpack_dd(a1);
  if ( (_DWORD)result )
  {
    v5 = (int)result;
    result = (char *)*a1 + (int)result;
    if ( (unsigned __int64)result < a2 )
    {
      v6 = (unsigned __int64)a3[1];
      v7 = v5 + 1;
      if ( v6 < v5 + 1 )
      {
        v8 = (char *)*a3;
        if ( (unsigned __int64)a3[2] < v7 )
        {
          v9 = qvector_reserve(a3, v8, v5 + 1, 1);
          v6 = (unsigned __int64)a3[1];
          *a3 = (void *)v9;
          v8 = (char *)v9;
        }
        memset(&v8[v6], 0, v7 - v6);
        a3[1] = (void *)v7;
      }
      else if ( v7 != v6 )
      {
        a3[1] = (void *)v7;
      }
      *((_BYTE *)*a3 + v5) = 0;
      result = (char *)memcpy(*a3, *a1, v5);
      *a1 = (char *)*a1 + v5;
    }
  }
  return result;
}
