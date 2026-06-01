__int64 __fastcall line_rendering_t::build_formats(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 200);
  if ( a2 >= 0x28u )
    a2 = 18;
  return sub_524F80(v2 + 40, a2, 1);
}
