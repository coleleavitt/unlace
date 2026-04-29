unsigned __int64 __fastcall sub_2C2A90(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __m128i v7; // xmm0
  __int64 v8; // rbx
  __m128i v9; // xmm0
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  unsigned __int64 v16; // rbx
  __m128i v17; // xmm0
  __int64 v18; // r14
  __m128i v19; // xmm0
  __int64 v20; // rdi
  __int64 (__fastcall **v21)(); // [rsp+10h] [rbp-E8h] BYREF
  __m128i v22; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+28h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+30h] [rbp-C8h]
  char v25; // [rsp+40h] [rbp-B8h]
  __m128i v26; // [rsp+48h] [rbp-B0h] BYREF
  int v27; // [rsp+58h] [rbp-A0h]
  __int64 (__fastcall **v28)(); // [rsp+60h] [rbp-98h]
  __m128i v29; // [rsp+68h] [rbp-90h] BYREF
  __int64 v30; // [rsp+78h] [rbp-80h] BYREF
  __int128 v31; // [rsp+80h] [rbp-78h]
  char v32; // [rsp+90h] [rbp-68h]
  __m128i v33; // [rsp+98h] [rbp-60h] BYREF
  int v34; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+B8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v25 = 0;
    v24 = 0;
    v22.m128i_i64[0] = -1;
    v22.m128i_i32[2] = 0;
    v23 = 0;
    v26.m128i_i64[0] = -1;
    v26.m128i_i32[2] = 0;
    v27 = -2;
    v21 = off_4B3CC0;
    if ( a2 < v2 )
    {
      v11 = a2;
      do
      {
        v12 = (_QWORD *)(*a1 + 80 * v11);
        v13 = v12[3];
        *v12 = off_4B3C98;
        if ( v13 )
        {
          v12[4] = 0;
          qfree(v13);
        }
        ++v11;
      }
      while ( v2 != v11 );
      a1[1] = a2;
    }
    else
    {
      v5 = *a1;
      v6 = a1[2];
      if ( (unsigned __int64)&v21 < *a1 || (unsigned __int64)&v21 >= v5 + 80 * v6 )
      {
        if ( v6 < a2 )
        {
          *a1 = qvector_reserve(a1, v5, a2, 80);
          v2 = a1[1];
        }
        for ( ; v2 < a2; *(__m128i *)(v8 + 56) = v9 )
        {
          v7 = _mm_loadu_si128(&v22);
          v8 = *a1 + 80 * v2;
          *(_QWORD *)v8 = off_4B3C98;
          *(_QWORD *)(v8 + 24) = 0;
          *(__m128i *)(v8 + 8) = v7;
          *(_OWORD *)(v8 + 32) = 0;
          sub_2A9720((_QWORD *)(v8 + 24), (__int64)&v23);
          v9 = _mm_loadu_si128(&v26);
          ++v2;
          *(_BYTE *)(v8 + 48) = 0;
          *(_DWORD *)(v8 + 72) = -2;
          *(_QWORD *)v8 = off_4B3CC0;
        }
        a1[1] = a2;
      }
      else
      {
        v14 = _mm_loadu_si128(&v22);
        v30 = 0;
        v28 = off_4B3C98;
        v29 = v14;
        v31 = 0;
        sub_2A9720(&v30, (__int64)&v23);
        v15 = _mm_loadu_si128(&v26);
        v32 = 0;
        v34 = -2;
        v28 = off_4B3CC0;
        v33 = v15;
        if ( a1[2] < a2 )
          *a1 = qvector_reserve(a1, *a1, a2, 80);
        v16 = a1[1];
        if ( v16 < a2 )
        {
          do
          {
            v17 = _mm_loadu_si128(&v29);
            v18 = *a1 + 80 * v16;
            *(_QWORD *)v18 = off_4B3C98;
            *(_QWORD *)(v18 + 24) = 0;
            *(__m128i *)(v18 + 8) = v17;
            *(_OWORD *)(v18 + 32) = 0;
            sub_2A9720((_QWORD *)(v18 + 24), (__int64)&v30);
            v19 = _mm_loadu_si128(&v33);
            ++v16;
            *(_BYTE *)(v18 + 48) = 0;
            *(_DWORD *)(v18 + 72) = -2;
            *(_QWORD *)v18 = off_4B3CC0;
            *(__m128i *)(v18 + 56) = v19;
          }
          while ( a2 != v16 );
        }
        v20 = v30;
        a1[1] = a2;
        if ( v20 )
          qfree(v20);
      }
    }
  }
  return v35 - __readfsqword(0x28u);
}
