__int64 __fastcall sub_61BBB0(__int64 a1, __int64 a2, __int64 a3)
{
  const char *file_ext; // rax
  const char *v5; // rbx
  int v7; // r9d

  file_ext = (const char *)get_file_ext(a2);
  if ( !file_ext )
    return set_file_ext(a1, 4096, a2, a3);
  v5 = file_ext;
  if ( !strcasecmp(file_ext, "ids") || !strcasecmp(v5, "idt") )
    return set_file_ext(a1, 4096, a2, a3);
  else
    return qsnprintf(a1, 4096, (unsigned int)"%s.%s", a2, a3, v7);
}
