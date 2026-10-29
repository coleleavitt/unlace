unsigned __int64 __fastcall sub_4B0C20(
        __int64 a1,
        const char *a2,
        char a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  const char *file_line; // rax
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  char v17; // [rsp+0h] [rbp-38h]
  unsigned int v18; // [rsp+Ch] [rbp-2Ch] BYREF
  const char *v19; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  file_line = (const char *)lex_get_file_line(a1, &v18, &v19, 0);
  if ( a3 )
    sub_16B930((__int64)"%s, %d: %s\n%s", file_line, v18, v19, a2);
  sub_169630(
    (int)"AUTOHIDE NONE\n%s, %d: %s\n%s",
    (__int64)file_line,
    v18,
    (__int64)v19,
    (__int64)a2,
    v13,
    a4,
    a5,
    a6,
    a7,
    v14,
    v15,
    a10,
    a11,
    v17);
  return v20 - __readfsqword(0x28u);
}
