__int64 __fastcall add_user_stkpnt(unsigned __int64 a1, __int64 a2)
{
  __m128i *v2; // r12
  __int64 v3; // rax
  unsigned __int8 v5; // [rsp+Fh] [rbp-19h]

  v2 = *(__m128i **)(qword_2CCB598 + 1672);
  v3 = sub_5CAA10(v2);
  if ( !v3 )
    return 0;
  v5 = sub_5BA260(v2, v3, a1, a2);
  if ( !v5 )
    return 0;
  set_abits(a1, 2);
  return v5;
}
