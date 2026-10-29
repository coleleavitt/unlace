/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4565E0
// Address: 0x004565E0

//----- (004565E0) --------------------------------------------------------
char __stdcall sub_4565E0(_WORD *a1, unsigned int a2, unsigned __int8 *a3)
{
  __m128i *v3; // esi
  __m128i *v4; // ecx
  unsigned int v5; // esi

  if ( !a3 || a1 && a2 < 2 )
    return 0;
  v3 = sub_465040((unsigned int)a3, 0x2Fu);
  v4 = sub_465040((unsigned int)a3, 0x5Cu);
  if ( v3 > v4 )
    v4 = v3;
  if ( v4 )
  {
    if ( v4 > (__m128i *)a3 && v4[-1].m128i_i8[15] == 58 )
      v4 = (__m128i *)((char *)v4 + 1);
    goto LABEL_13;
  }
  if ( a3[1] != 58 || (unsigned int)(sub_4692B4(*a3) - 97) > 0x19 )
  {
    if ( a1 )
      *a1 = 46;
    return 0;
  }
  v4 = (__m128i *)(a3 + 2);
LABEL_13:
  v5 = a2 - 1;
  if ( (char *)v4 - (char *)a3 < a2 )
    v5 = (char *)v4 - (char *)a3;
  if ( !v5 && (v4->m128i_i8[0] == 47 || v4->m128i_i8[0] == 92) )
    v5 = 1;
  if ( a1 )
  {
    if ( a1 != (_WORD *)a3 )
      sub_464310((unsigned int)a1, (unsigned int)a3, v5);
    *((_BYTE *)a1 + v5) = 0;
  }
  return 1;
}
