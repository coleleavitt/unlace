__int64 __fastcall sub_3862A0(char *s, const char *a2)
{
  char *v2; // rbx
  char *v3; // rax
  char v4; // dl
  char *v5; // rdx
  __int64 v6; // rax
  __int64 result; // rax
  char *v8; // rbp
  char *v9; // rax
  char *v10; // rbp
  char *v11; // rax
  char *v12; // [rsp+8h] [rbp-30h] BYREF
  char *v13[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = s;
  v13[1] = (char *)__readfsqword(0x28u);
  v12 = s;
  sub_384D70(&v12);
  if ( (_DWORD)a2 == 2 )
  {
    a2 = (_BYTE *)(&dword_78 + 3);
    v8 = strchr(s, 123);
    if ( v8 )
    {
      a2 = "//";
      v9 = strstr(s, "//");
      if ( !v9 )
        v9 = &s[strlen(s)];
      if ( v8 < v9 )
        return 1;
    }
    v3 = v12;
    v4 = *v12;
    if ( *v12 == 47 )
    {
      if ( v12[1] == 47 )
        return 2;
      goto LABEL_5;
    }
  }
  else
  {
    v3 = v12;
    v4 = *v12;
  }
  if ( v4 != 100 || v3[1] != 111 || v3[2] != 2 || v3[3] != 32 )
  {
LABEL_5:
    v13[0] = v3;
    sub_384D70(v13);
    v5 = v13[0];
    if ( *v13[0] && (*v13[0] != 47 || v13[0][1] != 47) )
    {
      while ( *v2 != 1 || v2[1] != 32 )
      {
        v6 = tag_skipcode(v2, a2, v5);
        if ( v2 == (char *)v6 )
          return 0;
        v2 = (char *)v6;
      }
    }
    return 1;
  }
  v10 = strchr(s, 123);
  result = 2;
  if ( v10 )
  {
    v11 = strstr(s, "//");
    if ( !v11 )
      v11 = &s[strlen(s)];
    if ( v10 >= v11 )
      return 2;
    return 1;
  }
  return result;
}
