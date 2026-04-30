__m128i *__fastcall sub_5662E0(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 *a8,
        __int64 a9)
{
  __m128i *v9; // rbx
  unsigned int v10; // r12d
  __int64 v11; // rsi
  __m128 v12; // xmm0
  __int64 *v13; // r13
  __m128i v14; // xmm3
  __m128i v15; // xmm2
  __m128 v16; // xmm1
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  __m128i v21; // xmm0
  unsigned int v22; // r10d
  __int64 v23; // r8
  unsigned int v24; // r15d
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rcx
  char v28; // dl
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __m128i si128; // xmm7
  unsigned int v35; // r14d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  unsigned int v41; // ebx
  unsigned int v42; // r11d
  __int64 v43; // r13
  unsigned int v44; // r15d
  unsigned int v45; // ebp
  unsigned __int64 *v46; // rsi
  unsigned __int64 v47; // rax
  int v48; // edx
  __int64 v49; // rcx
  unsigned int v50; // r12d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __m128i v53; // xmm7
  __int64 v54; // rax
  int v56; // ebx
  char v57; // al
  int v58; // [rsp+2Ch] [rbp-FCh]
  unsigned int v59; // [rsp+2Ch] [rbp-FCh]
  __m128i v60; // [rsp+30h] [rbp-F8h] BYREF
  __int64 *v61; // [rsp+40h] [rbp-E8h]
  unsigned int v62; // [rsp+48h] [rbp-E0h]
  unsigned int v63; // [rsp+4Ch] [rbp-DCh]
  __m128 v64; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v65; // [rsp+60h] [rbp-C8h] BYREF
  double v66[2]; // [rsp+68h] [rbp-C0h] BYREF
  unsigned int v67; // [rsp+78h] [rbp-B0h]
  unsigned int v68; // [rsp+7Ch] [rbp-ACh]
  __int64 v69; // [rsp+80h] [rbp-A8h]
  __m128i *v70; // [rsp+88h] [rbp-A0h]
  __m128i v71; // [rsp+90h] [rbp-98h] BYREF
  __int64 v72; // [rsp+A0h] [rbp-88h]
  unsigned int v73; // [rsp+A8h] [rbp-80h]
  unsigned __int16 v74; // [rsp+ACh] [rbp-7Ch]
  char v75; // [rsp+AFh] [rbp-79h]
  __m128i v76[2]; // [rsp+B0h] [rbp-78h] BYREF
  __m128i v77[5]; // [rsp+D0h] [rbp-58h] BYREF

  v9 = a1;
  v67 = a2;
  if ( (unsigned int)a3 < (unsigned int)a2 )
  {
    v72 = 0;
    v65 = 0;
    v71 = 0;
  }
  else
  {
    v10 = a3;
    v73 = HIDWORD(a2);
    v68 = HIDWORD(a3);
    if ( (_DWORD)a3 == (_DWORD)a2 && HIDWORD(a3) < HIDWORD(a2) )
    {
      v72 = 0;
      v65 = 0;
      v71 = 0;
      goto LABEL_41;
    }
    v11 = a9;
    v70 = a1;
    v12 = (__m128)_mm_loadu_si128((const __m128i *)&a7);
    v75 = a4;
    v65 = a9;
    v13 = a8;
    v72 = (__int64)a8;
    v71 = (__m128i)v12;
    v64 = _mm_loadh_ps((const double *)&v65);
LABEL_19:
    v29 = *v13;
    if ( (*v13 & 1) == 0 )
    {
      v30 = *(unsigned int *)(v29 + 36);
      if ( (_DWORD)v30 )
      {
        v31 = *(unsigned __int16 *)(v29 + 66);
        v69 = 0;
        v32 = *(_QWORD *)(v65 + 8);
        if ( (_DWORD)v31 )
        {
          v33 = (unsigned int)v31 * *(unsigned __int16 *)(v32 + 36);
          v31 = *(_QWORD *)(v32 + 128);
          v69 = v31 + 2 * v33;
        }
        si128 = _mm_load_si128((const __m128i *)&v64);
        v60.m128i_i64[0] = v29;
        v35 = 0;
        v76[0] = (__m128i)v12;
        v76[1] = si128;
        v58 = sub_565DC0(v30, v11, v31, v32, a5, v29, v12.m128_u32[0]);
        v40 = sub_565DD0(v30, v11, v36, v37, v38, v39, (__int128)_mm_load_si128(v76));
        v20 = v60.m128i_i64[0];
        v22 = 0;
        v41 = v40;
        LODWORD(v23) = v58;
        v42 = *(_DWORD *)(v60.m128i_i64[0] + 36);
        v43 = v60.m128i_i64[0];
        v44 = HIDWORD(v40);
        v45 = v10;
        if ( v42 )
        {
          do
          {
            v46 = (unsigned __int64 *)(v43 + 8 * (v35 - (unsigned __int64)v42));
            v47 = *v46;
            if ( (*v46 & 1) != 0 )
            {
              if ( (v47 & 8) != 0 )
                goto LABEL_43;
            }
            else if ( (*(_BYTE *)(v47 + 44) & 4) != 0 )
            {
LABEL_43:
              v59 = 0;
              v74 = 0;
              if ( !v35 )
                goto LABEL_44;
              goto LABEL_29;
            }
            v30 = v69;
            if ( v69 )
            {
              v74 = *(_WORD *)(v69 + 2LL * v22);
              v59 = v74;
            }
            else
            {
              v59 = 0;
              v74 = 0;
            }
            ++v22;
            if ( !v35 )
            {
LABEL_44:
              v50 = v44;
              v52 = v41;
              v51 = (unsigned int)v23;
              if ( (v47 & 1) != 0 )
                goto LABEL_34;
              goto LABEL_45;
            }
LABEL_29:
            if ( (v47 & 1) != 0 )
            {
              v48 = BYTE6(v47);
              v49 = (v47 >> 40) & 0xF;
              v50 = BYTE4(v47);
            }
            else
            {
              v48 = *(_DWORD *)(v47 + 4);
              LODWORD(v49) = *(_DWORD *)(v47 + 8);
              v50 = *(_DWORD *)(v47 + 12);
            }
            v51 = (unsigned int)(v23 + v48);
            if ( (_DWORD)v49 )
            {
              v52 = v41 + (unsigned int)v49;
            }
            else
            {
              v50 += v44;
              v52 = v41;
            }
            if ( (v47 & 1) != 0 )
            {
LABEL_34:
              v44 = HIBYTE(v47);
              v23 = (unsigned int)v51 + v44;
              goto LABEL_35;
            }
LABEL_45:
            v56 = *(_DWORD *)(v47 + 20);
            v44 = *(_DWORD *)(v47 + 24);
            v23 = (unsigned int)(v51 + *(_DWORD *)(v47 + 16));
            if ( v56 )
            {
              v41 = v52 + v56;
              goto LABEL_36;
            }
LABEL_35:
            v44 += v50;
            v41 = v52;
LABEL_36:
            if ( v41 < v45 || v44 < v68 && v45 == v41 )
            {
              ++v35;
            }
            else
            {
              v14 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v51), _mm_cvtsi32_si128(v52));
              v63 = v23;
              v15 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v50), _mm_cvtsi32_si128(v59));
              v16 = _mm_loadh_ps((const double *)&v65);
              v62 = v22;
              v66[0] = *(double *)v15.m128i_i64;
              v66[1] = *(double *)v14.m128i_i64;
              v77[0] = _mm_unpacklo_epi64(v14, v15);
              v61 = (__int64 *)(v43 + 8 * (v35 - (unsigned __int64)v42));
              v64 = v16;
              v77[1] = (__m128i)v16;
              v60 = v77[0];
              v17 = sub_565DD0(v30, (__int64)v46, v51, v52, v23, v20, (__int128)v77[0]);
              v21 = _mm_load_si128(&v60);
              v22 = v62;
              LODWORD(v23) = v63;
              if ( __PAIR64__(v44, v41) == v17 )
              {
                if ( v44 >= v73 )
                {
LABEL_10:
                  v60 = v21;
                  v13 = v61;
                  v24 = v50;
                  v10 = v45;
                  LOBYTE(v18) = v67 == v41;
                  v25 = sub_565DD0(v30, (__int64)v61, v18, v19, v63, v20, (__int128)_mm_load_si128(v77));
                  if ( v67 < (unsigned int)v25 )
                    break;
                  v26 = _mm_load_si128(&v60);
                  if ( v73 < HIDWORD(v25) && v67 == (_DWORD)v25 )
                    break;
                  v27 = *v13;
                  v28 = (*(_BYTE *)v13 & 2) != 0;
                  if ( v75 )
                  {
                    if ( (v27 & 1) == 0 )
                      v28 = *(_BYTE *)(v27 + 44) & 1;
                    v11 = v59;
                    if ( !v59 && !v28 )
                    {
                      *(_QWORD *)&v66[0] = _mm_cvtsi32_si128(v24).m128i_u64[0];
                      goto LABEL_18;
                    }
                    goto LABEL_54;
                  }
                  v11 = v74;
                  if ( v74 )
                  {
                    if ( v74 != 0xFFFF )
                    {
                      v11 = v65;
                      if ( v74 == 0xFFFE || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v65 + 8) + 104LL) + 3LL * v74 + 1) )
                        goto LABEL_18;
                    }
LABEL_54:
                    v72 = (__int64)v13;
                    v71 = v26;
                    goto LABEL_18;
                  }
                  if ( (v27 & 1) != 0 )
                  {
                    if ( (*(_BYTE *)v13 & 2) != 0 && (*(_BYTE *)v13 & 4) != 0 )
                      goto LABEL_61;
                  }
                  else
                  {
                    v57 = *(_BYTE *)(v27 + 44);
                    if ( (v57 & 1) != 0 && (v57 & 2) != 0 )
                    {
LABEL_61:
                      v72 = (__int64)v13;
                      v71 = v26;
                    }
                  }
LABEL_18:
                  v12 = _mm_loadh_ps(v66);
                  goto LABEL_19;
                }
              }
              else if ( v73 < v44 )
              {
                goto LABEL_10;
              }
              if ( v67 != v41 )
                goto LABEL_10;
              v42 = *(_DWORD *)(v43 + 36);
              ++v35;
            }
          }
          while ( v42 != v35 );
        }
      }
    }
    v9 = v70;
  }
LABEL_41:
  v53 = _mm_load_si128(&v71);
  v9[1].m128i_i64[0] = v72;
  v54 = v65;
  *v9 = v53;
  v9[1].m128i_i64[1] = v54;
  return v9;
}
