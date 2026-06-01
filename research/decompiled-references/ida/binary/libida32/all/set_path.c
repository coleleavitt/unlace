void __fastcall set_path(__int64 a1, const char *a2)
{
  __int64 *v2; // rbx
  void *v3; // rdi
  size_t v4; // rax
  size_t v5; // r12
  void *v6; // rdi
  size_t v7; // r13
  __int64 v8; // rax

  v2 = (__int64 *)qword_2CA1698;
  if ( (_DWORD)a1 == 1 )
  {
    v2 = (__int64 *)(qword_2CA1698 + 24);
  }
  else if ( (_DWORD)a1 == 2 )
  {
    v2 = (__int64 *)(qword_2CA1698 + 48);
  }
  else if ( (_DWORD)a1 )
  {
    sub_576830(a1);
  }
  if ( a2 && *a2 )
  {
    v4 = strlen(a2);
    v5 = v4;
    if ( v4 )
    {
      v6 = (void *)*v2;
      v7 = v4 + 1;
      if ( v2[2] < v4 + 1 )
      {
        v8 = qvector_reserve(v2, *v2, v4 + 1, 1);
        *v2 = v8;
        v6 = (void *)v8;
      }
      v2[1] = v7;
      memmove(v6, a2, v5);
      *(_BYTE *)(*v2 + v5) = 0;
    }
    else
    {
      v2[1] = 0;
    }
  }
  else
  {
    v3 = (void *)*v2;
    if ( *v2 )
    {
      v2[1] = 0;
      qfree(v3);
      *v2 = 0;
      v2[2] = 0;
    }
  }
}

