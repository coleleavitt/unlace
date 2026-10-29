unsigned __int64 __fastcall sub_359590(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __m128i si128; // xmm9
  __m128i v8; // xmm8
  __m128i v9; // xmm7
  __m128i v10; // xmm6
  __int64 v11; // rax
  __m128i v12; // xmm5
  __m128i v13; // xmm4
  __m128i v14; // xmm3
  __m128i v15; // xmm2
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __m128i v18; // xmm9
  __m128i v19; // xmm8
  __m128i v20; // xmm7
  __int64 v21; // rax
  __m128i v22; // xmm6
  __m128i v23; // xmm5
  __m128i v24; // xmm4
  __m128i v25; // xmm3
  __m128i v26; // xmm2
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31[9]; // [rsp+0h] [rbp-168h] BYREF
  __m128i v32; // [rsp+90h] [rbp-D8h] BYREF
  __m128i v33; // [rsp+A0h] [rbp-C8h] BYREF
  __m128i v34; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v35; // [rsp+C0h] [rbp-A8h] BYREF
  __m128i v36; // [rsp+D0h] [rbp-98h] BYREF
  __m128i v37; // [rsp+E0h] [rbp-88h] BYREF
  __m128i v38; // [rsp+F0h] [rbp-78h] BYREF
  __m128i v39; // [rsp+100h] [rbp-68h] BYREF
  __m128i v40; // [rsp+110h] [rbp-58h] BYREF
  __m128i v41; // [rsp+120h] [rbp-48h] BYREF
  __m128i v42; // [rsp+130h] [rbp-38h] BYREF
  unsigned __int64 v43; // [rsp+148h] [rbp-20h]

  v3 = a1[1];
  v43 = __readfsqword(0x28u);
  memset(v31, 0, sizeof(v31));
  v31[0].m128i_i32[2] = -1;
  v32.m128i_i32[0] = 0;
  *(__int64 *)((char *)v32.m128i_i64 + 4) = 1;
  v32.m128i_i32[3] = -1;
  if ( a2 < v3 )
  {
LABEL_9:
    a1[1] = a2;
    return v43 - __readfsqword(0x28u);
  }
  if ( v3 < a2 )
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)v31 < *a1 || (unsigned __int64)v31 >= v5 + 160 * v6 )
    {
      if ( v6 >= a2 || (v29 = qvector_reserve(a1, v5, a2, 160), v3 = a1[1], *a1 = v29, v5 = v29, v3 < a2) )
      {
        si128 = _mm_load_si128(v31);
        v8 = _mm_load_si128(&v31[1]);
        v9 = _mm_load_si128(&v31[2]);
        v10 = _mm_load_si128(&v31[3]);
        v11 = 160 * v3;
        v12 = _mm_load_si128(&v31[4]);
        v13 = _mm_load_si128(&v31[5]);
        v14 = _mm_load_si128(&v31[6]);
        v15 = _mm_load_si128(&v31[7]);
        v16 = _mm_load_si128(&v31[8]);
        v17 = _mm_load_si128(&v32);
        while ( 1 )
        {
          ++v3;
          *(__m128i *)(v5 + v11) = si128;
          *(__m128i *)(v5 + v11 + 16) = v8;
          *(__m128i *)(v5 + v11 + 32) = v9;
          *(__m128i *)(v5 + v11 + 48) = v10;
          *(__m128i *)(v5 + v11 + 64) = v12;
          *(__m128i *)(v5 + v11 + 80) = v13;
          *(__m128i *)(v5 + v11 + 96) = v14;
          *(__m128i *)(v5 + v11 + 112) = v15;
          *(__m128i *)(v5 + v11 + 128) = v16;
          *(__m128i *)(v5 + v11 + 144) = v17;
          v11 += 160;
          if ( a2 == v3 )
            break;
          v5 = *a1;
        }
      }
    }
    else
    {
      v33 = _mm_load_si128(v31);
      v34 = _mm_load_si128(&v31[1]);
      v35 = _mm_load_si128(&v31[2]);
      v36 = _mm_load_si128(&v31[3]);
      v37 = _mm_load_si128(&v31[4]);
      v38 = _mm_load_si128(&v31[5]);
      v39 = _mm_load_si128(&v31[6]);
      v40 = _mm_load_si128(&v31[7]);
      v41 = _mm_load_si128(&v31[8]);
      v42 = _mm_load_si128(&v32);
      if ( v6 >= a2 || (v30 = qvector_reserve(a1, v5, a2, 160), v3 = a1[1], *a1 = v30, v5 = v30, v3 < a2) )
      {
        v18 = _mm_load_si128(&v33);
        v19 = _mm_load_si128(&v34);
        v20 = _mm_load_si128(&v35);
        v21 = 160 * v3;
        v22 = _mm_load_si128(&v36);
        v23 = _mm_load_si128(&v37);
        v24 = _mm_load_si128(&v38);
        v25 = _mm_load_si128(&v39);
        v26 = _mm_load_si128(&v40);
        v27 = _mm_load_si128(&v41);
        v28 = _mm_load_si128(&v42);
        while ( 1 )
        {
          ++v3;
          *(__m128i *)(v5 + v21) = v18;
          *(__m128i *)(v5 + v21 + 16) = v19;
          *(__m128i *)(v5 + v21 + 32) = v20;
          *(__m128i *)(v5 + v21 + 48) = v22;
          *(__m128i *)(v5 + v21 + 64) = v23;
          *(__m128i *)(v5 + v21 + 80) = v24;
          *(__m128i *)(v5 + v21 + 96) = v25;
          *(__m128i *)(v5 + v21 + 112) = v26;
          *(__m128i *)(v5 + v21 + 128) = v27;
          *(__m128i *)(v5 + v21 + 144) = v28;
          v21 += 160;
          if ( a2 == v3 )
            break;
          v5 = *a1;
        }
      }
    }
    goto LABEL_9;
  }
  return v43 - __readfsqword(0x28u);
}

