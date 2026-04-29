__int64 __fastcall sub_397570(
        __int64 a1,
        __int64 a2,
        const char *a3,
        unsigned __int8 a4,
        char a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 v17; // rbx
  _QWORD *v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __int64 v26; // rdx

  if ( !a2 )
    return 0;
  v17 = a2;
  if ( !sub_213140(*(_QWORD *)(a1 + 24), a3, -9) && (*(_BYTE *)(a2 + 26) & 2) == 0 )
  {
    v18 = *(_QWORD **)(a1 + 24);
    v19 = v18[54];
    if ( a4 )
    {
      sub_213D50(v18, a2, a3, 36);
      sub_2B9C00(*(_QWORD *)(a1 + 24));
      if ( a5 )
        goto LABEL_6;
    }
    else
    {
      sub_213D50(v18, a2, a3, 4);
      sub_2B9C00(*(_QWORD *)(a1 + 24));
      if ( a5 )
      {
LABEL_6:
        if ( (*(_BYTE *)(a2 + 25) & 1) != 0 )
          sub_397480(a1, a6, a7, a8, a9, v24, v25, a12, a13, a2, v20, v21, v22, v23);
        sub_38F620(a1, 0, v20);
        v26 = *(_QWORD *)(a1 + 24);
        v17 = 0;
        if ( (unsigned __int64)(0x4EC4EC4EC4EC4EC5LL * ((a2 - v19) >> 3)) < *(_QWORD *)(v26 + 440) )
          v17 = a2 - v19 + *(_QWORD *)(v26 + 432);
LABEL_10:
        sub_33E140(*(_QWORD *)(a1 + 128), 0x6Fu, a1, v17, a3, a4);
        return 1;
      }
    }
    if ( v19 != *(_QWORD *)(*(_QWORD *)(a1 + 24) + 432LL) )
    {
      if ( !under_debugger )
        sub_383060(0xCF0Eu, *(double *)a6.m128_u64);
      BUG();
    }
    goto LABEL_10;
  }
  return 0;
}
