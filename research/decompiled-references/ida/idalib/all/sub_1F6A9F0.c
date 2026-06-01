__int64 __fastcall sub_1F6A9F0(__int64 *a1, __int64 *a2)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_B84BB0(*a1, *a2);
  v3 = -1;
  if ( v2 >= 0 )
    return (unsigned int)sub_B84BB0(*a2, *a1) >> 31;
  return v3;
}
