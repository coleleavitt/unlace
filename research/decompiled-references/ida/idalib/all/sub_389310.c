const char *sub_389310()
{
  size_t v1; // rax
  size_t v2; // rbx
  size_t v3; // r12
  void *v4; // rdi
  const char *v5; // rdx
  char v6[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v7; // [rsp+1008h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( (unsigned __int64)xmmword_2CCB4A8 > 1 )
    return (const char *)dest;
  qtmpnam(v6);
  if ( (unsigned int)qmkdir(v6, 511) )
  {
    v5 = (const char *)qstrerror(0xFFFFFFFFLL);
    sub_378C70((__int64)"Failed to create temporary directory %s: %s", v6, v5);
  }
  v1 = strlen(v6);
  v2 = v1;
  if ( v1 )
  {
    v3 = v1 + 1;
    v4 = dest;
    if ( *((_QWORD *)&xmmword_2CCB4A8 + 1) < v1 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v1 + 1, 1);
      v4 = dest;
    }
    *(_QWORD *)&xmmword_2CCB4A8 = v3;
    memmove(v4, v6, v2);
    *((_BYTE *)dest + v2) = 0;
    if ( (_QWORD)xmmword_2CCB4A8 )
      return (const char *)dest;
  }
  else
  {
    *(_QWORD *)&xmmword_2CCB4A8 = 0;
  }
  return haystack;
}
