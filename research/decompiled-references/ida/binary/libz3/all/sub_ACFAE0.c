__int64 __fastcall sub_ACFAE0(__int64 a1, __int64 a2, char a3)
{
  __int16 v4; // ax
  _DWORD *v5; // rax
  char *v6; // rsi
  __int64 v7; // rax
  int v8; // edx
  __m128 v9; // xmm0
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // ecx
  char *v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // ecx
  _QWORD *v21; // rsi
  unsigned int v22; // eax
  unsigned int v23; // edx
  unsigned __int64 v24; // xmm0_8
  __int64 v25; // rdi
  char *v26; // rsi
  __int64 v27; // rax
  int v28; // edx
  __m128 v29; // xmm0
  __int64 v30; // rdi
  _DWORD *v31; // rax
  _QWORD *v32; // rsi
  unsigned int v33; // eax
  unsigned int v34; // edx
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __int64 v37; // rdi
  char *v38; // rsi
  __int64 v39; // rax
  int v40; // edx
  __m128 v41; // xmm0
  __int64 v42; // rdi
  _QWORD *v43; // rsi
  unsigned int v44; // eax
  unsigned int v45; // edx
  unsigned __int64 v46; // xmm0_8
  __int64 v47; // rdi
  _QWORD *v48; // rsi
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  __int64 v51; // rdi
  char v52; // [rsp+7h] [rbp-41h] BYREF
  __int64 v53; // [rsp+8h] [rbp-40h] BYREF
  __int64 v54; // [rsp+10h] [rbp-38h] BYREF
  __int64 v55; // [rsp+18h] [rbp-30h] BYREF
  __int64 v56; // [rsp+20h] [rbp-28h] BYREF
  __int64 v57; // [rsp+28h] [rbp-20h]

  v4 = *(_WORD *)(a2 + 4);
  if ( v4 == 1 )
  {
    if ( a3 )
    {
      v18 = sub_186B270(0x28u);
      v19 = *(_QWORD *)(a1 + 8);
      v20 = *(_DWORD *)(a2 + 16);
      v14 = (char *)v18;
      v15 = *(_QWORD *)(v19 + 856);
      *((_QWORD *)v14 + 1) = v19;
      *((_DWORD *)v14 + 4) = v20;
      *(__m128i *)(v14 + 24) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v19);
      if ( !v15 )
        goto LABEL_15;
    }
    else
    {
      v11 = sub_186B270(0x28u);
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(_DWORD *)(a2 + 16);
      v14 = (char *)v11;
      v15 = *(_QWORD *)(v12 + 864);
      *((_QWORD *)v14 + 1) = v12;
      *((_DWORD *)v14 + 4) = v13;
      *(__m128i *)(v14 + 24) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v12);
      if ( !v15 )
      {
LABEL_15:
        v16 = *(_QWORD *)(a1 + 392);
        *(_QWORD *)v14 = &off_1C56B30;
        return sub_ACE600(v16, v14);
      }
    }
    ++*(_DWORD *)(v15 + 8);
    goto LABEL_15;
  }
  if ( v4 )
  {
    sub_1872CE0("");
    sub_1873130(114, 2166);
  }
  v56 = 0;
  v57 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v5 || *v5 )
    goto LABEL_59;
  if ( v5[1] == 2 )
  {
    if ( (unsigned __int8)sub_ACCD70(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), &v53, &v56, &v52) )
    {
      if ( a3 )
      {
        v26 = (char *)sub_186B270(0x28u);
        v27 = v56;
        v28 = *(_DWORD *)(v53 + 16);
        v29 = _mm_loadh_ps((const double *)(a1 + 8));
        *((_QWORD *)v26 + 1) = *(_QWORD *)(a1 + 8);
        *((_DWORD *)v26 + 4) = v28;
        *(__m128 *)(v26 + 24) = v29;
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        v30 = *(_QWORD *)(a1 + 392);
        *(_QWORD *)v26 = &off_1C56B30;
        sub_ACE600(v30, v26);
      }
      else
      {
        v38 = (char *)sub_186B270(0x28u);
        v39 = v56;
        v40 = *(_DWORD *)(v53 + 16);
        v41 = _mm_loadh_ps((const double *)(a1 + 8));
        *((_QWORD *)v38 + 1) = *(_QWORD *)(a1 + 8);
        *((_DWORD *)v38 + 4) = v40;
        *(__m128 *)(v38 + 24) = v41;
        if ( v39 )
          ++*(_DWORD *)(v39 + 8);
        v42 = *(_QWORD *)(a1 + 392);
        *(_QWORD *)v38 = &off_1C56AD8;
        sub_ACE600(v42, v38);
      }
      return sub_AC6F60(v56, v57);
    }
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_59;
    v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v5 || *v5 )
      goto LABEL_59;
  }
  if ( v5[1] != 2 || !(unsigned __int8)sub_ACCF60(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), &v54, &v55) )
  {
LABEL_59:
    if ( a3
      && (unsigned __int8)sub_1392640(a1 + 16)
      && (unsigned __int8)sub_ACCF60(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), &v54, &v55) )
    {
      if ( !*(_WORD *)(a2 + 4)
        && (v31 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr
        && *(_DWORD *)(a1 + 368) == *v31
        && v31[1] == 23 )
      {
        v48 = (_QWORD *)sub_186B270(0x18u);
        v49 = _mm_cvtsi32_si128(*(_DWORD *)(v55 + 16));
        v50 = _mm_cvtsi32_si128(*(_DWORD *)(v54 + 16));
        v48[1] = *(_QWORD *)(a1 + 8);
        if ( _mm_cvtsi128_si32(v49) >= (unsigned int)_mm_cvtsi128_si32(v50) )
          v48[2] = _mm_unpacklo_epi32(v50, v49).m128i_u64[0];
        else
          v48[2] = _mm_unpacklo_epi32(v49, v50).m128i_u64[0];
        v51 = *(_QWORD *)(a1 + 392);
        *v48 = off_1C56A80;
        sub_ACE600(v51, v48);
      }
      else
      {
        v32 = (_QWORD *)sub_186B270(0x18u);
        v33 = *(_DWORD *)(v55 + 16);
        v34 = *(_DWORD *)(v54 + 16);
        v32[1] = *(_QWORD *)(a1 + 8);
        if ( v33 >= v34 )
        {
          v35 = _mm_cvtsi32_si128(v34);
          v36 = _mm_cvtsi32_si128(v33);
        }
        else
        {
          v35 = _mm_cvtsi32_si128(v33);
          v36 = _mm_cvtsi32_si128(v34);
        }
        v32[2] = _mm_unpacklo_epi32(v35, v36).m128i_u64[0];
        v37 = *(_QWORD *)(a1 + 392);
        *v32 = off_1C56A28;
        sub_ACE600(v37, v32);
      }
    }
    else if ( (unsigned __int8)sub_ACD0B0(a1, a2, a3, &v53, &v56) )
    {
      v6 = (char *)sub_186B270(0x28u);
      v7 = v56;
      v8 = *(_DWORD *)(v53 + 16);
      v9 = _mm_loadh_ps((const double *)(a1 + 8));
      *((_QWORD *)v6 + 1) = *(_QWORD *)(a1 + 8);
      *((_DWORD *)v6 + 4) = v8;
      *(__m128 *)(v6 + 24) = v9;
      if ( v7 )
        ++*(_DWORD *)(v7 + 8);
      v10 = *(_QWORD *)(a1 + 392);
      *(_QWORD *)v6 = &off_1C56B88;
      sub_ACE600(v10, v6);
    }
    else
    {
      sub_ACF4A0(a1, a2);
    }
  }
  else if ( a3 )
  {
    v21 = (_QWORD *)sub_186B270(0x18u);
    v22 = *(_DWORD *)(v55 + 16);
    v23 = *(_DWORD *)(v54 + 16);
    v21[1] = *(_QWORD *)(a1 + 8);
    if ( v22 < v23 )
      v24 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v23)).m128i_u64[0];
    else
      v24 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v22)).m128i_u64[0];
    v21[2] = v24;
    v25 = *(_QWORD *)(a1 + 392);
    *v21 = off_1C569D0;
    sub_ACE600(v25, v21);
  }
  else
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 392) + 33LL) = 1;
    v43 = (_QWORD *)sub_186B270(0x18u);
    v44 = *(_DWORD *)(v55 + 16);
    v45 = *(_DWORD *)(v54 + 16);
    v43[1] = *(_QWORD *)(a1 + 8);
    if ( v44 < v45 )
      v46 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v44), _mm_cvtsi32_si128(v45)).m128i_u64[0];
    else
      v46 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v45), _mm_cvtsi32_si128(v44)).m128i_u64[0];
    v43[2] = v46;
    v47 = *(_QWORD *)(a1 + 392);
    *v43 = off_1C56978;
    sub_ACE600(v47, v43);
  }
  return sub_AC6F60(v56, v57);
}

