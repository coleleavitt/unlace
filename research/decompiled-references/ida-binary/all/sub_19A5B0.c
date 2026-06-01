const char *__fastcall sub_19A5B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdx
  const char *result; // rax

  v5 = *(_DWORD *)(a1 + 72) >> 28;
  if ( v5 >= (unsigned __int64)xmmword_8CACB8 )
  {
    sub_199400(a5, a1, a2, a3, a4);
    return (const char *)sub_19A5F0();
  }
  else
  {
    v6 = (_QWORD *)(qword_8CACB0 + 24 * v5);
    result = &s1;
    if ( v6[1] )
      return (const char *)*v6;
  }
  return result;
}
