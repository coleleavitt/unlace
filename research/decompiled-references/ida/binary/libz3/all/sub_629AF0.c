__int64 __fastcall sub_629AF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi

  v5 = a1[1];
  if ( v5 )
    sub_62A410(*a1 + 656LL, v5);
  *a1 = a2;
  a1[1] = a3;
  return sub_62A000(a2 + 656, a3);
}

