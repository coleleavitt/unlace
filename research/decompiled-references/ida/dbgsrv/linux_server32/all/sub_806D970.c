/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806D970
// Address: 0x0806D970

//----- (0806D970) --------------------------------------------------------
int __cdecl sub_806D970(int a1)
{
  int v1; // esi
  unsigned int v3; // eax
  unsigned int v4; // edx
  __m128i v5; // xmm1
  __m128i v6; // xmm4
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // edi
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edi
  bool v17; // zf
  __m128i *v18; // edi
  unsigned int v19; // eax
  unsigned __int64 v20; // rax
  __m128i v21; // xmm0
  int v22; // eax
  int v23; // edx
  unsigned __int64 v24; // rcx
  __int32 v25; // eax
  __int32 v26; // edx
  __int32 v27; // edi
  __m128i v28; // xmm2
  __int32 v29; // ecx
  bool v30; // cf
  int v31; // edi
  __m128i v32; // xmm0
  int v33; // ebx
  int v34; // edx
  int v35; // ecx
  __m128i v36; // xmm1
  __m128i v37; // xmm0
  int v38; // edx
  __int32 v39; // ecx
  __m128i v40; // [esp+0h] [ebp-68h] BYREF
  int v41; // [esp+10h] [ebp-58h]
  int v42; // [esp+14h] [ebp-54h]
  char **v43; // [esp+18h] [ebp-50h]
  __int32 v44; // [esp+1Ch] [ebp-4Ch]
  __m128i v45; // [esp+20h] [ebp-48h]
  __int64 v46; // [esp+30h] [ebp-38h]
  const __m128i *v47; // [esp+38h] [ebp-30h]
  __m128i v48; // [esp+40h] [ebp-28h]

  v1 = a1;
  if ( !*(_QWORD *)(a1 + 416) )
    return 0;
  v3 = sub_80CD730(*(_DWORD *)(a1 + 360), 0, 1);
  v5 = _mm_loadl_epi64((const __m128i *)(a1 + 364));
  v6 = _mm_sub_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(v4)), v5);
  v40.m128i_i64[0] = v6.m128i_i64[0];
  v42 = _mm_cvtsi128_si32(v6);
  v41 = _mm_cvtsi128_si32(_mm_srli_epi64(v6, 0x20u));
  v48 = _mm_add_epi64(v5, _mm_loadl_epi64((const __m128i *)(a1 + 416)));
  v7 = sub_80CD730(*(_DWORD *)(a1 + 360), v48.m128i_i64[0], 0);
  if ( (v8 & v7) != 0xFFFFFFFF )
  {
    v9 = *(_DWORD *)(a1 + 360);
    v10 = *(unsigned __int16 *)(a1 + 440);
    v11 = *(_WORD *)(a1 + 438);
    v48.m128i_i16[0] = *(_WORD *)(a1 + 440);
    LOWORD(v47) = v11;
    LODWORD(v46) = v9;
    LODWORD(v12) = sub_80CD730(v9, 0, 1);
    v45.m128i_i64[0] = v12;
    LODWORD(v13) = sub_80CD6E0((int *)v46);
    v14 = v13 - v45.m128i_i64[0];
    if ( ((((unsigned __int64)(v13 - v45.m128i_i64[0]) >> 32) | v45.m128i_i32[1]) & 0x80000000) != 0LL )
    {
      LODWORD(v15) = 0;
LABEL_11:
      sub_8069CE0(
        (int)(&qword_811CFF4 - 33405),
        (char *)&qword_811CFF4 - 279999,
        (_DWORD)v15,
        (char *)&qword_811CFF4 - 281405,
        v40.m128i_i64[0]);
    }
    if ( v14 < v10 * (unsigned __int16)v47 )
    {
      v15 = v14 / (unsigned __int16)v47;
      goto LABEL_11;
    }
    v43 = (char **)(a1 + 16);
    sub_806D8F0((char **)(a1 + 16), v10);
    v17 = v48.m128i_i16[0] == 0;
    *(_BYTE *)(a1 + 36) = 1;
    if ( v17 )
    {
LABEL_45:
      v16 = 1;
      goto LABEL_9;
    }
    v46 = v10;
    v48.m128i_i64[0] = 0;
    v47 = nullptr;
    while ( 1 )
    {
      v19 = *(unsigned __int16 *)(a1 + 438);
      v44 = v48.m128i_i32[0];
      v20 = v48.m128i_u32[0] * (unsigned __int64)v19;
      v21 = _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(*(_DWORD *)(a1 + 416) + (int)v20),
              _mm_cvtsi32_si128((*(_QWORD *)(a1 + 416) + v20) >> 32));
      if ( __CFADD__(*(_QWORD *)(a1 + 416), v20) )
        break;
      v45 = _mm_add_epi64(v21, _mm_loadl_epi64((const __m128i *)(a1 + 364)));
      v22 = sub_80CD730(*(_DWORD *)(a1 + 360), v45.m128i_i64[0], 0);
      if ( (v23 & v22) == 0xFFFFFFFF )
        break;
      if ( !*(_BYTE *)(a1 + 36) )
        sub_8068EE0();
      v18 = (__m128i *)(*(_DWORD *)(a1 + 16) + 56 * v48.m128i_i32[0]);
      if ( sub_806A1B0(a1, v18, 4, 1) < 0
        || *(_BYTE *)(a1 + 477) && sub_806A1B0(a1, (char *)v18->m128i_i64 + 4, 4, 1) < 0
        || sub_806A1B0(a1, &v18->m128i_u64[1], *(_DWORD *)(a1 + 336), 1) < 0
        || sub_806A1B0(a1, &v18[1], *(_DWORD *)(a1 + 332), 1) < 0
        || sub_806A1B0(a1, &v18[1].m128i_u64[1], *(_DWORD *)(a1 + 332), 1) < 0
        || sub_806A1B0(a1, &v18[2], *(_DWORD *)(a1 + 340), 1) < 0
        || sub_806A1B0(a1, &v18[2].m128i_u64[1], *(_DWORD *)(a1 + 340), 1) < 0
        || !*(_BYTE *)(a1 + 477) && sub_806A1B0(a1, (char *)v18->m128i_i64 + 4, 4, 1) < 0
        || sub_806A1B0(a1, &v18[3], *(_DWORD *)(a1 + 340), 1) < 0 )
      {
        sub_806D8F0(v43, (v44 == 0) + v44 - 1);
        break;
      }
      if ( v18->m128i_i32[0] == 1 )
      {
        sub_806BCD0((_DWORD *)a1, v18);
        v24 = v18[1].m128i_u64[0];
        if ( v24 < *(unsigned int *)(a1 + 28) )
          *(_DWORD *)(a1 + 28) = v24 & 0xFFFFF000;
      }
      else
      {
        if ( v18->m128i_i32[0] != 2 )
          v18 = (__m128i *)v47;
        v47 = v18;
      }
      if ( ++v48.m128i_i64[0] == v46 )
      {
        if ( v47 )
        {
          v25 = v47[2].m128i_i32[0];
          v26 = v47[2].m128i_i32[2];
          v27 = v47[2].m128i_i32[3];
          v28 = _mm_loadl_epi64(v47 + 1);
          v29 = v47[2].m128i_i32[1];
          v48.m128i_i32[0] = _mm_cvtsi128_si32(v28);
          v30 = __PAIR64__(v29, v25) < __PAIR64__(v27, v26);
          v31 = *(_DWORD *)(a1 + 460);
          v32 = _mm_srli_epi64(v28, 0x20u);
          if ( v30 )
            v25 = v26;
          v33 = _mm_cvtsi128_si32(v32);
          if ( v31 )
          {
            v45.m128i_i32[0] = v25;
            v34 = *(_DWORD *)(a1 + 456);
            v35 = 0;
            while ( 1 )
            {
              v36 = _mm_loadl_epi64((const __m128i *)(v34 + 16));
              if ( __PAIR64__(v33, v48.m128i_u32[0]) >= __PAIR64__(
                                                          _mm_cvtsi128_si32(_mm_srli_epi64(v36, 0x20u)),
                                                          _mm_cvtsi128_si32(v36)) )
              {
                v37 = _mm_add_epi64(_mm_loadl_epi64((const __m128i *)(v34 + 8)), v36);
                if ( __PAIR64__(v33, v48.m128i_u32[0]) < __PAIR64__(
                                                           _mm_cvtsi128_si32(_mm_srli_epi64(v37, 0x20u)),
                                                           _mm_cvtsi128_si32(v37)) )
                  break;
              }
              ++v35;
              v34 += 24;
              if ( v31 == v35 )
              {
                v25 = v45.m128i_i32[0];
                v1 = a1;
                v38 = -1;
                goto LABEL_44;
              }
            }
            v25 = v45.m128i_i32[0];
            v1 = a1;
            v38 = *(_DWORD *)v34 + _mm_cvtsi128_si32(_mm_sub_epi64(v28, v36));
          }
          else
          {
            v38 = -1;
          }
LABEL_44:
          v39 = v48.m128i_i32[0];
          *(_DWORD *)v1 = v38;
          *(_DWORD *)(v1 + 8) = v25;
          *(_DWORD *)(v1 + 4) = v39;
          *(_DWORD *)(v1 + 12) = -1;
        }
        goto LABEL_45;
      }
    }
  }
  v16 = 0;
LABEL_9:
  sub_80CD730(
    *(_DWORD *)(v1 + 360),
    _mm_add_epi64(_mm_load_si128(&v40), _mm_loadl_epi64((const __m128i *)(v1 + 364))).m128i_i64[0],
    0);
  return v16;
}
// 806D9BC: variable 'v4' is possibly undefined
// 806DA17: variable 'v8' is possibly undefined
// 806DA56: variable 'v12' is possibly undefined
// 806DA73: variable 'v13' is possibly undefined
// 806DBFB: variable 'v23' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
