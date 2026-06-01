unsigned __int64 __fastcall sub_1D2DF80(
        __int64 *a1,
        unsigned int *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int *v7; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned __int16 *v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r12
  unsigned __int16 **v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r15
  unsigned __int16 **v28; // r12
  unsigned __int16 *v29; // rdx
  unsigned __int16 *v30; // rsi
  unsigned __int16 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int16 *v34; // r13
  unsigned __int16 *i; // r15
  __int64 v36; // rax
  __int64 v37; // rbx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  void *v40; // r13
  void **v41; // r15
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  int v47; // r9d
  unsigned __int64 v48; // r15
  int v49; // r14d
  unsigned __int8 v50; // r13
  unsigned int v51; // r12d
  __m128 v52; // xmm1
  __int64 *v53; // r11
  __m128i v54; // xmm2
  unsigned __int64 v55; // rbx
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // [rsp+20h] [rbp-288h]
  unsigned __int16 **v60; // [rsp+38h] [rbp-270h]
  void *v61; // [rsp+38h] [rbp-270h]
  unsigned __int64 v62; // [rsp+40h] [rbp-268h]
  unsigned int *v63; // [rsp+48h] [rbp-260h]
  void *v64; // [rsp+48h] [rbp-260h]
  int v65; // [rsp+50h] [rbp-258h]
  unsigned __int64 v66; // [rsp+58h] [rbp-250h]
  __m128i v67; // [rsp+60h] [rbp-248h] BYREF
  __int64 v68; // [rsp+70h] [rbp-238h]
  int v69[3]; // [rsp+84h] [rbp-224h] BYREF
  __m128i v70; // [rsp+90h] [rbp-218h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-208h]
  __m128i v72; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v73; // [rsp+C0h] [rbp-1E8h]
  __int128 v74; // [rsp+D0h] [rbp-1D8h] BYREF
  void *v75[2]; // [rsp+E0h] [rbp-1C8h]
  __m128i v76; // [rsp+F0h] [rbp-1B8h] BYREF
  void *ptr; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v78; // [rsp+108h] [rbp-1A0h] BYREF
  void *v79; // [rsp+110h] [rbp-198h] BYREF
  int v80; // [rsp+11Ch] [rbp-18Ch]
  __m128 v81; // [rsp+120h] [rbp-188h]
  void *v82; // [rsp+150h] [rbp-158h] BYREF
  __int64 v83; // [rsp+158h] [rbp-150h]
  _BYTE v84[128]; // [rsp+160h] [rbp-148h] BYREF
  void *v85; // [rsp+1E0h] [rbp-C8h] BYREF
  __int64 v86; // [rsp+1E8h] [rbp-C0h]
  _BYTE v87[184]; // [rsp+1F0h] [rbp-B8h] BYREF

  v7 = a2;
  v8 = a2[3];
  v9 = *a2;
  v69[2] = a2[1];
  v82 = v84;
  v83 = 0x1000000000LL;
  v10 = a2[4];
  v69[0] = v9;
  v69[1] = v8;
  v11 = *(unsigned __int16 **)&a2[4 * v10 + 38];
  v59 = (unsigned __int64)v11;
  if ( v11 )
  {
    v12 = sub_1D11200(a1, v11, a3, a4, v8, v9, a7);
    if ( v12 == 1 )
    {
      v55 = 0;
      goto LABEL_40;
    }
    v59 = v12 & 0xFFFFFFFFFFFFFFFELL;
    v13 = HIDWORD(v83);
  }
  else
  {
    v13 = 16;
  }
  v14 = (unsigned __int64)&v85;
  v85 = v87;
  v15 = a2[4];
  v74 = 0;
  *(_OWORD *)v75 = 0;
  v76 = 0;
  v70.m128i_i64[0] = 0;
  v70.m128i_i32[2] = 0;
  v71 = 0;
  v86 = 0x1000000000LL;
  if ( v15 > v13 )
  {
    sub_2237220(&v82, v84, v15, 8);
    v15 = a2[4];
  }
  v16 = (__int64)&a2[2 * v15 + 38];
  v17 = (unsigned __int16 **)(a2 + 38);
  if ( (unsigned int *)v16 == a2 + 38 )
  {
LABEL_12:
    v20 = *((_QWORD *)a2 + 5);
    v21 = 0;
    if ( !v20 || (v20 = sub_1D23E30((__int64 **)a1, v20, *((void **)v7 + 6), 0, 0)) != 0 )
    {
      sub_15AB8B0((__int64)&v74, v20, v21);
      v25 = *((_QWORD *)v7 + 9);
      v26 = *((_QWORD *)v7 + 7);
      v70 = _mm_loadu_si128((const __m128i *)(v7 + 14));
      v71 = v25;
      if ( !v26
        || (sub_1D204A0(&v67, a1, &v70, (__m128)0LL, a4, v22, v23, v24),
            v70 = _mm_loadu_si128(&v67),
            v71 = v68,
            v67.m128i_i64[0]) )
      {
        v27 = 2LL * v7[4];
        v28 = (unsigned __int16 **)&v7[v27 + 38];
        v60 = (unsigned __int16 **)&v7[v27 + 38 + v27];
        if ( v60 != v28 )
        {
          v63 = v7;
          do
          {
            v29 = *v28;
            if ( *v28 )
            {
              v30 = v29 + 32;
              ptr = &v79;
              v78 = 0x800000000LL;
              v33 = *v29;
              v31 = v29 + 40;
              v32 = *((unsigned int *)v29 + 1);
              LOWORD(v33) = v33 & 0x1FF;
              if ( (_WORD)v33 == 24 )
                v31 = v30;
              v34 = &v31[4 * v32];
              if ( v31 == v34 )
              {
                v41 = &v79;
                v40 = &v79;
              }
              else
              {
                for ( i = v31 + 4; ; i += 4 )
                {
                  v36 = sub_1D1B120(
                          (__int64)a1,
                          *(_QWORD *)v31 & 0xFFFFFFFFFFFFFFF8LL,
                          (__m128)0LL,
                          a4,
                          v32,
                          v33,
                          v23,
                          v24);
                  v72.m128i_i64[0] = (*(_BYTE *)(v36 + 29) >> 5) & 3 | (unsigned __int64)v36;
                  v33 = HIDWORD(v78);
                  v37 = v72.m128i_i64[0];
                  v38 = (unsigned int)v78 + 1LL;
                  if ( v38 > HIDWORD(v78) )
                  {
                    sub_2237220(&ptr, &v79, v38, 8);
                    v32 = (unsigned int)v78;
                    *((_QWORD *)ptr + (unsigned int)v78) = v37;
                  }
                  else
                  {
                    v32 = (__int64)ptr;
                    *((_QWORD *)ptr + (unsigned int)v78) = v72.m128i_i64[0];
                  }
                  v39 = (unsigned int)(v78 + 1);
                  LODWORD(v78) = v78 + 1;
                  if ( v34 == i )
                    break;
                  v31 = i;
                }
                v40 = ptr;
                v41 = (void **)((char *)ptr + 8 * v39);
              }
              v42 = sub_15AB9E0((__int64)&v74, *(_QWORD **)(*a1 + 248), v32, v33, v23, v24);
              v44 = sub_C98860(*(_QWORD **)(*a1 + 248), 0, v42, v43, &v70, 1, v40, (__int64)v41, 0, 0);
              v45 = (unsigned int)v86;
              v46 = (unsigned int)v86 + 1LL;
              if ( v46 > HIDWORD(v86) )
              {
                v66 = v44;
                sub_2237220(&v85, v87, v46, 8);
                v45 = (unsigned int)v86;
                v44 = v66;
              }
              *((_QWORD *)v85 + v45) = v44;
              LODWORD(v86) = v86 + 1;
              if ( ptr != &v79 )
                free(ptr);
            }
            else
            {
              v57 = (unsigned int)v86;
              v58 = (unsigned int)v86 + 1LL;
              if ( v58 > HIDWORD(v86) )
              {
                sub_2237220(&v85, v87, v58, 8);
                v57 = (unsigned int)v86;
              }
              *((_QWORD *)v85 + v57) = 0;
              LODWORD(v86) = v86 + 1;
            }
            ++v28;
          }
          while ( v60 != v28 );
          v7 = v63;
        }
        v64 = v85;
        v47 = v7[37];
        v61 = v82;
        ptr = (void *)v74;
        v62 = (unsigned int)v83;
        v48 = (unsigned int)v86;
        v65 = v47;
        v49 = v7[36];
        v50 = *((_BYTE *)v7 + 140);
        v51 = v7[34];
        sub_E90750((__int64)&v78, (__int64 *)&v74 + 1);
        v52 = (__m128)_mm_load_si128(&v76);
        v53 = *(__int64 **)(*a1 + 760);
        v54 = _mm_load_si128(&v70);
        v73 = v71;
        v81 = v52;
        v72 = v54;
        v55 = sub_1B64ED0(
                v53,
                v59,
                (__int64)(v7 + 20),
                7,
                (__int64)(v7 + 27),
                0.0,
                v52,
                v54,
                7,
                (__int64)&ptr,
                (__int64)&v72,
                v51,
                v50,
                v49,
                v65,
                (__int64)v61,
                v62,
                v69,
                0,
                (__int64)v64,
                (_DWORD *)v48);
        if ( v80 )
          free(v79);
        goto LABEL_36;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v18 = sub_1D11200(a1, *v17, (__m128)0LL, a4, v15, v14, a7);
      if ( v18 == 1 )
        break;
      v14 = (unsigned int)v83;
      v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
      v15 = (unsigned int)v83 + 1LL;
      if ( v15 <= HIDWORD(v83) )
      {
        ++v17;
        *((_QWORD *)v82 + (unsigned int)v83) = v19;
        LODWORD(v83) = v83 + 1;
        if ( (unsigned __int16 **)v16 == v17 )
          goto LABEL_12;
      }
      else
      {
        ++v17;
        sub_2237220(&v82, v84, v15, 8);
        v15 = (unsigned int)v83;
        *((_QWORD *)v82 + (unsigned int)v83) = v19;
        LODWORD(v83) = v83 + 1;
        if ( (unsigned __int16 **)v16 == v17 )
          goto LABEL_12;
      }
    }
  }
  v55 = 0;
LABEL_36:
  if ( v85 != v87 )
    free(v85);
  if ( HIDWORD(v75[1]) )
    free(v75[0]);
LABEL_40:
  if ( v82 != v84 )
    free(v82);
  return v55;
}
