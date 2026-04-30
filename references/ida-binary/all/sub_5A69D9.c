__int64 __fastcall sub_5A69D9(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi

  while ( a2 )
  {
    v3 = sub_5A699B(a1);
    sub_5A708A(a3, v3);
    --a2;
    ++a1;
  }
  return a1;
}
