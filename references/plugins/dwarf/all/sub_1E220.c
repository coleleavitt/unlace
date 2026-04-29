unsigned __int64 __fastcall sub_1E220(__int64 a1, char *a2)
{
  char *v2; // rbx
  unsigned int v4; // [rsp+Ch] [rbp-1Ch] BYREF
  __int64 v5; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v2 = a2;
  lex_get_file_line(a1, &v4, &v5, 0);
  if ( !a2 )
    v2 = "";
  sub_1E060((__int64)"Invalid configuration at line %d: %s %s\n", v4, v5, v2);
  return v6 - __readfsqword(0x28u);
}
