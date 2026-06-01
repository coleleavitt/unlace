__int64 __fastcall sub_11E7430(__int64 a1, const __m128i *a2)
{
  __int8 v4; // al
  bool v5; // zf
  void *v6; // rdi
  void *v8; // rdi
  __int32 v9; // eax
  __int64 v10; // rdi
  __m128i *v11; // rsi
  const __m128i *v12; // rdx
  __m128i si128; // xmm4
  __int32 v14; // eax

  v4 = a2[12].m128i_i8[0];
  if ( *(_BYTE *)(a1 + 192) )
  {
    if ( v4 )
    {
      v9 = a2->m128i_i32[0];
      v10 = a1 + 64;
      v11 = (__m128i *)&a2[4];
      *(_DWORD *)(v10 - 64) = v9;
      *(_DWORD *)(v10 - 60) = v11[-4].m128i_i32[1];
      *(_DWORD *)(v10 - 56) = v11[-4].m128i_i32[2];
      *(__m128i *)(v10 - 52) = _mm_loadu_si128((__m128i *)((char *)v11 - 52));
      *(__m128i *)(v10 - 36) = _mm_loadu_si128((__m128i *)((char *)v11 - 36));
      *(_DWORD *)(v10 - 20) = v11[-2].m128i_i32[3];
      *(_BYTE *)(v10 - 16) = v11[-1].m128i_i8[0];
      *(_QWORD *)(v10 - 8) = v11[-1].m128i_i64[1];
      sub_A0AAD0(v10, v11);
      v5 = *(_BYTE *)(a1 + 184) == 0;
      *(__m128i *)(a1 + 96) = _mm_load_si128(a2 + 6);
      *(__m128i *)(a1 + 112) = _mm_load_si128(a2 + 7);
      if ( v5 )
      {
        if ( a2[11].m128i_i8[8] )
        {
          *(_QWORD *)(a1 + 128) = a1 + 144;
          v12 = (const __m128i *)a2[8].m128i_i64[0];
          if ( v12 == &a2[9] )
          {
            *(__m128i *)(a1 + 144) = _mm_load_si128(a2 + 9);
          }
          else
          {
            *(_QWORD *)(a1 + 128) = v12;
            *(_QWORD *)(a1 + 144) = a2[9].m128i_i64[0];
          }
          *(_QWORD *)(a1 + 136) = a2[8].m128i_i64[1];
          si128 = _mm_load_si128(a2 + 10);
          a2[8].m128i_i64[0] = (__int64)a2[9].m128i_i64;
          a2[8].m128i_i64[1] = 0;
          a2[9].m128i_i8[0] = 0;
          *(__m128i *)(a1 + 160) = si128;
          *(_DWORD *)(a1 + 176) = a2[11].m128i_i32[0];
          v14 = a2[11].m128i_i32[1];
          *(_BYTE *)(a1 + 184) = 1;
          *(_DWORD *)(a1 + 180) = v14;
        }
      }
      else if ( a2[11].m128i_i8[8] )
      {
        sub_A0AAD0(a1 + 128, (const __m128i *)a2[8].m128i_i64);
        *(__m128i *)(a1 + 160) = _mm_load_si128(a2 + 10);
        *(_DWORD *)(a1 + 176) = a2[11].m128i_i32[0];
        *(_DWORD *)(a1 + 180) = a2[11].m128i_i32[1];
      }
      else
      {
        v6 = *(void **)(a1 + 128);
        *(_BYTE *)(a1 + 184) = 0;
        if ( v6 != (void *)(a1 + 144) )
        {
LABEL_5:
          operator delete(v6);
          return a1;
        }
      }
    }
    else
    {
      v5 = *(_BYTE *)(a1 + 184) == 0;
      *(_BYTE *)(a1 + 192) = 0;
      if ( !v5 )
      {
        v8 = *(void **)(a1 + 128);
        if ( v8 != (void *)(a1 + 144) )
          operator delete(v8);
      }
      v6 = *(void **)(a1 + 64);
      if ( v6 != (void *)(a1 + 80) )
        goto LABEL_5;
    }
  }
  else if ( v4 )
  {
    sub_11E4450(a1, (__int64)a2);
    *(_BYTE *)(a1 + 192) = 1;
  }
  return a1;
}
