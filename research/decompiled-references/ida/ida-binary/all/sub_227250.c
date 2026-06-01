__int64 __fastcall sub_227250(char *s, char *a2)
{
  unsigned int v2; // ebp
  const char *v3; // r12
  const char *v4; // rbx
  size_t v6; // r13
  size_t v7; // rax
  __int64 file_ext; // rax
  _QWORD v9[519]; // [rsp+0h] [rbp-1038h] BYREF

  v3 = s;
  v9[513] = __readfsqword(0x28u);
  v4 = a2;
  if ( !get_file_ext(a2) )
  {
    file_ext = get_file_ext(s);
    if ( file_ext )
      v4 = (const char *)set_file_ext(v9, 4096, a2, file_ext);
  }
  if ( strchr(v4, 47) || strchr(v4, 92) )
  {
    v2 = qisabspath(v4);
    if ( !(_BYTE)v2 )
    {
      v6 = strlen(v4);
      v7 = strlen(s);
      if ( v7 < v6 )
        return v2;
      v3 = &s[v7 - v6];
    }
  }
  else
  {
    v3 = (const char *)qbasename(s);
  }
  LOBYTE(v2) = strcmp(v3, v4) == 0;
  return v2;
}
