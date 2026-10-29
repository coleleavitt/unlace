__int64 __fastcall set_error_string(signed int a1, const char *a2)
{
  __int64 *v2; // rbp
  char *v3; // r13
  char *v4; // rax
  __int64 result; // rax
  size_t v6; // rax
  size_t v7; // r14
  size_t v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax

  if ( (unsigned int)a1 > 3 )
  {
    if ( !under_debugger )
      interr(481);
    BUG();
  }
  v2 = (__int64 *)(24LL * a1 + 32 + __tls_get_addr() + 8);
  v3 = (char *)*v2;
  if ( a2 )
  {
    if ( *a2 )
    {
      v6 = strlen(a2);
      v7 = v6;
      if ( v6 )
      {
        v8 = v6 + 1;
        if ( v2[2] < v6 + 1 )
        {
          v10 = qvector_reserve(v2, v3, v6 + 1, 1);
          *v2 = v10;
          v3 = (char *)v10;
        }
        v2[1] = v8;
        memmove(v3, a2, v7);
        *(_BYTE *)(*v2 + v7) = 0;
        v3 = (char *)*v2;
      }
      else
      {
        v2[1] = 0;
      }
    }
    else
    {
      if ( (unsigned __int64)v2[2] <= 1 )
      {
        v9 = qvector_reserve(v2, *v2, 2, 1);
        *v2 = v9;
        v3 = (char *)v9;
      }
      v2[1] = 2;
      *v3 = 32;
      *(_BYTE *)(*v2 + 1) = 0;
      v4 = &byte_2CA12E1;
      if ( v2[1] )
        v4 = (char *)*v2;
      *v4 = 0;
      v3 = (char *)*v2;
    }
  }
  else
  {
    if ( v3 )
    {
      v2[1] = 0;
      qfree(v3);
      *v2 = 0;
      v2[2] = 0;
    }
    v3 = nullptr;
  }
  result = __tls_get_addr();
  *(_QWORD *)(result + 8LL * a1 + 8) = v3;
  return result;
}

