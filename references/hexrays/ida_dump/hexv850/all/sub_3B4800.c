__int64 __fastcall sub_3B4800(__int64 a1, __m128i *a2)
{
  __int32 v2; // eax

  sub_385410(a2, 0);
  v2 = a2[3].m128i_i32[2];
  if ( v2 == 3 )
    return (unsigned __int8)sub_389960((__int64)a2);
  if ( v2 == 4 )
    return (unsigned __int8)sub_3897F0((__int64)a2, a2 + 4);
  return 0;
}
