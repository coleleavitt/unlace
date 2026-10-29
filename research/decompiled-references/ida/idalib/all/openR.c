__int64 __fastcall openR(const char *a1)
{
  __int64 result; // rax
  const char *v2; // rax

  result = fopenRB(a1);
  if ( !result )
  {
    v2 = (const char *)qerrstr(-1);
    sub_378C70((__int64)"Can't open for read file '%s': %s", a1, v2);
  }
  return result;
}
