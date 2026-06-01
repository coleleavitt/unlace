__int64 __fastcall sub_14CD0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a1 + 366);
  if ( (_WORD)result == 0x8000 )
  {
    result = find_custom_fixup("MMIPS_HA16");
    *(_WORD *)(a1 + 366) = result;
  }
  return result;
}

