__int64 __fastcall sub_1E7E90(
        __int64 a1,
        const char *a2,
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
  _QWORD *v15; // r12
  __int64 result; // rax
  char *v17; // rdi
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  char v20; // [rsp+0h] [rbp-28h]

  v15 = *(_QWORD **)a1;
  result = 8LL * *(_QWORD *)(a1 + 8);
  if ( result )
  {
    do
    {
      v17 = (char *)qword_8CB4F0;
      v18 = qword_8CB4F0 + 8 * xmmword_8CB4F8;
      if ( qword_8CB4F0 == v18 )
        goto LABEL_12;
      while ( *v15 != *(_QWORD *)v17 )
      {
        v17 += 8;
        if ( (char *)v18 == v17 )
          goto LABEL_12;
      }
      if ( (char *)v18 == v17 )
      {
LABEL_12:
        sub_169700(
          (int)"Coherency check failed: currently_being_synced.del(cur)\n",
          (__int64)a2,
          v18,
          a12,
          a13,
          a14,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          v20);
      }
      else
      {
        a2 = v17 + 8;
        memmove(v17, v17 + 8, v18 - (_QWORD)v17 - 8);
        *(_QWORD *)&xmmword_8CB4F8 = xmmword_8CB4F8 - 1;
      }
      v19 = *(_QWORD **)a1;
      ++v15;
      result = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
    }
    while ( v15 != (_QWORD *)result );
  }
  else
  {
    v19 = *(_QWORD **)a1;
  }
  if ( v19 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    return qfree(v19, a2);
  }
  return result;
}
