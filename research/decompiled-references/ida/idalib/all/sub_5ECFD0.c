__int64 __fastcall sub_5ECFD0(__int64 a1)
{
  __int64 v1; // rsi

  v1 = *(_QWORD *)(a1 + 544);
  if ( !v1 )
    v1 = 1;
  if ( *(_BYTE *)(a1 + 757) )
    v1 *= 2;
  sub_5ECF10((_QWORD *)a1, v1);
  return 0;
}
