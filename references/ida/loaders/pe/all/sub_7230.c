__int64 __fastcall sub_7230(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v6; // [rsp+28h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  get_ash();
  op_offset_ex();
  if ( a4 )
    return create_xrefs_from();
  else
    return v6 - __readfsqword(0x28u);
}
