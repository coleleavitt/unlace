const char *__fastcall sub_13AE0(__int64 a1, _DWORD *a2)
{
  const char *v2; // rdx

  v2 = nullptr;
  if ( (*a2 & 0x10000000) != 0 )
  {
    v2 = "M32RX instructions";
    *a2 &= ~0x10000000u;
  }
  return v2;
}

