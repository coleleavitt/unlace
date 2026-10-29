bool __fastcall sub_623CE0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  const char *file_ext; // rax
  unsigned __int64 v4; // rbp
  bool result; // al

  v1 = qbasename(a1);
  if ( !v1 )
    return 1;
  v2 = v1;
  file_ext = (const char *)get_file_ext(v1);
  v4 = (unsigned __int64)file_ext;
  if ( !file_ext || strcasecmp(file_ext, "so") )
    return 1;
  result = 1;
  if ( v4 >= v2 + 3 && *(_BYTE *)(v4 - 2) == 51 )
    return *(_BYTE *)(v4 - 3) != 50;
  return result;
}

