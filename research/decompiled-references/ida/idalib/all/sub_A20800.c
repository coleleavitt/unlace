__int64 __fastcall sub_A20800(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int32 v3; // eax
  unsigned __int32 v5[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v3 = _byteswap_ulong(a2);
  if ( a3 == 1 )
    v3 = a2;
  v5[0] = v3;
  return sub_227BF10(a1, v5, 4);
}
