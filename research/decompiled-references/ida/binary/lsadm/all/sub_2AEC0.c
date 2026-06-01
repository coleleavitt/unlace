const char *__fastcall sub_2AEC0(int a1)
{
  int v1; // ebx
  bool v2; // cc
  const char *result; // rax
  char **v4; // rbp

  v1 = a1;
  if ( a1 == -1 )
  {
    v1 = sub_26E20();
    v2 = v1 <= 2;
    if ( v1 != 2 )
      goto LABEL_3;
    return "Disk is full";
  }
  v2 = a1 <= 2;
  if ( a1 == 2 )
    return "Disk is full";
LABEL_3:
  if ( !v2 )
  {
    result = "Read attempt past file end";
    if ( v1 == 3 )
      return result;
    goto LABEL_8;
  }
  if ( v1 )
  {
    if ( v1 == 1 )
      return (const char *)sub_270E0(-1);
LABEL_8:
    v4 = (char **)sub_270A0();
    sub_CF40(v4);
    return *v4;
  }
  return "No error";
}

