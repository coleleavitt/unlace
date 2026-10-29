unsigned __int64 __fastcall sub_1DF1310(
        __int64 *a1,
        unsigned int *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int *v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int16 *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r12
  unsigned __int64 *v18; // r14
  unsigned __int16 *v19; // rax
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r15
  unsigned __int64 *v29; // r12
  unsigned __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 *v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // r13
  __int64 *v35; // r15
  __int64 v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rax
  __int64 v42; // rbx
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  void *v45; // r13
  void **v46; // r15
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  int v52; // r9d
  unsigned __int64 v53; // r15
  int v54; // r14d
  unsigned __int8 v55; // r13
  unsigned int v56; // r12d
  __m128 v57; // xmm1
  __int64 *v58; // r11
  __m128i v59; // xmm2
  unsigned __int64 v60; // rbx
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // [rsp+20h] [rbp-288h]
  unsigned __int64 v65; // [rsp+28h] [rbp-280h]
  void *v66; // [rsp+28h] [rbp-280h]
  unsigned __int64 v67; // [rsp+28h] [rbp-280h]
  unsigned __int64 *v68; // [rsp+40h] [rbp-268h]
  unsigned __int64 v69; // [rsp+40h] [rbp-268h]
  void *v70; // [rsp+48h] [rbp-260h]
  unsigned int *v71; // [rsp+50h] [rbp-258h]
  int v72; // [rsp+50h] [rbp-258h]
  __m128i v73; // [rsp+60h] [rbp-248h] BYREF
  __int64 v74; // [rsp+70h] [rbp-238h]
  int v75[3]; // [rsp+84h] [rbp-224h] BYREF
  __m128i v76; // [rsp+90h] [rbp-218h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-208h]
  __m128i v78; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-1E8h]
  __int128 v80; // [rsp+D0h] [rbp-1D8h] BYREF
  void *v81[2]; // [rsp+E0h] [rbp-1C8h]
  __m128i v82; // [rsp+F0h] [rbp-1B8h] BYREF
  void *ptr; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v84; // [rsp+108h] [rbp-1A0h] BYREF
  void *v85; // [rsp+110h] [rbp-198h] BYREF
  int v86; // [rsp+11Ch] [rbp-18Ch]
  __m128 v87; // [rsp+120h] [rbp-188h]
  void *v88; // [rsp+150h] [rbp-158h] BYREF
  __int64 v89; // [rsp+158h] [rbp-150h]
  _BYTE v90[128]; // [rsp+160h] [rbp-148h] BYREF
  void *v91; // [rsp+1E0h] [rbp-C8h] BYREF
  __int64 v92; // [rsp+1E8h] [rbp-C0h]
  _BYTE v93[184]; // [rsp+1F0h] [rbp-B8h] BYREF

  v8 = a2;
  v9 = a2[3];
  v10 = *a2;
  v75[2] = a2[1];
  v88 = v90;
  v89 = 0x1000000000LL;
  v11 = a2[4];
  v75[0] = v10;
  v75[1] = v9;
  v12 = *(_QWORD *)&a2[4 * v11 + 38];
  v64 = v12;
  if ( v12 )
  {
    v13 = sub_1DC71F0(a1, v12, v9, v10, a7, a8, a3, a4);
    if ( v13 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      v60 = 0;
      goto LABEL_40;
    }
    v64 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL;
    v14 = HIDWORD(v89);
  }
  else
  {
    v14 = 16;
  }
  v15 = (unsigned __int64)&v91;
  v91 = v93;
  v16 = a2[4];
  v80 = 0;
  *(_OWORD *)v81 = 0;
  v82 = 0;
  v76.m128i_i64[0] = 0;
  v76.m128i_i32[2] = 0;
  v77 = 0;
  v92 = 0x1000000000LL;
  if ( v16 > v14 )
  {
    sub_2237220(&v88, v90, v16, 8);
    v16 = a2[4];
  }
  v17 = (__int64)&a2[2 * v16 + 38];
  v18 = (unsigned __int64 *)(a2 + 38);
  if ( (unsigned int *)v17 == a2 + 38 )
  {
LABEL_12:
    v21 = *((_QWORD *)a2 + 5);
    v22 = 0;
    if ( !v21 || (v21 = sub_1DD3CF0((__int64)a1, v21, *((void **)v8 + 6), 0, 0)) != 0 )
    {
      sub_15AB8B0((__int64)&v80, v21, v22);
      v26 = *((_QWORD *)v8 + 9);
      v27 = *((_QWORD *)v8 + 7);
      v76 = _mm_loadu_si128((const __m128i *)(v8 + 14));
      v77 = v26;
      if ( !v27
        || (v21 = (unsigned __int64)a1,
            sub_1DD8C40(&v73, (__int64)a1, &v76, (__m128)0LL, a4, v23, v24, v25),
            v76 = _mm_loadu_si128(&v73),
            v77 = v74,
            v73.m128i_i64[0]) )
      {
        v28 = 2LL * v8[4];
        v29 = (unsigned __int64 *)&v8[v28 + 38];
        v68 = (unsigned __int64 *)&v8[v28 + 38 + v28];
        if ( v68 != v29 )
        {
          v71 = v8;
          do
          {
            v30 = *v29;
            if ( *v29 )
            {
              v31 = v30 + 64;
              ptr = &v85;
              v84 = 0x800000000LL;
              v32 = (__int64 *)(v30 + 80);
              v33 = *(unsigned int *)(v30 + 4);
              if ( (*(_WORD *)v30 & 0x1FF) == 0x18 )
                v32 = (__int64 *)(v30 + 64);
              v34 = &v32[v33];
              if ( v32 == v34 )
              {
                v46 = &v85;
                v45 = &v85;
              }
              else
              {
                v35 = v32 + 1;
                v65 = v30;
                while ( 1 )
                {
                  v36 = *v32;
                  v37 = sub_C00A40(v65, v21, *v32, v31, v24);
                  v41 = sub_1DD8310((__int64)a1, v37, v36 & 0xFFFFFFFFFFFFFFF8LL, v38, v39, v40, (__m128)0LL, a4);
                  v21 = (unsigned __int64)&v78;
                  v78.m128i_i64[0] = (*(_BYTE *)(v41 + 29) >> 5) & 3 | v41;
                  v31 = HIDWORD(v84);
                  v42 = v78.m128i_i64[0];
                  v43 = (unsigned int)v84 + 1LL;
                  if ( v43 > HIDWORD(v84) )
                  {
                    v21 = (unsigned __int64)&v85;
                    sub_2237220(&ptr, &v85, v43, 8);
                    v33 = (unsigned int)v84;
                    *((_QWORD *)ptr + (unsigned int)v84) = v42;
                  }
                  else
                  {
                    v33 = (__int64)ptr;
                    *((_QWORD *)ptr + (unsigned int)v84) = v78.m128i_i64[0];
                  }
                  v44 = (unsigned int)(v84 + 1);
                  LODWORD(v84) = v84 + 1;
                  if ( v34 == v35 )
                    break;
                  v32 = v35++;
                }
                v45 = ptr;
                v46 = (void **)((char *)ptr + 8 * v44);
              }
              v47 = sub_15AB9E0((__int64)&v80, *(_QWORD **)(*a1 + 248), v33, v31, v24, v25);
              v49 = sub_C98860(*(_QWORD **)(*a1 + 248), 0, v47, v48, &v76, 1, v45, (__int64)v46, 0, 0);
              v50 = (unsigned int)v92;
              v21 = HIDWORD(v92);
              v51 = (unsigned int)v92 + 1LL;
              if ( v51 > HIDWORD(v92) )
              {
                v21 = (unsigned __int64)v93;
                v67 = v49;
                sub_2237220(&v91, v93, v51, 8);
                v50 = (unsigned int)v92;
                v49 = v67;
              }
              *((_QWORD *)v91 + v50) = v49;
              LODWORD(v92) = v92 + 1;
              if ( ptr != &v85 )
                free(ptr);
            }
            else
            {
              v62 = (unsigned int)v92;
              v63 = (unsigned int)v92 + 1LL;
              if ( v63 > HIDWORD(v92) )
              {
                v21 = (unsigned __int64)v93;
                sub_2237220(&v91, v93, v63, 8);
                v62 = (unsigned int)v92;
              }
              *((_QWORD *)v91 + v62) = 0;
              LODWORD(v92) = v92 + 1;
            }
            ++v29;
          }
          while ( v68 != v29 );
          v8 = v71;
        }
        v70 = v91;
        v52 = v8[37];
        v69 = (unsigned int)v89;
        ptr = (void *)v80;
        v66 = v88;
        v53 = (unsigned int)v92;
        v72 = v52;
        v54 = v8[36];
        v55 = *((_BYTE *)v8 + 140);
        v56 = v8[34];
        sub_E90750((__int64)&v84, (__int64 *)&v80 + 1);
        v57 = (__m128)_mm_load_si128(&v82);
        v58 = *(__int64 **)(*a1 + 760);
        v59 = _mm_load_si128(&v76);
        v79 = v77;
        v87 = v57;
        v78 = v59;
        v60 = sub_1B64ED0(
                v58,
                v64,
                (__int64)(v8 + 20),
                7,
                (__int64)(v8 + 27),
                0.0,
                v57,
                v59,
                7,
                (__int64)&ptr,
                (__int64)&v78,
                v56,
                v55,
                v54,
                v72,
                (__int64)v66,
                v69,
                v75,
                0,
                (__int64)v70,
                (_DWORD *)v53);
        if ( v86 )
          free(v85);
        goto LABEL_36;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v19 = sub_1DC71F0(a1, *v18, v16, v15, a7, a8, (__m128)0LL, a4);
      if ( v19 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      v15 = (unsigned int)v89;
      v20 = (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFFELL;
      v16 = (unsigned int)v89 + 1LL;
      if ( v16 <= HIDWORD(v89) )
      {
        ++v18;
        *((_QWORD *)v88 + (unsigned int)v89) = v20;
        LODWORD(v89) = v89 + 1;
        if ( (unsigned __int64 *)v17 == v18 )
          goto LABEL_12;
      }
      else
      {
        ++v18;
        sub_2237220(&v88, v90, v16, 8);
        v16 = (unsigned int)v89;
        *((_QWORD *)v88 + (unsigned int)v89) = v20;
        LODWORD(v89) = v89 + 1;
        if ( (unsigned __int64 *)v17 == v18 )
          goto LABEL_12;
      }
    }
  }
  v60 = 0;
LABEL_36:
  if ( v91 != v93 )
    free(v91);
  if ( HIDWORD(v81[1]) )
    free(v81[0]);
LABEL_40:
  if ( v88 != v90 )
    free(v88);
  return v60;
}
