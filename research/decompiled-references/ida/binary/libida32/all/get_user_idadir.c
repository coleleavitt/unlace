const char *get_user_idadir()
{
  _QWORD *v0; // rdx
  const char *result; // rax

  v0 = (_QWORD *)*sub_8115C0();
  result = haystack;
  if ( v0[1] )
    return (const char *)*v0;
  return result;
}

