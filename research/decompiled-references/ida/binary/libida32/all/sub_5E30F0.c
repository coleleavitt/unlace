__int64 __fastcall sub_5E30F0(__int64 a1, const char *a2, __int64 a3)
{
  if ( (*(_BYTE *)(get_ph(a1, a2) + 12) & 2) != 0 )
    return sub_5E2E70(a1, (__int64)a2, a3, 2u);
  else
    return 1;
}

