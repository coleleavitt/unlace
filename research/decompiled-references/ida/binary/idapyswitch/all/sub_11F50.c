__int64 __fastcall sub_11F50(char *name, __int64 a2)
{
  pthread_mutex_t *v2; // r12
  char *v3; // rax
  char *v4; // rbx
  size_t v5; // rax
  size_t v6; // r13
  unsigned int v7; // ebx
  void *v9; // rdi
  size_t v10; // r14
  void *v11; // rax

  if ( !qword_1D3E0 )
  {
    qword_1D3E0 = j__pthread_self();
    qword_1D3E8 = (__int64)sub_11DE0();
  }
  v2 = (pthread_mutex_t *)qword_1D3E8;
  sub_11ED0((pthread_mutex_t *)qword_1D3E8);
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
        v9 = *(void **)a2;
        v10 = v5 + 1;
        if ( *(_QWORD *)(a2 + 16) < v5 + 1 )
        {
          v11 = sub_11430(a2, *(void **)a2, v5 + 1, 1u);
          *(_QWORD *)a2 = v11;
          v9 = v11;
        }
        *(_QWORD *)(a2 + 8) = v10;
        memmove(v9, v4, v6);
        *(_BYTE *)(*(_QWORD *)a2 + v6) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  sub_11F20(v2);
  return v7;
}

