void **__fastcall sub_9A0070(void **a1, const void **a2)
{
  size_t v3; // r12
  size_t v4; // r13
  char *v5; // rax
  char *v6; // rdi
  char *v7; // rdx

  if ( a1 != (void **)a2 )
  {
    v3 = (size_t)a2[1];
    v4 = (size_t)a1[1];
    if ( v3 <= v4 )
    {
      if ( v3 )
        memmove(*a1, *a2, v3);
    }
    else
    {
      if ( v3 > (unsigned __int64)a1[2] )
      {
        v4 = 0;
        a1[1] = nullptr;
        sub_22130D0(a1, a1 + 3, v3, 1);
        v7 = (char *)a2[1];
        v6 = (char *)*a1;
        v5 = (char *)*a2;
      }
      else
      {
        v5 = (char *)*a2;
        v6 = (char *)*a1;
        v7 = (char *)a2[1];
        if ( v4 )
        {
          memmove(v6, *a2, v4);
          v7 = (char *)a2[1];
          v6 = (char *)*a1;
          v5 = (char *)*a2;
        }
      }
      if ( &v5[v4] != &v5[(_QWORD)v7] )
        memcpy(&v6[v4], &v5[v4], (size_t)&v7[-v4]);
    }
    a1[1] = (void *)v3;
  }
  return a1;
}

