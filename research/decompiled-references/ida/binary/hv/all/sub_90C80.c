const char *sub_90C80()
{
  _QWORD *v0; // rdx
  const char *result; // rax

  v0 = (_QWORD *)*sub_90AA0();
  result = haystack;
  if ( v0[1] )
    return (const char *)*v0;
  return result;
}

