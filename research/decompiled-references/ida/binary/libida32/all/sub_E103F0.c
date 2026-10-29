__int64 __fastcall sub_E103F0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int32 v3; // eax
  __int64 v5; // rax
  __int64 v6; // rsi

  v3 = a2[1].m128i_i32[2];
  if ( !v3 || v3 == 2 )
  {
    v5 = a2[2].m128i_i64[0];
    if ( v5 || a2[3].m128i_i64[0] )
    {
      if ( v5 )
        goto LABEL_8;
LABEL_11:
      v6 = a2[3].m128i_i64[0];
      *(_BYTE *)(a1 + 4) &= ~1u;
      *(_DWORD *)a1 = 0;
      sub_A2FE60(a1, v6, 0, 0, 0);
      return a1;
    }
  }
  else
  {
    if ( v3 == 3 || a2[2].m128i_i64[1] )
      goto LABEL_8;
    if ( a2->m128i_i64[0] || a2[3].m128i_i64[0] )
    {
      if ( a2->m128i_i64[0] )
      {
LABEL_8:
        sub_E01600(a1, a2, a3);
        return a1;
      }
      goto LABEL_11;
    }
  }
  *(_BYTE *)(a1 + 4) &= ~1u;
  *(_DWORD *)a1 = 0;
  sub_A2FE60(a1, 0, 0, 0, 0);
  return a1;
}

