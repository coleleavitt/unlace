const char *__fastcall qstrerror(unsigned int a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  char **v5; // rbp
  unsigned int qerrno; // eax

  if ( a1 == -1 )
  {
    qerrno = get_qerrno();
    v2 = qerrno;
    if ( qerrno )
    {
      if ( qerrno != 1 )
      {
        v5 = (char **)sub_82F0B0();
        if ( v2 == -1 )
          goto LABEL_11;
        goto LABEL_5;
      }
      return (const char *)qerrstr(-1);
    }
  }
  else
  {
    v2 = a1;
    if ( a1 )
    {
      if ( a1 != 1 )
      {
        v5 = (char **)sub_82F0B0();
LABEL_5:
        if ( itext(v2, a2, v3, v4) )
        {
          get_error_data(3);
          get_error_data(2);
          get_error_data(1);
          get_error_data(0);
          sub_3953D0(v5);
          return *v5;
        }
LABEL_11:
        sub_35A790(v5);
        return *v5;
      }
      return (const char *)qerrstr(-1);
    }
  }
  return "No error";
}
