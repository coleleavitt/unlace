unsigned __int64 __fastcall sub_62980(__int64 a1, __int64 a2)
{
  bool v2; // zf
  const char *v4; // rsi
  const char *v5; // rdx
  const char *v7; // [rsp+0h] [rbp-28h] BYREF
  __int128 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 16) == 0;
  v9 = __readfsqword(0x28u);
  v8 = 0;
  v4 = s1;
  v7 = nullptr;
  if ( !v2 )
    v4 = *(const char **)(a1 + 8);
  tag_remove(&v7, v4, 0);
  v5 = s1;
  if ( (_QWORD)v8 )
    v5 = v7;
  sub_628C0(a2, (__int64)"title: \"%s\" ", v5);
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v9 - __readfsqword(0x28u);
}
