void **sub_16BE40()
{
  size_t v1; // rax
  size_t v2; // rbx
  _BYTE *v3; // rsi
  size_t v4; // r13
  void *v5; // rdi

  if ( !(_BYTE)byte_8C9598 && __cxa_guard_acquire(&byte_8C9598) )
  {
    dest = nullptr;
    xmmword_8C95A8 = 0;
    __cxa_atexit((void (*)(void *))sub_16B530, &dest, &off_85BC80);
    __cxa_guard_release(&byte_8C9598);
  }
  if ( (unsigned __int64)xmmword_8C95A8 > 1 )
    return &dest;
  v1 = strlen(s);
  v2 = v1;
  if ( v1 )
  {
    v4 = v1 + 1;
    v5 = dest;
    if ( *((_QWORD *)&xmmword_8C95A8 + 1) < v1 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v1 + 1, 1);
      v5 = dest;
    }
    *(_QWORD *)&xmmword_8C95A8 = v4;
    memmove(v5, s, v2);
    *((_BYTE *)dest + v2) = 0;
    if ( (unsigned __int64)xmmword_8C95A8 > 1 )
      return &dest;
  }
  else
  {
    *(_QWORD *)&xmmword_8C95A8 = 0;
  }
  v3 = dest;
  if ( *((_QWORD *)&xmmword_8C95A8 + 1) <= 1u )
  {
    dest = (void *)qvector_reserve(&dest, dest, 2, 1);
    v3 = dest;
  }
  *(_QWORD *)&xmmword_8C95A8 = 2;
  *v3 = 63;
  *((_BYTE *)dest + 1) = 0;
  return &dest;
}
