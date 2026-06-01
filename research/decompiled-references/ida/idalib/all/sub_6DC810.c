__int64 __fastcall sub_6DC810(
        __int64 a1,
        __int64 *a2,
        const char *a3,
        char *a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  __int64 *v16; // r8
  __int64 *v17; // rbp
  __int64 *v18; // r15
  const char *v19; // rdi
  size_t v20; // rax
  size_t v21; // rbp
  void *v22; // rdi
  size_t v23; // r13
  __int64 v24; // rax

  if ( (**(_QWORD **)(a1 + 8) & 0x100LL) != 0 )
  {
    if ( (unsigned int)sub_65DC60(*(__int64 **)(a1 + 16), a3, a4, 1, a5, a6, a7, a8, a9, a10, a11, a12) )
      return 0;
  }
  else
  {
    v16 = *(__int64 **)(a1 + 392);
    v17 = &v16[8 * *(_QWORD *)(a1 + 400)];
    if ( v16 == v17 )
      return 0;
    v18 = *(__int64 **)(a1 + 392);
    while ( 1 )
    {
      v19 = haystack;
      if ( v18[1] )
        v19 = (const char *)*v18;
      if ( !strcmp(v19, a3) )
        break;
      v18 += 8;
      if ( v17 == v18 )
        return 0;
    }
    if ( !v18 )
      return 0;
    if ( a4 && (v20 = strlen(a4), (v21 = v20) != 0) )
    {
      v22 = (void *)*v18;
      v23 = v20 + 1;
      if ( v18[2] < v20 + 1 )
      {
        v24 = qvector_reserve(v18, *v18, v20 + 1, 1);
        *v18 = v24;
        v22 = (void *)v24;
      }
      v18[1] = v23;
      memmove(v22, a4, v21);
      *(_BYTE *)(*v18 + v21) = 0;
    }
    else
    {
      v18[1] = 0;
    }
  }
  sub_6D8E00(a1, a3, a4);
  sub_6DC6D0(a1, a2, a4);
  return 1;
}
