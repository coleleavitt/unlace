void __fastcall sub_99F3A0(__int64 a1, _QWORD *a2)
{
  __m128i *v3; // r9
  __int64 v4; // r8
  __m128i *v6; // rax
  int v7; // edi
  int v8; // esi
  __int8 *v9; // rdx
  __int32 v10; // ecx
  __int64 v11; // r11
  __int64 v12; // rcx
  __int8 v13; // bp
  char v14; // bp
  __int64 v15; // r11
  __int64 v16; // rcx
  __int8 v17; // bp
  char v18; // bp
  __m128i v19; // xmm0
  unsigned __int32 v20; // r13d
  __int64 v21; // rdx
  __int8 *v22; // rbp
  __int8 *v23; // r14
  void *v24; // r12
  char *v25; // rsi

  v3 = *(__m128i **)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = v3[-1].m128i_u32[3];
    v6 = *(__m128i **)a1;
    v7 = 0;
    v8 = 0;
    if ( (_DWORD)v4 )
    {
      do
      {
        if ( v6[2].m128i_i32[0] != -1 )
        {
          if ( v8 != v7 )
          {
            v9 = &v3->m128i_i8[40 * v7];
            v10 = *(_DWORD *)v9;
            *(_DWORD *)v9 = v6->m128i_i32[0];
            v11 = v6->m128i_i64[1];
            v6->m128i_i32[0] = v10;
            v12 = *((_QWORD *)v9 + 1);
            *((_QWORD *)v9 + 1) = v11;
            v13 = v6->m128i_i8[4];
            v6->m128i_i64[1] = v12;
            LOBYTE(v11) = v9[4];
            v9[4] = v13 & 2 | v11 & 0xFD;
            LOBYTE(v12) = v11 & 2 | v6->m128i_i8[4] & 0xFD;
            v6->m128i_i8[4] = v12;
            v14 = v9[4];
            v9[4] = v12 & 1 | v14 & 0xFE;
            LODWORD(v11) = v6[1].m128i_i32[0];
            v6->m128i_i8[4] = v14 & 1 | v6->m128i_i8[4] & 0xFE;
            LODWORD(v12) = *((_DWORD *)v9 + 4);
            *((_DWORD *)v9 + 4) = v11;
            v15 = v6[1].m128i_i64[1];
            v6[1].m128i_i32[0] = v12;
            v16 = *((_QWORD *)v9 + 3);
            *((_QWORD *)v9 + 3) = v15;
            v17 = v6[1].m128i_i8[4];
            v6[1].m128i_i64[1] = v16;
            LOBYTE(v15) = v9[20];
            v9[20] = v17 & 2 | v15 & 0xFD;
            LOBYTE(v16) = v15 & 2 | v6[1].m128i_i8[4] & 0xFD;
            v6[1].m128i_i8[4] = v16;
            v18 = v9[20] & 1;
            v9[20] = v16 & 1 | v9[20] & 0xFE;
            v19 = _mm_loadl_epi64(v6 + 2);
            v6[1].m128i_i8[4] = v18 | v6[1].m128i_i8[4] & 0xFE;
            *((_QWORD *)v9 + 4) = v19.m128i_i64[0];
            *(_DWORD *)(*(_QWORD *)(*a2 + 16LL * (unsigned int)_mm_cvtsi128_si32(v19))
                      + 8LL * (unsigned int)_mm_cvtsi128_si32(_mm_shuffle_epi32(v19, 229))
                      + 4) = v7;
          }
          ++v7;
        }
        ++v8;
        v6 = (__m128i *)((char *)v6 + 40);
      }
      while ( (_DWORD)v4 != v8 );
      v20 = *(_DWORD *)(a1 + 8);
      v4 = v3[-1].m128i_u32[3];
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 8);
    }
    v21 = 40LL * v20;
    v22 = &v3->m128i_i8[v21];
    v23 = &v3->m128i_i8[40 * v4];
    if ( v21 != 40 * v4 )
    {
      do
      {
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v22);
        v25 = v22 + 16;
        v22 += 40;
        sub_182CBA0(v24, v25);
      }
      while ( v23 != v22 );
      v3 = *(__m128i **)a1;
    }
    v3[-1].m128i_i32[3] = v20;
  }
  *(_DWORD *)(a1 + 16) = -1;
}

