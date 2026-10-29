__int64 __fastcall get_ida_subdirs(__int64 *a1, const char *a2, char a3)
{
  __int64 v4; // rax
  __int64 *v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  const char *v9; // rdx
  char *v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 idp_name; // [rsp+8h] [rbp-1080h]
  int v15; // [rsp+10h] [rbp-1078h]
  char s[4104]; // [rsp+40h] [rbp-1048h] BYREF
  unsigned __int64 v17; // [rsp+1048h] [rbp-40h]

  v4 = a1[1];
  v17 = __readfsqword(0x28u);
  idp_name = 0;
  v15 = v4;
  if ( (a3 & 1) != 0 )
    idp_name = get_idp_name(s);
  if ( (a3 & 2) != 0 )
  {
    v12 = idadir(a2);
    sub_833C20(a1, a3, v12, idp_name, 0);
    v6 = sub_834980();
    if ( v6[1] )
      goto LABEL_5;
    if ( !a2 )
      return (unsigned int)a1[1] - v15;
  }
  else
  {
    v6 = sub_834980();
    if ( v6[1] )
    {
LABEL_5:
      v7 = 0;
      do
      {
        v8 = *v6 + 24 * v7;
        v9 = haystack;
        if ( *(_QWORD *)(v8 + 8) )
          v9 = *(const char **)v8;
        ++v7;
        sub_833C20(a1, a3, (__int64)v9, a2, idp_name, 0);
      }
      while ( v7 < v6[1] );
      if ( !a2 )
        goto LABEL_14;
      goto LABEL_10;
    }
    if ( !a2 )
      goto LABEL_24;
  }
LABEL_10:
  if ( !strcmp(a2, "sig") )
  {
    v10 = "IDASGN";
  }
  else if ( !strcmp(a2, "ids") )
  {
    v10 = "IDAIDS";
  }
  else if ( !strcmp(a2, "idc") )
  {
    v10 = "IDAIDC";
  }
  else
  {
    if ( strcmp(a2, "til") )
      goto LABEL_14;
    v10 = "IDATIL";
  }
  if ( (unsigned __int8)qgetenv(v10) )
    sub_833C20(a1, a3, (__int64)haystack, idp_name, 0);
LABEL_14:
  if ( (a3 & 2) == 0 )
  {
LABEL_24:
    v13 = idadir(a2);
    sub_833C20(a1, a3, v13, idp_name, 0);
  }
  return (unsigned int)a1[1] - v15;
}
