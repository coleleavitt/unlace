__int64 __fastcall sub_228E700(__int64 a1, _QWORD *a2, char a3)
{
  bool v3; // cc

  v3 = *(_BYTE *)(a1 + 32) <= 1u;
  a2[1] = 0;
  if ( !v3 )
    return sub_228E4B0((size_t *)a1, a2, a3);
  std::_V2::system_category((std::_V2 *)a1);
  return 0;
}
