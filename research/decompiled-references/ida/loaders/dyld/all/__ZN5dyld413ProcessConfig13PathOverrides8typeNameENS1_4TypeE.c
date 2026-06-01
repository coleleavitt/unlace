const char *__fastcall dyld4::ProcessConfig::PathOverrides::typeName(unsigned int a1)
{
  if ( a1 > 0xF )
    return "unknown";
  else
    return off_95598[a1];
}
