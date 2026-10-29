__int64 sub_B0040()
{
  const char *v0; // rax
  const char *v1; // rbx
  size_t v2; // rax
  size_t v3; // rbp
  size_t v5; // r12
  void *v6; // rdi

  v0 = (const char *)sub_9DAF0(0, (__int64)qword_250A60, (__int64)"Please select the binary trace to load");
  if ( !v0 )
    return 0;
  v1 = v0;
  v2 = strlen(v0);
  v3 = v2;
  if ( v2 )
  {
    v5 = v2 + 1;
    v6 = qword_250A60;
    if ( *((_QWORD *)&xmmword_250A68 + 1) < v2 + 1 )
    {
      qword_250A60 = (void *)qvector_reserve();
      v6 = qword_250A60;
    }
    *(_QWORD *)&xmmword_250A68 = v5;
    memmove(v6, v1, v3);
    *((_BYTE *)qword_250A60 + v3) = 0;
  }
  else
  {
    *(_QWORD *)&xmmword_250A68 = 0;
  }
  return sub_AFE80(xmmword_250CE0, v1);
}

