__int64 __fastcall sub_77EAD0(__int64 *a1, __int64 a2, const void *a3, size_t a4)
{
  __int64 result; // rax

  sub_77E7F0(*a1, a2, a3, a4);
  result = *a1;
  *(_BYTE *)(*a1 + 108) = 1;
  return result;
}
