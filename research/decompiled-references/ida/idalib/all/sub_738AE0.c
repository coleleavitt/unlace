__int64 __fastcall sub_738AE0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a1 + 588);
  *(_BYTE *)(a2 - result + 40) = 0;
  return result;
}
