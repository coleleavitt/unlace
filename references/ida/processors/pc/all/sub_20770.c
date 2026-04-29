__int64 __fastcall sub_20770(__int64 a1)
{
  __int64 result; // rax

  *(_WORD *)(a1 + 5248) = register_custom_fixup();
  result = register_custom_fixup();
  *(_WORD *)(a1 + 5250) = result;
  return result;
}
