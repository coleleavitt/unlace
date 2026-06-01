__int64 __fastcall sub_5893A0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 16);
  *(_BYTE *)(a1 + 16) = 1;
  return result;
}
