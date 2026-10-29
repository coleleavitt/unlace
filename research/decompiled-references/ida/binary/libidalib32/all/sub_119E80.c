__int64 sub_119E80()
{
  const char *v1; // rbx
  const char *v2; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v3; // [rsp+8h] [rbp-20h]
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  sub_118900((__int64)&v2, 0, 0, "Run script");
  if ( v3 > 1 )
  {
    v1 = v2;
    reg_update_strlist();
    sub_1960C0("Recent scripts", 0);
    sub_1185D0(v1);
  }
  if ( v2 )
  {
    v3 = 0;
    qfree();
  }
  return 1;
}

