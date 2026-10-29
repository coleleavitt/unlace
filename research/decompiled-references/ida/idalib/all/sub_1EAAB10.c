bool __fastcall sub_1EAAB10(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(sub_B8C330(a1) + 2320);
  result = 0;
  if ( (*(_BYTE *)(v1 + 21) & 8) != 0 )
  {
    result = sub_B8D940(a1);
    if ( !result )
      return sub_B8DB40(a1);
  }
  return result;
}
