void **sub_16C010()
{
  void **v1; // rax
  unsigned __int64 v2; // rbp
  _BYTE *v3; // rsi
  void *v4; // rdi
  void *v5; // r13

  if ( !(_BYTE)byte_8C9558 && __cxa_guard_acquire(&byte_8C9558) )
  {
    qword_8C9560 = nullptr;
    xmmword_8C9568 = 0;
    __cxa_atexit((void (*)(void *))sub_16B530, &qword_8C9560, &off_85BC80);
    __cxa_guard_release(&byte_8C9558);
  }
  if ( (unsigned __int64)xmmword_8C9568 > 1 )
    return &qword_8C9560;
  v1 = sub_16BE40();
  if ( v1 != &qword_8C9560 )
  {
    v2 = (unsigned __int64)v1[1];
    if ( v2 <= 1 )
    {
      *(_QWORD *)&xmmword_8C9568 = 0;
      goto LABEL_7;
    }
    v4 = qword_8C9560;
    v5 = *v1;
    if ( *((_QWORD *)&xmmword_8C9568 + 1) < v2 )
    {
      qword_8C9560 = (void *)qvector_reserve(&qword_8C9560, qword_8C9560, v1[1], 1);
      v4 = qword_8C9560;
    }
    *(_QWORD *)&xmmword_8C9568 = v2;
    memmove(v4, v5, v2 - 1);
    *((char *)qword_8C9560 + v2 - 1) = 0;
  }
  if ( (unsigned __int64)xmmword_8C9568 > 1 )
    return &qword_8C9560;
LABEL_7:
  v3 = qword_8C9560;
  if ( *((_QWORD *)&xmmword_8C9568 + 1) <= 1u )
  {
    qword_8C9560 = (void *)qvector_reserve(&qword_8C9560, qword_8C9560, 2, 1);
    v3 = qword_8C9560;
  }
  *(_QWORD *)&xmmword_8C9568 = 2;
  *v3 = 63;
  *((_BYTE *)qword_8C9560 + 1) = 0;
  return &qword_8C9560;
}
