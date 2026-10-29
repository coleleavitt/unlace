size_t __fastcall qstrftime(char *s, size_t maxsize, char *format)
{
  char v4; // dl
  size_t result; // rax
  struct tm v6; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v4 = qlocaltime(&v6);
  result = 0;
  if ( v4 )
    return strftime(s, maxsize, format, &v6);
  return result;
}
