char *__fastcall qgetcwd(char *a1, size_t a2)
{
  char *result; // rax
  const char *v3; // rax

  result = getcwd(a1, a2);
  if ( !result )
  {
    v3 = (const char *)qerrstr(-1);
    sub_378C70((__int64)"getcwd: %s", v3);
  }
  return result;
}
