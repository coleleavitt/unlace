void __fastcall sub_212D40(const char *src)
{
  size_t v2; // rax
  size_t v3; // rbp
  __int64 v4; // r12
  void *v5; // rdi

  if ( src )
  {
    v2 = strlen(src);
    v3 = v2;
    if ( v2 )
    {
      v4 = v2 + 1;
      v5 = qword_8CBB90;
      if ( qword_8CBBA0 < v2 + 1 )
      {
        qword_8CBB90 = (void *)qvector_reserve(&qword_8CBB90, qword_8CBB90, v2 + 1, 1);
        v5 = qword_8CBB90;
      }
      qword_8CBB98 = v4;
      memmove(v5, src, v3);
      *((_BYTE *)qword_8CBB90 + v3) = 0;
    }
    else
    {
      qword_8CBB98 = 0;
    }
  }
  else
  {
    qword_8CBB98 = 0;
  }
}
