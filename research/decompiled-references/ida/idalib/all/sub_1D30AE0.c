unsigned __int16 *__fastcall sub_1D30AE0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  double v11; // xmm4_8
  double v12; // xmm5_8
  unsigned int *v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8

  sub_18C81B0(*a1);
  v13 = sub_1D307C0(a1, *(unsigned int **)(a2 + 16), 1u, a3, a4, a5, a6, v11, v12, a9, a10);
  if ( v13 == (unsigned int *)((char *)&dword_0 + 1) )
  {
    sub_190F620(*a1, a3);
    return (_WORD *)(&dword_0 + 1);
  }
  else
  {
    v14 = *a1;
    v15 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL;
    if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(a2 + 16) == v15 )
    {
      sub_190F620(v14, a3);
      return sub_19A3E40(*a1, (unsigned __int16 *)a2, v17, v18, v19, a3, a4);
    }
    else
    {
      return (unsigned __int16 *)sub_190F410(
                                   v14,
                                   *(_DWORD *)(a2 + 24),
                                   v15,
                                   *(_DWORD *)(a2 + 28),
                                   *(_DWORD *)(a2 + 4),
                                   a3);
    }
  }
}
