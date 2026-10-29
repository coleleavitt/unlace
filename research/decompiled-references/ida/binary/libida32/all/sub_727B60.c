__int64 __fastcall sub_727B60(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int token; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v7; // rax

  token = lex_get_token(a1);
  if ( token )
  {
    v7 = (const char *)qstrerror(token, a2, v4, v5);
    sub_727620(a1, (__int64)"%s", v7);
  }
  LOBYTE(v2) = 1;
  return v2;
}

