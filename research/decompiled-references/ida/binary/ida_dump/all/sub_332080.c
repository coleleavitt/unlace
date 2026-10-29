unsigned __int64 __fastcall sub_332080(char **a1, int a2)
{
  char *v2; // rax
  __int64 v3; // rbx
  int utf8_char; // eax
  char v6; // [rsp+Fh] [rbp-39h] BYREF
  char *v7; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v2 = (char *)s1;
  if ( a1[1] )
    v2 = *a1;
  v7 = v2;
  v3 = 0;
  v6 = 0;
  while ( 1 )
  {
    utf8_char = get_utf8_char();
    if ( (unsigned int)(utf8_char - 1) > 0xFFFFFFFD || utf8_char == 92 && !(unsigned __int8)sub_3289B0(&v7, &v6) )
      break;
    ++v3;
  }
  if ( (unsigned __int64)a1[1] <= 1 )
    return v8 - __readfsqword(0x28u);
  else
    return sub_3295F0((__int64)a1, v3 - a2, 1);
}
