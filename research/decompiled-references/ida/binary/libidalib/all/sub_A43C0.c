void __fastcall sub_A43C0(const char *src)
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
      v5 = qword_252010;
      if ( qword_252020 < v2 + 1 )
      {
        qword_252010 = (void *)qvector_reserve();
        v5 = qword_252010;
      }
      qword_252018 = v4;
      memmove(v5, src, v3);
      *((_BYTE *)qword_252010 + v3) = 0;
    }
    else
    {
      qword_252018 = 0;
    }
  }
  else
  {
    qword_252018 = 0;
  }
}

