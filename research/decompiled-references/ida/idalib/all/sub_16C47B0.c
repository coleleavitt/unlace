__int64 __fastcall sub_16C47B0(__int64 a1)
{
  unsigned __int8 v1; // dl

  v1 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v1 - 53 > 1 && ((v1 + 52) & 0x7Fu) > 1 )
    return a1;
  else
    return sub_B72ED0(a1);
}
