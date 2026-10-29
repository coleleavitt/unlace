__int64 __fastcall sub_1D5BCA0(
        __int64 a1,
        unsigned int *a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int *v8; // rbx
  int v9; // edx
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rbp
  unsigned __int16 **v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm1
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int16 **v25; // r13
  unsigned __int16 *v26; // rdx
  unsigned __int16 *v27; // rsi
  unsigned __int16 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int16 *v31; // r12
  unsigned __int16 *i; // rbx
  unsigned int v33; // ecx
  __int64 *v34; // rsi
  __int64 v35; // r8
  unsigned __int64 v36; // r14
  _QWORD *v37; // rdx
  unsigned __int64 v38; // rbp
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // rbp
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // rdx
  int v46; // esi
  int v47; // r9d
  _BYTE *v48; // rbx
  char *v49; // rbp
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v59; // [rsp+8h] [rbp-2A0h]
  unsigned __int64 v60; // [rsp+8h] [rbp-2A0h]
  unsigned __int16 **v61; // [rsp+28h] [rbp-280h]
  unsigned __int16 **v62; // [rsp+48h] [rbp-260h]
  unsigned int *v63; // [rsp+58h] [rbp-250h]
  __m128i v64; // [rsp+60h] [rbp-248h] BYREF
  __int64 v65; // [rsp+70h] [rbp-238h]
  unsigned __int64 v66; // [rsp+88h] [rbp-220h]
  int v67[3]; // [rsp+94h] [rbp-214h] BYREF
  __m128 v68; // [rsp+A0h] [rbp-208h] BYREF
  __m128i v69; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v70; // [rsp+C0h] [rbp-1E8h]
  __int128 v71; // [rsp+D0h] [rbp-1D8h] BYREF
  void *v72[2]; // [rsp+E0h] [rbp-1C8h]
  __int128 v73; // [rsp+F0h] [rbp-1B8h]
  void *ptr; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v75; // [rsp+108h] [rbp-1A0h]
  _BYTE v76[64]; // [rsp+110h] [rbp-198h] BYREF
  void *v77; // [rsp+150h] [rbp-158h] BYREF
  __int64 v78; // [rsp+158h] [rbp-150h]
  _BYTE v79[128]; // [rsp+160h] [rbp-148h] BYREF
  void *v80; // [rsp+1E0h] [rbp-C8h] BYREF
  __int64 v81; // [rsp+1E8h] [rbp-C0h]
  _BYTE v82[184]; // [rsp+1F0h] [rbp-B8h] BYREF

  v8 = a2;
  v9 = a2[3];
  v10 = a2[1];
  v11 = *a2;
  v71 = 0;
  v67[1] = v9;
  v67[2] = v10;
  v80 = v82;
  v12 = a2[4];
  v67[0] = v11;
  v77 = v79;
  v78 = 0x1000000000LL;
  *(_OWORD *)v72 = 0;
  v73 = 0;
  v69.m128i_i64[0] = 0;
  v69.m128i_i32[2] = 0;
  v70 = 0;
  v81 = 0x1000000000LL;
  if ( v12 > 0x10 )
  {
    sub_2237220(&v77, v79, v12, 8);
    v12 = a2[4];
  }
  v13 = (__int64)&a2[2 * v12 + 26];
  v14 = (unsigned __int16 **)(a2 + 26);
  if ( (unsigned int *)v13 != a2 + 26 )
  {
    while ( 1 )
    {
      v15 = sub_1D434A0((__int64 *)a1, *v14, (__m128)0LL, a4, v12, v11, a8);
      if ( v15 == 1 )
        goto LABEL_53;
      v11 = (unsigned int)v78;
      v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
      v12 = (unsigned int)v78 + 1LL;
      if ( v12 <= HIDWORD(v78) )
      {
        ++v14;
        *((_QWORD *)v77 + (unsigned int)v78) = v16;
        LODWORD(v78) = v78 + 1;
        if ( (unsigned __int16 **)v13 == v14 )
          break;
      }
      else
      {
        ++v14;
        sub_2237220(&v77, v79, v12, 8);
        v12 = (unsigned int)v78;
        *((_QWORD *)v77 + (unsigned int)v78) = v16;
        LODWORD(v78) = v78 + 1;
        if ( (unsigned __int16 **)v13 == v14 )
          break;
      }
    }
  }
  v17 = *((_QWORD *)a2 + 5);
  v18 = 0;
  if ( v17 && (v17 = sub_1D55A30((__int64 **)a1, v17, *((void **)v8 + 6), 0, 0)) == 0
    || (sub_15AB8B0((__int64)&v71, v17, v18),
        v21 = (__m128)_mm_loadu_si128((const __m128i *)(v8 + 14)),
        v22 = *((_QWORD *)v8 + 9),
        v23 = *((_QWORD *)v8 + 7),
        v69 = (__m128i)v21,
        v70 = v22,
        v23)
    && (sub_1D52310(&v64, (_QWORD *)a1, &v69, (__m128)0LL, v21),
        a5 = _mm_loadu_si128(&v64),
        v69 = a5,
        v70 = v65,
        !v64.m128i_i64[0]) )
  {
LABEL_53:
    v55 = 0;
    goto LABEL_42;
  }
  v24 = 2LL * v8[4];
  v62 = (unsigned __int16 **)&v8[v24 + 26 + v24];
  if ( v62 != (unsigned __int16 **)&v8[v24 + 26] )
  {
    v63 = v8;
    v25 = (unsigned __int16 **)&v8[v24 + 26];
    do
    {
      v26 = *v25;
      if ( *v25 )
      {
        v27 = v26 + 32;
        ptr = v76;
        v75 = 0x800000000LL;
        v30 = *v26;
        v28 = v26 + 40;
        v29 = *((unsigned int *)v26 + 1);
        LOWORD(v30) = v30 & 0x1FF;
        if ( (_WORD)v30 == 24 )
          v28 = v27;
        v31 = &v28[4 * v29];
        if ( v28 != v31 )
        {
          v61 = v25;
          v59 = a1 + 8;
          for ( i = v28 + 4; ; i += 4 )
          {
            v43 = *(_QWORD *)v28;
            v44 = *(unsigned int *)(a1 + 24);
            v45 = *(_QWORD *)(a1 + 8);
            v38 = v43 & 0xFFFFFFFFFFFFFFF8LL;
            v39 = v38;
            if ( (_DWORD)v44 )
            {
              v33 = (v44 - 1) & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
              v34 = (__int64 *)(v45 + 16LL * v33);
              v35 = *v34;
              if ( v38 == *v34 )
                goto LABEL_21;
              v46 = 1;
              if ( v35 != -4096 )
                break;
            }
LABEL_29:
            sub_AEAAD0(
              &v68,
              (_QWORD *)(v45 + 16LL * (unsigned int)v44),
              (_QWORD *)(v45 + 16LL * (unsigned int)v44),
              v59,
              1);
            v36 = v68.m128_u64[0];
LABEL_22:
            v37 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
            sub_AEAAD0(&v68, v37, v37, v59, 1);
            if ( v68.m128_u64[0] != v36 )
            {
              v38 = *(_QWORD *)(v36 + 8);
              v39 = v38;
            }
            v40 = v39 | (*(_BYTE *)(v38 + 29) >> 5) & 3;
            v66 = v40;
            v30 = HIDWORD(v75);
            v41 = (unsigned int)v75 + 1LL;
            if ( v41 > HIDWORD(v75) )
            {
              sub_2237220(&ptr, v76, v41, 8);
              v29 = (unsigned int)v75;
            }
            else
            {
              v29 = (__int64)ptr;
            }
            *((_QWORD *)ptr + (unsigned int)v75) = v40;
            v42 = (unsigned int)(v75 + 1);
            LODWORD(v75) = v75 + 1;
            if ( v31 == i )
            {
              v48 = ptr;
              v25 = v61;
              v49 = (char *)ptr + 8 * v42;
              goto LABEL_35;
            }
            v28 = i;
          }
          while ( 1 )
          {
            v47 = v46 + 1;
            v33 = (v44 - 1) & (v46 + v33);
            v34 = (__int64 *)(v45 + 16LL * v33);
            if ( v38 == *v34 )
              break;
            if ( *v34 == -4096 )
              goto LABEL_29;
            v46 = v47;
          }
LABEL_21:
          sub_AEAAD0(&v68, v34, (_QWORD *)(16 * v44 + v45), v59, 1);
          v36 = v68.m128_u64[0];
          goto LABEL_22;
        }
        v48 = v76;
        v49 = v76;
LABEL_35:
        v50 = sub_15AB9E0((__int64)&v71, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v29, v30, v19, v20);
        v52 = sub_C98860(*(_QWORD **)(*(_QWORD *)a1 + 248LL), 0, v50, v51, &v69, 1, v48, (__int64)v49, 0, 0);
        v53 = (unsigned int)v81;
        v54 = (unsigned int)v81 + 1LL;
        if ( v54 > HIDWORD(v81) )
        {
          v60 = v52;
          sub_2237220(&v80, v82, v54, 8);
          v53 = (unsigned int)v81;
          v52 = v60;
        }
        *((_QWORD *)v80 + v53) = v52;
        LODWORD(v81) = v81 + 1;
        if ( ptr != v76 )
          free(ptr);
      }
      else
      {
        v57 = (unsigned int)v81;
        v58 = (unsigned int)v81 + 1LL;
        if ( v58 > HIDWORD(v81) )
        {
          sub_2237220(&v80, v82, v58, 8);
          v57 = (unsigned int)v81;
        }
        *((_QWORD *)v80 + v57) = 0;
        LODWORD(v81) = v81 + 1;
      }
      ++v25;
    }
    while ( v62 != v25 );
    v8 = v63;
  }
  v55 = sub_1B606F0(
          *(__int64 **)(*(_QWORD *)a1 + 760LL),
          (int *)v8 + 20,
          2,
          v8 + 22,
          (__m128)0LL,
          v21,
          a5,
          2,
          (__int64)&v71,
          (__int64)&v69,
          v8[24],
          (__int64)v77,
          (unsigned int)v78,
          v67,
          (__int64)v80,
          (_DWORD *)(unsigned int)v81);
LABEL_42:
  if ( v80 != v82 )
    free(v80);
  if ( HIDWORD(v72[1]) )
    free(v72[0]);
  if ( v77 != v79 )
    free(v77);
  return v55;
}
