unsigned __int64 __fastcall get_effective_spd(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __m128i *v3; // r12
  unsigned __int64 *v4; // rax
  __int64 v5; // rdx

  v2 = a2;
  v3 = *(__m128i **)(qword_2CCB598 + 1672);
  if ( (get_aflags(a2) & 0x8000000) != 0 )
    v2 = sub_3C1F00(v3, a2);
  v4 = sub_5B9070(v3, a1, v2);
  v5 = 0;
  if ( v4 )
    return v4[1];
  return v5;
}
