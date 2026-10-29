bool __fastcall sub_146E570(__int64 a1, __int16 a2, __int16 a3, __int64 a4, char a5, char a6)
{
  char v9; // si
  int *v11; // rbx
  unsigned __int16 v12; // dx
  bool result; // al
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  const __m128i *v16; // r13
  unsigned __int64 v17; // rdx
  __m128i *v18; // rax
  unsigned __int16 v19; // cx
  __int64 *v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  const __m128i *v23; // r13
  unsigned __int64 v24; // rdx
  __m128i *v25; // rax
  __int16 v26; // ax
  unsigned __int16 v27; // cx
  unsigned int v28; // eax
  unsigned __int16 v29; // si
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  const __m128i *v33; // r13
  unsigned __int64 v34; // rdx
  __m128i *v35; // rax
  unsigned __int16 v36; // cx
  __int64 *v37; // rdi
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  const __m128i *v40; // r13
  unsigned __int64 v41; // rdx
  __m128i *v42; // rax
  unsigned int v43; // eax
  unsigned __int16 v44; // si
  _WORD *v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  const __m128i *v48; // r13
  unsigned __int64 v49; // rdx
  __m128i *v50; // rax
  unsigned __int16 v51; // cx
  __int64 *v52; // rdi
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  const __m128i *v55; // r13
  unsigned __int64 v56; // rdx
  __m128i *v57; // rax
  unsigned __int16 v58; // cx
  unsigned int v59; // eax
  unsigned __int16 v60; // si
  _WORD *v61; // rdx
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  const __m128i *v64; // r13
  unsigned __int64 v65; // rdx
  __m128i *v66; // rax
  unsigned __int16 v67; // cx
  __int64 *v68; // rdi
  unsigned int v69; // eax
  _WORD *v70; // rdx
  unsigned int v71; // eax
  unsigned __int16 v72; // si
  __int64 v73; // rdx
  __int64 v74; // rax
  unsigned __int64 v75; // rcx
  const __m128i *v76; // rbx
  unsigned __int64 v77; // rdx
  __m128i *v78; // rax
  unsigned int v79; // eax
  __int64 v80; // rdx
  int v81; // eax
  __int64 *v82; // rdi
  unsigned int v83; // eax
  unsigned __int16 v84; // si
  __int64 v85; // rdx
  unsigned int v86; // eax
  __int64 v87; // rdx
  unsigned int v88; // eax
  unsigned __int16 v89; // si
  __int64 v90; // rdx
  __int64 v91; // rsi
  char *v92; // r13
  __int64 v93; // rsi
  char *v94; // r13
  __int64 v95; // rsi
  char *v96; // r13
  __int64 v97; // rsi
  char *v98; // r13
  __int64 v99; // rsi
  char *v100; // r13
  __int64 v101; // rsi
  char *v102; // r13
  __int64 v103; // rsi
  char *v104; // r13
  __int64 v105; // rsi
  __int8 *v106; // rbx

  v9 = 1;
  v11 = (int *)(a1 + 16);
  while ( 1 )
  {
    v12 = *(_WORD *)(a1 + 32);
    result = a2 == (__int16)v12 || a3 == (__int16)v12;
    if ( result )
      break;
    if ( v12 == 24 )
    {
      v62 = *(unsigned int *)(a4 + 8);
      v63 = *(_QWORD *)a4;
      v64 = (const __m128i *)v11;
      v65 = v62 + 1;
      v66 = (__m128i *)(*(_QWORD *)a4 + 24 * v62);
      if ( v65 > *(unsigned int *)(a4 + 12) )
      {
        v95 = a4 + 16;
        if ( v63 > (unsigned __int64)v11 || v66 <= (__m128i *)v11 )
        {
          v64 = (const __m128i *)v11;
          sub_2237220(a4, v95, v65, 24);
          v66 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
        }
        else
        {
          v96 = (char *)v11 - v63;
          sub_2237220(a4, v95, v65, 24);
          v64 = (const __m128i *)&v96[*(_QWORD *)a4];
          v66 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
        }
      }
      *v66 = _mm_loadu_si128(v64);
      v66[1].m128i_i64[0] = v64[1].m128i_i64[0];
      ++*(_DWORD *)(a4 + 8);
      if ( *(_WORD *)(a1 + 32) == 24 )
      {
        ++*(_WORD *)(a1 + 92);
      }
      else
      {
        v67 = *(_WORD *)(a1 + 92);
        if ( !v67 )
          goto LABEL_74;
        v88 = *(_DWORD *)(a1 + 2792);
        if ( v88 )
        {
          v89 = *(_WORD *)(a1 + 88);
          v90 = *(_QWORD *)(a1 + 2784) + 24LL * v88 - 24;
          do
          {
            if ( v89 == *(_WORD *)(v90 + 14) )
            {
              if ( *(_DWORD *)(v90 + 16) == *(_DWORD *)(a1 + 90) )
                goto LABEL_143;
            }
            else if ( v89 > *(_WORD *)(v90 + 14) )
            {
              goto LABEL_143;
            }
            if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v90 + 16) && v67 <= *(_WORD *)(v90 + 18) )
              break;
LABEL_143:
            --v88;
            v90 -= 24;
            *(_DWORD *)(a1 + 2792) = v88;
          }
          while ( v88 );
        }
        *(_WORD *)(a1 + 92) = v67 - 1;
      }
LABEL_74:
      v68 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v68, v11);
      sub_146E570(a1, 25, 25, a4, 0, 1);
      v9 = 0;
    }
    else if ( v12 > 0x18u )
    {
      if ( v12 > 0x1CAu )
      {
        if ( v12 == 460 )
          return result;
      }
      else
      {
        if ( v12 >= 0x1C8u )
          return result;
        if ( v12 == 25 )
        {
          if ( !((unsigned __int8)v9 | (*(_WORD *)(a1 + 92) == 0)) )
            return result;
          v53 = *(unsigned int *)(a4 + 8);
          v54 = *(_QWORD *)a4;
          v55 = (const __m128i *)v11;
          v56 = v53 + 1;
          v57 = (__m128i *)(*(_QWORD *)a4 + 24 * v53);
          if ( v56 > *(unsigned int *)(a4 + 12) )
          {
            v103 = a4 + 16;
            if ( v54 > (unsigned __int64)v11 || v57 <= (__m128i *)v11 )
            {
              v55 = (const __m128i *)v11;
              sub_2237220(a4, v103, v56, 24);
              v57 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
            }
            else
            {
              v104 = (char *)v11 - v54;
              sub_2237220(a4, v103, v56, 24);
              v55 = (const __m128i *)&v104[*(_QWORD *)a4];
              v57 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
            }
          }
          *v57 = _mm_loadu_si128(v55);
          v57[1].m128i_i64[0] = v55[1].m128i_i64[0];
          ++*(_DWORD *)(a4 + 8);
          if ( *(_WORD *)(a1 + 32) == 24 )
          {
            ++*(_WORD *)(a1 + 92);
            goto LABEL_12;
          }
          v58 = *(_WORD *)(a1 + 92);
          if ( !v58 )
            goto LABEL_12;
          v59 = *(_DWORD *)(a1 + 2792);
          if ( !v59 )
            goto LABEL_70;
          v60 = *(_WORD *)(a1 + 88);
          v61 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v59 - 24);
          while ( 2 )
          {
            if ( v60 == v61[7] )
            {
              if ( *((_DWORD *)v61 + 4) != *(_DWORD *)(a1 + 90) )
              {
LABEL_68:
                if ( *(_WORD *)(a1 + 90) <= v61[8] && v58 <= v61[9] )
                  goto LABEL_70;
              }
            }
            else if ( v60 <= v61[7] )
            {
              goto LABEL_68;
            }
            --v59;
            v61 -= 12;
            *(_DWORD *)(a1 + 2792) = v59;
            if ( !v59 )
              goto LABEL_70;
            continue;
          }
        }
        if ( v12 == 63 && a5 )
          return result;
      }
