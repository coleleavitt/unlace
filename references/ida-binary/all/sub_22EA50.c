__int64 __fastcall exc_chooser_t__::vfunc_13(
        _BYTE *a1,
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
  __int64 (*v14)(void); // rax
  int v15; // r13d
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx

  v14 = *(__int64 (**)(void))(*(_QWORD *)a1 + 96LL);
  if ( (char *)v14 != (char *)exc_chooser_t__::vfunc_12 )
    return v14();
  if ( !a2[1] )
    return 0;
  v15 = 0;
  v16 = 0;
  do
  {
    v17 = *(_QWORD *)(*a2 + 8 * v16++);
    v15 |= (unsigned __int8)sub_22E8C0(
                              (unsigned int *)(qword_8CC2F0 + 56 * v17),
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
  while ( v16 < a2[1] );
  if ( v15 != 1 )
    return 0;
  a1[180] = 1;
  return 1;
}
