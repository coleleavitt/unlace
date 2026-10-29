int __fastcall sub_61BAF0(const char *a1)
{
  char *v1; // rax
  const char *v2; // rbx

  v1 = strrchr(a1, 46);
  if ( v1 )
  {
    v2 = v1;
    LODWORD(v1) = strcmp(".ids", v1);
    if ( (_DWORD)v1 )
    {
      LODWORD(v1) = strcmp(".idt", v2);
      if ( !(_DWORD)v1 )
        *v2 = 0;
    }
    else
    {
      *v2 = 0;
    }
  }
  return (int)v1;
}
