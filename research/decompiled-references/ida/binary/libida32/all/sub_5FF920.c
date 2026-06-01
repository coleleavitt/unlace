__int64 __fastcall sub_5FF920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  const char *file_ext; // rax
  const char *v9; // rbx
  int v11; // r9d

  file_ext = (const char *)get_file_ext(a2);
  if ( !file_ext )
    return set_file_ext(a1, 4096, a2, a3);
  v9 = file_ext;
  if ( !strcasecmp(file_ext, "ids") || !strcasecmp(v9, "idt") )
    return set_file_ext(a1, 4096, a2, a3);
  else
    return qsnprintf(a1, 4096, (int)"%s.%s", a2, a3, v11, a7);
}

