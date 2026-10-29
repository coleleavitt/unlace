__int64 __fastcall sub_77ED40(void **a1, const char **a2)
{
  const char *v2; // rbp
  char *v4; // rax
  const char *v5; // r14
  _BYTE *v6; // rsi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbp
  __int64 v10; // rax
  char *v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // rax

  v2 = *a2;
  if ( !**a2 )
    return -1;
  v4 = strchr(*a2, 10);
  v5 = v4 + 1;
  if ( !v4 )
    v5 = &v2[strlen(v2)];
  a1[1] = nullptr;
  v6 = *a1;
  v7 = v5 - v2 + 1;
  if ( (unsigned __int64)a1[2] < v7 )
  {
    v10 = qvector_reserve(a1, v6, v5 - v2 + 1, 1);
    *a1 = (void *)v10;
    v6 = (_BYTE *)v10;
  }
  a1[1] = (void *)v7;
  v6[v5 - v2] = 0;
  memmove(*a1, v2, v5 - v2);
  v8 = (unsigned __int64)a1[1];
  if ( v8 > 1 )
  {
    v11 = (char *)*a1;
    if ( *((char *)*a1 + v8 - 2) == 10 )
    {
      v12 = v8 - 1;
      if ( (__int64)(v8 - 1) <= 1 )
      {
        if ( v11 )
        {
          a1[1] = nullptr;
          qfree(v11);
          *a1 = nullptr;
          a1[2] = nullptr;
        }
      }
      else
      {
        if ( (unsigned __int64)a1[2] < v12 )
        {
          v13 = qvector_reserve(a1, v11, v8 - 1, 1);
          *a1 = (void *)v13;
          v11 = (char *)v13;
        }
        a1[1] = (void *)v12;
        v11[v8 - 2] = 0;
      }
    }
  }
  *a2 = v5;
  return (__int64)a1[1] + (a1[1] == nullptr) - 1;
}

