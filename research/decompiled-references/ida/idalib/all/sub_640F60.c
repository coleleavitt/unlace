char __fastcall sub_640F60(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  const char *file_ext; // rax
  unsigned __int64 v4; // rbp
  int v5; // eax

  v1 = qbasename(a1);
  if ( v1
    && (v2 = v1, file_ext = (const char *)get_file_ext(v1), (v4 = (unsigned __int64)file_ext) != 0)
    && (v5 = strcasecmp(file_ext, "so")) == 0 )
  {
    if ( v4 >= v2 + 3 && *(_BYTE *)(v4 - 2) == 51 )
      LOBYTE(v5) = *(_BYTE *)(v4 - 3) == 50;
  }
  else
  {
    LOBYTE(v5) = 1;
  }
  return v5;
}
