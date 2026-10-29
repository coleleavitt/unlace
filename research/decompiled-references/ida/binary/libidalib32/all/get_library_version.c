__int64 __fastcall get_library_version(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  void **v4; // rax
  const char *v5; // r14
  char *v6; // rax
  const char *v7; // rbx
  char *v8; // r13

  v4 = sub_928D0();
  if ( !v4[1] )
    return 0;
  v5 = (const char *)*v4;
  v6 = strchr((const char *)*v4, 46);
  if ( !v6 )
    return 0;
  v7 = v6 + 1;
  *a1 = strtol(v5, nullptr, 10);
  v8 = strchr(v7, 46);
  if ( !v8 )
    return 0;
  *a2 = strtol(v7, nullptr, 10);
  if ( !v8[1] )
    return 0;
  *a3 = strtol(v8 + 1, nullptr, 10);
  return 1;
}

