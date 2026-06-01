const char *__fastcall get_loader_name_from_dll(__int64 a1)
{
  const char *v1; // rax
  const char *v2; // rbx
  char *v3; // rax
  char *v4; // rbp
  __int64 extlang; // rax

  v1 = (const char *)qbasename(a1);
  v2 = v1;
  if ( v1 )
  {
    v3 = strrchr(v1, 46);
    v4 = v3;
    if ( v3 )
    {
      extlang = find_extlang(v3 + 1);
      if ( extlang )
      {
        --*(_DWORD *)(extlang + 12);
      }
      else
      {
        *v4 = 0;
        if ( v2 + 2 < v4 && *(v4 - 2) == 51 && *(v4 - 1) == 50 )
          *(v4 - 2) = 0;
      }
    }
    qstrlwr(v2);
  }
  return v2;
}

