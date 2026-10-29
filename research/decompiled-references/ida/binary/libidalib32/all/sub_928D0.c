void **sub_928D0()
{
  void **v1; // rax
  unsigned __int64 v2; // rbp
  _BYTE *v3; // rsi
  void *v4; // rdi
  void *v5; // r13

  if ( !(_BYTE)byte_250858 && __cxa_guard_acquire(&byte_250858) )
  {
    qword_250860 = nullptr;
    xmmword_250868 = 0;
    __cxa_atexit((void (*)(void *))sub_91BF0, &qword_250860, &off_22E220);
    __cxa_guard_release(&byte_250858);
  }
  if ( (unsigned __int64)xmmword_250868 > 1 )
    return &qword_250860;
  v1 = sub_92730();
  if ( v1 != &qword_250860 )
  {
    v2 = (unsigned __int64)v1[1];
    if ( v2 <= 1 )
    {
      *(_QWORD *)&xmmword_250868 = 0;
      goto LABEL_7;
    }
    v4 = qword_250860;
    v5 = *v1;
    if ( *((_QWORD *)&xmmword_250868 + 1) < v2 )
    {
      qword_250860 = (void *)qvector_reserve();
      v4 = qword_250860;
    }
    *(_QWORD *)&xmmword_250868 = v2;
    memmove(v4, v5, v2 - 1);
    *((char *)qword_250860 + v2 - 1) = 0;
  }
  if ( (unsigned __int64)xmmword_250868 > 1 )
    return &qword_250860;
LABEL_7:
  v3 = qword_250860;
  if ( *((_QWORD *)&xmmword_250868 + 1) <= 1u )
  {
    qword_250860 = (void *)qvector_reserve();
    v3 = qword_250860;
  }
  *(_QWORD *)&xmmword_250868 = 2;
  *v3 = 63;
  *((_BYTE *)qword_250860 + 1) = 0;
  return &qword_250860;
}

