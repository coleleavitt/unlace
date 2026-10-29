__int64 *__fastcall qsem_create(const char *src, unsigned int value)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  __mode_t v6; // r13d
  sem_t *v7; // r12
  size_t v8; // rax
  size_t v9; // r12
  void *v10; // rdi
  void *v11; // rdi
  size_t v12; // r13
  __int64 v13; // rax

  v3 = operator new(0x38u);
  *(_QWORD *)v3 = 0;
  v4 = (__int64 *)v3;
  *(_OWORD *)(v3 + 8) = 0;
  if ( !src || !*src )
  {
    if ( sem_init((sem_t *)(v3 + 24), 0, value) != -1 )
      return v4;
    goto LABEL_8;
  }
  v6 = umask(0);
  v7 = sem_open(src, 64, 438, value);
  umask(v6);
  if ( !v7 )
  {
LABEL_8:
    if ( v4 )
    {
      v10 = (void *)*v4;
      if ( *v4 )
      {
        v4[1] = 0;
        qfree(v10);
      }
      operator delete(v4, 0x38u);
    }
    return nullptr;
  }
  v4[3] = (__int64)v7;
  v8 = strlen(src);
  v9 = v8;
  if ( v8 )
  {
    v11 = (void *)*v4;
    v12 = v8 + 1;
    if ( v4[2] < v8 + 1 )
    {
      v13 = qvector_reserve(v4, *v4, v8 + 1, 1);
      *v4 = v13;
      v11 = (void *)v13;
    }
    v4[1] = v12;
    memmove(v11, src, v9);
    *(_BYTE *)(*v4 + v9) = 0;
    return v4;
  }
  v4[1] = 0;
  return v4;
}
