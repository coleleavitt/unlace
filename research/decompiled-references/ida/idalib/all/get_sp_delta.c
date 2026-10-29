unsigned __int64 __fastcall get_sp_delta(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned __int64 v3; // rdx

  v2 = sub_5B9070(*(__m128i **)(qword_2CCB598 + 1672), a1, a2);
  v3 = 0;
  if ( v2 && a2 == *v2 && (v3 = v2[1], v2 != *(unsigned __int64 **)(a1 + 72)) )
    return v3 - *(v2 - 1);
  else
    return v3;
}
