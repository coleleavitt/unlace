char __fastcall sub_C118B0(__int64 *a1, __int64 a2, unsigned int a3)
{
  char result; // al

  if ( a3 > 1 && a3 != 10 && ((1LL << a3) & 0x4E3) != 0 )
    return 1;
  if ( (*(_BYTE *)(sub_E32240(a2) + 1) & 0x20) != 0 )
    return sub_C0FB10(a2, *a1, a1[1], 1);
  result = 0;
  if ( a3 == 10 )
    return sub_C0FB10(a2, *a1, a1[1], 1);
  return result;
}
