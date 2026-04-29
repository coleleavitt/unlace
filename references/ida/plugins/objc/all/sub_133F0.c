bool sub_133F0()
{
  const char *v0; // r13
  const char *v1; // r12
  __int64 idati; // rax
  __int64 v3; // rdx
  const char ***v4; // rbx
  const char ***v5; // r15
  const char *v6; // rbp

  v0 = "iphoneos_sdk";
  v1 = "macosx_sdk";
  if ( (unsigned __int8)getinf_flag() )
    v1 = "macosx64_sdk";
  if ( (unsigned __int8)getinf_flag() )
    v0 = "iphoneos64_sdk";
  idati = get_idati();
  v3 = *(int *)(idati + 16);
  if ( (int)v3 <= 0 )
  {
LABEL_12:
    getinf_flag();
    return (unsigned int)add_til() == 1;
  }
  else
  {
    v4 = *(const char ****)(idati + 24);
    v5 = &v4[v3];
    while ( 1 )
    {
      v6 = **v4;
      if ( strstr(v6, v1) || strstr(v6, v0) || strstr(v6, "macos1") )
        return 1;
      if ( ++v4 == v5 )
        goto LABEL_12;
    }
  }
}
