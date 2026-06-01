void **__fastcall sub_9CA8E0(void **a1, const void **a2)
{
  size_t v3; // rbp
  size_t v4; // r12
  char *v5; // rdi
  char *v6; // rax
  char *v7; // rdx
  __int64 v8; // rdx

  if ( a1 != (void **)a2 )
  {
    v3 = (size_t)a2[1];
    v4 = (size_t)a1[1];
    if ( v3 <= v4 )
    {
      if ( v3 && 2 * v3 )
        memmove(*a1, *a2, 2 * v3);
    }
    else
    {
      if ( v3 > (unsigned __int64)a1[2] )
      {
        v4 = 0;
        a1[1] = nullptr;
        sub_2236E10(a1, a1 + 3, v3, 2);
        v5 = (char *)*a1;
        v6 = (char *)*a2;
        v7 = (char *)a2[1];
      }
      else
      {
        v5 = (char *)*a1;
        v6 = (char *)*a2;
        v7 = (char *)a2[1];
        if ( v4 )
        {
          v4 *= 2LL;
          if ( v4 )
          {
            memmove(v5, *a2, v4);
            v5 = (char *)*a1;
            v6 = (char *)*a2;
            v7 = (char *)a2[1];
          }
        }
      }
      v8 = 2LL * (_QWORD)v7;
      if ( &v6[v4] != &v6[v8] )
        memcpy(&v5[v4], &v6[v4], v8 - v4);
    }
    a1[1] = (void *)v3;
  }
  return a1;
}
