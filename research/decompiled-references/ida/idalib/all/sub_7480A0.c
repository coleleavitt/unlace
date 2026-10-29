__int64 __fastcall sub_7480A0(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int token; // eax
  const char *v4; // rax

  token = lex_get_token(a1);
  if ( token )
  {
    v4 = (const char *)qstrerror(token);
    sub_747B60(a1, (__int64)"%s", v4);
  }
  LOBYTE(v1) = 1;
  return v1;
}
