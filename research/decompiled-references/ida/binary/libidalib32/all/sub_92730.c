void **sub_92730()
{
  size_t v1; // rax
  size_t v2; // rbx
  _BYTE *v3; // rsi
  size_t v4; // r13
  void *v5; // rdi

  if ( !(_BYTE)byte_250898 && __cxa_guard_acquire(&byte_250898) )
  {
    dest = nullptr;
    xmmword_2508A8 = 0;
    __cxa_atexit((void (*)(void *))sub_91BF0, &dest, &off_22E220);
    __cxa_guard_release(&byte_250898);
  }
  if ( (unsigned __int64)xmmword_2508A8 > 1 )
    return &dest;
  v1 = strlen(src);
  v2 = v1;
  if ( v1 )
  {
    v4 = v1 + 1;
    v5 = dest;
    if ( *((_QWORD *)&xmmword_2508A8 + 1) < v1 + 1 )
    {
      dest = (void *)qvector_reserve();
      v5 = dest;
    }
    *(_QWORD *)&xmmword_2508A8 = v4;
    memmove(v5, src, v2);
    *((_BYTE *)dest + v2) = 0;
    if ( (unsigned __int64)xmmword_2508A8 > 1 )
      return &dest;
  }
  else
  {
    *(_QWORD *)&xmmword_2508A8 = 0;
  }
  v3 = dest;
  if ( *((_QWORD *)&xmmword_2508A8 + 1) <= 1u )
  {
    dest = (void *)qvector_reserve();
    v3 = dest;
  }
  *(_QWORD *)&xmmword_2508A8 = 2;
  *v3 = 63;
  *((_BYTE *)dest + 1) = 0;
  return &dest;
}

