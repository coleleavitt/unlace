const char *sub_101C0()
{
  _QWORD *v0; // rdx
  const char *result; // rax

  v0 = (_QWORD *)*sub_FFE0();
  result = s1;
  if ( v0[1] )
    return (const char *)*v0;
  return result;
}

