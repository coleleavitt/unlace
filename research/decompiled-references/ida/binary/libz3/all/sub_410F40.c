__m128i *__fastcall sub_410F40(__int64 a1, const __m128i *a2, double a3, double a4, __m128 a5)
{
  __int64 v7; // rax
  __m128i *v8; // rbx
  __m128i *v9; // r12
  __int64 v11; // rax
  __m128 v12; // xmm0
  unsigned __int64 v13; // xmm2_8
  __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  size_t v19; // rdx
  __int64 v20; // rax
  __m128i v21; // xmm0
  int v22; // edx
  unsigned int v23; // r13d
  unsigned int v24; // eax
  int v25; // eax
  __m128i *i; // rdx
  int v27; // ecx
  __int64 v28; // rax
  unsigned int v29; // esi
  __m128i *v30; // r13
  __int64 v31; // rsi
  __m128i *v32; // r14
  __m128i *v33; // r15
  __int64 v34; // rdi
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // rax
  __m128i *v38; // rax
  __m128i *v39; // r14
  __m128i *v40; // r9
  __int64 v41; // r8
  const __m128i *v42; // rcx
  __m128i *v43; // r15
  int v44; // eax
  __int64 v45; // rax
  __m128i *v46; // rdx
  __m128i *v47; // rax
  unsigned int v48; // [rsp+0h] [rbp-88h]
  int v49; // [rsp+0h] [rbp-88h]
  const __m128i *v50; // [rsp+0h] [rbp-88h]
  __m128i *v51; // [rsp+8h] [rbp-80h]
  __m128i *v52; // [rsp+8h] [rbp-80h]
  __int64 v53; // [rsp+10h] [rbp-78h]
  __m128i v54; // [rsp+20h] [rbp-68h] BYREF
  size_t v55; // [rsp+30h] [rbp-58h]
  unsigned int v56; // [rsp+3Ch] [rbp-4Ch]
  _OWORD v57[4]; // [rsp+40h] [rbp-48h] BYREF

  v57[0] = a2->m128i_u64[0];
  v7 = sub_41F0C0(a1, v57);
  v8 = (__m128i *)v7;
  if ( v7 )
    return *(__m128i **)(v7 + 8);
  v11 = sub_186B270(0x40u);
  v12 = (__m128)_mm_loadu_si128(a2);
  v9 = (__m128i *)v11;
  v13 = _mm_movehl_ps(a5, v12).m128_u64[0];
  *(_QWORD *)(v11 + 16) = a2[1].m128i_i64[0];
  *(__m128 *)v11 = v12;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  *(_QWORD *)(v11 + 24) = 0;
  v14 = a2[1].m128i_i64[1];
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 - 4);
    v16 = *(unsigned int *)(v14 - 8);
    v48 = v16;
    v17 = (_QWORD *)sub_186B270(8 * v16 + 8);
    v18 = (_QWORD *)a2[1].m128i_i64[1];
    v9[1].m128i_i64[1] = (__int64)(v17 + 1);
    *v17 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v48), _mm_cvtsi32_si128(v15)).m128i_u64[0];
    if ( v18 )
    {
      v19 = 8LL * *((unsigned int *)v18 - 1);
      if ( v19 <= 8 )
      {
        if ( v19 == 8 )
          v17[1] = *v18;
      }
      else
      {
        memmove(v17 + 1, v18, v19);
      }
    }
  }
  v20 = a2[2].m128i_i64[0];
  v9[2].m128i_i64[1] = 0;
  v9[2].m128i_i64[0] = v20;
  sub_3EE030((__int64)v9[2].m128i_i64, (__int64)a2[2].m128i_i64);
  v21 = _mm_loadu_si128(a2 + 3);
  v9[3] = v21;
  if ( v21.m128i_i64[0] )
    ++*(_DWORD *)(v21.m128i_i64[0] + 8);
  v22 = *(_DWORD *)(a1 + 8);
  v53 = v9->m128i_i64[0];
  v23 = 2 * v22;
  v24 = 4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16));
  v54 = _mm_unpacklo_epi64((__m128i)v9->m128i_u64[0], (__m128i)(unsigned __int64)v9);
  if ( 3 * v22 < v24 )
  {
    v55 = 16LL * v23;
    v38 = (__m128i *)sub_186B270(v55);
    v39 = v38;
    v40 = &v38[v55 / 0x10];
    if ( v23 )
    {
      if ( (v55 & 0x10) == 0 || (*v38 = 0, ++v38, v40 != v38) )
      {
        do
        {
          *v38 = 0;
          v38 += 2;
          v38[-1] = 0;
        }
        while ( v40 != v38 );
      }
    }
    v41 = *(unsigned int *)(a1 + 8);
    v42 = *(const __m128i **)a1;
    v56 = v23 - 1;
    v41 *= 16;
    v43 = (__m128i *)((char *)v42 + v41);
    if ( v42 != (const __m128i *)&v42->m128i_i8[v41] )
    {
      do
      {
        if ( v42->m128i_i64[0] > 1uLL )
        {
          v52 = v40;
          v50 = v42;
          v44 = ((__int64 (*)(void))sub_62A5E0)();
          v40 = v52;
          v42 = v50;
          v45 = 16LL * (v56 & v44);
          v46 = &v39[(unsigned __int64)v45 / 0x10];
          if ( v55 == v45 )
          {
LABEL_54:
            if ( v39 == v46 )
            {
LABEL_63:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v47 = v39;
            while ( v47->m128i_i64[0] )
            {
              if ( v46 == ++v47 )
                goto LABEL_63;
            }
          }
          else
          {
            v47 = &v39[(unsigned __int64)v45 / 0x10];
            while ( v47->m128i_i64[0] )
            {
              if ( v52 == ++v47 )
                goto LABEL_54;
            }
          }
          *v47 = _mm_loadu_si128(v50);
        }
        ++v42;
      }
      while ( v43 != v42 );
      v43 = *(__m128i **)a1;
    }
    if ( v43 )
      sub_186B220(v43);
    *(_QWORD *)a1 = v39;
    *(_DWORD *)(a1 + 8) = v23;
    *(_DWORD *)(a1 + 16) = 0;
  }
  v25 = sub_62A5E0(v53);
  i = *(__m128i **)a1;
  v27 = v25;
  v49 = v25;
  v28 = *(unsigned int *)(a1 + 8);
  v29 = v28 - 1;
  v28 *= 16;
  v30 = (__m128i *)(*(_QWORD *)a1 + v28);
  v31 = 16LL * (v27 & v29);
  v32 = (__m128i *)(*(_QWORD *)a1 + v31);
  if ( v31 == v28 )
    goto LABEL_25;
  v33 = &i[(unsigned __int64)v31 / 0x10];
  while ( 1 )
  {
    v34 = v33->m128i_i64[0];
    if ( v33->m128i_i64[0] <= 1uLL )
      break;
    if ( v49 == (unsigned int)sub_62A5E0(v34) && v53 == v33->m128i_i64[0] )
    {
      *v33 = _mm_load_si128(&v54);
      goto LABEL_34;
    }
LABEL_17:
    if ( v30 == ++v33 )
    {
      for ( i = *(__m128i **)a1; ; ++i )
      {
LABEL_25:
        if ( v32 == i )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v35 = i->m128i_i64[0];
        if ( i->m128i_i64[0] <= 1uLL )
        {
          if ( !v35 )
          {
            if ( v8 )
              --*(_DWORD *)(a1 + 16);
            else
              v8 = i;
            goto LABEL_33;
          }
          v8 = i;
        }
        else
        {
          v51 = i;
          v36 = sub_62A5E0(v35);
          i = v51;
          if ( v49 == v36 && v53 == v51->m128i_i64[0] )
          {
            *v51 = _mm_load_si128(&v54);
            goto LABEL_34;
          }
        }
      }
    }
  }
  if ( v34 )
  {
    v8 = v33;
    goto LABEL_17;
  }
  if ( v8 )
    --*(_DWORD *)(a1 + 16);
  else
    v8 = v33;
LABEL_33:
  *v8 = _mm_load_si128(&v54);
  ++*(_DWORD *)(a1 + 12);
LABEL_34:
  v37 = v9[3].m128i_i64[0];
  if ( v37 )
  {
    v57[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)(unsigned __int64)v9);
    sub_41E4C0(a1 + 24, v57);
  }
  return v9;
}

