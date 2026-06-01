/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40CC90
// Address: 0x0040CC90

//----- (0040CC90) --------------------------------------------------------
__m128i *__thiscall sub_40CC90(
        void (__thiscall ***this)(void *, int, int),
        int a2,
        int a3,
        __m128i *a4,
        unsigned int a5,
        _BYTE *a6)
{
  int v6; // eax

  (**this)(this, a2, a3);
  a4->m128i_i8[0] = 0;
  v6 = sub_45C7E0(a2, a4, a5 - 1);
  if ( v6 < 0 || v6 >= a5 )
  {
    *a6 = 0;
    return a4;
  }
  else
  {
    a4->m128i_i8[v6] = 0;
    return a4;
  }
}
