size_t __fastcall sub_7B8AC0(__int64 a1, unsigned int a2, __int64 *a3, unsigned int a4, __int64 a5, __m128i a6)
{
  __int64 v6; // r9
  unsigned int v8; // r12d
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rsi
  size_t v14; // r15
  _QWORD *v15; // r14
  __int64 v17; // rax
  __int64 *v18; // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(__int64, __int64, __int64, int *, __int64, __int64); // r8
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, __int64, __int64, int *, __int64, __int64); // r8
  int v24; // eax
  unsigned int v25; // r15d
  __m128i v26; // xmm0
  unsigned int v27; // r12d
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rsi
  _DWORD *v32; // rbp
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 i; // rax
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __m128i v38; // xmm0
  __int64 v39; // rdi
  char v40; // [rsp+8h] [rbp-70h]
  unsigned int v41; // [rsp+1Ch] [rbp-5Ch] BYREF
  int v42; // [rsp+20h] [rbp-58h] BYREF
  int v43; // [rsp+24h] [rbp-54h]
  __int64 v44; // [rsp+28h] [rbp-50h]
  unsigned __int64 v45; // [rsp+30h] [rbp-48h] BYREF
  __int64 v46; // [rsp+38h] [rbp-40h]

  v6 = (unsigned int)a5;
  v8 = a2;
  if ( a4 == 1 )
  {
    v17 = *a3;
    if ( a2 == -2 )
    {
      v25 = (unsigned __int8)a5 + 1;
      if ( v17 )
      {
        v26 = _mm_loadl_epi64((const __m128i *)(v17 - 8));
        v27 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v26, 229));
        v28 = (_QWORD *)sub_186B270(4LL * (unsigned int)_mm_cvtsi128_si32(v26) + 8);
        v31 = *a3;
        v32 = v28;
        v33 = v28 + 1;
        *v28 = v26.m128i_i64[0];
        if ( v31 )
        {
          v34 = 4LL * *(unsigned int *)(v31 - 4);
          if ( v34 )
          {
            for ( i = 0; i != v34; i += 4LL )
              v32[i / 4 + 2] = *(_DWORD *)(v31 + i);
            v27 = v32[1];
          }
        }
        v36 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12));
        v37 = *(_QWORD *)(a1 + 24);
        v46 = 0;
        v45 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), v36).m128i_u64[0];
        sub_11C4C20(v37, v27, v33, &v45, v29, v30);
        sub_186B220(v32);
      }
      else
      {
        v38 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12));
        v39 = *(_QWORD *)(a1 + 24);
        v46 = 0;
        v45 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v25), v38).m128i_u64[0];
        sub_11C4C20(v39, 0, 0, &v45, a5, (unsigned int)a5);
      }
      return 0;
    }
    if ( v17 )
    {
      v11 = *(unsigned int *)(v17 - 4);
      if ( (_DWORD)v11 )
        goto LABEL_5;
    }
LABEL_10:
    v18 = *(__int64 **)(a1 + 24);
    v19 = *(_DWORD *)(a1 + 12);
    v8 = a2 ^ 1;
    goto LABEL_13;
  }
  if ( !a4 )
  {
    if ( a2 == -2 )
      return 0;
    v18 = *(__int64 **)(a1 + 24);
    v19 = *(_DWORD *)(a1 + 12);
LABEL_13:
    v20 = *v18;
    v41 = v8;
    v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int *, __int64, __int64))(v20 + 16);
    v42 = 1;
    v43 = v19;
    v44 = 0;
    if ( (char *)v21 == (char *)sub_788610 )
    {
      HIDWORD(v45) = v19;
      LODWORD(v45) = 1;
      v46 = 0;
      sub_11C4C20(v18, 1, &v41, &v45, v21, v6);
    }
    else
    {
      v21((__int64)v18, 1, (__int64)&v41, &v42, (__int64)v21, v6);
    }
    return 0;
  }
  if ( !*a3 || (v11 = *(unsigned int *)(*a3 - 4), (unsigned int)v11 < a4) )
  {
    if ( a2 == -2 )
    {
      v22 = *(_QWORD *)(a1 + 24);
      v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int *, __int64, __int64))(*(_QWORD *)v22 + 16LL);
      v24 = *(_DWORD *)(a1 + 12);
      v42 = 1;
      v44 = 0;
      v43 = v24;
      if ( (char *)v23 == (char *)sub_788610 )
      {
        HIDWORD(v45) = v24;
        LODWORD(v45) = 1;
        v46 = 0;
        sub_11C4C20(v22, 0, 0, &v45, v23, v6);
      }
      else
      {
        v23(v22, 0, 0, &v42, (__int64)v23, v6);
      }
      return 0;
    }
    goto LABEL_10;
  }
LABEL_5:
  v40 = a5;
  v12 = (_QWORD *)sub_17E9C90(a1 + 224, 4 * v11 + 72);
  v13 = *(unsigned int *)(a1 + 780);
  *v12 = a1;
  v14 = (size_t)(v12 + 1);
  v15 = v12;
  *(_DWORD *)(a1 + 780) = v13 + 1;
  *(double *)a6.m128i_i64 = sub_827B00(v12 + 1, v13, v8, a3, a4);
  *((_BYTE *)v15 + 56) = v40;
  sub_7B86A0((unsigned int *)a1, v14, a6);
  return v14;
}

