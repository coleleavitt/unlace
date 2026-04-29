__int64 __fastcall sub_52B40(__int64 a1, const char *a2)
{
  __int64 named_type_tid; // rbp
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v4 = 0;
  v5 = 0;
  sub_30660(&v4);
  parse_decls();
  named_type_tid = get_named_type_tid();
  if ( named_type_tid == -1 )
  {
    sub_51660((__int64)"Internal error: failed to create '%s' declaration!", a2);
  }
  else
  {
    get_type_ordinal();
    set_type_choosable();
  }
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return named_type_tid;
}
