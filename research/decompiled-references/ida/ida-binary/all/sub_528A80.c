unsigned __int64 __fastcall sub_528A80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64 *, __int64 *))
{
  __int64 v4; // rax
  __int64 v6; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __m128i v10; // xmm4
  __int64 v11; // r14
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // rdi
  __m128i v16; // xmm5
  const char *v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64); // rbp
  __m128i v19; // xmm1
  __int64 v20; // rbx
  __m128i v21; // xmm2
  __int64 v22; // rdi
  __int64 v23; // rcx
  __m128i v25; // [rsp+0h] [rbp-98h] BYREF
  __m128i v26; // [rsp+10h] [rbp-88h] BYREF
  __m128i v27; // [rsp+20h] [rbp-78h] BYREF
  __int64 v28; // [rsp+38h] [rbp-60h]
  __int64 (__fastcall *v29)(__int64, __int64); // [rsp+40h] [rbp-58h] BYREF
  __m128i v30; // [rsp+48h] [rbp-50h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v28 = a3;
  v31 = __readfsqword(0x28u);
  v4 = a2 - a1;
  if ( a2 - a1 > 384 )
  {
    v6 = a2;
    if ( v28 )
    {
      while ( 1 )
      {
        v8 = a1 + 24;
        --v28;
        v9 = v6;
        sub_527FC0(
          (__int64 *)a1,
          (__int64 *)(a1 + 24),
          (__int64 *)(a1
                    + 8
                    * (((__int64)(0xAAAAAAAAAAAAAAABLL * (v4 >> 3)) >> 1)
                     + ((0xAAAAAAAAAAAAAAABLL * (v4 >> 3)) & 0xFFFFFFFFFFFFFFFELL))),
          (__int64 *)(v6 - 24),
          a4);
        while ( 1 )
        {
          while ( (unsigned __int8)a4((__int64 *)v8, (__int64 *)a1) )
            v8 += 24LL;
          do
            v9 -= 24LL;
          while ( (unsigned __int8)a4((__int64 *)a1, (__int64 *)v9) );
          if ( v8 >= v9 )
            break;
          v10 = _mm_loadu_si128((const __m128i *)(v8 + 8));
          v11 = *(_QWORD *)v8;
          *(_QWORD *)v8 = 0;
          *(_OWORD *)(v8 + 8) = 0;
          v12 = *(_QWORD *)v9;
          v13 = _mm_loadu_si128((const __m128i *)(v9 + 8));
          *(_QWORD *)v9 = 0;
          *(_OWORD *)(v9 + 8) = 0;
          v14 = *(_QWORD *)v8;
          v25 = v10;
          if ( v14 )
          {
            *(_QWORD *)(v8 + 8) = 0;
            v26.m128i_i64[0] = v12;
            v27 = v13;
            qfree(v14, (const char *)v9);
            v13 = _mm_load_si128(&v27);
            v12 = v26.m128i_i64[0];
          }
          *(_QWORD *)v8 = v12;
          *(__m128i *)(v8 + 8) = v13;
          v15 = *(_QWORD *)v9;
          if ( *(_QWORD *)v9 )
          {
            *(_QWORD *)(v9 + 8) = 0;
            qfree(v15, (const char *)v9);
          }
          v16 = _mm_load_si128(&v25);
          *(_QWORD *)v9 = v11;
          v8 += 24LL;
          *(__m128i *)(v9 + 8) = v16;
        }
        sub_528A80(v8, v6, v28, a4);
        v4 = v8 - a1;
        if ( (__int64)(v8 - a1) <= 384 )
          break;
        v6 = v8;
        if ( !v28 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      v17 = (const char *)v6;
      v29 = (__int64 (__fastcall *)(__int64, __int64))a4;
      v25.m128i_i64[0] = (__int64)&v29;
      sub_528970(a1, v6, &v29);
      while ( v6 - a1 > 24 )
      {
        v18 = *(__int64 (__fastcall **)(__int64, __int64))(v6 - 24);
        v19 = _mm_loadu_si128((const __m128i *)(v6 - 16));
        v6 -= 24;
        *(_QWORD *)v6 = 0;
        *(_OWORD *)(v6 + 8) = 0;
        v20 = *(_QWORD *)a1;
        v21 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        *(_QWORD *)a1 = 0;
        *(_OWORD *)(a1 + 8) = 0;
        v22 = *(_QWORD *)v6;
        if ( *(_QWORD *)v6 )
        {
          *(_QWORD *)(v6 + 8) = 0;
          v27 = v19;
          v26 = v21;
          qfree(v22, v17);
          v19 = _mm_load_si128(&v27);
          v21 = _mm_load_si128(&v26);
        }
        *(_QWORD *)v6 = v20;
        v23 = v25.m128i_i64[0];
        *(__m128i *)(v6 + 8) = v21;
        v17 = nullptr;
        v29 = v18;
        v30 = v19;
        sub_5285F0(
          a1,
          nullptr,
          0xAAAAAAAAAAAAAAABLL * ((v6 - a1) >> 3),
          v23,
          (__int64 (__fastcall *)(__int64, __int64))a4);
        if ( v29 )
          qfree(v29, nullptr);
      }
    }
  }
  return v31 - __readfsqword(0x28u);
}
