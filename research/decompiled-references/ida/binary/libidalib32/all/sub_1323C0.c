__int64 __fastcall sub_1323C0(unsigned int a1)
{
  const char *v1; // rsi
  const char *v3; // [rsp+0h] [rbp-28h] BYREF
  __int64 v4; // [rsp+8h] [rbp-20h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  sub_131D70((__int64)&v3, a1, 1);
  v1 = v3;
  if ( !v4 )
    v1 = s1;
  sub_8F660((__int64)"%s", v1);
  if ( v3 )
  {
    v4 = 0;
    qfree();
  }
  return 1;
}

