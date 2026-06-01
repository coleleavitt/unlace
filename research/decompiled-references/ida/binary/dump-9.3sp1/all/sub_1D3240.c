bool __fastcall sub_1D3240(char *s1)
{
  int v1; // edx
  bool result; // al

  v1 = strcmp(s1, "security_cookie");
  result = 1;
  if ( v1 )
    return strcmp(s1, "stack_chk_guard") == 0;
  return result;
}
