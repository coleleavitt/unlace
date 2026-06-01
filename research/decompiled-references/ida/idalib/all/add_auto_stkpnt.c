__int64 __fastcall add_auto_stkpnt(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __m128i *v4; // r13

  if ( !a1 )
    return 0;
  v4 = *(__m128i **)(qword_2CCB598 + 1672);
  if ( (get_aflags(a2) & 2) != 0 )
    return 0;
  else
    return sub_5BA260(v4, a1, a2, a3);
}
