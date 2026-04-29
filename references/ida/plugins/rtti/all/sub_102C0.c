unsigned __int64 __fastcall sub_102C0(__int64 a1, const char *a2)
{
  char *v2; // rax
  unsigned __int64 v4; // [rsp+18h] [rbp-30h]

  v4 = __readfsqword(0x28u);
  get_cmt();
  v2 = strstr(&haystack, a2);
  if ( !v2 || v2 - &haystack == -1 )
    append_cmt();
  return v4 - __readfsqword(0x28u);
}
