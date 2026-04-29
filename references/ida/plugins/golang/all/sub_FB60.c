unsigned __int64 __fastcall sub_FB60(__int64 a1, __int64 *a2)
{
  char **v3; // r14
  int i; // r13d
  __int64 v5; // [rsp+10h] [rbp-50h] BYREF
  __int128 v6; // [rsp+18h] [rbp-48h]
  unsigned __int64 v7; // [rsp+28h] [rbp-38h]

  v7 = __readfsqword(0x28u);
  if ( get_named_type_tid() == -1 )
  {
    v5 = 0;
    v6 = 0;
    sub_CCD0(&v5);
    parse_decls();
    get_named_type_tid();
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree();
    }
  }
  if ( get_named_type_tid() == -1 )
  {
    v6 = 0;
    v5 = 0;
    sub_CCD0(&v5);
    v3 = &off_278E0;
    for ( i = 0; i != 27; ++i )
    {
      sub_F880(&v5);
      v3 += 3;
    }
    sub_F880(&v5);
    sub_F880(&v5);
    sub_F880(&v5);
    parse_decls();
    get_named_type_tid();
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree();
    }
  }
  sub_F880(a2);
  return v7 - __readfsqword(0x28u);
}
