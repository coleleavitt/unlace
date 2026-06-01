__int64 __fastcall sub_6F6270(char *s1)
{
  int v1; // edx
  __int64 result; // rax
  int v3; // edx

  v1 = strcmp(s1, "c++");
  result = 1;
  if ( v1 )
  {
    if ( *s1 != 99 || (result = 2, s1[1]) )
    {
      v3 = strcmp(s1, "objective-c++");
      result = 3;
      if ( v3 )
        return 4LL * (strcmp(s1, "objective-c") == 0);
    }
  }
  return result;
}
