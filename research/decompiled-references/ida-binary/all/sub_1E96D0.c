__int64 __fastcall sub_1E96D0(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *(_DWORD *)(*a1 + 568) &= ~2u;
  return result;
}
