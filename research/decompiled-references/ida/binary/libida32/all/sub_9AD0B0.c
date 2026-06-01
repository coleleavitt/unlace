__int64 __fastcall sub_9AD0B0(_QWORD *a1, const __m128i *a2, const __m128i **a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  const __m128i *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9

  v3 = a2->m128i_i64[1];
  if ( v3 )
  {
    v4 = a2[1].m128i_i64[0];
    v5 = (const __m128i *)sub_9AD0B0(a1, v3);
    return sub_9ACEE0(a1, v5, a2 + 3, v4, v6, v7);
  }
  else
  {
    *a3 = a2;
    return a2[1].m128i_i64[0];
  }
}

