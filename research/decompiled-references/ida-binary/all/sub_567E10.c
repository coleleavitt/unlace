__int64 __fastcall sub_567E10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rdx
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // r14d
  int v17; // ebp
  unsigned int v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned int v24; // ebx
  unsigned __int64 v25; // rax
  __int64 v26; // r15
  unsigned __int64 *i; // rcx
  unsigned __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int16 v31; // di
  int v32; // r10d
  __int64 v33; // r9
  unsigned int v34; // r12d
  unsigned int v35; // r10d
  __int64 v36; // r9
  char v37; // dl
  unsigned int v38; // esi
  int v39; // ebx
  __int64 v40; // rdi
  __int64 v41; // rcx
  unsigned __int16 *v42; // rax
  __int64 v43; // rsi
  unsigned __int16 *v44; // rdx
  unsigned __int16 *v45; // rcx
  __int64 v46; // rax
  __m128i v47; // xmm7
  __int64 v48; // r9
  __m128i v49; // xmm0
  unsigned __int16 *v50; // rsi
  __int64 v51; // r10
  unsigned __int16 *v52; // rax
  unsigned __int16 *v53; // rsi
  unsigned int v54; // r14d
  __int64 v55; // rax
  unsigned int v56; // [rsp+24h] [rbp-A4h]
  __int64 v57; // [rsp+28h] [rbp-A0h]
  unsigned int v58; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+30h] [rbp-98h]
  __int64 v60; // [rsp+38h] [rbp-90h]
  unsigned __int64 *v61; // [rsp+40h] [rbp-88h]
  __int64 v62; // [rsp+48h] [rbp-80h]
  __m128i v63; // [rsp+50h] [rbp-78h] BYREF
  __m128i v64; // [rsp+60h] [rbp-68h]
  __m128i v65; // [rsp+70h] [rbp-58h]
  __m128i v66[4]; // [rsp+80h] [rbp-48h] BYREF

  v56 = a1;
  v62 = 0;
  v61 = (unsigned __int64 *)a8;
  v8 = *(_QWORD *)a8;
  v9 = (__m128i)(unsigned __int64)a8;
  v59 = *((_QWORD *)&a8 + 1);
  v63 = _mm_loadu_si128((const __m128i *)&a7);
  v64 = _mm_loadu_si128((const __m128i *)&a8);
