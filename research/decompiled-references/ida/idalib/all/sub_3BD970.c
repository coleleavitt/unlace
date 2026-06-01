__int64 __fastcall sub_3BD970(__int64 *a1, __m128i *a2, __int64 a3)
{
  __int64 v4; // rax

  if ( !(unsigned __int8)sub_3FC580(a1) )
    return sub_3BD8C0(a2, *a1, a3);
  v4 = sub_3FCED0(a1, a3);
  if ( v4 == -1 )
    return sub_3BD8C0(a2, *a1, a3);
  if ( a2 )
  {
    a2->m128i_i64[0] = v4;
    a2->m128i_i64[1] = sub_3FCF20(a1, v4) + v4;
  }
  return 2;
}
