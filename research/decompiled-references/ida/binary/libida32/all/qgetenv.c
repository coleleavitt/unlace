__int64 __fastcall qgetenv(char *name, __int64 *a2)
{
  __int64 v2; // r12
  char *v3; // rax
  char *v4; // rbx
  size_t v5; // rax
  size_t v6; // r13
  unsigned int v7; // ebx
  void *v9; // rdi
  size_t v10; // r14
  __int64 v11; // rax

  if ( !qword_2CAD010 )
  {
    qword_2CAD010 = qthread_self();
    qword_2CAD018 = qmutex_create();
  }
  v2 = qword_2CAD018;
  qmutex_lock(qword_2CAD018);
  v3 = getenv(name);
  v4 = v3;
  if ( v3 && *v3 )
  {
    if ( a2 )
    {
      v5 = strlen(v3);
      v6 = v5;
      if ( v5 )
      {
        v9 = (void *)*a2;
        v10 = v5 + 1;
        if ( a2[2] < v5 + 1 )
        {
          v11 = qvector_reserve(a2, *a2, v5 + 1, 1);
          *a2 = v11;
          v9 = (void *)v11;
        }
        a2[1] = v10;
        memmove(v9, v4, v6);
        *(_BYTE *)(*a2 + v6) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  qmutex_unlock(v2);
  return v7;
}

