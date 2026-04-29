__int64 __fastcall sub_318B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64, __m128i *); // rax
  const __m128i *v5; // rax
  char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r13
  size_t v10; // r12
  __int128 v11; // kr00_16
  void *v12; // rdi
  __int64 v13; // rax
  char *s[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h]
  void *v16; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD *)a3;
  v18 = __readfsqword(0x28u);
  LOWORD(s[0]) = 0;
  v4 = *(__int64 (__fastcall **)(__int64, __m128i *))(v3 + 200);
  if ( v4 == sub_2D240 )
  {
    v5 = (const __m128i *)sub_2CEC0(*(__int64 **)(a3 + 16), 0x80000000LL, 0x80000000, 0x80000000LL);
    if ( !v5 )
      return 0;
    *(__m128i *)s = _mm_loadu_si128(v5);
    v15 = v5[1].m128i_i64[0];
  }
  else if ( (unsigned int)v4(a3, (__m128i *)s) )
  {
    return 0;
  }
  if ( LOWORD(s[0]) == 8 )
  {
    utf16_utf8(a2, s[1], 0xFFFFFFFFLL);
  }
  else
  {
    if ( LOWORD(s[0]) != 30 )
      return 0;
    v7 = s[1];
    v16 = nullptr;
    v17 = 0;
    if ( s[1] )
    {
      v8 = strlen(s[1]);
      v9 = v8 + 1;
      v10 = v8;
      v16 = (void *)qvector_reserve(&v16, 0, v8 + 1, 1);
      *(_QWORD *)&v17 = v9;
      memmove(v16, v7, v10);
      *((_BYTE *)v16 + v10) = 0;
      v7 = (char *)v16;
      v11 = v17;
    }
    else
    {
      v11 = 0u;
    }
    v12 = *(void **)a2;
    v13 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)a2 = v7;
    *(_OWORD *)(a2 + 8) = v11;
    v16 = v12;
    *((_QWORD *)&v17 + 1) = v13;
    if ( v12 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v12);
    }
  }
  return 1;
}
