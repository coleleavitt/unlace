__m128i *__fastcall sub_5687C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __m128i a8)
{
  __m128i *v8; // rbx
  __int64 v9; // r8
  unsigned __int8 *v10; // r14
  unsigned __int16 v11; // r13
  __m128i v12; // xmm2
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int16 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rbp
  __int64 v22; // rdx
  unsigned int v23; // r12d
  unsigned int v24; // eax
  __int128 v25; // xmm7
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r15
  unsigned int v32; // ebp
  unsigned int v33; // r13d
  __int64 v34; // rdx
  int v35; // esi
  __int64 v36; // rcx
  bool v37; // r10
  __int128 v38; // xmm0
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  int v45; // ebp
  __int64 v46; // rdx
  __m128i v47; // [rsp+0h] [rbp-C8h]
  __m128i si128; // [rsp+0h] [rbp-C8h]
  __int64 v49; // [rsp+20h] [rbp-A8h]
  __int64 v50; // [rsp+28h] [rbp-A0h] BYREF
  __m128i *v51; // [rsp+30h] [rbp-98h]
  __int64 v52; // [rsp+38h] [rbp-90h]
  __int64 v53; // [rsp+40h] [rbp-88h]
  unsigned int v54; // [rsp+48h] [rbp-80h]
  unsigned __int16 v55; // [rsp+4Eh] [rbp-7Ah]
  __int128 v56; // [rsp+50h] [rbp-78h] BYREF
  __m128i v57; // [rsp+60h] [rbp-68h] BYREF
  __m128i v58; // [rsp+70h] [rbp-58h] BYREF
  __m128i v59[4]; // [rsp+80h] [rbp-48h] BYREF

  v8 = (__m128i *)a1;
  v50 = a8.m128i_i64[1];
  v9 = a8.m128i_i64[0];
  if ( (_WORD)a2 )
  {
    v51 = (__m128i *)a1;
    v10 = (unsigned __int8 *)a8.m128i_i64[0];
    v11 = a2;
    v12 = (__m128i)_mm_loadh_ps((const double *)&v50);
LABEL_3:
    a8 = v12;
    v47 = _mm_loadu_si128((const __m128i *)&a7);
    if ( (unsigned int)sub_5682F0(
                         a1,
                         a2,
                         a3,
                         a4,
                         v9,
                         a6,
                         v47.m128i_i32[0],
                         v47.m128i_i32[2],
                         (__int64 *)_mm_loadu_si128(&a8).m128i_i64[0]) )
    {
      v49 = *(_QWORD *)v10;
      v15 = *(unsigned __int16 *)(*(_QWORD *)v10 + 66LL);
      v16 = *(_QWORD *)(v50 + 8);
      if ( *(_DWORD *)(v16 + 32) )
      {
        v17 = (unsigned __int16 *)(*(_QWORD *)(v16 + 88) + 4LL * (unsigned __int16)v15);
        v18 = *(_QWORD *)(v16 + 96);
        v19 = *v17;
        v20 = v18 + 4 * v19;
        v21 = v18 + 4 * (v19 + v17[1]);
        if ( v20 != v21 )
        {
          while ( *(_WORD *)v20 < v11 )
          {
            v20 += 4;
            if ( v20 == v21 )
              goto LABEL_44;
          }
          while ( v11 < *(_WORD *)(v21 - 4) )
          {
            v21 -= 4;
            if ( v21 == v20 )
              goto LABEL_44;
          }
          if ( (v49 & 1) == 0 )
          {
            v22 = *(unsigned int *)(v49 + 36);
            if ( (_DWORD)v22 )
            {
              v53 = 0;
              if ( (_DWORD)v15 )
              {
                v22 = (unsigned int)v15 * *(unsigned __int16 *)(v16 + 36);
                v53 = *(_QWORD *)(v16 + 128) + 2 * v22;
              }
              v23 = 0;
              v24 = sub_565DC0(v15, v19, v22, v49, v13, v14, _mm_loadu_si128((const __m128i *)&a7).m128i_u32[0]);
              v25 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
              v54 = v24;
              v30 = sub_565DD0(v15, v19, v26, v27, v28, v29, v25);
              v31 = HIDWORD(v30);
              v9 = *(unsigned int *)(v49 + 36);
              v52 = v21;
              v32 = v30;
              v55 = v11;
              v33 = 0;
              while ( (_DWORD)v9 != v23 )
              {
                v10 = (unsigned __int8 *)(v49 + 8 * (v23 - (unsigned __int64)(unsigned int)v9));
                v39 = *(_QWORD *)v10;
                if ( (*(_QWORD *)v10 & 1) != 0 )
                  v34 = (v39 >> 3) & 1;
                else
                  LOBYTE(v34) = (*(_BYTE *)(v39 + 44) & 4) != 0;
                a6 = 0;
                if ( !(_BYTE)v34 )
                {
                  if ( v53 )
                    a6 = *(unsigned __int16 *)(v53 + 2LL * v33);
                  ++v33;
                }
                if ( v23 )
                {
                  if ( (v39 & 1) != 0 )
                  {
                    v35 = BYTE6(v39);
                    v36 = (v39 >> 40) & 0xF;
                    a1 = BYTE4(v39);
                  }
                  else
                  {
                    v35 = *(_DWORD *)(v39 + 4);
                    LODWORD(v36) = *(_DWORD *)(v39 + 8);
                    a1 = *(unsigned int *)(v39 + 12);
                  }
                  a2 = v35 + v54;
                  if ( (_DWORD)v36 )
                  {
                    a4 = v32 + (unsigned int)v36;
                  }
                  else
                  {
                    a1 = (unsigned int)(v31 + a1);
                    a4 = v32;
                  }
                  if ( (v39 & 1) != 0 )
                  {
LABEL_28:
                    v31 = HIBYTE(v39);
                    v54 = HIBYTE(v39) + a2;
LABEL_29:
                    LODWORD(v31) = a1 + v31;
                    v32 = a4;
                    goto LABEL_30;
                  }
                }
                else
                {
                  a2 = v54;
                  a1 = (unsigned int)v31;
                  a4 = v32;
                  if ( (v39 & 1) != 0 )
                    goto LABEL_28;
                }
                v45 = *(_DWORD *)(v39 + 20);
                LODWORD(v31) = *(_DWORD *)(v39 + 24);
                v54 = a2 + *(_DWORD *)(v39 + 16);
                if ( !v45 )
                  goto LABEL_29;
                v32 = a4 + v45;
LABEL_30:
                a3 = *v10;
                v37 = (*v10 & 8) != 0;
                if ( (v39 & 1) == 0 )
                  v37 = (*(_BYTE *)(v39 + 44) & 4) != 0;
                if ( !v37 && v33 - 1 >= *(unsigned __int8 *)(v20 + 2) )
                {
                  v12 = (__m128i)_mm_loadh_ps((const double *)&v50);
                  v38 = (__int128)_mm_unpacklo_epi64(
                                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a4)),
                                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1), _mm_cvtsi32_si128(a6)));
                  if ( *(_BYTE *)(v20 + 3) )
                  {
                    v20 += 4;
                    if ( v20 == v52 )
                    {
                      v11 = v55;
                      a7 = v38;
                      goto LABEL_3;
                    }
                    v56 = v38;
                    v57 = v12;
                    sub_5687C0((unsigned int)&v58, v55, a3, a4, v9, a6, v38, (__int128)_mm_load_si128(&v57));
                    if ( v59[0].m128i_i64[0] )
                    {
                      v8 = v51;
                      *v51 = _mm_load_si128(&v58);
                      v8[1] = _mm_load_si128(v59);
                      return v8;
                    }
                  }
                  else
                  {
                    v46 = (a3 & 2) != 0;
                    if ( (v39 & 1) == 0 )
                      v46 = *(_BYTE *)(v39 + 44) & 1;
                    if ( (_DWORD)a6 || (_BYTE)v46 )
                    {
                      v8 = v51;
                      *v51 = (__m128i)v38;
                      v8[1] = v12;
                      return v8;
                    }
                    *(_QWORD *)&v56 = __PAIR64__(a4, a2);
                    *((_QWORD *)&v56 + 1) = (unsigned int)a1;
                    v57 = v12;
                    si128 = _mm_load_si128((const __m128i *)&v56);
                    if ( (unsigned int)sub_5682F0(
                                         a1,
                                         a2,
                                         v46,
                                         a4,
                                         v9,
                                         a6,
                                         si128.m128i_i32[0],
                                         si128.m128i_i32[2],
                                         (__int64 *)_mm_load_si128(&v57).m128i_i64[0]) )
                    {
                      v8 = v51;
                      sub_567960(
                        v51,
                        0,
                        v40,
                        v41,
                        v42,
                        v43,
                        (__int128)_mm_load_si128((const __m128i *)&v56),
                        (__int128)_mm_load_si128(&v57));
                      return v8;
                    }
                    v20 += 4;
                    if ( v20 == v52 )
                      break;
                  }
                  v9 = *(unsigned int *)(v49 + 36);
                }
                ++v23;
              }
            }
          }
        }
      }
    }
LABEL_44:
    v8 = v51;
  }
  *v8 = 0;
  v8[1] = 0;
  return v8;
}
