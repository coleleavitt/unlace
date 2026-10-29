__int64 __fastcall sub_14D00(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a1 + 358);
  if ( (_WORD)result == 0x8000 )
  {
    result = find_custom_fixup("MIPS16_HA16");
    *(_WORD *)(a1 + 358) = result;
  }
  return result;
}