LABEL_18:
      v21 = *(unsigned int *)(a4 + 8);
      v22 = *(_QWORD *)a4;
      v23 = (const __m128i *)v11;
      v24 = v21 + 1;
      v25 = (__m128i *)(*(_QWORD *)a4 + 24 * v21);
      if ( v24 > *(unsigned int *)(a4 + 12) )
      {
        v91 = a4 + 16;
        if ( v22 > (unsigned __int64)v11 || v25 <= (__m128i *)v11 )
        {
          v23 = (const __m128i *)v11;
          sub_2237220(a4, v91, v24, 24);
          v25 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
        }
        else
        {
          v92 = (char *)v11 - v22;
          sub_2237220(a4, v91, v24, 24);
          v23 = (const __m128i *)&v92[*(_QWORD *)a4];
          v25 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
        }
      }
      *v25 = _mm_loadu_si128(v23);
      v25[1].m128i_i64[0] = v23[1].m128i_i64[0];
      v26 = *(_WORD *)(a1 + 32);
      ++*(_DWORD *)(a4 + 8);
      if ( v26 == 22 )
        goto LABEL_100;
      if ( v26 == 23 )
      {
        v19 = *(_WORD *)(a1 + 88);
        if ( !v19 )
          goto LABEL_12;
        v69 = *(_DWORD *)(a1 + 2792);
        if ( !v69 )
          goto LABEL_84;
        v70 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v69 - 24);
        while ( 2 )
        {
          if ( v19 == v70[7] )
          {
            if ( *((_DWORD *)v70 + 4) != *(_DWORD *)(a1 + 90) )
            {
LABEL_82:
              if ( *(_WORD *)(a1 + 90) <= v70[8] && *(_WORD *)(a1 + 92) <= v70[9] )
                goto LABEL_84;
            }
          }
          else if ( v19 <= v70[7] )
          {
            goto LABEL_82;
          }
          --v69;
          v70 -= 12;
          *(_DWORD *)(a1 + 2792) = v69;
          if ( !v69 )
            goto LABEL_84;
          continue;
        }
      }
      if ( (unsigned __int16)(v26 - 20) <= 1u )
      {
        v27 = *(_WORD *)(a1 + 90);
        if ( v26 != 20 )
        {
          if ( !v27 )
            goto LABEL_12;
          v28 = *(_DWORD *)(a1 + 2792);
          if ( v28 )
          {
            v29 = *(_WORD *)(a1 + 88);
            v30 = *(_QWORD *)(a1 + 2784) + 24LL * v28 - 24;
            do
            {
              if ( v29 == *(_WORD *)(v30 + 14) )
              {
                if ( *(_DWORD *)(v30 + 16) == *(_DWORD *)(a1 + 90) )
                  goto LABEL_27;
              }
              else if ( v29 > *(_WORD *)(v30 + 14) )
              {
                goto LABEL_27;
              }
              if ( *(_WORD *)(v30 + 16) >= v27 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v30 + 18) )
                break;
LABEL_27:
              --v28;
              v30 -= 24;
              *(_DWORD *)(a1 + 2792) = v28;
            }
            while ( v28 );
          }
LABEL_53:
          *(_WORD *)(a1 + 90) = v27 - 1;
          goto LABEL_12;
        }
        *(_WORD *)(a1 + 90) = v27 + 1;
        goto LABEL_12;
      }
      if ( (unsigned __int16)(v26 - 24) <= 1u )
      {
        v58 = *(_WORD *)(a1 + 92);
        if ( v26 == 24 )
        {
          *(_WORD *)(a1 + 92) = v58 + 1;
          goto LABEL_12;
        }
        if ( !v58 )
          goto LABEL_12;
        v71 = *(_DWORD *)(a1 + 2792);
        if ( v71 )
        {
          v72 = *(_WORD *)(a1 + 88);
          v73 = *(_QWORD *)(a1 + 2784) + 24LL * v71 - 24;
          do
          {
            if ( v72 == *(_WORD *)(v73 + 14) )
            {
              if ( *(_DWORD *)(v73 + 16) == *(_DWORD *)(a1 + 90) )
                goto LABEL_91;
            }
            else if ( v72 > *(_WORD *)(v73 + 14) )
            {
              goto LABEL_91;
            }
            if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v73 + 16) && v58 <= *(_WORD *)(v73 + 18) )
              break;
LABEL_91:
            --v71;
            v73 -= 24;
            *(_DWORD *)(a1 + 2792) = v71;
          }
          while ( v71 );
        }
