__m128i *__fastcall sub_565DE0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        _QWORD *a8,
        __int64 a9)
{
  __m128i *v9; // rbp
  unsigned int v10; // r14d
  __m128 v11; // xmm0
  __int64 v12; // r15
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned int v22; // edi
  unsigned __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // r8
  unsigned int v26; // ebx
  unsigned int v27; // r15d
  unsigned int v28; // r13d
  unsigned int v29; // r10d
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // edx
  __int64 v34; // rcx
  unsigned int v35; // r14d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __m128i v38; // xmm4
  __m128 v39; // xmm0
  __m128i v40; // xmm3
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r9
  unsigned int v45; // r13d
  unsigned int v46; // eax
  unsigned __int64 v47; // rcx
  char v48; // dl
  __int64 v49; // rax
  __m128i si128; // xmm6
  __int64 v51; // rax
  int v53; // r13d
  __m128i v54; // xmm5
  char v55; // al
  _BYTE *v56; // [rsp+20h] [rbp-F8h]
  unsigned int v57; // [rsp+2Ch] [rbp-ECh]
  __int64 v58; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v59; // [rsp+38h] [rbp-E0h]
  unsigned int v60; // [rsp+3Ch] [rbp-DCh]
  double v61[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+50h] [rbp-C8h]
  __int64 v63; // [rsp+58h] [rbp-C0h]
  __m128i v64; // [rsp+60h] [rbp-B8h] BYREF
  __m128 v65; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD *v66; // [rsp+80h] [rbp-98h]
  unsigned int v67; // [rsp+88h] [rbp-90h]
  unsigned __int16 v68; // [rsp+8Ch] [rbp-8Ch]
  char v69; // [rsp+8Fh] [rbp-89h]
  __int16 v70; // [rsp+9Dh] [rbp-7Bh]
  char v71; // [rsp+9Fh] [rbp-79h]
  __m128i v72[2]; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v73[5]; // [rsp+C0h] [rbp-58h] BYREF

  v9 = (__m128i *)a1;
  v67 = a2;
  if ( a3 < (unsigned int)a2 )
  {
    v66 = nullptr;
    v58 = 0;
    v65 = 0;
  }
  else
  {
    v63 = a1;
    v10 = a3;
    v11 = (__m128)_mm_loadu_si128((const __m128i *)&a7);
    v69 = a4;
    v58 = a9;
    v12 = *a8;
    v66 = a8;
    v65 = v11;
    if ( (v12 & 1) != 0 )
    {
LABEL_33:
      v62 = 0;
      LODWORD(v23) = 0;
      v22 = 0;
      v13 = 0;
      v12 = 0;
    }
    else
    {
LABEL_3:
      v13 = *(_DWORD *)(v12 + 36);
      if ( v13 )
      {
        v14 = *(unsigned __int16 *)(v12 + 66);
        v62 = 0;
        v15 = *(_QWORD *)(v58 + 8);
        if ( (_DWORD)v14 )
        {
          v16 = (unsigned int)v14 * *(unsigned __int16 *)(v15 + 36);
          v14 = *(_QWORD *)(v15 + 128);
          v62 = v14 + 2 * v16;
        }
        v72[0] = (__m128i)v11;
        v72[1] = (__m128i)_mm_loadh_ps((const double *)&v58);
        v13 = sub_565DC0(a1, a2, v14, v15, a5, a6, v11.m128_u32[0]);
        v21 = sub_565DD0(a1, a2, v17, v18, v19, v20, (__int128)_mm_load_si128(v72));
        v22 = v21;
        v23 = HIDWORD(v21);
      }
      else
      {
        v62 = 0;
        LODWORD(v23) = 0;
        v22 = 0;
        v12 = 0;
      }
    }
    v24 = v12;
    v25 = 0;
    v26 = 0;
    v27 = v23;
    v28 = v22;
    v29 = v10;
LABEL_8:
    if ( v24 )
    {
      v30 = *(unsigned int *)(v24 + 36);
      while ( v26 != (_DWORD)v30 )
      {
        a2 = v24 + 8 * (v26 - (unsigned __int64)*(unsigned int *)(v24 + 36));
        v31 = *(_QWORD *)a2;
        if ( (*(_QWORD *)a2 & 1) != 0 )
          v32 = (v31 >> 3) & 1;
        else
          LOBYTE(v32) = (*(_BYTE *)(v31 + 44) & 4) != 0;
        if ( (_BYTE)v32 )
        {
          v57 = 0;
          a1 = 0;
        }
        else
        {
          if ( v62 )
          {
            v57 = *(unsigned __int16 *)(v62 + 2LL * (unsigned int)v25);
            a1 = *(unsigned __int16 *)(v62 + 2LL * (unsigned int)v25);
          }
          else
          {
            v57 = 0;
            a1 = 0;
          }
          v25 = (unsigned int)(v25 + 1);
        }
        if ( v26 )
        {
          if ( (v31 & 1) != 0 )
          {
            v33 = BYTE6(v31);
            v34 = (v31 >> 40) & 0xF;
            v35 = BYTE4(v31);
          }
          else
          {
            v33 = *(_DWORD *)(v31 + 4);
            LODWORD(v34) = *(_DWORD *)(v31 + 8);
            v35 = *(_DWORD *)(v31 + 12);
          }
          v36 = v13 + v33;
          if ( (_DWORD)v34 )
          {
            v37 = v28 + (unsigned int)v34;
          }
          else
          {
            v35 += v27;
            v37 = v28;
          }
        }
        else
        {
          v35 = v27;
          v37 = v28;
          v36 = v13;
        }
        if ( (v31 & 1) != 0 )
        {
          v27 = HIBYTE(v31);
          v13 = v36 + v27;
        }
        else
        {
          v53 = *(_DWORD *)(v31 + 20);
          v27 = *(_DWORD *)(v31 + 24);
          v13 = v36 + *(_DWORD *)(v31 + 16);
          if ( v53 )
          {
            v28 = v37 + v53;
            goto LABEL_25;
          }
        }
        v27 += v35;
        v28 = v37;
LABEL_25:
        ++v26;
        if ( v13 >= v29 )
        {
          v56 = (_BYTE *)a2;
          v38 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), _mm_cvtsi32_si128(v37));
          v39 = _mm_loadh_ps((const double *)&v58);
          v59 = v29;
          v40 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v35), _mm_cvtsi32_si128(v57));
          v68 = a1;
          v60 = v25;
          v61[0] = *(double *)v40.m128i_i64;
          v61[1] = *(double *)v38.m128i_i64;
          v64 = _mm_unpacklo_epi64(v38, v40);
          v73[0] = v64;
          v73[1] = (__m128i)v39;
          v41 = sub_565DC0(a1, a2, v36, v37, v25, v30, v64.m128i_u32[0]);
          v29 = v59;
          if ( v41 != v13 )
          {
            v25 = v60;
            if ( v67 >= v13 )
              goto LABEL_8;
          }
          v45 = v35;
          v10 = v59;
          v46 = sub_565DC0(a1, a2, v42, v43, v25, v44, _mm_load_si128(v73).m128i_u32[0]);
          if ( v67 < v46 )
            break;
          v47 = *(_QWORD *)a2;
          v48 = (*(_BYTE *)a2 & 2) != 0;
          if ( v69 )
          {
            if ( (v47 & 1) != 0 )
            {
              if ( v57 )
                goto LABEL_51;
            }
            else
            {
              v48 = *(_BYTE *)(v47 + 44) & 1;
              if ( v57 )
                goto LABEL_51;
            }
            if ( v48 )
              goto LABEL_51;
            *(_QWORD *)&v61[0] = _mm_cvtsi32_si128(v45).m128i_u64[0];
          }
          else
          {
            a2 = v68;
            if ( v68 )
            {
              a1 = *(_QWORD *)(v58 + 8);
              v49 = sub_562EC0(a1, v68);
              v70 = v49;
              v71 = BYTE2(v49);
              if ( !BYTE1(v49) )
                goto LABEL_32;
LABEL_51:
              v54 = _mm_load_si128(&v64);
              v66 = v56;
              v65 = (__m128)v54;
            }
            else if ( (v47 & 1) != 0 )
            {
              if ( (*v56 & 2) != 0 && (*v56 & 4) != 0 )
                goto LABEL_51;
            }
            else
            {
              v55 = *(_BYTE *)(v47 + 44);
              if ( (v55 & 1) != 0 && (v55 & 2) != 0 )
                goto LABEL_51;
            }
          }
LABEL_32:
          v12 = *(_QWORD *)v56;
          v11 = _mm_loadh_ps(v61);
          if ( (*(_QWORD *)v56 & 1) == 0 )
            goto LABEL_3;
          goto LABEL_33;
        }
      }
    }
    v9 = (__m128i *)v63;
  }
  si128 = _mm_load_si128((const __m128i *)&v65);
  v9[1].m128i_i64[0] = (__int64)v66;
  v51 = v58;
  *v9 = si128;
  v9[1].m128i_i64[1] = v51;
  return v9;
}
