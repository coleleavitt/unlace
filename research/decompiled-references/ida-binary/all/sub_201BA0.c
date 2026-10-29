const char *__fastcall sub_201BA0(__int64 *a1, const char *a2)
{
  const char *v2; // rcx
  const char *v3; // rdx
  const char *v4; // rbp
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v6 = 0;
  v7 = 0;
  v2 = sub_1F9F60(&v6, a2);
  v3 = "reg";
  if ( !*a2 )
    v3 = "view";
  sub_169A50(a1, (__int64)"%s:%s", v3, v2);
  v4 = &s1;
  if ( a1[1] )
    v4 = (const char *)*a1;
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6, "%s:%s");
  }
  return v4;
}
