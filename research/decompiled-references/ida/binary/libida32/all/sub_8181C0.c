__int64 __fastcall sub_8181C0(const char *a1)
{
  __int64 result; // rax
  const char *v2; // rax

  result = fopenWT(a1);
  if ( !result )
  {
    v2 = (const char *)qerrstr(-1);
    sub_375320((__int64)"Cannot open file '%s' for modification: %s", a1, v2);
  }
  return result;
}

