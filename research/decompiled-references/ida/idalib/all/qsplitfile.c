const char *__fastcall qsplitfile(const char *a1, const char **a2, char **a3)
{
  char *v4; // rax
  char *v5; // rdx

  v4 = strrchr(a1, 46);
  v5 = nullptr;
  if ( v4 )
  {
    *v4 = 0;
    v5 = v4 + 1;
  }
  if ( a2 )
    *a2 = a1;
  if ( a3 )
    *a3 = v5;
  return a1;
}
