__int64 __fastcall sub_11A30(int errnum)
{
  unsigned __int64 v1; // rbx
  char *v2; // rax
  char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r12
  void *v7; // rdi
  size_t v8; // r13
  void *v9; // rax

  v1 = sub_F340();
  v2 = strerror(errnum);
  if ( v2 )
  {
    v3 = v2;
    v4 = strlen(v2);
    v5 = v4;
    if ( v4 )
    {
      v7 = *(void **)v1;
      v8 = v4 + 1;
      if ( *(_QWORD *)(v1 + 16) < v4 + 1 )
      {
        v9 = sub_11430(v1, *(void **)v1, v4 + 1, 1u);
        *(_QWORD *)v1 = v9;
        v7 = v9;
      }
      *(_QWORD *)(v1 + 8) = v8;
      memmove(v7, v3, v5);
      *(_BYTE *)(*(_QWORD *)v1 + v5) = 0;
      return *(_QWORD *)v1;
    }
    else
    {
      *(_QWORD *)(v1 + 8) = 0;
      return *(_QWORD *)v1;
    }
  }
  else
  {
    sub_7320((char **)v1);
    return *(_QWORD *)v1;
  }
}