LABEL_70:
        *(_WORD *)(a1 + 92) = v58 - 1;
        goto LABEL_12;
      }
      if ( (unsigned __int16)(v26 - 17) <= 2u || (unsigned __int16)(v26 - 14) <= 1u || v26 == 3 || !sub_10CCDE0(v26) )
        goto LABEL_12;
      v81 = *(_DWORD *)(a1 + 20);
      v82 = *(__int64 **)(a1 + 8);
      if ( !v81 )
        v81 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v81;
      sub_14634E0(v82, v11);
      v9 = 0;
    }
    else if ( v12 == 21 )
    {
      if ( !((unsigned __int8)v9 | (*(_WORD *)(a1 + 90) == 0)) )
        return result;
      v38 = *(unsigned int *)(a4 + 8);
      v39 = *(_QWORD *)a4;
      v40 = (const __m128i *)v11;
      v41 = v38 + 1;
      v42 = (__m128i *)(*(_QWORD *)a4 + 24 * v38);
      if ( v41 > *(unsigned int *)(a4 + 12) )
      {
        v101 = a4 + 16;
        if ( v39 > (unsigned __int64)v11 || v42 <= (__m128i *)v11 )
        {
          v40 = (const __m128i *)v11;
          sub_2237220(a4, v101, v41, 24);
          v42 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
        }
        else
        {
          v102 = (char *)v11 - v39;
          sub_2237220(a4, v101, v41, 24);
          v40 = (const __m128i *)&v102[*(_QWORD *)a4];
          v42 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
        }
      }
      *v42 = _mm_loadu_si128(v40);
      v42[1].m128i_i64[0] = v40[1].m128i_i64[0];
      ++*(_DWORD *)(a4 + 8);
      if ( *(_WORD *)(a1 + 32) != 20 )
      {
        v27 = *(_WORD *)(a1 + 90);
        if ( !v27 )
          goto LABEL_12;
        v43 = *(_DWORD *)(a1 + 2792);
        if ( !v43 )
          goto LABEL_53;
        v44 = *(_WORD *)(a1 + 88);
        v45 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v43 - 24);
        while ( 2 )
        {
          if ( v44 == v45[7] )
          {
            if ( *((_DWORD *)v45 + 4) != *(_DWORD *)(a1 + 90) )
            {
LABEL_51:
              if ( v27 <= v45[8] && *(_WORD *)(a1 + 92) <= v45[9] )
                goto LABEL_53;
            }
          }
          else if ( v44 <= v45[7] )
          {
            goto LABEL_51;
          }
          --v43;
          v45 -= 12;
          *(_DWORD *)(a1 + 2792) = v43;
          if ( !v43 )
            goto LABEL_53;
          continue;
        }
      }
      ++*(_WORD *)(a1 + 90);
