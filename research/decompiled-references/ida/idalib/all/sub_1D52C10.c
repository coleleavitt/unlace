unsigned __int64 __fastcall sub_1D52C10(
        __int64 *a1,
        const __m128i *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rbp
  unsigned __int16 **v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __m128 v13; // xmm1
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  _BYTE *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int16 *v20; // rdx
  unsigned __int16 *v21; // rsi
  unsigned __int16 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int16 *i; // rbp
  unsigned int v26; // ecx
  __int64 *v27; // rsi
  __int64 v28; // r8
  unsigned __int64 v29; // r15
  _QWORD *v30; // rdx
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  _BYTE *v38; // r12
  char *v39; // rbp
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // r11
  unsigned __int64 v46; // rbx
  int v48; // esi
  int v49; // r8d
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // [rsp+0h] [rbp-2A8h]
  unsigned __int16 *v53; // [rsp+10h] [rbp-298h]
  unsigned __int64 v54; // [rsp+10h] [rbp-298h]
  unsigned __int16 **v55; // [rsp+20h] [rbp-288h]
  unsigned __int16 **v56; // [rsp+38h] [rbp-270h]
  unsigned __int64 v58; // [rsp+48h] [rbp-260h]
  __m128i v59; // [rsp+70h] [rbp-238h] BYREF
  __int64 v60; // [rsp+80h] [rbp-228h]
  unsigned __int64 v61; // [rsp+98h] [rbp-210h]
  __m128 v62; // [rsp+A0h] [rbp-208h] BYREF
  __m128i v63; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-1E8h]
  __int128 v65; // [rsp+D0h] [rbp-1D8h] BYREF
  void *v66[2]; // [rsp+E0h] [rbp-1C8h]
  __int128 v67; // [rsp+F0h] [rbp-1B8h]
  void *ptr; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v69; // [rsp+108h] [rbp-1A0h]
  _BYTE v70[64]; // [rsp+110h] [rbp-198h] BYREF
  void *v71; // [rsp+150h] [rbp-158h] BYREF
  __int64 v72; // [rsp+158h] [rbp-150h]
  _BYTE v73[128]; // [rsp+160h] [rbp-148h] BYREF
  void *v74; // [rsp+1E0h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+1E8h] [rbp-C0h]
  _BYTE v76[184]; // [rsp+1F0h] [rbp-B8h] BYREF

  v7 = a2[1].m128i_u32[0];
  v71 = v73;
  v72 = 0x1000000000LL;
  if ( v7 > 0x10 )
  {
    sub_2237220(&v71, v73, v7, 8);
    v7 = a2[1].m128i_u32[0];
  }
  v8 = (__int64)&a2[6].m128i_i64[v7 + 1];
  v9 = (unsigned __int16 **)&a2[6].m128i_i64[1];
  if ( (unsigned __int64 *)v8 == &a2[6].m128i_u64[1] )
  {
LABEL_9:
    v65 = 0;
    v13 = (__m128)_mm_loadu_si128(a2 + 4);
    *(_OWORD *)v66 = 0;
    v67 = 0;
    sub_15AB8B0((__int64)&v65, v13.m128_i64[0], v13.m128_i64[1]);
    v16 = a2[6].m128i_i64[0];
    v63 = _mm_loadu_si128(a2 + 5);
    v64 = v16;
    if ( v63.m128i_i64[0]
      && (sub_1D52310(&v59, a1, &v63, (__m128)0LL, v13), v63 = _mm_loadu_si128(&v59), v64 = v60, !v59.m128i_i64[0]) )
    {
      v46 = 0;
    }
    else
    {
      v75 = 0x1000000000LL;
      v17 = v76;
      v18 = a2[1].m128i_u32[0];
      v74 = v76;
      v19 = (__int64)&a2[2 * v18 + 6].m128i_i64[1];
      v56 = (unsigned __int16 **)(v19 + 8 * v18);
      if ( (unsigned __int16 **)v19 == v56 )
      {
        v45 = 0;
      }
      else
      {
        v55 = (unsigned __int16 **)&a2[2 * v18 + 6].m128i_i64[1];
        do
        {
          v20 = *v55;
          if ( *v55 )
          {
            v21 = v20 + 32;
            ptr = v70;
            v69 = 0x800000000LL;
            v24 = *v20;
            v22 = v20 + 40;
            v23 = *((unsigned int *)v20 + 1);
            LOWORD(v24) = v24 & 0x1FF;
            if ( (_WORD)v24 == 24 )
              v22 = v21;
            v53 = &v22[4 * v23];
            if ( v22 != v53 )
            {
              for ( i = v22; ; v22 = i )
              {
                v36 = a1[1];
                v32 = *(_QWORD *)v22 & 0xFFFFFFFFFFFFFFF8LL;
                v31 = v32;
                v37 = *((unsigned int *)a1 + 6);
                if ( (_DWORD)v37 )
                {
                  v26 = (v37 - 1) & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
                  v27 = (__int64 *)(v36 + 16LL * v26);
                  v28 = *v27;
                  if ( v32 == *v27 )
                    goto LABEL_19;
                  v48 = 1;
                  if ( v28 != -4096 )
                    break;
                }
LABEL_27:
                sub_AEAAD0(
                  &v62,
                  (_QWORD *)(v36 + 16LL * (unsigned int)v37),
                  (_QWORD *)(v36 + 16LL * (unsigned int)v37),
                  (__int64)(a1 + 1),
                  1);
                v29 = v62.m128_u64[0];
LABEL_20:
                v30 = (_QWORD *)(a1[1] + 16LL * *((unsigned int *)a1 + 6));
                sub_AEAAD0(&v62, v30, v30, (__int64)(a1 + 1), 1);
                if ( v29 != v62.m128_u64[0] )
                {
                  v31 = *(_QWORD *)(v29 + 8);
                  v32 = v31;
                }
                v33 = v32 | (*(_BYTE *)(v31 + 29) >> 5) & 3;
                v61 = v33;
                v24 = (unsigned int)v69;
                v34 = (unsigned int)v69 + 1LL;
                if ( v34 > HIDWORD(v69) )
                {
                  v58 = v33;
                  sub_2237220(&ptr, v70, v34, 8);
                  v24 = (unsigned int)v69;
                  v33 = v58;
                }
                v23 = (__int64)ptr;
                *((_QWORD *)ptr + v24) = v33;
                i += 4;
                v35 = (unsigned int)(v69 + 1);
                LODWORD(v69) = v69 + 1;
                if ( v53 == i )
                {
                  v38 = ptr;
                  v39 = (char *)ptr + 8 * v35;
                  goto LABEL_29;
                }
              }
              while ( 1 )
              {
                v49 = v48 + 1;
                v26 = (v37 - 1) & (v48 + v26);
                v27 = (__int64 *)(v36 + 16LL * v26);
                if ( v32 == *v27 )
                  break;
                if ( *v27 == -4096 )
                  goto LABEL_27;
                v48 = v49;
              }
LABEL_19:
              sub_AEAAD0(&v62, v27, (_QWORD *)(16 * v37 + v36), (__int64)(a1 + 1), 1);
              v29 = v62.m128_u64[0];
              goto LABEL_20;
            }
            v38 = v70;
            v39 = v70;
LABEL_29:
            v40 = sub_15AB9E0((__int64)&v65, *(_QWORD **)(*a1 + 248), v23, v24, v14, v15);
            v42 = sub_C98860(*(_QWORD **)(*a1 + 248), 0, v40, v41, &v63, 1, v38, (__int64)v39, 0, 0);
            v43 = (unsigned int)v75;
            v44 = (unsigned int)v75 + 1LL;
            if ( v44 > HIDWORD(v75) )
            {
              v54 = v42;
              sub_2237220(&v74, v76, v44, 8);
              v43 = (unsigned int)v75;
              v42 = v54;
            }
            *((_QWORD *)v74 + v43) = v42;
            LODWORD(v75) = v75 + 1;
            if ( ptr != v70 )
              free(ptr);
          }
          else
          {
            v50 = (unsigned int)v75;
            v51 = (unsigned int)v75 + 1LL;
            if ( v51 > HIDWORD(v75) )
            {
              sub_2237220(&v74, v76, v51, 8);
              v50 = (unsigned int)v75;
            }
            *((_QWORD *)v74 + v50) = 0;
            LODWORD(v75) = v75 + 1;
          }
          ++v55;
        }
        while ( v56 != v55 );
        v17 = v74;
        v45 = (unsigned int)v75;
      }
      v46 = sub_1B78AF0(
              *(__int64 **)(*a1 + 760),
              (int)v71,
              v72,
              a2[3].m128i_i64[0],
              a2->m128i_i32[0],
              a2->m128i_u32[3],
              (__m128)0LL,
              v13,
              a2[3].m128i_i32[2],
              a2[3].m128i_i32[3],
              a2->m128i_i32[1],
              (__int64)&v65,
              &v63,
              (__int64)v17,
              v45);
      if ( v74 != v76 )
        free(v74);
    }
    if ( HIDWORD(v66[1]) )
      free(v66[0]);
  }
  else
  {
    while ( 1 )
    {
      v10 = sub_1D434A0(a1, *v9, a3, a4, v7, a6, a7);
      if ( v10 == 1 )
        break;
      a6 = (unsigned int)v72;
      v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
      v12 = (unsigned int)v72 + 1LL;
      if ( v12 > HIDWORD(v72) )
      {
        v52 = v11;
        sub_2237220(&v71, v73, v12, 8);
        a6 = (unsigned int)v72;
        v11 = v52;
      }
      v7 = (unsigned __int64)v71;
      ++v9;
      *((_QWORD *)v71 + a6) = v11;
      LODWORD(v72) = v72 + 1;
      if ( (unsigned __int16 **)v8 == v9 )
        goto LABEL_9;
    }
    v46 = 0;
  }
  if ( v71 != v73 )
    free(v71);
  return v46;
}
