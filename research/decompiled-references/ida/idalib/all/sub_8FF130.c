__int64 __fastcall sub_8FF130(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  const char *file_ext; // rax
  const char *v6; // rbx

  v4 = 0;
  file_ext = (const char *)get_file_ext(a2);
  if ( !file_ext )
    return v4;
  v6 = file_ext;
  if ( !strcasecmp(file_ext, "idb") || !strcasecmp(v6, "i64") )
  {
    v4 = 1;
    hvui_get_idaexe_path(a1, a3);
    return v4;
  }
  return 0;
}
