unsigned __int64 __fastcall sub_923A0(const char *src, char a2, char a3)
{
  char *v4; // r12
  size_t v5; // r14
  size_t v6; // rdx
  const char *v7; // rsi
  char *v8; // [rsp+10h] [rbp-58h]
  __int128 v9; // [rsp+18h] [rbp-50h]
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( a3 )
  {
    sub_8F740((__int64)"%s\n", src);
    if ( !a2 )
      return v10 - __readfsqword(0x28u);
  }
  else if ( !a2 )
  {
    return v10 - __readfsqword(0x28u);
  }
  v9 = 0;
  v8 = (char *)qvector_reserve();
  *(_QWORD *)&v9 = 15;
  strcpy(v8, "AUTOHIDE NONE\n");
  v4 = v8;
  if ( src )
  {
    v5 = strlen(src);
    v6 = v5 + 15;
    if ( *((_QWORD *)&v9 + 1) < v5 + 15 )
    {
      v8 = (char *)qvector_reserve();
      v6 = v5 + 15;
      v4 = v8;
    }
    *(_QWORD *)&v9 = v6;
    v4[v5 + 14] = 0;
    memmove(v8 + 14, src, v5);
  }
  v7 = s1;
  if ( (_QWORD)v9 )
    v7 = v8;
  sub_92200((__int64)"%s", v7);
  if ( v8 )
    qfree();
  return v10 - __readfsqword(0x28u);
}

