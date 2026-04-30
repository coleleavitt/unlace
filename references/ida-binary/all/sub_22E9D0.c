__int64 __fastcall exc_chooser_t__::vfunc_12(
        __int64 a1,
        _QWORD *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  unsigned __int64 v14; // rbx
  unsigned int v15; // ebp
  __int64 v16; // rdx

  if ( !a2[1] )
    return 0;
  v14 = 0;
  v15 = 0;
  do
  {
    v16 = *(_QWORD *)(*a2 + 8 * v14++);
    v15 |= (unsigned __int8)sub_22E8C0(
                              (unsigned int *)(qword_8CC2F0 + 56 * v16),
                              a3,
                              a4,
                              a5,
                              a6,
                              a7,
                              a8,
                              a9,
                              a10,
                              (__int64)a2,
                              qword_8CC2F0,
                              a12,
                              a13,
                              a14);
  }
  while ( v14 < a2[1] );
  if ( v15 == 1 )
    *(_BYTE *)(a1 + 180) = 1;
  return v15;
}
