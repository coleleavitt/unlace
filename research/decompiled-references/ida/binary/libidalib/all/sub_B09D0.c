__int64 sub_B09D0()
{
  const char *v0; // rax
  const char *v1; // rbx
  size_t v2; // rax
  size_t v3; // rbp
  size_t v5; // r12
  void *v6; // rdi

  v0 = (const char *)sub_9DC30(0, (__int64)qword_251AE0, (__int64)"Please select the binary trace to load");
  if ( !v0 )
    return 0;
  v1 = v0;
  v2 = strlen(v0);
  v3 = v2;
  if ( v2 )
  {
    v5 = v2 + 1;
    v6 = qword_251AE0;
    if ( *((_QWORD *)&xmmword_251AE8 + 1) < v2 + 1 )
    {
      qword_251AE0 = (void *)qvector_reserve();
      v6 = qword_251AE0;
    }
    *(_QWORD *)&xmmword_251AE8 = v5;
    memmove(v6, v1, v3);
    *((_BYTE *)qword_251AE0 + v3) = 0;
  }
  else
  {
    *(_QWORD *)&xmmword_251AE8 = 0;
  }
  return sub_B0570(xmmword_251F20, v1);
}

