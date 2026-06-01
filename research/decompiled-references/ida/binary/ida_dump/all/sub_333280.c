const char **__fastcall sub_333280(const char *a1)
{
  const char *v1; // rdx

  v1 = a1;
  if ( !a1 )
    return nullptr;
  while ( *v1 == 95 )
    ++v1;
  return sub_3330D0((const char **)&xmmword_4EEC80, (const char **)&dword_4EF950, v1);
}
