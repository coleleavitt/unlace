char *__fastcall sub_62F560(char *s, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  char *result; // rax

  v3 = qbasename(a3);
  qstrncpy(s, v3, a2);
  result = strrchr(s, 46);
  if ( result )
    *result = 0;
  return result;
}

