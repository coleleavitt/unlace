void **sub_929B0()
{
  void **v1; // rax
  unsigned __int64 v2; // rbp
  _BYTE *v3; // rsi
  void *v4; // rdi
  void *v5; // r13

  if ( !(_BYTE)byte_2518B8 && __cxa_guard_acquire(&byte_2518B8) )
  {
    qword_2518C0 = nullptr;
    xmmword_2518C8 = 0;
    __cxa_atexit((void (*)(void *))sub_91CD0, &qword_2518C0, &off_22F2A0);
    __cxa_guard_release(&byte_2518B8);
  }
  if ( (unsigned __int64)xmmword_2518C8 > 1 )
    return &qword_2518C0;
  v1 = sub_92810();
  if ( v1 != &qword_2518C0 )
  {
    v2 = (unsigned __int64)v1[1];
    if ( v2 <= 1 )
    {
      *(_QWORD *)&xmmword_2518C8 = 0;
      goto LABEL_7;
    }
    v4 = qword_2518C0;
    v5 = *v1;
    if ( *((_QWORD *)&xmmword_2518C8 + 1) < v2 )
    {
      qword_2518C0 = (void *)qvector_reserve();
      v4 = qword_2518C0;
    }
    *(_QWORD *)&xmmword_2518C8 = v2;
    memmove(v4, v5, v2 - 1);
    *((char *)qword_2518C0 + v2 - 1) = 0;
  }
  if ( (unsigned __int64)xmmword_2518C8 > 1 )
    return &qword_2518C0;
LABEL_7:
  v3 = qword_2518C0;
  if ( *((_QWORD *)&xmmword_2518C8 + 1) <= 1u )
  {
    qword_2518C0 = (void *)qvector_reserve();
    v3 = qword_2518C0;
  }
  *(_QWORD *)&xmmword_2518C8 = 2;
  *v3 = 63;
  *((_BYTE *)qword_2518C0 + 1) = 0;
  return &qword_2518C0;
}

