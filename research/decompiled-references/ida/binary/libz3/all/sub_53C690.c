char *__fastcall sub_53C690(char *a1, char *a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rax
  __int64 *v4; // r13
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rbx
  void *v8; // r15
  __int64 v9; // rsi
  __int64 **v10; // rbx
  __m128i v11; // xmm0
  _QWORD *v12; // rax
  __int64 *v13; // r15
  _QWORD *v14; // r14
  __int64 v15; // rax
  unsigned int v16; // ebp
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __m128i v19; // xmm0
  _QWORD *v20; // rbx
  __m128i v21; // xmm1
  __int64 v22; // rbp
  __int64 v23; // r14
  int v24; // eax
  void *v25; // r13
  _QWORD *v26; // rbx
  __int64 v27; // rax
  _QWORD *v28; // r13
  void *v29; // rbp
  _QWORD *v30; // rsi
  char *v31; // rbx
  __int64 v32; // rax
  __m128i v33; // xmm0
  _QWORD *v34; // rax
  _QWORD *v35; // r15
  __int64 v36; // rbp
  __int64 v37; // rax
  __int64 v38; // r14
  _QWORD *v39; // rbx
  int v40; // eax
  void *v41; // r13
  char *result; // rax
  _QWORD *v43; // rdi
  char *v44; // rbx
  __int64 v45; // rax
  __m128i v46; // xmm0
  char *v47; // rsi
  size_t v48; // rdx
  _QWORD *v49; // [rsp+0h] [rbp-68h]
  char *v50; // [rsp+8h] [rbp-60h]
  char *v51; // [rsp+10h] [rbp-58h]
  __int64 *v52; // [rsp+18h] [rbp-50h]
  void *v53; // [rsp+20h] [rbp-48h]
  _QWORD *v54; // [rsp+28h] [rbp-40h]

  v50 = a1;
  v51 = a2;
  if ( a2 != a1 )
  {
    v2 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 )
    {
      v3 = *((unsigned int *)v2 - 1);
      if ( (_DWORD)v3 )
      {
        v4 = &v2[v3];
        do
        {
          v5 = *v2;
          if ( *v2 )
          {
            v6 = *(unsigned int *)(v5 - 4);
            if ( (_DWORD)v6 )
            {
              v7 = v5 + 32 * v6;
              do
              {
                v8 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v5);
                v9 = v5 + 16;
                v5 += 32;
                sub_182CBA0(v8, v9);
              }
              while ( v5 != v7 );
              v5 = *v2;
            }
            sub_186B220((void *)(v5 - 8));
          }
          ++v2;
        }
        while ( v2 != v4 );
        v2 = *(__int64 **)v50;
      }
      sub_186B220(v2 - 1);
    }
    v10 = (__int64 **)v51;
    if ( *(_QWORD *)v51 )
    {
      v11 = _mm_loadl_epi64((const __m128i *)(*(_QWORD *)v51 - 8LL));
      v49 = (_QWORD *)v11.m128i_i64[0];
      v12 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v11) + 8);
      *v12 = v11.m128i_i64[0];
      v54 = v12 + 1;
      *(_QWORD *)v50 = v12 + 1;
      v13 = *v10;
      if ( *v10 )
      {
        v52 = &v13[*((unsigned int *)v13 - 1)];
        if ( v13 != v52 )
        {
          v49 = v12 + 1;
          while ( 1 )
          {
            v14 = v49;
            v15 = *v13;
            *v49 = 0;
            if ( v15 )
            {
              v16 = *(_DWORD *)(v15 - 4);
              v17 = *(unsigned int *)(v15 - 8);
              v18 = (_QWORD *)sub_186B270(32 * v17 + 8);
              v19 = _mm_cvtsi32_si128(v17);
              v20 = v18 + 1;
              v21 = _mm_cvtsi32_si128(v16);
              *v14 = v18 + 1;
              v22 = *v13;
              v53 = v18 + 1;
              *v18 = _mm_unpacklo_epi32(v19, v21).m128i_u64[0];
              if ( v22 )
              {
                v23 = v22 + 32LL * *(unsigned int *)(v22 - 4);
                if ( v22 != v23 )
                  break;
              }
            }
LABEL_27:
            ++v49;
            if ( v52 == ++v13 )
              goto LABEL_28;
          }
          while ( 1 )
          {
            *((_BYTE *)v20 + 4) &= 0xFCu;
            v25 = qword_1C7F2C0;
            *((_BYTE *)v20 + 20) &= 0xFCu;
            *(_DWORD *)v20 = 0;
            v20[1] = 0;
            *((_DWORD *)v20 + 4) = 1;
            v20[3] = 0;
            if ( (*(_BYTE *)(v22 + 4) & 1) != 0 )
            {
              sub_182C690(v25, v20, v22);
              if ( (*(_BYTE *)(v22 + 20) & 1) != 0 )
                goto LABEL_26;
LABEL_23:
              v24 = *(_DWORD *)(v22 + 16);
              v22 += 32;
              *((_BYTE *)v20 + 20) &= ~1u;
              v20 += 4;
              *((_DWORD *)v20 - 4) = v24;
              if ( v23 == v22 )
                goto LABEL_27;
            }
            else
            {
              *(_DWORD *)v20 = *(_DWORD *)v22;
              if ( (*(_BYTE *)(v22 + 20) & 1) == 0 )
                goto LABEL_23;
LABEL_26:
              sub_182C690(v25, v20 + 2, v22 + 16);
              v22 += 32;
              v20 += 4;
              if ( v23 == v22 )
                goto LABEL_27;
            }
          }
        }
      }
    }
    else
    {
      *(_QWORD *)v50 = 0;
    }
  }
