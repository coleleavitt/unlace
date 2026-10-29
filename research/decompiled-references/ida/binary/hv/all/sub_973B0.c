size_t __fastcall sub_973B0(char *s, size_t maxsize, char *format, unsigned __int64 a4)
{
  bool v5; // dl
  size_t result; // rax
  struct tm v7; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v5 = sub_97300(&v7, HIDWORD(a4));
  result = 0;
  if ( v5 )
    return strftime(s, maxsize, format, &v7);
  return result;
}

