__int64 __fastcall sub_5679C0(
        int a1,
        unsigned __int64 *i,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  unsigned __int64 v9; // r13
  __m128i v10; // xmm0
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r14d
  int v17; // ebx
  unsigned int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // r9
  unsigned int v25; // r11d
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  unsigned int v28; // r13d
  __int64 v29; // r8
  unsigned int v30; // ebp
  unsigned int v31; // r10d
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  int v34; // r11d
  unsigned int v35; // edx
  __m128 v36; // xmm0
  __int64 v37; // rdi
  __int64 v38; // rcx
  unsigned __int16 *v39; // rax
  __int64 v40; // rsi
  unsigned __int16 *v41; // rdx
  unsigned __int16 *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdi
  unsigned __int16 *v45; // rdx
  __int64 v46; // r11
  unsigned __int16 *v47; // rax
  unsigned __int16 *v48; // rdx
  unsigned int v49; // r14d
  __int64 v50; // rax
  unsigned int v51; // [rsp+2Ch] [rbp-9Ch]
  __int64 v52; // [rsp+30h] [rbp-98h]
  __int64 v53; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int64 *v54; // [rsp+40h] [rbp-88h]
  __int64 v55; // [rsp+48h] [rbp-80h]
  __m128i v56; // [rsp+50h] [rbp-78h] BYREF
  __m128i v57; // [rsp+60h] [rbp-68h]
  __m128i v58; // [rsp+70h] [rbp-58h]
  __m128i v59[4]; // [rsp+80h] [rbp-48h] BYREF

  v55 = 0;
  v54 = (unsigned __int64 *)a8;
  v9 = *(_QWORD *)a8;
  v53 = *((_QWORD *)&a8 + 1);
  v56 = _mm_loadu_si128((const __m128i *)&a7);
  v57 = _mm_loadu_si128((const __m128i *)&a8);
LABEL_2:
  v10 = (__m128i)_mm_loadh_ps((const double *)&v53);
  if ( (v9 & 1) == 0 )
  {
    v12 = *(unsigned int *)(v9 + 36);
    if ( (_DWORD)v12 )
    {
      v13 = *(unsigned __int16 *)(v9 + 66);
      v52 = 0;
      v14 = *(_QWORD *)(v53 + 8);
      if ( *(_WORD *)(v9 + 66) )
      {
        v15 = (unsigned int)v13 * *(unsigned __int16 *)(v14 + 36);
        v13 = *(_QWORD *)(v14 + 128);
        v52 = v13 + 2 * v15;
      }
      v57 = v10;
      v16 = 0;
      v17 = 0;
      v18 = sub_565DC0(v12, (__int64)i, v13, v14, a5, a6, _mm_load_si128(&v56).m128i_u32[0]);
      v23 = sub_565DD0(v12, (__int64)i, v19, v20, v21, v22, (__int128)_mm_load_si128(&v56));
      v24 = 0;
      v25 = v23;
      v26 = HIDWORD(v23);
      v51 = *(_DWORD *)(v9 + 36);
      for ( i = (unsigned __int64 *)(v9 - 8LL * v51); ; ++i )
      {
        if ( v51 == (_DWORD)v24 )
          return 0;
        v33 = *i;
        if ( (*i & 1) != 0 )
        {
          v27 = (v33 >> 3) & 1;
          if ( (v33 & 8) != 0 )
            goto LABEL_29;
        }
        else
        {
          v27 = (*(_BYTE *)(v33 + 44) & 4) != 0;
          if ( (*(_BYTE *)(v33 + 44) & 4) != 0 )
          {
LABEL_29:
            v27 = 0;
            v28 = 0;
            if ( (_DWORD)v24 )
              goto LABEL_13;
            goto LABEL_30;
          }
        }
        v28 = 0;
        if ( v52 )
        {
          v28 = *(unsigned __int16 *)(v52 + 2LL * v16);
          LOBYTE(v27) = v28 != 0;
        }
        ++v16;
        if ( (_DWORD)v24 )
        {
LABEL_13:
          if ( (v33 & 1) != 0 )
          {
            v29 = (v33 >> 40) & 0xF;
            v30 = BYTE4(v33);
            v31 = v18 + BYTE6(v33);
            if ( (_DWORD)v29 )
              goto LABEL_15;
LABEL_38:
            v30 += v26;
            a5 = v25;
          }
          else
          {
            LODWORD(v29) = *(_DWORD *)(v33 + 8);
            v30 = *(_DWORD *)(v33 + 12);
            v31 = v18 + *(_DWORD *)(v33 + 4);
            if ( !(_DWORD)v29 )
              goto LABEL_38;
LABEL_15:
            a5 = v25 + (unsigned int)v29;
          }
          if ( (v33 & 1) != 0 )
            goto LABEL_17;
          goto LABEL_31;
        }
LABEL_30:
        v30 = v26;
        a5 = v25;
        v31 = v18;
        if ( (v33 & 1) != 0 )
        {
LABEL_17:
          v26 = HIBYTE(v33);
          v18 = HIBYTE(v33) + v31;
LABEL_18:
          LODWORD(v26) = v30 + v26;
          v25 = a5;
          goto LABEL_19;
        }
LABEL_31:
        v34 = *(_DWORD *)(v33 + 20);
        LODWORD(v26) = *(_DWORD *)(v33 + 24);
        v18 = v31 + *(_DWORD *)(v33 + 16);
        if ( !v34 )
          goto LABEL_18;
        v25 = a5 + v34;
LABEL_19:
        v32 = (*(_BYTE *)i & 2) != 0;
        if ( (v33 & 1) == 0 )
          v32 = *(_BYTE *)(v33 + 44) & 1;
        if ( (_BYTE)v32 || (_BYTE)v27 )
        {
          if ( a1 == v17 )
          {
            v36 = _mm_loadh_ps((const double *)&v53);
            v58 = _mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31), _mm_cvtsi32_si128(a5)),
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), _mm_cvtsi32_si128(v28)));
            v59[0] = (__m128i)v36;
            if ( sub_567750(
                   v27,
                   (__int64)i,
                   v32,
                   v33,
                   a5,
                   v24,
                   v58.m128i_i32[0],
                   v58.m128i_i32[2],
                   _mm_load_si128(v59).m128i_i64[0]) )
            {
              return 0;
            }
            v37 = *(_QWORD *)(v53 + 8);
            if ( *(_DWORD *)(v37 + 32) )
            {
              v38 = *(_QWORD *)(v37 + 96);
              v39 = (unsigned __int16 *)(*(_QWORD *)(v37 + 88) + 4LL * *(unsigned __int16 *)(*v54 + 66));
              v40 = *v39;
              v41 = (unsigned __int16 *)(v38 + 4 * v40);
              v42 = (unsigned __int16 *)(v38 + 4 * (v40 + v39[1]));
              if ( v41 != v42 )
              {
                while ( *((_BYTE *)v41 + 3) || v16 - 1 != *((unsigned __int8 *)v41 + 2) )
                {
                  v41 += 2;
                  if ( v41 == v42 )
                    return v55;
                }
                v43 = *(_QWORD *)(*(_QWORD *)(v37 + 80) + 8LL * *v41);
                if ( !v43 )
                  return v55;
                return v43;
              }
            }
            return v55;
          }
          ++v17;
        }
        else
        {
          v9 = *i;
          if ( (*i & 1) == 0 && *(_DWORD *)(v9 + 36) )
          {
            v35 = *(_DWORD *)(v9 + 48);
            if ( a1 - v17 < v35 )
            {
              a6 = *(_QWORD *)(v53 + 8);
              if ( *(_DWORD *)(a6 + 32) )
              {
                v44 = *(_QWORD *)(a6 + 96);
                v45 = (unsigned __int16 *)(*(_QWORD *)(a6 + 88) + 4LL * *(unsigned __int16 *)(*v54 + 66));
                v46 = *v45;
                v47 = (unsigned __int16 *)(v44 + 4 * v46);
                v48 = (unsigned __int16 *)(v44 + 4 * (v46 + v45[1]));
                if ( v47 != v48 )
                {
                  v49 = v16 - 1;
                  while ( *((_BYTE *)v47 + 3) || v49 != *((unsigned __int8 *)v47 + 2) )
                  {
                    v47 += 2;
                    if ( v47 == v48 )
                      goto LABEL_55;
                  }
                  v50 = *(_QWORD *)(*(_QWORD *)(a6 + 80) + 8LL * *v47);
                  if ( !v50 )
                    v50 = v55;
                  v55 = v50;
                }
              }
LABEL_55:
              v56.m128i_i64[0] = __PAIR64__(a5, v31);
              a1 -= v17;
              v56.m128i_i64[1] = v30;
              v54 = i;
              goto LABEL_2;
            }
            v17 += v35;
          }
        }
        v24 = (unsigned int)(v24 + 1);
      }
    }
  }
  return 0;
}
