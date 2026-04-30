unsigned __int64 __fastcall sub_1CC990(__int64 a1, const char *a2)
{
  size_t v2; // rax
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v2 = 0;
  if ( a2 && *a2 )
    v2 = strlen(a2 + 1) + 1;
  QT::QString::fromUtf8(a1, v2, a2);
  return v4 - __readfsqword(0x28u);
}