LABEL_12:
      v20 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v20, v11);
      v9 = 0;
    }
    else if ( v12 <= 0x15u )
    {
      if ( v12 == 1 )
        return result;
      if ( v12 != 20 )
        goto LABEL_18;
      v31 = *(unsigned int *)(a4 + 8);
      v32 = *(_QWORD *)a4;
      v33 = (const __m128i *)v11;
      v34 = v31 + 1;
      v35 = (__m128i *)(*(_QWORD *)a4 + 24 * v31);
      if ( v34 > *(unsigned int *)(a4 + 12) )
      {
        v97 = a4 + 16;
        if ( v32 > (unsigned __int64)v11 || v35 <= (__m128i *)v11 )
        {
          v33 = (const __m128i *)v11;
          sub_2237220(a4, v97, v34, 24);
          v35 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
        }
        else
        {
          v98 = (char *)v11 - v32;
          sub_2237220(a4, v97, v34, 24);
          v33 = (const __m128i *)&v98[*(_QWORD *)a4];
          v35 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
        }
      }
      *v35 = _mm_loadu_si128(v33);
      v35[1].m128i_i64[0] = v33[1].m128i_i64[0];
      ++*(_DWORD *)(a4 + 8);
      if ( *(_WORD *)(a1 + 32) == 20 )
      {
        ++*(_WORD *)(a1 + 90);
      }
      else
      {
        v36 = *(_WORD *)(a1 + 90);
        if ( !v36 )
          goto LABEL_40;
        v83 = *(_DWORD *)(a1 + 2792);
        if ( v83 )
        {
          v84 = *(_WORD *)(a1 + 88);
          v85 = *(_QWORD *)(a1 + 2784) + 24LL * v83 - 24;
          do
          {
            if ( v84 == *(_WORD *)(v85 + 14) )
            {
              if ( *(_DWORD *)(v85 + 16) == *(_DWORD *)(a1 + 90) )
                goto LABEL_125;
            }
            else if ( v84 > *(_WORD *)(v85 + 14) )
            {
              goto LABEL_125;
            }
            if ( v36 <= *(_WORD *)(v85 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v85 + 18) )
              break;
LABEL_125:
            --v83;
            v85 -= 24;
            *(_DWORD *)(a1 + 2792) = v83;
          }
          while ( v83 );
        }
        *(_WORD *)(a1 + 90) = v36 - 1;
      }
LABEL_40:
      v37 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v37, v11);
      sub_146E570(a1, 21, 21, a4, 0, 1);
      v9 = 0;
    }
    else
    {
      if ( v12 != 22 )
      {
        if ( !((unsigned __int8)v9 | (*(_WORD *)(a1 + 88) == 0)) )
          return result;
        v14 = *(unsigned int *)(a4 + 8);
        v15 = *(_QWORD *)a4;
        v16 = (const __m128i *)v11;
        v17 = v14 + 1;
        v18 = (__m128i *)(*(_QWORD *)a4 + 24 * v14);
        if ( v17 > *(unsigned int *)(a4 + 12) )
        {
          v99 = a4 + 16;
          if ( v15 > (unsigned __int64)v11 || v18 <= (__m128i *)v11 )
          {
            v16 = (const __m128i *)v11;
            sub_2237220(a4, v99, v17, 24);
            v18 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
          }
          else
          {
            v100 = (char *)v11 - v15;
            sub_2237220(a4, v99, v17, 24);
            v16 = (const __m128i *)&v100[*(_QWORD *)a4];
            v18 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
          }
        }
        *v18 = _mm_loadu_si128(v16);
        v18[1].m128i_i64[0] = v16[1].m128i_i64[0];
        ++*(_DWORD *)(a4 + 8);
        if ( *(_WORD *)(a1 + 32) != 22 )
        {
          v19 = *(_WORD *)(a1 + 88);
          if ( !v19 )
            goto LABEL_12;
          v79 = *(_DWORD *)(a1 + 2792);
          if ( v79 )
          {
            v80 = *(_QWORD *)(a1 + 2784) + 24LL * v79 - 24;
            do
            {
              if ( v19 == *(_WORD *)(v80 + 14) )
              {
                if ( *(_DWORD *)(v80 + 16) == *(_DWORD *)(a1 + 90) )
                  goto LABEL_109;
              }
              else if ( v19 > *(_WORD *)(v80 + 14) )
              {
                goto LABEL_109;
              }
              if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v80 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v80 + 18) )
                break;
LABEL_109:
              --v79;
              v80 -= 24;
              *(_DWORD *)(a1 + 2792) = v79;
            }
            while ( v79 );
          }
LABEL_84:
          *(_WORD *)(a1 + 88) = v19 - 1;
          goto LABEL_12;
        }
