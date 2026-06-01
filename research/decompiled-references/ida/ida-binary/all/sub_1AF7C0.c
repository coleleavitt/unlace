unsigned __int64 sub_1AF7C0()
{
  char v0; // al
  unsigned __int64 v1; // r12
  const char *v2; // r13
  int v3; // ebp
  _QWORD **v4; // r14
  int v5; // ebx
  __int64 v6; // rax

  v0 = reg_str_get(&qword_8CAE20, "LastCLIExtlang", 0);
  v1 = xmmword_8CAE08;
  if ( v0 )
  {
    if ( (_QWORD)xmmword_8CAE08 )
    {
      v2 = &s1;
      v3 = -1;
      if ( (_QWORD)xmmword_8CAE28 )
        v2 = qword_8CAE20;
      v4 = (_QWORD **)qword_8CAE00;
      v5 = 0;
      v6 = 0;
      do
      {
        if ( !strcmp(v2, *(const char **)(*v4[v6] + 16LL)) )
          v3 = v5;
        v6 = ++v5;
      }
      while ( v3 < 0 && v5 < v1 );
    }
    else
    {
      v3 = -1;
    }
  }
  else
  {
    v3 = xmmword_8CAE08 - 1;
    if ( !(_QWORD)xmmword_8CAE08 )
      v3 = -1;
  }
  return sub_1AF250(v3, 0);
}
