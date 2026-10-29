__int64 __fastcall sub_2084D00(
        __int64 *a1,
        int a2,
        __m128 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        char a10)
{
  __int16 v10; // r12
  __int64 v12; // r13
  __m128i v13; // xmm4
  __int64 v14; // r15
  __int64 v16; // r9
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rdx
  __m128 *v24; // rax
  unsigned int v25; // r11d
  int v26; // eax
  int v27; // r10d
  int v28; // edx
  unsigned int v29; // eax
  unsigned __int64 *v30; // rsi
  unsigned __int64 v31; // rcx
  unsigned __int8 v32; // r11
  __int64 v33; // r11
  int v34; // r11d
  __int64 v35; // rcx
  unsigned __int64 *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __m128 *v39; // rdi
  __int64 v40; // [rsp-8h] [rbp-E0h]
  __m128i v42; // [rsp+10h] [rbp-C8h] BYREF
  unsigned int v43; // [rsp+24h] [rbp-B4h]
  __m128 *v44; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v45; // [rsp+30h] [rbp-A8h]
  __int64 v46; // [rsp+3Ch] [rbp-9Ch]
  __int64 v47; // [rsp+44h] [rbp-94h]
  int v48; // [rsp+4Ch] [rbp-8Ch]
  __int64 v49; // [rsp+50h] [rbp-88h] BYREF
  _QWORD *v50; // [rsp+58h] [rbp-80h] BYREF
  __m128 v51; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v52[80]; // [rsp+70h] [rbp-68h] BYREF

  v10 = a2;
  v12 = *a1;
  v42.m128i_i64[0] = a4;
  v43 = a6;
  if ( a9 )
  {
    v44 = a3;
    v42 = (__m128i)_mm_loadh_ps((const double *)v42.m128i_i64);
    goto LABEL_3;
  }
  v44 = a3;
  *(_DWORD *)v52 = a2;
  *(__m128 *)&v52[8] = _mm_loadh_ps((const double *)v42.m128i_i64);
  v24 = *(__m128 **)(v12 + 736);
  v42 = *(__m128i *)&v52[8];
  *(__m128i *)&v52[24] = _mm_unpacklo_epi64(
                           _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5), _mm_cvtsi32_si128(v43)),
                           _mm_unpacklo_epi32(_mm_cvtsi32_si128(a7), _mm_cvtsi32_si128(a8)));
  v25 = *(_DWORD *)(v12 + 752);
  v44 = v24;
  if ( v25 )
  {
    LODWORD(v45) = v25;
    v26 = sub_2073EA0(a2, (__int64 *)&v52[8], (__int64 *)&v52[16], (int *)&v52[24], (int *)&v52[28]);
    v27 = 1;
    v28 = v45 - 1;
    v45 = *(_QWORD *)&v52[16];
    v29 = v28 & v26;
    v46 = *(_QWORD *)&v52[24];
    v47 = *(_QWORD *)&v52[32];
    v30 = (unsigned __int64 *)v44 + v29;
    v31 = *v30;
    if ( *v30 != -4096 )
    {
      v48 = v28;
      while ( 1 )
      {
        if ( v31 != -8192 && *(_DWORD *)v52 == *(unsigned __int16 *)(v31 + 2) )
        {
          v32 = *(_BYTE *)(v31 - 16);
          v33 = (v32 & 2) != 0 ? *(_QWORD *)(v31 - 32) : v31 + -16 - 8LL * ((v32 >> 2) & 0xF);
          if ( __PAIR128__(v45, *(unsigned __int64 *)&v52[8]) == *(_OWORD *)(v33 + 16) )
          {
            v34 = 0;
            if ( *(_WORD *)(v31 + 2) != 17152 )
              v34 = *(_DWORD *)(v31 + 4);
            if ( (_DWORD)v46 == v34
              && __PAIR64__(HIDWORD(v46), v47) == *(_QWORD *)(v31 + 24)
              && HIDWORD(v47) == *(_DWORD *)(v31 + 20) )
            {
              break;
            }
          }
        }
        v29 = v48 & (v27 + v29);
        v30 = (unsigned __int64 *)v44 + v29;
        v31 = *v30;
        if ( *v30 == -4096 )
          goto LABEL_31;
        ++v27;
      }
      v35 = v12 + 736;
      v36 = (unsigned __int64 *)(*(_QWORD *)(v12 + 736) + 8LL * *(unsigned int *)(v12 + 752));
      goto LABEL_33;
    }
LABEL_31:
    v25 = *(_DWORD *)(v12 + 752);
    v44 = *(__m128 **)(v12 + 736);
  }
  v35 = v12 + 736;
  v30 = (unsigned __int64 *)v44 + v25;
  v36 = v30;
