__int64 __fastcall line_rendering_t::build_formats(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdi

  v2 = 47;
  v3 = *(_QWORD *)(a1 + 200);
  if ( a2 < 0xDu )
    v2 = (unsigned __int8)(a2 + 40);
  return sub_524F80(v3 + 40, v2, 1);
}
