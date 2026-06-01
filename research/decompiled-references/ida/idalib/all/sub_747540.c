bool __fastcall sub_747540(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  bool result; // al
  int v4; // edi

  v2 = sub_7A0520();
  result = 0;
  if ( *(_QWORD *)(v2 + 8) > 1u )
  {
    v4 = *(unsigned __int16 *)(a2 + 24);
    if ( (unsigned __int16)(v4 - 33) <= 0x5Eu )
      return isspace(v4) == 0;
  }
  return result;
}
