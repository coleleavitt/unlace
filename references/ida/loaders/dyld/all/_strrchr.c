char *__cdecl strrchr(char *__s, int __c)
{
  char *result; // x0
  char *v4; // x10
  int v5; // w11
  int v6; // t1

  result = nullptr;
  v4 = __s;
  do
  {
    v6 = *v4++;
    v5 = v6;
    if ( (char)__c == v6 )
      result = __s;
    __s = v4;
  }
  while ( v5 );
  return result;
}
