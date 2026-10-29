__int64 __fastcall sub_B53D40(__int64 a1)
{
  unsigned int v1; // eax

  LOBYTE(v1) = ((*(__int64 *)(a1 + 152) >> 1) & 3) == 3;
  return (((*(__int64 *)(a1 + 152) >> 1) & 3) == 2) | v1;
}

