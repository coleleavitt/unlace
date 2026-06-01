__int64 __fastcall sub_59FC6F(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi

  while ( a2 )
  {
    v3 = sub_59D1C7(a1);
    sub_59FF04(a3, v3);
    --a2;
    a1 += 4;
  }
  return a1;
}
