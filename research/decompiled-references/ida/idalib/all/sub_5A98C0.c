bool __fastcall sub_5A98C0(__int64 a1, const char *a2)
{
  int v2; // edx
  bool result; // al

  v2 = getinf(5);
  result = v2 == 11 || (unsigned int)(v2 - 22) <= 1;
  if ( !result && v2 == 10 )
    return *(_DWORD *)(get_ph(5, a2) + 4) == 0;
  return result;
}
