__int64 __fastcall sub_4EDEF0(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rsi

  if ( a1 )
  {
    v5 = sub_4EDCD0((__int64)a1, a2, 1, a3, a4);
    if ( v5 )
    {
LABEL_3:
      sub_4EA7A0(a1, v5, *(_QWORD *)(a2 + 40));
      return 1;
    }
  }
  else if ( *(char *)(a2 + 144) < 0 )
  {
    if ( a2 )
    {
      v5 = *(_QWORD *)(a2 + 48);
      if ( v5 )
        goto LABEL_3;
    }
  }
  return 0;
}
