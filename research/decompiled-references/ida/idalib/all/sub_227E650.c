__int64 __fastcall sub_227E650(__m128i *a1, __int64 a2, int a3, int a4)
{
  __m128i v7; // xmm0
  __int64 result; // rax
  __int64 v9; // r14
  int v10; // eax
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __m128i v23; // xmm0
  __int64 v24; // rsi
  unsigned __int64 v25; // rbp
  __m128i v26; // xmm0
  __int64 v27; // rsi
  unsigned __int64 v28; // r12
  __m128i si128; // xmm3
  __int64 v30; // rsi
  unsigned __int64 v31; // r12
  __m128i v32; // xmm2
  __int64 v33; // rsi
  unsigned __int64 v34; // rbp
  __m128i v35; // xmm0
  __int64 v36; // rdx
  __int32 v37; // ecx
  __int64 v38; // rdx
  __int32 v39; // ecx
  __int64 v40; // rdx
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rdx
  __m128i v44; // xmm0
  __m128i v45[4]; // [rsp+0h] [rbp-48h] BYREF

  v45[0].m128i_i64[0] = (__int64)&unk_2D0ADA8;
  v7 = _mm_loadl_epi64(v45);
  v45[0] = _mm_unpacklo_epi64(v7, v7);
LABEL_2:
  result = a1[1].m128i_u32[0];
  v9 = a1[2].m128i_i64[1];
  if ( !(_DWORD)result )
  {
    v10 = 8 * a3;
    if ( a3 > 1 )
      v10 = 8 * (a3 == 256) + 16;
    while ( 2 )
    {
      v11 = a4;
      if ( a4 > 1 )
        v11 = (a4 == 256) + 2;
      result = (unsigned int)(v11 + v10);
      switch ( result )
      {
        case 0LL:
          a1[2].m128i_i64[1] = a2;
          return result;
        case 1LL:
        case 2LL:
        case 3LL:
          sub_227E390(a1, 2013265920, v9 - a2 + 1, a2);
          result = sub_227E650(a1, a2 + 1, 1, (unsigned int)a4);
          if ( a1[1].m128i_i32[0] )
            return result;
          result = (__int64)sub_227E170(a1, 0x80000000LL, a1[2].m128i_i64[1] - a2);
          if ( a1[1].m128i_i32[0] )
            return result;
          result = a1[1].m128i_i64[1];
          *(_QWORD *)(result + 8 * a2) = (a1[2].m128i_i64[1] - a2) | *(_QWORD *)(result + 8 * a2) & 0xF8000000LL;
          v12 = a1[2].m128i_i64[1];
          v13 = a1[2].m128i_i64[0];
          if ( v12 < v13 || (v24 = (v13 + 1) / 2, v25 = 3 * v24, v13 >= 3 * v24) )
          {
            a1[2].m128i_i64[1] = v12 + 1;
            *(_QWORD *)(result + 8 * v12) = 2281701376LL;
            v14 = a1[2].m128i_i64[1] - 1;
LABEL_12:
            *(_QWORD *)(result + 8 * v14) = *(_QWORD *)(result + 8 * v14) & 0xF8000000LL | 1;
            v15 = a1[2].m128i_i64[1];
            v16 = a1[2].m128i_i64[0];
            if ( v15 >= v16 )
            {
              v33 = (v16 + 1) / 2;
              v34 = 3 * v33;
              if ( v16 < 3 * v33 )
              {
                if ( v34 <= 0x1FFFFFFFFFFFFFFFLL )
                {
                  result = (__int64)realloc((void *)result, 24 * v33);
                  if ( result )
                  {
                    a1[1].m128i_i64[1] = result;
                    v15 = a1[2].m128i_i64[1];
                    a1[2].m128i_i64[0] = v34;
                  }
                  else
                  {
                    if ( !a1[1].m128i_i32[0] )
                      a1[1].m128i_i32[0] = 12;
                    v15 = a1[2].m128i_i64[1];
                    v45[0].m128i_i64[0] = (__int64)&unk_2D0ADA8;
                    v44 = _mm_loadl_epi64(v45);
                    result = a1[1].m128i_i64[1];
                    *a1 = _mm_unpacklo_epi64(v44, v44);
                  }
                }
                else
                {
                  a1[1].m128i_i32[0] = 12;
                  v45[0].m128i_i64[0] = (__int64)&unk_2D0ADA8;
                  v35 = _mm_loadl_epi64(v45);
                  *a1 = _mm_unpacklo_epi64(v35, v35);
                }
              }
            }
            a1[2].m128i_i64[1] = v15 + 1;
            *(_QWORD *)(result + 8 * v15) = 2415919106LL;
            return result;
          }
          if ( v25 > 0x1FFFFFFFFFFFFFFFLL )
          {
            a1[1].m128i_i32[0] = 12;
            v45[0].m128i_i64[0] = (__int64)&unk_2D0ADA8;
            v26 = _mm_loadl_epi64(v45);
            a1[2].m128i_i64[1] = v12 + 1;
            *a1 = _mm_unpacklo_epi64(v26, v26);
            *(_QWORD *)(result + 8 * v12) = 2281701376LL;
            return result;
          }
          result = (__int64)realloc((void *)result, 24 * v24);
          if ( result )
          {
            v36 = a1[2].m128i_i64[1];
            v37 = a1[1].m128i_i32[0];
            a1[1].m128i_i64[1] = result;
            a1[2].m128i_i64[0] = v25;
            a1[2].m128i_i64[1] = v36 + 1;
            *(_QWORD *)(result + 8 * v36) = 2281701376LL;
            v14 = a1[2].m128i_i64[1] - 1;
            if ( v37 )
              return result;
            goto LABEL_12;
          }
          if ( !a1[1].m128i_i32[0] )
            a1[1].m128i_i32[0] = 12;
          v40 = a1[1].m128i_i64[1];
          v45[0].m128i_i64[0] = (__int64)&unk_2D0ADA8;
          result = a1[2].m128i_i64[1];
          v41 = _mm_loadl_epi64(v45);
          a1[2].m128i_i64[1] = result + 1;
          *a1 = _mm_unpacklo_epi64(v41, v41);
          *(_QWORD *)(v40 + 8 * result) = 2281701376LL;
          break;
        case 9LL:
          return result;
        case 10LL:
          sub_227E390(a1, 2013265920, v9 - a2 + 1, a2);
          if ( a1[1].m128i_i32[0] )
            goto LABEL_23;
          sub_227E170(a1, 0x80000000LL, a1[2].m128i_i64[1] - a2);
          if ( a1[1].m128i_i32[0] )
            goto LABEL_23;
          v17 = (_QWORD *)a1[1].m128i_i64[1];
          v17[a2] = (a1[2].m128i_i64[1] - a2) | v17[a2] & 0xF8000000LL;
          v18 = a1[2].m128i_i64[1];
          v19 = a1[2].m128i_i64[0];
          if ( v18 < v19 || (v30 = (v19 + 1) / 2, v31 = 3 * v30, v19 >= 3 * v30) )
          {
            a1[2].m128i_i64[1] = v18 + 1;
            v17[v18] = 2281701376LL;
            v20 = a1[2].m128i_i64[1] - 1;
LABEL_21:
            v17[v20] = v17[v20] & 0xF8000000LL | 1;
            v21 = a1[2].m128i_i64[1];
            v22 = a1[2].m128i_i64[0];
            if ( v21 >= v22 )
            {
              v27 = (v22 + 1) / 2;
              v28 = 3 * v27;
              if ( v22 < 3 * v27 )
              {
                if ( v28 <= 0x1FFFFFFFFFFFFFFFLL )
                {
                  v17 = realloc(v17, 24 * v27);
                  if ( v17 )
                  {
                    a1[1].m128i_i64[1] = (__int64)v17;
                    v21 = a1[2].m128i_i64[1];
                    a1[2].m128i_i64[0] = v28;
                  }
                  else
                  {
                    if ( !a1[1].m128i_i32[0] )
                      a1[1].m128i_i32[0] = 12;
                    v17 = (_QWORD *)a1[1].m128i_i64[1];
                    v21 = a1[2].m128i_i64[1];
                    *a1 = _mm_load_si128(v45);
                  }
                }
                else
                {
                  si128 = _mm_load_si128(v45);
                  a1[1].m128i_i32[0] = 12;
                  *a1 = si128;
                }
              }
            }
            a1[2].m128i_i64[1] = v21 + 1;
            v17[v21] = 2415919106LL;
            goto LABEL_23;
          }
          if ( v31 > 0x1FFFFFFFFFFFFFFFLL )
          {
            v32 = _mm_load_si128(v45);
            a1[1].m128i_i32[0] = 12;
            a1[2].m128i_i64[1] = v18 + 1;
            *a1 = v32;
            v17[v18] = 2281701376LL;
            goto LABEL_23;
          }
          v17 = realloc(v17, 24 * v30);
          if ( v17 )
          {
            v38 = a1[2].m128i_i64[1];
            v39 = a1[1].m128i_i32[0];
            a1[1].m128i_i64[1] = (__int64)v17;
            a1[2].m128i_i64[0] = v31;
            a1[2].m128i_i64[1] = v38 + 1;
            v17[v38] = 2281701376LL;
            v20 = a1[2].m128i_i64[1] - 1;
            if ( v39 )
              goto LABEL_23;
            goto LABEL_21;
          }
          if ( !a1[1].m128i_i32[0] )
            a1[1].m128i_i32[0] = 12;
          v42 = a1[2].m128i_i64[1];
          v43 = a1[1].m128i_i64[1];
          *a1 = _mm_load_si128(v45);
          a1[2].m128i_i64[1] = v42 + 1;
          *(_QWORD *)(v43 + 8 * v42) = 2281701376LL;
LABEL_23:
          --a4;
          result = sub_227E280((__int64)a1, a2 + 1, v9 + 1);
          v9 = a1[2].m128i_i64[1];
          a2 = result;
          if ( a1[1].m128i_i32[0] )
            return result;
          v10 = 8;
          a3 = 1;
          continue;
        case 11LL:
          sub_227E390(a1, 1207959552, v9 - a2 + 1, a2);
          result = a1[1].m128i_u32[0];
          if ( !(_DWORD)result )
            return (__int64)sub_227E170(a1, 1342177280, a1[2].m128i_i64[1] - a2);
          return result;
        case 18LL:
          --a4;
          --a3;
          a2 = sub_227E280((__int64)a1, a2, v9);
          goto LABEL_2;
        case 19LL:
          --a3;
          a2 = sub_227E280((__int64)a1, a2, v9);
          goto LABEL_2;
        default:
          a1[1].m128i_i32[0] = 15;
          v45[0].m128i_i64[0] = (__int64)&unk_2D0ADA8;
          v23 = _mm_loadl_epi64(v45);
          *a1 = _mm_unpacklo_epi64(v23, v23);
          return (__int64)&unk_2D0ADA8;
      }
      break;
    }
  }
  return result;
}
