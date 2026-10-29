__int64 __fastcall sub_B7D90(char *s, char *a2)
{
  unsigned int v2; // ebp
  const char *v3; // r12
  size_t v6; // r13
  size_t v7; // rax

  v3 = s;
  if ( !get_file_ext() && get_file_ext() )
    a2 = (char *)set_file_ext();
  if ( strchr(a2, 47) || strchr(a2, 92) )
  {
    v2 = qisabspath();
    if ( !(_BYTE)v2 )
    {
      v6 = strlen(a2);
      v7 = strlen(s);
      if ( v7 < v6 )
        return v2;
      v3 = &s[v7 - v6];
    }
  }
  else
  {
    v3 = (const char *)qbasename();
  }
  LOBYTE(v2) = strcmp(v3, a2) == 0;
  return v2;
}

