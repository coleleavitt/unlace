__int64 __fastcall sub_21FFEF0(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rsi

  if ( *(_QWORD *)a1 == *a2 && (v4 = (__int64 *)a2[1]) != nullptr )
  {
    sub_C17220(*(__int64 **)(a1 + 8), v4);
    sub_C17220((__int64 *)(*(_QWORD *)(a1 + 8) + 24LL), (__int64 *)(a2[1] + 24));
    return a1;
  }
  else
  {
    if ( (__int64 *)a1 != a2 )
    {
      sub_A4F010(a1);
      sub_21FFE60((__int64 *)a1, a2);
    }
    return a1;
  }
}
