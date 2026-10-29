__int64 __fastcall sub_59D545(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi

  while ( a2 )
  {
    v3 = sub_59D507(a1);
    sub_59DFA6(a3, v3);
    --a2;
    a1 += 8;
  }
  return a1;
}
