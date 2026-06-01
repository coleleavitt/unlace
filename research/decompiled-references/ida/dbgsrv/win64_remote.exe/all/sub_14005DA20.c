/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005DA20
// Address: 0x000000014005DA20

//----- (000000014005DA20) ----------------------------------------------------
char __fastcall sub_14005DA20(__m128i *a1, unsigned __int64 a2, __m128i *a3)
{
  __m128i *v6; // rbx
  __m128i *v7; // rcx
  size_t v8; // rbx

  if ( !a3 || a1 && a2 < 2 )
    return 0;
  v6 = sub_14006CA94(a3, 0x2Fu);
  v7 = sub_14006CA94(a3, 0x5Cu);
  if ( v6 > v7 )
    v7 = v6;
  if ( v7 )
  {
    if ( v7 > a3 && v7[-1].m128i_i8[15] == 58 )
      v7 = (__m128i *)((char *)v7 + 1);
    goto LABEL_13;
  }
  if ( a3->m128i_i8[1] != 58 || (unsigned int)(tolower(a3->m128i_u8[0]) - 97) > 0x19 )
  {
    if ( a1 )
      a1->m128i_i16[0] = 46;
    return 0;
  }
  v7 = (__m128i *)&a3->m128i_i16[1];
LABEL_13:
  v8 = a2 - 1;
  if ( (char *)v7 - (char *)a3 < a2 )
    v8 = (char *)v7 - (char *)a3;
  if ( !v8 && (v7->m128i_i8[0] == 47 || v7->m128i_i8[0] == 92) )
    v8 = 1;
  if ( a1 )
  {
    if ( a1 != a3 )
      memcpy(a1, a3, v8);
    a1->m128i_i8[v8] = 0;
  }
  return 1;
}
