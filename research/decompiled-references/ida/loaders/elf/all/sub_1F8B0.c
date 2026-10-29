const char *__fastcall sub_1F8B0(__int64 a1, int *a2)
{
  int v2; // ebx
  unsigned int v3; // ebx
  const char *result; // rax

  v2 = *a2;
  *a2 = 0;
  v3 = v2 & 6;
  if ( (unsigned __int8)getinf_flag(3, 4) )
  {
    result = "lp64d";
    if ( v3 != 4 )
    {
      if ( v3 > 4 )
      {
        result = "lp64q";
        if ( v3 != 6 )
          return nullptr;
      }
      else
      {
        result = "lp64";
        if ( v3 )
          return "lp64f";
      }
    }
  }
  else
  {
    result = "ilp32f";
    if ( v3 != 2 )
    {
      result = "ilp32d";
      if ( v3 != 4 )
      {
        result = "ilp32";
        if ( v3 )
          return nullptr;
      }
    }
  }
  return result;
}

