_BOOL8 __fastcall sub_28FED0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 80) += sub_28F800(a1, a2);
  return (*(_BYTE *)(a1 + 8) & 8) != 0;
}
