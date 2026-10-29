__int64 __fastcall checkout_for_move_or_copy_action_t__::vfunc_0(
        __int64 a1,
        __int64 *a2,
        double a3,
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
  __int64 v14; // r13
  __int64 v15; // rbp
  unsigned int v16; // ebx
  int v17; // eax

  v14 = *a2;
  v15 = *a2 + 48 * a2[1];
  if ( v15 == *a2 )
  {
    return 0;
  }
  else
  {
    v16 = 0;
    do
    {
      v17 = sub_4376C0(
              *(_BYTE *)(a1 + 8),
              (char *)v14,
              (*(_BYTE *)(v14 + 24) & 0x20) != 0,
              *(unsigned int *)(v14 + 32),
              a13,
              a14,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9,
              a10);
      if ( v17 == 2 )
        break;
      v14 += 48;
      v16 |= ((unsigned __int8)v17 ^ 1) & 1;
    }
    while ( v14 != v15 );
  }
  return v16;
}
