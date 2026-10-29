const char *__fastcall sub_98140(__int64 a1)
{
  unsigned __int64 v1; // rax
  _QWORD *v2; // rdx
  const char *result; // rax

  v1 = *(_DWORD *)(a1 + 64) >> 28;
  if ( v1 >= (unsigned __int64)xmmword_2508C8 )
  {
    sub_978E0();
    return (const char *)sub_98180();
  }
  else
  {
    v2 = (_QWORD *)(qword_2508C0 + 24 * v1);
    result = s1;
    if ( v2[1] )
      return (const char *)*v2;
  }
  return result;
}