LABEL_28:
  if ( v51 + 8 != v50 + 8 )
  {
    v26 = *((_QWORD **)v50 + 1);
    if ( v26 )
    {
      v27 = *((unsigned int *)v26 - 1);
      if ( (_DWORD)v27 )
      {
        v28 = &v26[4 * v27];
        do
        {
          v29 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v26);
          v30 = v26 + 2;
          v26 += 4;
          sub_182CBA0(v29, v30);
        }
        while ( v26 != v28 );
        v26 = *((_QWORD **)v50 + 1);
      }
      sub_186B220(v26 - 1);
    }
    v31 = v51;
    v32 = *((_QWORD *)v51 + 1);
    if ( v32 )
    {
      v33 = _mm_loadl_epi64((const __m128i *)(v32 - 8));
      v49 = (_QWORD *)v33.m128i_i64[0];
      v34 = (_QWORD *)sub_186B270(32LL * (unsigned int)_mm_cvtsi128_si32(v33) + 8);
      v35 = v34 + 1;
      *v34 = v33.m128i_i64[0];
      *((_QWORD *)v50 + 1) = v34 + 1;
      v36 = *((_QWORD *)v31 + 1);
      if ( v36 )
      {
        v37 = 32LL * *(unsigned int *)(v36 - 4);
        v38 = v36 + v37;
        if ( v36 != v36 + v37 )
        {
          v39 = v35;
          while ( 1 )
          {
            *((_BYTE *)v39 + 4) &= 0xFCu;
            v41 = qword_1C7F2C0;
            *((_BYTE *)v39 + 20) &= 0xFCu;
            *(_DWORD *)v39 = 0;
            v39[1] = 0;
            *((_DWORD *)v39 + 4) = 1;
            v39[3] = 0;
            if ( (*(_BYTE *)(v36 + 4) & 1) != 0 )
            {
              sub_182C690(v41, v39, v36);
              if ( (*(_BYTE *)(v36 + 20) & 1) != 0 )
                goto LABEL_43;
LABEL_40:
              v40 = *(_DWORD *)(v36 + 16);
              v36 += 32;
              *((_BYTE *)v39 + 20) &= ~1u;
              v39 += 4;
              *((_DWORD *)v39 - 4) = v40;
              if ( v38 == v36 )
                break;
            }
            else
            {
              *(_DWORD *)v39 = *(_DWORD *)v36;
              if ( (*(_BYTE *)(v36 + 20) & 1) == 0 )
                goto LABEL_40;
LABEL_43:
              sub_182C690(v41, v39 + 2, v36 + 16);
              v36 += 32;
              v39 += 4;
              if ( v38 == v36 )
                break;
            }
          }
        }
      }
    }
    else
    {
      *((_QWORD *)v50 + 1) = 0;
    }
  }
  result = v51 + 16;
  if ( v50 + 16 != v51 + 16 )
  {
    v43 = *((_QWORD **)v50 + 2);
    if ( v43 )
      sub_186B220(v43 - 1);
    v44 = v51;
    v45 = *((_QWORD *)v51 + 2);
    if ( v45 )
    {
      v46 = _mm_loadl_epi64((const __m128i *)(v45 - 8));
      v49 = (_QWORD *)v46.m128i_i64[0];
      result = (char *)sub_186B270((unsigned int)_mm_cvtsi128_si32(v46) + 8LL);
      v46.m128i_i64[0] = (__int64)v49;
      *((_QWORD *)v50 + 2) = result + 8;
      v47 = *((char **)v44 + 2);
      *(_QWORD *)result = v46.m128i_i64[0];
      if ( v47 )
      {
        v48 = *((unsigned int *)v47 - 1);
        if ( v48 <= 1 )
        {
          if ( v48 == 1 )
            result[8] = *v47;
        }
        else
        {
          return (char *)memmove(result + 8, v47, v48);
        }
      }
    }
    else
    {
      result = v50;
      *((_QWORD *)v50 + 2) = 0;
    }
  }
  return result;
}

