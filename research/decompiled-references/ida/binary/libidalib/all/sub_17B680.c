unsigned __int64 __fastcall sub_17B680(__int64 a1, const char *a2, char a3)
{
  const char *file_line; // rax
  __int64 v5; // r9
  char v7; // [rsp+0h] [rbp-38h]
  unsigned int v8; // [rsp+Ch] [rbp-2Ch]
  const char *v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  file_line = (const char *)lex_get_file_line();
  if ( a3 )
    sub_92050((__int64)"%s, %d: %s\n%s", (__int64)file_line, v8, (__int64)v9, (__int64)a2, v5, v7);
  sub_92200((__int64)"AUTOHIDE NONE\n%s, %d: %s\n%s", file_line, v8, v9, a2);
  return v10 - __readfsqword(0x28u);
}

