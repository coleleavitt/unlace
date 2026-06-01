unsigned __int64 __fastcall sub_1BA14A0(
        __int64 a1,
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
  unsigned __int64 v14; // rdx
  __int64 v15; // rbp
  unsigned __int16 **v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int16 **v26; // r13
  unsigned __int16 *v27; // rdx
  unsigned __int16 *v28; // rsi
  unsigned __int16 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int16 *v32; // r12
  unsigned __int16 *i; // rbx
  unsigned int v34; // ecx
  __int64 *v35; // rsi
  __int64 v36; // r8
  unsigned __int64 v37; // r14
  _QWORD *v38; // rdx
  unsigned __int64 v39; // rbp
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // rbp
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rbp
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // esi
  int v48; // r9d
  void *v49; // rbx
  void **v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  void *v56; // r14
  int v57; // r13d
  unsigned __int8 v58; // r12
  unsigned int v59; // ebp
  __int64 v60; // r10
  __m128 v61; // xmm1
  __m128i v62; // xmm2
  __int64 *v63; // r10
  unsigned __int64 v64; // rbx
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  __int64 v68; // [rsp+8h] [rbp-2C0h]
  unsigned __int64 v69; // [rsp+8h] [rbp-2C0h]
  unsigned __int64 v70; // [rsp+8h] [rbp-2C0h]
  void *v71; // [rsp+18h] [rbp-2B0h]
  unsigned __int16 **v72; // [rsp+30h] [rbp-298h]
  unsigned __int64 v73; // [rsp+30h] [rbp-298h]
  _QWORD *v74; // [rsp+38h] [rbp-290h]
  unsigned __int16 **v75; // [rsp+50h] [rbp-278h]
  unsigned int *v76; // [rsp+60h] [rbp-268h]
  __m128i v77; // [rsp+70h] [rbp-258h] BYREF
  __int64 v78; // [rsp+80h] [rbp-248h]
  unsigned __int64 v79; // [rsp+98h] [rbp-230h]
  int v80[3]; // [rsp+A4h] [rbp-224h] BYREF
  __m128i v81; // [rsp+B0h] [rbp-218h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-208h]
  __m128 v83; // [rsp+D0h] [rbp-1F8h] BYREF
  __int64 v84; // [rsp+E0h] [rbp-1E8h]
  __int128 v85; // [rsp+F0h] [rbp-1D8h] BYREF
  void *v86[2]; // [rsp+100h] [rbp-1C8h]
  __m128i v87; // [rsp+110h] [rbp-1B8h] BYREF
  void *ptr; // [rsp+120h] [rbp-1A8h] BYREF
  __int64 v89; // [rsp+128h] [rbp-1A0h] BYREF
  void *v90; // [rsp+130h] [rbp-198h] BYREF
  int v91; // [rsp+13Ch] [rbp-18Ch]
  __m128 v92; // [rsp+140h] [rbp-188h]
  void *v93; // [rsp+170h] [rbp-158h] BYREF
  __int64 v94; // [rsp+178h] [rbp-150h]
  _BYTE v95[128]; // [rsp+180h] [rbp-148h] BYREF
  void *v96; // [rsp+200h] [rbp-C8h] BYREF
  __int64 v97; // [rsp+208h] [rbp-C0h]
  _BYTE v98[184]; // [rsp+210h] [rbp-B8h] BYREF

  v7 = a2;
  v8 = a2[3];
  v9 = *a2;
  v80[2] = a2[1];
  v93 = v95;
  v94 = 0x1000000000LL;
  v10 = a2[4];
  v80[0] = v9;
  v80[1] = v8;
  v11 = *(unsigned __int16 **)&a2[4 * v10 + 38];
  v74 = v11;
  if ( v11 )
  {
    v12 = sub_1B7CAD0((__int64 *)a1, v11, a3, a4, v8, v9, a7);
    if ( v12 == 1 )
    {
      v64 = 0;
      goto LABEL_50;
    }
    v74 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL);
    v13 = HIDWORD(v94);
  }
  else
  {
    v13 = 16;
  }
  v81.m128i_i64[0] = 0;
  v96 = v98;
  v14 = a2[4];
  v85 = 0;
  *(_OWORD *)v86 = 0;
  v87 = 0;
  v81.m128i_i32[2] = 0;
  v82 = 0;
  v97 = 0x1000000000LL;
  if ( v14 > v13 )
  {
    sub_2237220(&v93, v95, v14, 8);
    v14 = a2[4];
  }
  v15 = (__int64)&a2[2 * v14 + 38];
  v16 = (unsigned __int16 **)(a2 + 38);
  if ( (unsigned int *)v15 == a2 + 38 )
  {
LABEL_12:
    v19 = *((_QWORD *)a2 + 5);
    v20 = 0;
    if ( !v19 || (v19 = sub_1B979C0((__int64 *)a1, v19, *((void **)v7 + 6), 0, 0)) != 0 )
    {
      sub_15AB8B0((__int64)&v85, v19, v20);
      v23 = *((_QWORD *)v7 + 9);
      v24 = *((_QWORD *)v7 + 7);
      v81 = _mm_loadu_si128((const __m128i *)(v7 + 14));
      v82 = v23;
      if ( !v24
        || (sub_1B91AC0(&v77, (__int64 *)a1, &v81, (__m128)0LL, a4),
            v81 = _mm_loadu_si128(&v77),
            v82 = v78,
            v77.m128i_i64[0]) )
      {
        v25 = 2LL * v7[4];
        v75 = (unsigned __int16 **)&v7[v25 + 38 + v25];
        if ( v75 != (unsigned __int16 **)&v7[v25 + 38] )
        {
          v76 = v7;
          v26 = (unsigned __int16 **)&v7[v25 + 38];
          do
          {
            v27 = *v26;
            if ( *v26 )
            {
              v28 = v27 + 32;
              ptr = &v90;
              v89 = 0x800000000LL;
              v31 = *v27;
              v29 = v27 + 40;
              v30 = *((unsigned int *)v27 + 1);
              LOWORD(v31) = v31 & 0x1FF;
              if ( (_WORD)v31 == 24 )
                v29 = v28;
              v32 = &v29[4 * v30];
              if ( v29 != v32 )
              {
                v72 = v26;
                v68 = a1 + 8;
                for ( i = v29 + 4; ; i += 4 )
                {
                  v44 = *(_QWORD *)v29;
                  v45 = *(unsigned int *)(a1 + 24);
                  v46 = *(_QWORD *)(a1 + 8);
                  v39 = v44 & 0xFFFFFFFFFFFFFFF8LL;
                  v40 = v39;
                  if ( (_DWORD)v45 )
                  {
                    v34 = (v45 - 1) & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
                    v35 = (__int64 *)(v46 + 16LL * v34);
                    v36 = *v35;
                    if ( *v35 == v39 )
                      goto LABEL_24;
                    v47 = 1;
                    if ( v36 != -4096 )
                      break;
                  }
LABEL_32:
                  sub_AEAAD0(
                    &v83,
                    (_QWORD *)(v46 + 16LL * (unsigned int)v45),
                    (_QWORD *)(v46 + 16LL * (unsigned int)v45),
                    v68,
                    1);
                  v37 = v83.m128_u64[0];
LABEL_25:
                  v38 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
                  sub_AEAAD0(&v83, v38, v38, v68, 1);
                  if ( v83.m128_u64[0] != v37 )
                  {
                    v39 = *(_QWORD *)(v37 + 8);
                    v40 = v39;
                  }
                  v41 = v40 | (*(_BYTE *)(v39 + 29) >> 5) & 3;
                  v79 = v41;
                  v31 = HIDWORD(v89);
                  v42 = (unsigned int)v89 + 1LL;
                  if ( v42 > HIDWORD(v89) )
                  {
                    sub_2237220(&ptr, &v90, v42, 8);
                    v30 = (unsigned int)v89;
                  }
                  else
                  {
                    v30 = (__int64)ptr;
                  }
                  *((_QWORD *)ptr + (unsigned int)v89) = v41;
                  v43 = (unsigned int)(v89 + 1);
                  LODWORD(v89) = v89 + 1;
                  if ( v32 == i )
                  {
                    v49 = ptr;
                    v26 = v72;
                    v50 = (void **)((char *)ptr + 8 * v43);
                    goto LABEL_38;
                  }
                  v29 = i;
                }
                while ( 1 )
                {
                  v48 = v47 + 1;
                  v34 = (v45 - 1) & (v47 + v34);
                  v35 = (__int64 *)(v46 + 16LL * v34);
                  if ( v39 == *v35 )
                    break;
                  if ( *v35 == -4096 )
                    goto LABEL_32;
                  v47 = v48;
                }
LABEL_24:
                sub_AEAAD0(&v83, v35, (_QWORD *)(16 * v45 + v46), v68, 1);
                v37 = v83.m128_u64[0];
                goto LABEL_25;
              }
              v49 = &v90;
              v50 = &v90;
LABEL_38:
              v51 = sub_15AB9E0((__int64)&v85, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v30, v31, v21, v22);
              v53 = sub_C98860(*(_QWORD **)(*(_QWORD *)a1 + 248LL), 0, v51, v52, &v81, 1, v49, (__int64)v50, 0, 0);
              v54 = (unsigned int)v97;
              v55 = (unsigned int)v97 + 1LL;
              if ( v55 > HIDWORD(v97) )
              {
                v70 = v53;
                sub_2237220(&v96, v98, v55, 8);
                v54 = (unsigned int)v97;
                v53 = v70;
              }
              *((_QWORD *)v96 + v54) = v53;
              LODWORD(v97) = v97 + 1;
              if ( ptr != &v90 )
                free(ptr);
            }
            else
            {
              v66 = (unsigned int)v97;
              v67 = (unsigned int)v97 + 1LL;
              if ( v67 > HIDWORD(v97) )
              {
                sub_2237220(&v96, v98, v67, 8);
                v66 = (unsigned int)v97;
              }
              *((_QWORD *)v96 + v66) = 0;
              LODWORD(v97) = v97 + 1;
            }
            ++v26;
          }
          while ( v75 != v26 );
          v7 = v76;
        }
        v71 = v96;
        v69 = (unsigned int)v94;
        v56 = v93;
        ptr = (void *)v85;
        v73 = (unsigned int)v97;
        v57 = v7[36];
        v58 = *((_BYTE *)v7 + 140);
        v59 = v7[34];
        sub_E90750((__int64)&v89, (__int64 *)&v85 + 1);
        v60 = *(_QWORD *)a1;
        v61 = (__m128)_mm_load_si128(&v87);
        v84 = v82;
        v62 = _mm_load_si128(&v81);
        v63 = *(__int64 **)(v60 + 760);
        v92 = v61;
        v83 = (__m128)v62;
        v64 = sub_1B61E10(
                v63,
                v74,
                (__int64)(v7 + 20),
                7,
                (__int64)(v7 + 27),
                0.0,
                v61,
                v62,
                7,
                (__int64)&ptr,
                (__int64)&v83,
                v59,
                v58,
                v57,
                (__int64)v56,
                v69,
                v80,
                (__int64)v71,
                (_DWORD *)v73);
        if ( v91 )
          free(v90);
        goto LABEL_46;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v17 = sub_1B7CAD0((__int64 *)a1, *v16, (__m128)0LL, a4, v14, v9, a7);
      if ( v17 == 1 )
        break;
      v9 = (unsigned int)v94;
      v18 = v17 & 0xFFFFFFFFFFFFFFFELL;
      v14 = (unsigned int)v94 + 1LL;
      if ( v14 <= HIDWORD(v94) )
      {
        ++v16;
        *((_QWORD *)v93 + (unsigned int)v94) = v18;
        LODWORD(v94) = v94 + 1;
        if ( (unsigned __int16 **)v15 == v16 )
          goto LABEL_12;
      }
      else
      {
        ++v16;
        sub_2237220(&v93, v95, v14, 8);
        v14 = (unsigned int)v94;
        *((_QWORD *)v93 + (unsigned int)v94) = v18;
        LODWORD(v94) = v94 + 1;
        if ( (unsigned __int16 **)v15 == v16 )
          goto LABEL_12;
      }
    }
  }
  v64 = 0;
LABEL_46:
  if ( v96 != v98 )
    free(v96);
  if ( HIDWORD(v86[1]) )
    free(v86[0]);
LABEL_50:
  if ( v93 != v95 )
    free(v93);
  return v64;
}
