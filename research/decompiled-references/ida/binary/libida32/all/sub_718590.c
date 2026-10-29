__int64 __fastcall sub_718590(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a1 + 588);
  *(_BYTE *)(a2 - result + 40) = 1;
  return result;
}

