__int64 __fastcall sub_10E40(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+8h] [rbp-40h]
  __int64 v5; // [rsp+10h] [rbp-38h] BYREF
  __int128 v6; // [rsp+18h] [rbp-30h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( a1 >= a3 )
    return -1;
  result = get_named_type_tid();
  if ( result == -1 )
  {
    v6 = 0;
    v5 = 0;
    sub_53A0(&v5);
    parse_decls();
    result = get_named_type_tid();
    if ( v5 )
    {
      v4 = result;
      *(_QWORD *)&v6 = 0;
      qfree();
      return v4;
    }
  }
  return result;
}
