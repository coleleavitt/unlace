__int64 __fastcall sub_4433F0(__int64 a1, __int64 *a2, double a3, double a4, __m128 a5, __m128 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  _BYTE *v8; // r14
  signed __int64 v9; // r13
  _BYTE *v10; // rax
  void *v11; // rcx
  _BYTE *v12; // r15
  __int64 v13; // rbx
  __m128i v14; // xmm1
  __m128 si128; // xmm0
  _BYTE *v16; // rcx
  _BYTE *v17; // rdx
  char v19; // [rsp+Fh] [rbp-59h] BYREF
  __m128 v20; // [rsp+10h] [rbp-58h] BYREF
  _BYTE *v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v6 = a2[1];
  v7 = *a2;
  v22 = __readfsqword(0x28u);
  if ( v7 == v6 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
  }
  else
  {
    v8 = *(_BYTE **)v7;
    v9 = *(_QWORD *)(v7 + 8) - *(_QWORD *)v7;
    if ( v9 < 0 )
      std::__throw_length_error("cannot create std::vector larger than max_size()");
    if ( v9 )
    {
      v10 = (_BYTE *)operator new(v9);
      v11 = v10;
      v12 = &v10[v9];
      if ( v9 == 1 )
        *v10 = *v8;
      else
        v11 = memmove(v10, v8, v9);
      v6 = a2[1];
    }
    else
    {
      v11 = nullptr;
      v12 = nullptr;
    }
    v13 = v7 + 24;
    v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v12);
    if ( v13 != v6 )
    {
      do
      {
        a5 = _mm_movehl_ps(a5, (__m128)v14);
        v19 = 32;
        if ( v12 == (_BYTE *)a5.m128_u64[0] )
        {
          v21 = v12;
          v20 = (__m128)v14;
          sub_43FEF0((__int64)&v20, &v19);
          si128 = (__m128)_mm_load_si128((const __m128i *)&v20);
          v12 = v21;
        }
        else
        {
          *(_BYTE *)a5.m128_u64[0] = 32;
          si128 = (__m128)_mm_unpacklo_epi64(v14, (__m128i)(a5.m128_u64[0] + 1));
        }
        a6 = _mm_movehl_ps(a6, si128);
        v16 = *(_BYTE **)(v13 + 8);
        v17 = *(_BYTE **)v13;
        v21 = v12;
        v20 = si128;
        sub_43AED0((__int64)&v20, a6.m128_u64[0], v17, v16);
        v14 = _mm_load_si128((const __m128i *)&v20);
        v12 = v21;
        v13 += 24;
      }
      while ( a2[1] != v13 );
    }
    *(_QWORD *)(a1 + 16) = v12;
    *(__m128i *)a1 = v14;
  }
  return a1;
}
