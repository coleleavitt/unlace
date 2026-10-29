__int64 __fastcall sub_90AD0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !*(_BYTE *)(a1 + 196) )
  {
    sub_904B0((__int64 *)(a1 + 48), a1, a2, a3);
    *(_BYTE *)(a1 + 196) = 1;
  }
  return a1 + 48;
}

