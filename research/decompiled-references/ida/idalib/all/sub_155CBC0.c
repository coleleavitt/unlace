__int64 __fastcall sub_155CBC0(const __m128i *a1, char a2, char a3)
{
  __int16 v3; // ax
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rax

  v3 = a1[2].m128i_i16[0];
  if ( v3 == 158 )
    return ((**(_BYTE **)(a1->m128i_i64[1] + 56) >> 3) ^ 1) & 1;
  if ( (unsigned __int16)(v3 - 406) <= 8u )
    return 1;
  if ( v3 != 20 )
    return 0;
  v6 = a1->m128i_i64[1];
  v7 = *(_QWORD *)(v6 + 2944);
  if ( *(unsigned int *)(v6 + 2912) <= v7 )
    v8 = sub_14180A0(v6, 1u);
  else
    v8 = *(_QWORD *)(v6 + 2904) + 24 * v7;
  if ( *(_WORD *)(v8 + 16) == 20 )
    return sub_155C260(a1, a2, a3);
  else
    return 0;
}
