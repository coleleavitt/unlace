void __fastcall __noreturn sub_3A760(const char *a1, int a2, const char *a3, const char *a4)
{
  if ( a1 )
  {
    if ( !a3 )
      goto LABEL_7;
    if ( a4 )
    {
      fprintf(stderr, "%s:%d: %s: Assertion '%s' failed.\n", a1, a2, a3, a4);
      goto LABEL_7;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_7;
  }
  fprintf(stderr, "%s: Undefined behavior detected.\n", a3);
LABEL_7:
  abort();
}

