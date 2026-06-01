__int64 __fastcall sub_15E2450(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax

  v4 = *(_BYTE *)(a4 + 28) & 0x7F;
  if ( (unsigned int)(v4 - 49) <= 2 )
    return 1;
  if ( (unsigned int)(v4 - 40) > 6 || sub_9B48E0(a4) || (unsigned int)sub_B73370(a4) )
    return sub_15E2340(a2, a3);
  return 1;
}
