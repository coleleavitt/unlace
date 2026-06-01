char *__fastcall get_file_ext(__int64 a1)
{
  const char *v1; // rax
  char *v2; // rax

  if ( !a1 )
    return nullptr;
  v1 = (const char *)qbasename(a1);
  v2 = strrchr(v1, 46);
  if ( v2 )
    return v2 + 1;
  else
    return nullptr;
}

