char *__fastcall _derive_proc_name(__int64 a1, char *a2)
{
  __int64 v4; // x0
  char *v5; // x20
  char *v6; // x0
  const char *v7; // x1

  v4 = _simple_getenv(*(_QWORD *)(a1 + 24), "executable_path");
  if ( v4 )
  {
    v5 = (char *)v4;
LABEL_5:
    v6 = strrchr(v5, 47);
    goto LABEL_6;
  }
  if ( *(_DWORD *)(a1 + 4) )
  {
    v5 = **(char ***)(a1 + 8);
    goto LABEL_5;
  }
  v6 = nullptr;
  v5 = "unknown proc";
LABEL_6:
  if ( v6 )
    v7 = v6 + 1;
  else
    v7 = v5;
  strlcpy(a2, v7, 0xFFu);
  return a2;
}
