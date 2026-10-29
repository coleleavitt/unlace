char *__fastcall sub_AEF980(char a1)
{
  char *result; // rax

  result = "UAV";
  if ( a1 != 1 )
  {
    result = "SRV";
    if ( a1 )
    {
      result = "CBuffer";
      if ( a1 != 2 )
        return "Sampler";
    }
  }
  return result;
}

