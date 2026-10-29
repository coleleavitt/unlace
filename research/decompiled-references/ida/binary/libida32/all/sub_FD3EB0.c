char *__fastcall sub_FD3EB0(int a1)
{
  char **v1; // rax

  v1 = (char **)&unk_2B2AA60;
  while ( a1 != *(_DWORD *)v1 )
  {
    if ( a1 == *((_DWORD *)v1 + 6) )
    {
      v1 += 3;
      goto LABEL_9;
    }
    if ( a1 == *((_DWORD *)v1 + 12) )
    {
      v1 += 6;
      goto LABEL_9;
    }
    if ( a1 == *((_DWORD *)v1 + 18) )
    {
      v1 += 9;
LABEL_9:
      if ( v1 == &off_2B2B240 )
        return "unknown";
      return v1[2];
    }
    v1 += 12;
    if ( v1 == &off_2B2B240 )
      return "unknown";
  }
  return v1[2];
}