LABEL_100:
        ++*(_WORD *)(a1 + 88);
        goto LABEL_12;
      }
      v46 = *(unsigned int *)(a4 + 8);
      v47 = *(_QWORD *)a4;
      v48 = (const __m128i *)v11;
      v49 = v46 + 1;
      v50 = (__m128i *)(*(_QWORD *)a4 + 24 * v46);
      if ( v49 > *(unsigned int *)(a4 + 12) )
      {
        v93 = a4 + 16;
        if ( v47 > (unsigned __int64)v11 || v50 <= (__m128i *)v11 )
        {
          v48 = (const __m128i *)v11;
          sub_2237220(a4, v93, v49, 24);
          v50 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
        }
        else
        {
          v94 = (char *)v11 - v47;
          sub_2237220(a4, v93, v49, 24);
          v48 = (const __m128i *)&v94[*(_QWORD *)a4];
          v50 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
        }
      }
      *v50 = _mm_loadu_si128(v48);
      v50[1].m128i_i64[0] = v48[1].m128i_i64[0];
      ++*(_DWORD *)(a4 + 8);
      if ( *(_WORD *)(a1 + 32) == 22 )
      {
        ++*(_WORD *)(a1 + 88);
      }
      else
      {
        v51 = *(_WORD *)(a1 + 88);
        if ( !v51 )
          goto LABEL_57;
        v86 = *(_DWORD *)(a1 + 2792);
        if ( v86 )
        {
          v87 = *(_QWORD *)(a1 + 2784) + 24LL * v86 - 24;
          do
          {
            if ( v51 == *(_WORD *)(v87 + 14) )
            {
              if ( *(_DWORD *)(v87 + 16) == *(_DWORD *)(a1 + 90) )
                goto LABEL_134;
            }
            else if ( v51 > *(_WORD *)(v87 + 14) )
            {
              goto LABEL_134;
            }
            if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v87 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v87 + 18) )
              break;
LABEL_134:
            --v86;
            v87 -= 24;
            *(_DWORD *)(a1 + 2792) = v86;
          }
          while ( v86 );
        }
        *(_WORD *)(a1 + 88) = v51 - 1;
      }
