__int64 __fastcall sub_75E680(__int64 *a1, int a2, const void *a3, size_t a4)
{
  __int64 result; // rax

  sub_75E3A0(*a1, a2, a3, a4);
  result = *a1;
  *(_BYTE *)(*a1 + 104) = 1;
  return result;
}

