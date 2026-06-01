void __fastcall sub_35CD10(__int64 *a1, __int64 a2)
{
  char *v3; // rdi
  unsigned __int64 v4; // rax
  char *v5; // r12
  char *v6; // rdx
  __int64 v7; // rax

  v3 = (char *)*a1;
  if ( a2 )
  {
    v4 = a1[1];
    v5 = (char *)(a2 + 1);
    if ( v4 < a2 + 1 )
    {
      if ( a1[2] < (unsigned __int64)v5 )
      {
        v7 = qvector_reserve(a1, v3, v5, 1);
        *a1 = v7;
        v3 = (char *)v7;
        v4 = a1[1];
      }
      memset(&v3[v4], 0, (size_t)&v5[-v4]);
      a1[1] = (__int64)v5;
      v6 = (char *)*a1;
    }
    else
    {
      v6 = v3;
      if ( v5 != (char *)v4 )
        a1[1] = (__int64)v5;
    }
    v6[a2] = 0;
  }
  else if ( v3 )
  {
    a1[1] = 0;
    qfree(v3);
    *a1 = 0;
    a1[2] = 0;
  }
}

