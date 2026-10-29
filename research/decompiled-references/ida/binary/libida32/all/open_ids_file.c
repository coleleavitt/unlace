__int64 __fastcall open_ids_file(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned int ids_file; // ebx

  if ( a1 && (v2 = *(_QWORD *)(a1 + 8)) != 0 )
  {
    v3 = fopenRB(v2);
    v4 = v3;
    if ( v3 )
    {
      ids_file = read_ids_file(a1, v3);
      qfclose(v4);
    }
    else
    {
      return (unsigned int)-2;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return ids_file;
}

