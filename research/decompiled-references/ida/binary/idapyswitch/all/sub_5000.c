void __fastcall sub_5000(const char *src)
{
  size_t v2; // rax
  size_t v3; // rbp
  size_t v4; // r12
  void *v5; // rdi

  if ( src )
  {
    v2 = strlen(src);
    v3 = v2;
    if ( v2 )
    {
      v4 = v2 + 1;
      v5 = qword_1C320;
      if ( *((_QWORD *)&xmmword_1C328 + 1) < v2 + 1 )
      {
        qword_1C320 = (void *)sub_11430(&qword_1C320, qword_1C320, v2 + 1, 1);
        v5 = qword_1C320;
      }
      *(_QWORD *)&xmmword_1C328 = v4;
      memmove(v5, src, v3);
      *((_BYTE *)qword_1C320 + v3) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_1C328 = 0;
    }
  }
  else
  {
    *(_QWORD *)&xmmword_1C328 = 0;
  }
}

