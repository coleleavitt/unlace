__int64 __fastcall sub_680210(
        __m128i *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        __int128 a7,
        __int128 a8)
{
  unsigned int v8; // r13d
  char v13; // al
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int32 v16; // eax
  _QWORD *v17; // r9
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __int64 v20; // r15
  __int64 v21; // rsi
  __m128i v22; // xmm0
  __m128i si128; // xmm0
  int v24; // eax
  int v25; // eax
  __int64 v28; // rbp
  __int64 v29; // r12
  __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rbp
  _QWORD *v34; // r14
  __int64 v35; // r14
  __int64 v36; // rax
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __int64 v39; // rax
  __m128i v40; // xmm0
  char v41; // al
  _QWORD *v43; // [rsp+0h] [rbp-78h]
  __int64 v44; // [rsp+8h] [rbp-70h]
  __m128i *v45; // [rsp+18h] [rbp-60h] BYREF
  __m128i v46; // [rsp+20h] [rbp-58h] BYREF
  __m128i v47[4]; // [rsp+30h] [rbp-48h] BYREF

  LOBYTE(v8) = a2 == 0 || *(_QWORD *)(a1[1].m128i_i64[1] + 48) == 0;
  if ( (_BYTE)v8 )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 2) == 0
    || (v13 = *(_BYTE *)(a2 + 28) & 0x7F, v13 == 16)
    || (v14 = (v13 + 110) & 0x7F, (unsigned __int8)v14 <= 0x3Eu) && (v15 = 0x4000000040000009LL, _bittest64(&v15, v14)) )
  {
    ++a1[15].m128i_i32[0];
    v44 = a4 + 136;
    v45 = a1;
    sub_67F660((__int64)a1, a2, (__m128i *)(a4 + 136), (__int64)&v45);
    v16 = a1[2].m128i_i32[0];
    v17 = a6;
    if ( (v16 & 2) == 0 && !*(_QWORD *)(a4 + 160) || !a3 )
    {
LABEL_18:
      if ( a1[15].m128i_i32[0]-- == 1 )
      {
        v28 = a1[13].m128i_i64[0];
        v29 = v28 + 16LL * a1[13].m128i_u32[2];
        while ( v29 != v28 )
        {
          v28 += 16;
          operator delete();
        }
        a1[13].m128i_i32[2] = 0;
        v30 = a1[10].m128i_u32[2];
        if ( (_DWORD)v30 )
        {
          v31 = (_QWORD *)a1[10].m128i_i64[0];
          v32 = v30;
          a1[14].m128i_i64[0] = 0;
          v33 = &v31[v32];
          v34 = v31 + 1;
          a1[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v31, (__m128i)(unsigned __int64)(*v31 + 4096LL));
          if ( v32 != 1 )
          {
            do
            {
              ++v34;
              operator delete();
            }
            while ( v33 != v34 );
          }
          a1[10].m128i_i32[2] = 1;
        }
      }
      return v8;
    }
    if ( !a5 )
    {
      a5 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        a5 = *(_QWORD *)(a5 + 8);
    }
    if ( (v16 & 1) != 0 )
    {
      sub_67E0B0((__int64)a1, a2, a3);
      v17 = a6;
    }
    v18 = _mm_loadu_si128((const __m128i *)&a7);
    *(_QWORD *)(a4 + 40) = a1;
    *(_QWORD *)(a4 + 48) = 0;
    *(__m128i *)(a4 + 8) = v18;
    v19 = _mm_loadu_si128((const __m128i *)&a8);
    *(_QWORD *)a4 = v44;
    *(_DWORD *)(a4 + 56) = a3;
    *(__m128i *)(a4 + 24) = v19;
    *(_DWORD *)(a4 + 104) = (*(_BYTE *)(a2 + 29) & 2) != 0;
    *(_QWORD *)(a4 + 112) = *(_QWORD *)(a4 + 200);
    *(_DWORD *)(a4 + 120) = *(_DWORD *)(a4 + 208);
    if ( !v17 )
    {
      v17 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v17 = (_QWORD *)*v17;
    }
    v43 = v17;
    v20 = a4 + 240;
    v21 = sub_79A2E0(v17);
    sub_639160((__int64)&v46, v21, a1[2].m128i_i64[1], 0, 1u);
    v22 = _mm_load_si128(&v46);
    *(_QWORD *)(a4 + 280) = a1;
    *(_QWORD *)(a4 + 64) = a4 + 240;
    *(__m128i *)(a4 + 240) = v22;
    si128 = _mm_load_si128(v47);
    *(_QWORD *)(a4 + 272) = v43;
    *(__m128i *)(a4 + 256) = si128;
    if ( (_QWORD *)a5 != v43 )
    {
      v24 = *(_BYTE *)(a2 + 28) & 0x7F;
      if ( (unsigned int)(v24 - 58) > 1 )
      {
        if ( (unsigned int)(v24 - 32) <= 5 && (unsigned int)sub_781200(a2) == 1 )
          goto LABEL_16;
      }
      else if ( (*(_BYTE *)(a2 + 180) & 7) == 1 )
      {
        goto LABEL_16;
      }
      v20 = a4 + 288;
      v39 = sub_79A2E0(a5);
      sub_639160((__int64)&v46, v39, a1[2].m128i_i64[1], 0, 1u);
      v40 = _mm_load_si128(&v46);
      *(_QWORD *)(a4 + 320) = a5;
      *(_QWORD *)(a4 + 328) = a1;
      *(__m128i *)(a4 + 288) = v40;
      *(__m128i *)(a4 + 304) = _mm_load_si128(v47);
    }
LABEL_16:
    v25 = *(_DWORD *)(a4 + 88);
    *(_QWORD *)(a4 + 72) = v20;
    if ( v25 )
    {
      if ( !(unsigned __int8)sub_79B790(a2) || (v35 = sub_79AC10(a2)) == 0 )
      {
        v41 = *(_BYTE *)(a2 + 28) & 0x7F;
        if ( v41 == 70 )
        {
          v35 = *(_QWORD *)(a2 + 48);
          if ( v35 )
            v35 += 64;
        }
        else
        {
          v35 = 0;
          if ( v41 == 69 )
          {
            v35 = *(_QWORD *)(a2 + 48);
            if ( v35 )
              v35 += 72;
          }
        }
      }
      v36 = sub_79A2E0(v35);
      sub_639160((__int64)&v46, v36, a1[2].m128i_i64[1], 0, 1u);
      v37 = _mm_load_si128(&v46);
      *(_QWORD *)(a4 + 368) = v35;
      *(_QWORD *)(a4 + 376) = a1;
      *(__m128i *)(a4 + 336) = v37;
      v38 = _mm_load_si128(v47);
      *(_QWORD *)(a4 + 96) = a4 + 336;
      *(__m128i *)(a4 + 352) = v38;
    }
    v8 = 1;
    (*(void (__fastcall **)(__int64, __int64))(a1[1].m128i_i64[1] + 48))(a1[1].m128i_i64[0], a4);
    goto LABEL_18;
  }
  return v8;
}