LABEL_57:
      v52 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v52, v11);
      sub_146E570(a1, 23, 23, a4, 0, 1);
      v9 = 0;
    }
  }
  if ( a6 )
  {
    v74 = *(unsigned int *)(a4 + 8);
    v75 = *(_QWORD *)a4;
    v76 = (const __m128i *)(a1 + 16);
    v77 = v74 + 1;
    v78 = (__m128i *)(*(_QWORD *)a4 + 24 * v74);
    if ( v77 > *(unsigned int *)(a4 + 12) )
    {
      v105 = a4 + 16;
      if ( v75 > (unsigned __int64)v76 || v78 <= v76 )
      {
        sub_2237220(a4, v105, v77, 24);
        v78 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
      }
      else
      {
        v106 = &v76->m128i_i8[-v75];
        sub_2237220(a4, v105, v77, 24);
        v76 = (const __m128i *)&v106[*(_QWORD *)a4];
        v78 = (__m128i *)(*(_QWORD *)a4 + 24LL * *(unsigned int *)(a4 + 8));
      }
    }
    *v78 = _mm_loadu_si128(v76);
    v78[1].m128i_i64[0] = v76[1].m128i_i64[0];
    ++*(_DWORD *)(a4 + 8);
    sub_146AA30(a1);
    return a6;
  }
  return result;
}
