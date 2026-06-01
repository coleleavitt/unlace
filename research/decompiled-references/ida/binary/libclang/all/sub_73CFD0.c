char *__fastcall sub_73CFD0(unsigned __int8 a1)
{
  char *result; // rax

  result = "CBuffer";
  if ( a1 != 2 )
  {
    result = "Sampler";
    if ( a1 <= 2u )
    {
      result = "SRV";
      if ( a1 )
        return "UAV";
    }
  }
  return result;
}