LABEL_33:
  v44 = &v51;
  sub_2081CC0(&v51, v30, v36, v35, 1);
  v37 = *(unsigned int *)(v12 + 752);
  v38 = *(_QWORD *)(v12 + 736);
  v39 = v44;
  v44 = (__m128 *)v51.m128_u64[0];
  sub_2081CC0(v39, (_QWORD *)(v38 + 8 * v37), (_QWORD *)(v38 + 8 * v37), v12 + 736, 1);
  if ( (__m128 *)v51.m128_u64[0] != v44 )
  {
    v14 = v44->m128_u64[0];
    if ( v44->m128_u64[0] )
      return v14;
  }
  if ( !a10 )
    return 0;
  v12 = *a1;
LABEL_3:
  v13 = _mm_load_si128(&v42);
  *(_OWORD *)v52 = 0;
  *(_QWORD *)&v52[32] = 0;
  *(__m128i *)&v52[16] = v13;
  v14 = sub_20B4330(32, 5, a9);
  sub_20B2FD0(v14, (_DWORD)a1, 12, a9, (unsigned int)v52, 5, 0, 0);
  *(_WORD *)(v14 + 2) = v10;
  *(_DWORD *)(v14 + 16) = 0;
  *(_DWORD *)(v14 + 20) = a8;
  *(_DWORD *)(v14 + 4) = a5;
  v49 = v14;
  *(_DWORD *)(v14 + 24) = a7;
  *(_DWORD *)(v14 + 28) = v43;
  if ( !a9 )
  {
    if ( (unsigned __int8)sub_207EB80((__int64 *)(v12 + 736), &v49, &v50) )
    {
      sub_2081CC0(&v51, v50, (_QWORD *)(*(_QWORD *)(v12 + 736) + 8LL * *(unsigned int *)(v12 + 752)), v12 + 736, 1);
      return v49;
    }
    v17 = v50;
    v18 = (unsigned int)(*(_DWORD *)(v12 + 744) + 1);
    v19 = *(unsigned int *)(v12 + 752);
    v51.m128_u64[0] = (unsigned __int64)v50;
    v20 = (unsigned int)(4 * v18);
    if ( (unsigned int)v20 >= 3 * (int)v19 )
    {
      sub_20849C0(v12 + 736, 2 * v19, v18, (unsigned int)(2 * v19), v20, v16);
    }
    else
    {
      v21 = (unsigned int)(v19 - *(_DWORD *)(v12 + 748) - v18);
      if ( (unsigned int)v21 > (unsigned int)v19 >> 3 )
      {
LABEL_11:
        v22 = *v17 == -4096;
        *(_DWORD *)(v12 + 744) = v18;
        if ( !v22 )
          --*(_DWORD *)(v12 + 748);
        *v17 = v49;
        v23 = *(_QWORD *)(v12 + 736);
        v50 = v17;
        sub_2081CC0(&v51, v17, (_QWORD *)(v23 + 8 * v19), v12 + 736, 1);
        return v49;
      }
      sub_20849C0(v12 + 736, v19, v18, v21, v20, (__int64)&v51);
    }
    sub_207EB80((__int64 *)(v12 + 736), &v49, &v51);
    v17 = (_QWORD *)v51.m128_u64[0];
    v19 = *(unsigned int *)(v12 + 752);
    LODWORD(v18) = *(_DWORD *)(v12 + 744) + 1;
    goto LABEL_11;
  }
  if ( a9 == 1 )
  {
    sub_20AC2A0(v14, a1, v40);
    return v49;
  }
  return v14;
}
