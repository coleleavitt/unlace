__int64 __fastcall sub_14C40(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a1 + 368);
  if ( (_WORD)result == 0x8000 )
  {
    result = find_custom_fixup("MMIPS_LO16");
    *(_WORD *)(a1 + 368) = result;
  }
  return result;
}
