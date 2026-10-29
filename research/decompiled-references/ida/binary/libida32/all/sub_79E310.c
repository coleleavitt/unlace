void __fastcall __noreturn sub_79E310(void *src, __int64 *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  void *v5; // rdi
  size_t v6; // r13
  __int64 v7; // rax

  if ( (unsigned __int64)a2[1] <= 1 )
  {
    if ( src && (v3 = strlen((const char *)src), (v4 = v3) != 0) )
    {
      v5 = (void *)*a2;
      v6 = v3 + 1;
      if ( a2[2] < v3 + 1 )
      {
        v7 = qvector_reserve(a2, *a2, v3 + 1, 1);
        *a2 = v7;
        v5 = (void *)v7;
      }
      a2[1] = v6;
      memmove(v5, src, v4);
      *(_BYTE *)(*a2 + v4) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  sub_365330();
}

