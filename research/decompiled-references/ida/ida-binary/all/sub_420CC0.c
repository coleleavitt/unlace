unsigned __int64 __fastcall sub_420CC0(
        char a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  const char *v19; // rdx
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-58h] BYREF
  __int128 v23; // [rsp+8h] [rbp-50h]
  const char *v24; // [rsp+20h] [rbp-38h] BYREF
  __int128 v25; // [rsp+28h] [rbp-30h]
  unsigned __int64 v26; // [rsp+38h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  v22 = 0;
  v23 = 0;
  if ( (_DWORD)a2 != 52 )
  {
    sub_169980(&v22, a3, a4, (__int64)a4, a5, a6);
    a2 = (unsigned int)a2;
    v24 = nullptr;
    v25 = 0;
    vault_errstr(&v24, (unsigned int)a2, 0);
    if ( !a1 )
      goto LABEL_6;
    v19 = &s1;
    if ( (_QWORD)v25 )
    {
      v19 = v24;
      a2 = (__int64)&s1;
      if ( !(_QWORD)v23 )
        goto LABEL_5;
    }
    else
    {
      a2 = (__int64)&s1;
      if ( !(_QWORD)v23 )
      {
LABEL_5:
        sub_169630((int)"%s\n%s", a2, (__int64)v19, v14, v15, v16, (__m128)0LL, a8, a9, a10, v17, v18, a13, a14, v22);
        goto LABEL_6;
      }
    }
    a2 = v22;
    goto LABEL_5;
  }
  v21 = qvector_reserve(&v22, 0, 29, 1);
  v22 = v21;
  a2 = 52;
  *(_QWORD *)&v23 = 29;
  *(__m128i *)v21 = _mm_load_si128((const __m128i *)&xmmword_5DDA70);
  v24 = nullptr;
  *(__m128i *)(v21 + 12) = _mm_load_si128((const __m128i *)&xmmword_5DDA80);
  v25 = 0;
  *(_BYTE *)(v22 + 28) = 0;
  vault_errstr(&v24, 52, 0);
LABEL_6:
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24, (const char *)a2);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, (const char *)a2);
  }
  return v26 - __readfsqword(0x28u);
}
