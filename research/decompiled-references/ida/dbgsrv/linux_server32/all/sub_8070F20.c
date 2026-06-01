/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8070F20
// Address: 0x08070F20

//----- (08070F20) --------------------------------------------------------
int __cdecl sub_8070F20(int a1, _DWORD *a2)
{
  unsigned __int32 v2; // eax
  int result; // eax
  __m128i v4; // xmm1
  int v5; // edx
  __m128i v6; // xmm0
  unsigned int v7; // eax
  unsigned __int32 v8; // ebx
  unsigned int v9; // edi
  __int32 v10; // edx
  _BYTE *v11; // ecx
  __int32 v12; // ecx
  void *v13; // ebx
  void *v14; // ebx
  __int32 v15; // ecx
  unsigned int v16; // ecx
  __int32 v17; // ebx
  unsigned int v18; // eax
  unsigned int v19; // edx
  __m128i v20; // xmm1
  __m128i v21; // xmm3
  __int64 v22; // rax
  int v23; // eax
  int v24; // edx
  int v25; // ebx
  __int32 v26; // eax
  __int32 v27; // eax
  unsigned __int32 v28; // edi
  __m128i v29; // xmm0
  __int32 v30; // eax
  void *v31; // eax
  __m128i v32; // [esp-ECh] [ebp-ECh] BYREF
  __m128i v33; // [esp-DCh] [ebp-DCh]
  unsigned __int64 v34; // [esp-CCh] [ebp-CCh]
  _DWORD *v35; // [esp-C4h] [ebp-C4h]
  __m128i v36; // [esp-BCh] [ebp-BCh]
  _BYTE v37[24]; // [esp-ACh] [ebp-ACh] BYREF
  _DWORD v38[2]; // [esp-94h] [ebp-94h] BYREF
  __int128 v39; // [esp-8Ch] [ebp-8Ch]
  int v40; // [esp-7Ch] [ebp-7Ch]
  int v41; // [esp-78h] [ebp-78h]
  int v42; // [esp-74h] [ebp-74h]
  int v43; // [esp-70h] [ebp-70h]
  __int16 v44; // [esp-6Ch] [ebp-6Ch]
  char v45; // [esp-6Ah] [ebp-6Ah]
  _BYTE v46[24]; // [esp-64h] [ebp-64h] BYREF
  __m128i v47; // [esp-4Ch] [ebp-4Ch]
  __int64 v48; // [esp-3Ch] [ebp-3Ch]
  int v49; // [esp-34h] [ebp-34h]
  int v50; // [esp-30h] [ebp-30h]
  int v51; // [esp-2Ch] [ebp-2Ch]
  int v52; // [esp-28h] [ebp-28h]
  __int16 v53; // [esp-24h] [ebp-24h]
  char v54; // [esp-22h] [ebp-22h]
  unsigned int v55; // [esp-20h] [ebp-20h]

  v35 = a2;
  v55 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 48);
  if ( v2 < *(_DWORD *)(a1 + 52) )
  {
LABEL_2:
    *v35 = *(_DWORD *)(a1 + 28) + 68 * v2;
    result = 1;
    ++*(_DWORD *)(a1 + 48);
    goto LABEL_3;
  }
  v4 = _mm_loadl_epi64((const __m128i *)(a1 + 40));
  v5 = _mm_cvtsi128_si32(v4);
  v36.m128i_i32[0] = _mm_cvtsi128_si32(_mm_srli_epi64(v4, 0x20u));
  v6 = _mm_sub_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 16)), v4);
  v7 = _mm_cvtsi128_si32(v6);
  if ( _mm_cvtsi128_si32(_mm_srli_epi64(v6, 0x20u)) | v7 )
  {
    v8 = *(_DWORD *)(a1 + 32);
    v9 = v7;
    if ( v7 != v8 )
    {
      memset(v37, 0, sizeof(v37));
      v38[0] = 0;
      v38[1] = 0;
      v40 = 0;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v39 = 0;
      if ( v7 < v8 )
      {
        LODWORD(v34) = v7;
        v33.m128i_i32[0] = v8;
        v36.m128i_i32[0] = 68 * v7;
        do
        {
          v12 = *(_DWORD *)(a1 + 28) + v36.m128i_i32[0];
          v13 = *(void **)(v12 + 12);
          if ( v13 )
          {
            *(_DWORD *)(v12 + 16) = 0;
            v32.m128i_i32[0] = v12;
            sub_80CF780(v13);
            v12 = v32.m128i_i32[0];
          }
          v14 = *(void **)v12;
          if ( *(_DWORD *)v12 )
          {
            *(_DWORD *)(v12 + 4) = 0;
            sub_80CF780(v14);
          }
          ++v9;
          v36.m128i_i32[0] += 68;
        }
        while ( v9 < v33.m128i_i32[0] );
        v9 = v34;
        *(_DWORD *)(a1 + 32) = v34;
      }
      else
      {
        v10 = *(_DWORD *)(a1 + 36);
        v32.m128i_i32[0] = a1 + 28;
        v11 = *(_BYTE **)(a1 + 28);
        v36.m128i_i32[0] = v10;
        v33.m128i_i32[0] = (__int32)v37;
        if ( v37 < v11 || v33.m128i_i32[0] >= (unsigned int)&v11[68 * v36.m128i_i32[0]] )
        {
          if ( v36.m128i_i32[0] < v7 )
          {
            v31 = sub_80CF920(v32.m128i_i32[0], v11, v7, 0x44u);
            v8 = *(_DWORD *)(a1 + 32);
            *(_DWORD *)(a1 + 28) = v31;
          }
          for ( v36.m128i_i32[0] = 68 * v8; v8 < v9; v36.m128i_i32[0] += 68 )
          {
            sub_8069850(*(_DWORD *)(a1 + 28) + v36.m128i_i32[0], v33.m128i_i32[0]);
            ++v8;
          }
          *(_DWORD *)(a1 + 32) = v9;
        }
        else
        {
          v29 = _mm_loadu_si128((const __m128i *)v38);
          v54 = 0;
          v53 = 0;
          v47 = v29;
          memset(v46, 0, sizeof(v46));
          v49 = 0;
          v50 = 0;
          v51 = 0;
          v52 = 0;
          v36.m128i_i32[0] = (__int32)v46;
          v48 = *((_QWORD *)&v39 + 1);
          sub_8070CC0(v32.m128i_i32[0], v7, (int)v46);
        }
      }
      v5 = *(_DWORD *)(a1 + 40);
      v36.m128i_i32[0] = *(_DWORD *)(a1 + 44);
    }
    v15 = v36.m128i_i32[0];
    *(_DWORD *)(a1 + 48) = 0;
    if ( !__PAIR64__(v15, v5) )
    {
      (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 4) + 468) + 8))(
        *(_DWORD *)(*(_DWORD *)(a1 + 4) + 468),
        *(_DWORD *)(a1 + 4));
      v5 = *(_DWORD *)(a1 + 40);
      v36.m128i_i32[0] = *(_DWORD *)(a1 + 44);
    }
    v16 = *(_DWORD *)(a1 + 24);
    v17 = v36.m128i_i32[0];
    v33.m128i_i8[0] = v16 == 0;
    if ( v36.m128i_i32[0] | v5 && !v33.m128i_i8[0] )
    {
      v36.m128i_i32[0] = 0;
      v32.m128i_i32[0] = 0;
      if ( v17 )
      {
        v32.m128i_i64[0] = (unsigned int)v5 * (unsigned __int64)v16;
        v34 = v16 * (unsigned __int64)(unsigned int)v17;
        if ( (v34 + v32.m128i_u32[1]) >> 32 )
        {
          v36.m128i_i32[0] = 1;
          v32.m128i_i32[0] = 0;
        }
      }
      if ( v36.m128i_i32[0] )
        goto LABEL_29;
    }
    if ( v9 && !v33.m128i_i8[0] && !is_mul_ok(v9, v16) )
    {
LABEL_29:
      *(_DWORD *)(a1 + 52) = 0;
      result = 0;
    }
    else
    {
      v33.m128i_i32[0] = *(_DWORD *)(a1 + 4);
      v18 = sub_80CD730(*(_DWORD *)(v33.m128i_i32[0] + 360), 0, 1);
      v20 = _mm_loadl_epi64((const __m128i *)(v33.m128i_i32[0] + 364));
      v21 = _mm_sub_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), _mm_cvtsi32_si128(v19)), v20);
      v32.m128i_i64[0] = v21.m128i_i64[0];
      LODWORD(v34) = _mm_cvtsi128_si32(v21);
      v22 = *(_QWORD *)(a1 + 40) * *(unsigned int *)(a1 + 24);
      v36 = _mm_add_epi64(
              _mm_add_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(HIDWORD(v22))),
                _mm_loadl_epi64((const __m128i *)(a1 + 8))),
              v20);
      v23 = sub_80CD730(*(_DWORD *)(v33.m128i_i32[0] + 360), v36.m128i_i64[0], 0);
      if ( (v24 & v23) == 0xFFFFFFFF || !v9 )
      {
        v36 = _mm_add_epi64(
                _mm_load_si128(&v32),
                _mm_loadl_epi64((const __m128i *)((char *)&off_811D160 + v33.m128i_i32[0] - 135385076)));
        sub_80CD730(*(int *)((char *)&off_811D15C + v33.m128i_i32[0] - 135385076), v36.m128i_i64[0], 0);
        *(_DWORD *)(a1 + 52) = 0;
        result = 0;
      }
      else
      {
        v36.m128i_i32[0] = 0;
        v25 = 0;
        while ( (unsigned __int8)sub_806CFD0(a1, v25 + *(_DWORD *)(a1 + 28)) )
        {
          ++v36.m128i_i32[0];
          v25 += 68;
          if ( v9 == v36.m128i_i32[0] )
          {
            v30 = v33.m128i_i32[0];
            v33 = _mm_add_epi64(
                    _mm_load_si128(&v32),
                    _mm_loadl_epi64((const __m128i *)((char *)&off_811D160 + v33.m128i_i32[0] - 135385076)));
            sub_80CD730(*(int *)((char *)&off_811D15C + v30 - 135385076), v33.m128i_i64[0], 0);
            *(_DWORD *)(a1 + 52) = v36.m128i_i32[0];
            goto LABEL_39;
          }
        }
        v26 = v33.m128i_i32[0];
        v33 = _mm_add_epi64(
                _mm_load_si128(&v32),
                _mm_loadl_epi64((const __m128i *)((char *)&off_811D160 + v33.m128i_i32[0] - 135385076)));
        sub_80CD730(*(int *)((char *)&off_811D15C + v26 - 135385076), v33.m128i_i64[0], 0);
        v27 = v36.m128i_i32[0];
        *(_DWORD *)(a1 + 52) = v36.m128i_i32[0];
        if ( !v27 )
          goto LABEL_6;
LABEL_39:
        v28 = v36.m128i_i32[0];
        v2 = *(_DWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 40) += v36.m128i_u32[0];
        if ( v2 < v28 )
          goto LABEL_2;
        result = 0;
      }
    }
  }
  else
  {
LABEL_6:
    result = 0;
  }
LABEL_3:
  if ( v55 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 807125C: variable 'v19' is possibly undefined
// 80712EB: variable 'v24' is possibly undefined
// 811D15C: using guessed type _UNKNOWN *off_811D15C;
// 811D160: using guessed type _UNKNOWN *off_811D160;
