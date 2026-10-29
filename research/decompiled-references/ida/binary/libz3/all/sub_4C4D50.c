__int64 __fastcall sub_4C4D50(__int64 a1, __int64 a2, __int64 a3)
{
  const __m128i *v4; // r12
  __int64 v5; // rbx
  __int64 v7; // rax
  __m128 v8; // xmm0
  _OWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // rax
  _DWORD *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r14
  int v17; // eax
  __m128i v18; // xmm0
  __int64 v19; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v20[72]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(const __m128i **)(a1 + 8);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 152LL))(*(_QWORD *)(a2 + 8));
  if ( !v5 )
  {
    if ( !*(_WORD *)(a3 + 4) )
    {
      v12 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( v12 )
      {
        if ( !*v12 && v12[1] == 8 )
        {
          v13 = *(_QWORD *)(a3 + 32);
          if ( !*(_WORD *)(v13 + 4) )
          {
            v14 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL);
            if ( v14 )
            {
              if ( !*v14 && v14[1] == 2 )
              {
                v15 = *(_QWORD *)(v13 + 32);
                v16 = *(_QWORD *)(v13 + 40);
                if ( *(_WORD *)(v15 + 4) == 1 )
                {
                  v15 = *(_QWORD *)(v13 + 40);
                  v16 = *(_QWORD *)(v13 + 32);
                  goto LABEL_14;
                }
                if ( *(_WORD *)(v16 + 4) == 1 )
                {
LABEL_14:
                  sub_1624F90(v20, v4->m128i_i64[0]);
                  v19 = 0;
                  if ( (unsigned __int8)sub_1625190(v20, v15, &v19) )
                  {
                    v5 = sub_186B270(0x30u);
                    v17 = *(_DWORD *)(v16 + 16);
                    *(_OWORD *)(v5 + 16) = 0;
                    v18 = _mm_loadl_epi64((const __m128i *)off_1C4F2C8);
                    *(_DWORD *)(v5 + 32) = v17;
                    *(_QWORD *)(v5 + 40) = v19;
                    *(__m128i *)v5 = _mm_unpacklo_epi64(v18, (__m128i)(unsigned __int64)off_1C4F138);
                    sub_4CCB30(v20);
                    return v5;
                  }
                  sub_4CCB30(v20);
                }
              }
            }
          }
        }
      }
    }
    v7 = sub_186B270(0x88u);
    *(_OWORD *)(v7 + 16) = 0;
    v5 = v7;
    *(__m128i *)v7 = _mm_unpacklo_epi64(
                       _mm_loadl_epi64((const __m128i *)&off_1C4F2E0),
                       (__m128i)(unsigned __int64)off_1C4F1A0);
    *(__m128i *)(v7 + 32) = _mm_unpacklo_epi64(_mm_loadl_epi64(v4), (__m128i)(unsigned __int64)&v4[6].m128i_u64[1]);
    *(__m128i *)(v7 + 48) = _mm_unpacklo_epi64(
                              (__m128i)(unsigned __int64)&v4[3].m128i_u64[1],
                              (__m128i)(unsigned __int64)&v4[5].m128i_u64[1]);
    v8 = _mm_loadh_ps((const double *)v4->m128i_i64);
    ++*(_DWORD *)(a3 + 8);
    *(__m128 *)(v7 + 64) = v8;
    v9 = (_OWORD *)sub_186B270(0x40u);
    *(_QWORD *)(v5 + 80) = v9;
    v10 = *(_QWORD *)(v5 + 64);
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
    v9[3] = 0;
    *(_OWORD *)(v5 + 104) = 0;
    v11 = v4->m128i_i64[0];
    *(_QWORD *)(v5 + 88) = 8;
    *(_DWORD *)(v5 + 96) = 0;
    *(_QWORD *)(v5 + 120) = v11;
    *(_QWORD *)(v5 + 128) = 0;
    sub_157E9E0(v5 + 80, v10);
  }
  return v5;
}

