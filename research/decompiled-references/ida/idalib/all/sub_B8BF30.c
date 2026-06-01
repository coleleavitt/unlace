__int64 __fastcall sub_B8BF30(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // dl

  result = a1;
  v2 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v2 - 34 > 5 )
  {
    if ( v2 == 71 )
      return *(_QWORD *)(a1 + 48);
    else
      return 0;
  }
  return result;
}
