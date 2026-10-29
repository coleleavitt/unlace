unsigned __int64 __fastcall sub_5C61D0(__int64 a1)
{
  __int64 v2; // rdi
  const char *file_line; // rax
  int v5; // [rsp+Ch] [rbp-43Ch] BYREF
  char s[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v7; // [rsp+418h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 232);
  v7 = __readfsqword(0x28u);
  file_line = (const char *)lex_get_file_line(v2, &v5, 0, 0);
  if ( file_line )
    (*(void (**)(const char *, ...))(a1 + 264))("Warning %s:%d: ", file_line, v5);
  qvsnprintf(s);
  (*(void (**)(const char *, ...))(a1 + 264))("%s\n", s);
  return v7 - __readfsqword(0x28u);
}

