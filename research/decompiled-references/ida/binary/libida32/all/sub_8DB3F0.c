__int64 __fastcall sub_8DB3F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  const char *file_ext; // rax
  const char *v4; // rbx

  v2 = 0;
  file_ext = (const char *)get_file_ext(a2);
  if ( !file_ext )
    return v2;
  v4 = file_ext;
  if ( !strcasecmp(file_ext, "idb") || !strcasecmp(v4, "i64") )
  {
    v2 = 1;
    hvui_get_idaexe_path();
    return v2;
  }
  return 0;
}

