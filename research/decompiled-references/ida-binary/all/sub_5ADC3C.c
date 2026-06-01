__int64 __fastcall sub_5ADC3C(unsigned __int64 a1)
{
  unsigned __int64 v2; // [rsp+0h] [rbp-18h]
  unsigned int v3; // [rsp+14h] [rbp-4h]

  v2 = a1;
  if ( !a1 )
    return 1;
  v3 = 0;
  while ( v2 )
  {
    ++v3;
    v2 /= 0xAu;
  }
  return v3;
}
