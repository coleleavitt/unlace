char *__fastcall sub_390540(int a1, int a2)
{
  char *result; // rax
  char *v3; // rdi
  __int64 v4; // rax

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(540);
LABEL_14:
    BUG();
  }
  if ( a1 < (unsigned __int64)xmmword_2CAA5F8 )
  {
    v3 = (char *)qword_2CAA5F0 + 16 * a1;
    if ( (unsigned int)a2 < *(_DWORD *)v3 )
    {
      v4 = *(unsigned int *)(*((_QWORD *)v3 + 1) + 4LL * a2);
      if ( (_DWORD)v4 )
        return (char *)qword_2CAA608 + v4 + 2;
    }
  }
  if ( !unk_2C57908 )
    return nullptr;
  result = (char *)qword_2CAA608;
  if ( qword_2CAA608 )
  {
    if ( !under_debugger )
      interr(543);
    goto LABEL_14;
  }
  return result;
}

