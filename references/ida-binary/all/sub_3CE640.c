QT::QSplitter *__fastcall sub_3CE640(const char **a1)
{
  const char *v1; // rdx
  QT::QSplitter *v2; // rbx
  bool v4; // [rsp+Fh] [rbp-29h] BYREF
  const char *v5; // [rsp+10h] [rbp-28h] BYREF
  __int64 v6; // [rsp+18h] [rbp-20h]
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  sub_3C57E0((__int64)&v5, a1);
  v1 = &s1;
  if ( v6 )
    v1 = v5;
  v2 = sub_3CD600(&v4, (__int64)a1, v1, nullptr, nullptr);
  if ( v5 )
  {
    v6 = 0;
    qfree(v5, (const char *)a1);
  }
  return v2;
}
