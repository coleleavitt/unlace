__int64 __fastcall sub_B55C30(__int64 a1)
{
  unsigned __int8 v1; // al

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v1 - 40 > 6 || v1 == 43 )
    return 0;
  else
    return *(_BYTE *)(a1 + 98) & 1;
}

