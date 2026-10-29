__m128i *__fastcall sub_9F8570(__int64 a1, __int64 a2, __m128i *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r12
  unsigned __int64 *v7; // rdi
  char v8; // al
  __m128i *v9; // rdi
  __int64 v10; // rax
  __int8 v11; // al
  __int8 v12; // al
  __int8 v13; // al
  __int64 v14; // rdx
  __int64 v15; // rdx

  v3 = a2 - a1;
  v5 = 0x2E8BA2E8BA2E8BA3LL * (v3 >> 4);
  if ( v3 > 0 )
  {
    v6 = a1;
    do
    {
      *a3 = _mm_loadu_si128((const __m128i *)v6);
      sub_9E6D90((__int64)a3[1].m128i_i64, (_QWORD *)(v6 + 16));
      v11 = *(_BYTE *)(v6 + 48) & 1 | a3[3].m128i_i8[0] & 0xFE;
      a3[3].m128i_i8[0] = v11;
      v12 = *(_BYTE *)(v6 + 48) & 2 | v11 & 0xFD;
      a3[3].m128i_i8[0] = v12;
      v13 = *(_BYTE *)(v6 + 48) & 4 | v12 & 0xFB;
      a3[3].m128i_i8[0] = v13;
      a3[3].m128i_i8[0] = *(_BYTE *)(v6 + 48) & 8 | v13 & 0xF7;
      sub_9E6D90((__int64)&a3[3].m128i_i64[1], (_QWORD *)(v6 + 56));
      if ( a3[7].m128i_i8[8] )
      {
        if ( *(_BYTE *)(v6 + 120) )
        {
          sub_9E6D90((__int64)&a3[5].m128i_i64[1], (_QWORD *)(v6 + 88));
        }
        else
        {
          v7 = (unsigned __int64 *)a3[5].m128i_i64[1];
          a3[7].m128i_i8[8] = 0;
          if ( v7 != &a3[6].m128i_u64[1] )
            operator delete(v7);
        }
      }
      else if ( *(_BYTE *)(v6 + 120) )
      {
        a3[5].m128i_i64[1] = (__int64)&a3[6].m128i_i64[1];
        v14 = *(_QWORD *)(v6 + 88);
        if ( v14 == v6 + 104 )
        {
          *(__m128i *)((char *)a3 + 104) = _mm_loadu_si128((const __m128i *)(v6 + 104));
        }
        else
        {
          a3[5].m128i_i64[1] = v14;
          a3[6].m128i_i64[1] = *(_QWORD *)(v6 + 104);
        }
        a3[6].m128i_i64[0] = *(_QWORD *)(v6 + 96);
        *(_QWORD *)(v6 + 88) = v6 + 104;
        *(_QWORD *)(v6 + 96) = 0;
        *(_BYTE *)(v6 + 104) = 0;
        a3[7].m128i_i8[8] = 1;
      }
      v8 = *(_BYTE *)(v6 + 160);
      if ( a3[10].m128i_i8[0] )
      {
        if ( v8 )
        {
          sub_9E6D90((__int64)a3[8].m128i_i64, (_QWORD *)(v6 + 128));
        }
        else
        {
          v9 = (__m128i *)a3[8].m128i_i64[0];
          a3[10].m128i_i8[0] = 0;
          if ( v9 != &a3[9] )
            operator delete(v9);
        }
      }
      else if ( v8 )
      {
        a3[8].m128i_i64[0] = (__int64)a3[9].m128i_i64;
        v15 = *(_QWORD *)(v6 + 128);
        if ( v6 + 144 == v15 )
        {
          a3[9] = _mm_loadu_si128((const __m128i *)(v6 + 144));
        }
        else
        {
          a3[8].m128i_i64[0] = v15;
          a3[9].m128i_i64[0] = *(_QWORD *)(v6 + 144);
        }
        a3[8].m128i_i64[1] = *(_QWORD *)(v6 + 136);
        *(_QWORD *)(v6 + 128) = v6 + 144;
        *(_QWORD *)(v6 + 136) = 0;
        *(_BYTE *)(v6 + 144) = 0;
        a3[10].m128i_i8[0] = 1;
      }
      v10 = *(_QWORD *)(v6 + 168);
      a3 += 11;
      v6 += 176;
      a3[-1].m128i_i64[1] = v10;
      --v5;
    }
    while ( v5 );
  }
  return a3;
}