LABEL_2:
  v10 = _mm_unpacklo_epi64(v9, (__m128i)v59);
  if ( (v8 & 1) == 0 )
  {
    v12 = *(unsigned int *)(v8 + 36);
    if ( (_DWORD)v12 )
    {
      v13 = *(unsigned __int16 *)(v8 + 66);
      v14 = *(_QWORD *)(v59 + 8);
      v60 = 0;
      if ( *(_WORD *)(v8 + 66) )
      {
        v15 = (unsigned int)v13 * *(unsigned __int16 *)(v14 + 36);
        v13 = *(_QWORD *)(v14 + 128);
        v60 = v13 + 2 * v15;
      }
      v57 = v8;
      v16 = 0;
      v17 = 0;
      v64 = v10;
      v18 = sub_565DC0(a1, v14, v8, v13, a5, v12, _mm_load_si128(&v63).m128i_u32[0]);
      v23 = sub_565DD0(a1, v14, v19, v20, v21, v22, (__int128)_mm_load_si128(&v63));
      a5 = 0;
      v24 = v23;
      v25 = HIDWORD(v23);
      v26 = *(unsigned int *)(v57 + 36);
      for ( i = (unsigned __int64 *)(v57 - 8 * v26); ; ++i )
      {
        if ( (_DWORD)a5 == (_DWORD)v26 )
          return 0;
        v28 = *i;
        if ( (*i & 1) != 0 )
          v30 = (v28 >> 3) & 1;
        else
          LOBYTE(v30) = (*(_BYTE *)(v28 + 44) & 4) != 0;
        if ( (_BYTE)v30 )
        {
          v58 = 0;
          v31 = 0;
        }
        else
        {
          if ( v60 )
          {
            v58 = *(unsigned __int16 *)(v60 + 2LL * v16);
            v31 = *(_WORD *)(v60 + 2LL * v16);
          }
          else
          {
            v58 = 0;
            v31 = 0;
          }
          ++v16;
        }
        if ( (_DWORD)a5 )
        {
          if ( (v28 & 1) != 0 )
          {
            v32 = BYTE6(v28);
            v33 = (v28 >> 40) & 0xF;
            v34 = BYTE4(v28);
          }
          else
          {
            v32 = *(_DWORD *)(v28 + 4);
            LODWORD(v33) = *(_DWORD *)(v28 + 8);
            v34 = *(_DWORD *)(v28 + 12);
          }
          v35 = v18 + v32;
          if ( (_DWORD)v33 )
          {
            v36 = v24 + (unsigned int)v33;
          }
          else
          {
            v34 += v25;
            v36 = v24;
          }
        }
        else
        {
          v34 = v25;
          v36 = v24;
          v35 = v18;
        }
        if ( (v28 & 1) != 0 )
          break;
        v39 = *(_DWORD *)(v28 + 20);
        LODWORD(v25) = *(_DWORD *)(v28 + 24);
        v18 = v35 + *(_DWORD *)(v28 + 16);
        if ( !v39 )
          goto LABEL_29;
        v24 = v36 + v39;
LABEL_30:
        v29 = (*(_BYTE *)i & 4) != 0;
        if ( v31 )
        {
          if ( v31 != 0xFFFF )
          {
            if ( v31 == 0xFFFE
              || (v28 = *(_QWORD *)(v59 + 8), v29 = *(_QWORD *)(v28 + 104) + 3LL * v31, !*(_BYTE *)(v29 + 1)) )
            {
LABEL_35:
              v8 = *i;
              if ( (*i & 1) == 0 && *(_DWORD *)(v8 + 36) )
              {
                v38 = *(_DWORD *)(v8 + 52);
                a1 = v56 - v17;
                if ( (unsigned int)a1 < v38 )
                {
                  v47 = _mm_cvtsi32_si128(v36);
                  v48 = *(_QWORD *)(v59 + 8);
                  v49 = _mm_unpacklo_epi64(
                          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v35), v47),
                          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v34), _mm_cvtsi32_si128(v58)));
                  if ( *(_DWORD *)(v48 + 32) )
                  {
                    a5 = *(_QWORD *)(v48 + 96);
                    v50 = (unsigned __int16 *)(*(_QWORD *)(v48 + 88) + 4LL * *(unsigned __int16 *)(*v61 + 66));
                    v51 = *v50;
                    v52 = (unsigned __int16 *)(a5 + 4 * v51);
                    v53 = (unsigned __int16 *)(a5 + 4 * (v51 + v50[1]));
                    if ( v52 != v53 )
                    {
                      v54 = v16 - 1;
                      while ( 1 )
                      {
                        if ( !*((_BYTE *)v52 + 3) )
                        {
                          a5 = *((unsigned __int8 *)v52 + 2);
                          if ( v54 == (_DWORD)a5 )
                            break;
                        }
                        v52 += 2;
                        if ( v52 == v53 )
                          goto LABEL_65;
                      }
                      v55 = *(_QWORD *)(*(_QWORD *)(v48 + 80) + 8LL * *v52);
                      if ( !v55 )
                        v55 = v62;
                      v62 = v55;
                    }
                  }
LABEL_65:
                  v63 = v49;
                  v9 = (__m128i)(unsigned __int64)i;
                  v61 = i;
                  v56 -= v17;
                  goto LABEL_2;
                }
                v17 += v38;
              }
              goto LABEL_14;
            }
          }
        }
        else
        {
          if ( (v28 & 1) != 0 )
          {
            if ( (*(_BYTE *)i & 2) == 0 )
              goto LABEL_35;
          }
          else
          {
            v37 = *(_BYTE *)(v28 + 44);
            if ( (v37 & 1) == 0 )
              goto LABEL_35;
            v29 = (v37 & 2) != 0;
          }
          if ( !(_BYTE)v29 )
            goto LABEL_35;
        }
        if ( v17 == v56 )
        {
          v65 = _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(v35), _mm_cvtsi32_si128(v36)),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(v34), _mm_cvtsi32_si128(v58)));
          v66[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)i, (__m128i)v59);
          if ( sub_567750(
                 v56,
                 v28,
                 v29,
                 (__int64)i,
                 a5,
                 v36,
                 v65.m128i_i32[0],
                 v65.m128i_i32[2],
                 _mm_load_si128(v66).m128i_i64[0]) )
          {
            return 0;
          }
          v40 = *(_QWORD *)(v59 + 8);
          if ( *(_DWORD *)(v40 + 32) )
          {
            v41 = *(_QWORD *)(v40 + 96);
            v42 = (unsigned __int16 *)(*(_QWORD *)(v40 + 88) + 4LL * *(unsigned __int16 *)(*v61 + 66));
            v43 = *v42;
            v44 = (unsigned __int16 *)(v41 + 4 * v43);
            v45 = (unsigned __int16 *)(v41 + 4 * (v43 + v42[1]));
            if ( v44 != v45 )
            {
              while ( *((_BYTE *)v44 + 3) || v16 - 1 != *((unsigned __int8 *)v44 + 2) )
              {
                v44 += 2;
                if ( v44 == v45 )
                  return v62;
              }
              v46 = *(_QWORD *)(*(_QWORD *)(v40 + 80) + 8LL * *v44);
              if ( !v46 )
                return v62;
              return v46;
            }
          }
          return v62;
        }
        ++v17;
LABEL_14:
        a5 = (unsigned int)(a5 + 1);
      }
      v25 = HIBYTE(v28);
      v18 = HIBYTE(v28) + v35;
LABEL_29:
      LODWORD(v25) = v34 + v25;
      v24 = v36;
      goto LABEL_30;
    }
  }
  return 0;
}
