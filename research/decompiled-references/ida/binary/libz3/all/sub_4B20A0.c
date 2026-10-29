__int64 __fastcall sub_4B20A0(__m128i **a1, _DWORD *a2, _DWORD *a3)
{
  __m128i *v3; // rbx
  __int64 v4; // rax
  char *v5; // r13
  __m128i **v6; // r12
  char *v7; // rbp
  unsigned __int64 v8; // r8
  __int64 v9; // r15
  char *v10; // rdi
  __int64 v11; // r9
  __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned int *v14; // r8
  unsigned int v15; // esi
  unsigned __int32 v16; // eax
  unsigned int v17; // ecx
  unsigned __int64 v18; // xmm1_8
  unsigned int v19; // edx
  unsigned __int32 v20; // esi
  __m128i *k; // rax
  __m128i *v22; // r14
  __int64 v23; // r9
  __int32 *v24; // r14
  __int64 v25; // r11
  __int64 v26; // r8
  unsigned __int32 v27; // r10d
  bool v28; // r15
  __int32 *v29; // rcx
  __int64 i; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int32 *v34; // rsi
  unsigned __int32 v35; // eax
  __int32 *v36; // rax
  __m128i *v37; // r15
  unsigned int v38; // ecx
  unsigned int v39; // edx
  __int32 *v40; // rax
  _DWORD *v41; // rsi
  __m128i *v42; // rcx
  int v43; // eax
  __int32 v44; // esi
  unsigned __int32 v46; // esi
  __int64 v47; // r8
  __int64 v48; // r11
  __int64 v49; // r10
  __int64 j; // rcx
  __int64 v51; // rax
  __m128i *v52; // r9
  __int64 v53; // rcx
  __int64 v54; // r10
  __int32 *v55; // r9
  __m128i *v56; // rax
  __m128i *v57; // r12
  __m128i *v58; // r15
  unsigned __int32 v59; // ebx
  unsigned __int32 v60; // edx
  char *v61; // rax
  _DWORD *v62; // rcx
  __m128i *v63; // rsi
  unsigned __int32 v64; // r15d
  unsigned __int32 v65; // edx
  char *v66; // rax
  unsigned __int32 *v67; // rcx
  __int64 v68; // rax
  __int32 v69; // edx
  __int64 v70; // rcx
  __m128i **v71; // [rsp+8h] [rbp-50h]

  v3 = *a1;
  if ( !*a1 )
    goto LABEL_103;
  v4 = 4LL * v3[-1].m128i_u32[3];
  v5 = &v3->m128i_i8[v4];
  if ( &v3->m128i_i8[v4] == (__int8 *)v3 )
    goto LABEL_46;
  v6 = a1;
  v7 = &v3->m128i_i8[4];
  _BitScanReverse64(&v8, v4 >> 2);
  v9 = 2LL * (int)v8;
  if ( (unsigned __int64)v4 > 0x40 )
  {
    v10 = &v3->m128i_i8[v4];
    v11 = v4 >> 3;
    v12 = v4 >> 2;
    if ( !v9 )
    {
LABEL_21:
      v23 = v11 - 1;
      v24 = &v3->m128i_i32[v23];
      v25 = (v12 - 1) >> 1;
      v26 = v23;
      v27 = *v24;
      v28 = (v12 & 1) == 0;
      v29 = v24;
      if ( v23 >= v25 )
        goto LABEL_37;
LABEL_22:
      for ( i = v26; ; i = v31 )
      {
        v31 = 2 * (i + 1);
        v29 = &v3->m128i_i32[2 * i + 2];
        if ( *v29 < (unsigned int)*(v29 - 1) )
        {
          v29 = &v3->m128i_i32[--v31];
          v3->m128i_i32[i] = *v29;
          if ( v31 >= v25 )
            goto LABEL_27;
        }
        else
        {
          v3->m128i_i32[i] = *v29;
          if ( v31 >= v25 )
          {
LABEL_27:
            if ( v23 == v31 && v28 )
            {
LABEL_88:
              v68 = 2 * v31 + 2;
              v69 = v3->m128i_i32[v68 - 1];
              v31 = v68 - 1;
              *v29 = v69;
              v29 = &v3->m128i_i32[v31];
            }
            v32 = (v31 - 1) >> 1;
            if ( v26 >= v31 )
            {
              while ( 1 )
              {
                *v29 = v27;
LABEL_36:
                --v24;
                --v26;
                v27 = *v24;
                v29 = v24;
                if ( v26 < v25 )
                  goto LABEL_22;
LABEL_37:
                if ( v23 == v26 && v28 )
                {
                  v31 = v26;
                  goto LABEL_88;
                }
              }
            }
            v33 = v31;
            while ( 1 )
            {
              v34 = &v3->m128i_i32[v33];
              v35 = v3->m128i_u32[v32];
              if ( v35 >= v27 )
              {
                v36 = v34;
                goto LABEL_35;
              }
              *v34 = v35;
              v33 = v32;
              if ( v26 >= v32 )
                break;
              v32 = (v32 - 1) / 2;
            }
            v36 = &v3->m128i_i32[v32];
LABEL_35:
            *v36 = v27;
            if ( v26 )
              goto LABEL_36;
            if ( v10 - (char *)v3 <= 4 )
              goto LABEL_65;
LABEL_51:
            while ( 2 )
            {
              v10 -= 4;
              v46 = *(_DWORD *)v10;
              v47 = v10 - (char *)v3;
              *(_DWORD *)v10 = v3->m128i_i32[0];
              v48 = (v10 - (char *)v3) >> 2;
              v49 = (v48 - 1) / 2;
              if ( v10 - (char *)v3 > 8 )
              {
                for ( j = 0; ; j = v51 )
                {
                  v51 = 2 * (j + 1);
                  v52 = (__m128i *)&v3->m128i_u64[j + 1];
                  if ( v52->m128i_i32[0] < (unsigned __int32)v52[-1].m128i_i32[3] )
                  {
                    --v51;
                    v52 = (__m128i *)((char *)v3 + 4 * v51);
                    v3->m128i_i32[j] = v52->m128i_i32[0];
                    if ( v51 >= v49 )
                      goto LABEL_57;
                  }
                  else
                  {
                    v3->m128i_i32[j] = v52->m128i_i32[0];
                    if ( v51 >= v49 )
                    {
LABEL_57:
                      if ( (v48 & 1) == 0 && (v48 - 2) >> 1 == v51 )
                        goto LABEL_96;
                      v53 = (v51 - 1) / 2;
                      if ( v51 )
                      {
                        v54 = v51;
                        goto LABEL_63;
                      }
                      v52->m128i_i32[0] = v46;
                      goto LABEL_51;
                    }
                  }
                }
              }
              v56 = v3;
              if ( (v48 & 1) != 0 || (unsigned __int64)(v48 - 1) > 2 )
                goto LABEL_64;
              v52 = v3;
              v51 = 0;
LABEL_96:
              v70 = 2 * v51 + 2;
              v52->m128i_i32[0] = v3->m128i_i32[v70 - 1];
              v53 = (v70 >> 1) - 1;
              v54 = 2 * v51 + 1;
LABEL_63:
              while ( 1 )
              {
                v55 = &v3->m128i_i32[v53];
                v56 = (__m128i *)((char *)v3 + 4 * v54);
                if ( *v55 >= v46 )
                  break;
                v56->m128i_i32[0] = *v55;
                v54 = v53;
                if ( !v53 )
                {
                  *v55 = v46;
                  if ( v47 > 4 )
                    goto LABEL_51;
                  goto LABEL_65;
                }
                v53 = (v53 - 1) / 2;
              }
LABEL_64:
              v56->m128i_i32[0] = v46;
              if ( v47 > 4 )
                continue;
              break;
            }
LABEL_65:
            v71 = v6;
            v57 = v3 + 4;
            v58 = v3;
            do
            {
              v59 = *(_DWORD *)v7;
              if ( *(_DWORD *)v7 < v58->m128i_i32[0] )
              {
                if ( v7 - (char *)v58 <= 4 )
                {
                  if ( v7 - (char *)v58 == 4 )
                    *(_DWORD *)v7 = v58->m128i_i32[0];
                }
                else
                {
                  memmove((char *)v58->m128i_i64 + 4, v58, v7 - (char *)v58);
                }
                v58->m128i_i32[0] = v59;
              }
              else
              {
                v60 = *((_DWORD *)v7 - 1);
                v61 = v7 - 4;
                if ( v59 >= v60 )
                {
                  *(_DWORD *)v7 = v59;
                }
                else
                {
                  do
                  {
                    *((_DWORD *)v61 + 1) = v60;
                    v62 = v61;
                    v60 = *((_DWORD *)v61 - 1);
                    v61 -= 4;
                  }
                  while ( v59 < v60 );
                  *v62 = v59;
                }
              }
              v7 += 4;
            }
            while ( v57 != (__m128i *)v7 );
            v37 = v57;
            v6 = v71;
            do
            {
              while ( 1 )
              {
                v38 = v37->m128i_i32[0];
                v39 = v37[-1].m128i_u32[3];
                v40 = &v37[-1].m128i_i32[3];
                if ( v37->m128i_i32[0] < v39 )
                  break;
                v63 = v37;
                v37 = (__m128i *)((char *)v37 + 4);
                v63->m128i_i32[0] = v38;
                if ( v5 == (char *)v37 )
                  goto LABEL_45;
              }
              do
              {
                v40[1] = v39;
                v41 = v40;
                v39 = *--v40;
              }
              while ( v38 < v39 );
              v37 = (__m128i *)((char *)v37 + 4);
              *v41 = v38;
            }
            while ( v5 != (char *)v37 );
LABEL_45:
            v3 = *v6;
            if ( *v6 )
              goto LABEL_46;
LABEL_103:
            BUG();
          }
        }
      }
    }
    while ( 1 )
    {
      v13 = _mm_loadl_epi64(v3);
      v14 = (unsigned int *)v3 + v11;
      v15 = *((_DWORD *)v10 - 1);
      --v9;
      v16 = *v14;
      v17 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v13, 229));
      v18 = _mm_shuffle_epi32(v13, 225).m128i_u64[0];
      v19 = _mm_cvtsi128_si32(v13);
      if ( v17 >= *v14 )
      {
        if ( v17 < v15 )
        {
LABEL_8:
          v3->m128i_i64[0] = v18;
          v20 = *((_DWORD *)v10 - 1);
          goto LABEL_9;
        }
        if ( v16 < v15 )
          goto LABEL_18;
      }
      else if ( v16 >= v15 )
      {
        if ( v17 >= v15 )
          goto LABEL_8;
LABEL_18:
        v3->m128i_i32[0] = v15;
        v20 = v19;
        *((_DWORD *)v10 - 1) = v19;
        v17 = v3->m128i_i32[0];
        v19 = v3->m128i_u32[1];
        goto LABEL_9;
      }
      v3->m128i_i32[0] = v16;
      *v14 = v19;
      v19 = v3->m128i_u32[1];
      v17 = v3->m128i_i32[0];
      v20 = *((_DWORD *)v10 - 1);
LABEL_9:
      k = (__m128i *)v10;
      v22 = (__m128i *)((char *)v3->m128i_i64 + 4);
      while ( 1 )
      {
        while ( v19 < v17 )
        {
          v19 = v22->m128i_u32[1];
          v22 = (__m128i *)((char *)v22 + 4);
        }
        for ( k = (__m128i *)((char *)k - 4); v17 < v20; k = (__m128i *)((char *)k - 4) )
          v20 = k[-1].m128i_u32[3];
        if ( v22 >= k )
          break;
        v22->m128i_i32[0] = v20;
        v22 = (__m128i *)((char *)v22 + 4);
        v20 = k[-1].m128i_u32[3];
        k->m128i_i32[0] = v19;
        v19 = v22->m128i_i32[0];
        v17 = v3->m128i_i32[0];
      }
      sub_4B1A30(v22, v10, v9);
      if ( (char *)v22 - (char *)v3 <= 64 )
        goto LABEL_65;
      v10 = (char *)v22;
      v11 = ((char *)v22 - (char *)v3) >> 3;
      v12 = ((char *)v22 - (char *)v3) >> 2;
      if ( !v9 )
        goto LABEL_21;
    }
  }
  if ( v4 != 4 )
  {
    do
    {
      v64 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 < v3->m128i_i32[0] )
      {
        if ( v7 - (char *)v3 <= 4 )
        {
          if ( v7 - (char *)v3 == 4 )
            *(_DWORD *)v7 = v3->m128i_i32[0];
        }
        else
        {
          memmove((char *)v3->m128i_i64 + 4, v3, v7 - (char *)v3);
        }
        v3->m128i_i32[0] = v64;
      }
      else
      {
        v65 = *((_DWORD *)v7 - 1);
        v66 = v7 - 4;
        if ( v64 >= v65 )
        {
          *(_DWORD *)v7 = v64;
        }
        else
        {
          do
          {
            *((_DWORD *)v66 + 1) = v65;
            v67 = (unsigned __int32 *)v66;
            v65 = *((_DWORD *)v66 - 1);
            v66 -= 4;
          }
          while ( v64 < v65 );
          *v67 = v64;
        }
      }
      v7 += 4;
    }
    while ( v5 != v7 );
    goto LABEL_45;
  }
LABEL_46:
  v42 = v3;
  v43 = 0;
  while ( (unsigned int)++v43 < v3[-1].m128i_i32[3] )
  {
    v44 = v42->m128i_i32[0];
    v42 = (__m128i *)((char *)v42 + 4);
    if ( v3->m128i_i32[v43] != v44 + 1 )
      return 0;
  }
  *a2 = v3->m128i_i32[0];
  *a3 = v3->m128i_i32[v3[-1].m128i_i32[3] - 1];
  return 1;
}

