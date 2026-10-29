__int64 __fastcall sub_176B820(__int64 *a1, const __m128i *a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rbp
  unsigned __int16 **v4; // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __m128i v9; // xmm1
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  _BYTE *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int16 *v16; // rdx
  unsigned __int16 *v17; // rsi
  unsigned __int16 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int16 *i; // rbp
  unsigned int v22; // ecx
  __int64 *v23; // rsi
  __int64 v24; // r8
  unsigned __int64 v25; // r15
  _QWORD *v26; // rdx
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  _BYTE *v34; // r12
  char *v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // r11
  __int64 v42; // rbx
  int v44; // esi
  int v45; // r8d
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // [rsp+0h] [rbp-2A8h]
  unsigned __int16 *v49; // [rsp+10h] [rbp-298h]
  unsigned __int64 v50; // [rsp+10h] [rbp-298h]
  unsigned __int16 **v51; // [rsp+20h] [rbp-288h]
  unsigned __int16 **v52; // [rsp+38h] [rbp-270h]
  unsigned __int64 v54; // [rsp+48h] [rbp-260h]
  __m128i v55; // [rsp+70h] [rbp-238h] BYREF
  __int64 v56; // [rsp+80h] [rbp-228h]
  unsigned __int64 v57; // [rsp+98h] [rbp-210h]
  __m128 v58; // [rsp+A0h] [rbp-208h] BYREF
  __m128i v59; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-1E8h]
  __int128 v61; // [rsp+D0h] [rbp-1D8h] BYREF
  void *v62[2]; // [rsp+E0h] [rbp-1C8h]
  __int128 v63; // [rsp+F0h] [rbp-1B8h]
  void *ptr; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v65; // [rsp+108h] [rbp-1A0h]
  _BYTE v66[64]; // [rsp+110h] [rbp-198h] BYREF
  void *v67; // [rsp+150h] [rbp-158h] BYREF
  __int64 v68; // [rsp+158h] [rbp-150h]
  _BYTE v69[128]; // [rsp+160h] [rbp-148h] BYREF
  void *v70; // [rsp+1E0h] [rbp-C8h] BYREF
  __int64 v71; // [rsp+1E8h] [rbp-C0h]
  _BYTE v72[184]; // [rsp+1F0h] [rbp-B8h] BYREF

  v2 = a2[1].m128i_u32[0];
  v67 = v69;
  v68 = 0x1000000000LL;
  if ( v2 > 0x10 )
  {
    sub_2237220(&v67, v69, v2, 8);
    v2 = a2[1].m128i_u32[0];
  }
  v3 = (__int64)&a2[6].m128i_i64[v2 + 1];
  v4 = (unsigned __int16 **)&a2[6].m128i_i64[1];
  if ( (unsigned __int64 *)v3 == &a2[6].m128i_u64[1] )
  {
LABEL_9:
    v61 = 0;
    v9 = _mm_loadu_si128(a2 + 4);
    *(_OWORD *)v62 = 0;
    v63 = 0;
    sub_15AB8B0((__int64)&v61, v9.m128i_i64[0], v9.m128i_i64[1]);
    v12 = a2[6].m128i_i64[0];
    v59 = _mm_loadu_si128(a2 + 5);
    v60 = v12;
    if ( v59.m128i_i64[0]
      && (sub_176AF20(&v55, a1, &v59, (__m128)0LL), v59 = _mm_loadu_si128(&v55), v60 = v56, !v55.m128i_i64[0]) )
    {
      v42 = 0;
    }
    else
    {
      v71 = 0x1000000000LL;
      v13 = v72;
      v14 = a2[1].m128i_u32[0];
      v70 = v72;
      v15 = (__int64)&a2[2 * v14 + 6].m128i_i64[1];
      v52 = (unsigned __int16 **)(v15 + 8 * v14);
      if ( (unsigned __int16 **)v15 == v52 )
      {
        v41 = 0;
      }
      else
      {
        v51 = (unsigned __int16 **)&a2[2 * v14 + 6].m128i_i64[1];
        do
        {
          v16 = *v51;
          if ( *v51 )
          {
            v17 = v16 + 32;
            ptr = v66;
            v65 = 0x800000000LL;
            v20 = *v16;
            v18 = v16 + 40;
            v19 = *((unsigned int *)v16 + 1);
            LOWORD(v20) = v20 & 0x1FF;
            if ( (_WORD)v20 == 24 )
              v18 = v17;
            v49 = &v18[4 * v19];
            if ( v18 != v49 )
            {
              for ( i = v18; ; v18 = i )
              {
                v32 = a1[1];
                v28 = *(_QWORD *)v18 & 0xFFFFFFFFFFFFFFF8LL;
                v27 = v28;
                v33 = *((unsigned int *)a1 + 6);
                if ( (_DWORD)v33 )
                {
                  v22 = (v33 - 1) & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
                  v23 = (__int64 *)(v32 + 16LL * v22);
                  v24 = *v23;
                  if ( v28 == *v23 )
                    goto LABEL_19;
                  v44 = 1;
                  if ( v24 != -4096 )
                    break;
                }
LABEL_27:
                sub_AEAAD0(
                  &v58,
                  (_QWORD *)(v32 + 16LL * (unsigned int)v33),
                  (_QWORD *)(v32 + 16LL * (unsigned int)v33),
                  (__int64)(a1 + 1),
                  1);
                v25 = v58.m128_u64[0];
LABEL_20:
                v26 = (_QWORD *)(a1[1] + 16LL * *((unsigned int *)a1 + 6));
                sub_AEAAD0(&v58, v26, v26, (__int64)(a1 + 1), 1);
                if ( v25 != v58.m128_u64[0] )
                {
                  v27 = *(_QWORD *)(v25 + 8);
                  v28 = v27;
                }
                v29 = v28 | (*(_BYTE *)(v27 + 29) >> 5) & 3;
                v57 = v29;
                v20 = (unsigned int)v65;
                v30 = (unsigned int)v65 + 1LL;
                if ( v30 > HIDWORD(v65) )
                {
                  v54 = v29;
                  sub_2237220(&ptr, v66, v30, 8);
                  v20 = (unsigned int)v65;
                  v29 = v54;
                }
                v19 = (__int64)ptr;
                *((_QWORD *)ptr + v20) = v29;
                i += 4;
                v31 = (unsigned int)(v65 + 1);
                LODWORD(v65) = v65 + 1;
                if ( v49 == i )
                {
                  v34 = ptr;
                  v35 = (char *)ptr + 8 * v31;
                  goto LABEL_29;
                }
              }
              while ( 1 )
              {
                v45 = v44 + 1;
                v22 = (v33 - 1) & (v44 + v22);
                v23 = (__int64 *)(v32 + 16LL * v22);
                if ( v28 == *v23 )
                  break;
                if ( *v23 == -4096 )
                  goto LABEL_27;
                v44 = v45;
              }
LABEL_19:
              sub_AEAAD0(&v58, v23, (_QWORD *)(16 * v33 + v32), (__int64)(a1 + 1), 1);
              v25 = v58.m128_u64[0];
              goto LABEL_20;
            }
            v34 = v66;
            v35 = v66;
LABEL_29:
            v36 = sub_15AB9E0((__int64)&v61, *(_QWORD **)(*a1 + 248), v19, v20, v10, v11);
            v38 = sub_C98860(*(_QWORD **)(*a1 + 248), 0, v36, v37, &v59, 1, v34, (__int64)v35, 0, 0);
            v39 = (unsigned int)v71;
            v40 = (unsigned int)v71 + 1LL;
            if ( v40 > HIDWORD(v71) )
            {
              v50 = v38;
              sub_2237220(&v70, v72, v40, 8);
              v39 = (unsigned int)v71;
              v38 = v50;
            }
            *((_QWORD *)v70 + v39) = v38;
            LODWORD(v71) = v71 + 1;
            if ( ptr != v66 )
              free(ptr);
          }
          else
          {
            v46 = (unsigned int)v71;
            v47 = (unsigned int)v71 + 1LL;
            if ( v47 > HIDWORD(v71) )
            {
              sub_2237220(&v70, v72, v47, 8);
              v46 = (unsigned int)v71;
            }
            *((_QWORD *)v70 + v46) = 0;
            LODWORD(v71) = v71 + 1;
          }
          ++v51;
        }
        while ( v52 != v51 );
        v13 = v70;
        v41 = (unsigned int)v71;
      }
      v42 = sub_1B78AF0(
              *(_QWORD *)(*a1 + 760),
              v67,
              (unsigned int)v68,
              a2[3].m128i_i64[0],
              a2->m128i_u32[0],
              a2->m128i_u32[3],
              a2[3].m128i_u32[2],
              a2[3].m128i_u32[3],
              a2->m128i_u32[1],
              &v61,
              &v59,
              v13,
              v41);
      if ( v70 != v72 )
        free(v70);
    }
    if ( HIDWORD(v62[1]) )
      free(v62[0]);
  }
  else
  {
    while ( 1 )
    {
      v5 = sub_175B800(a1, *v4);
      if ( v5 == 1 )
        break;
      v6 = (unsigned int)v68;
      v7 = v5 & 0xFFFFFFFFFFFFFFFELL;
      v8 = (unsigned int)v68 + 1LL;
      if ( v8 > HIDWORD(v68) )
      {
        v48 = v7;
        sub_2237220(&v67, v69, v8, 8);
        v6 = (unsigned int)v68;
        v7 = v48;
      }
      ++v4;
      *((_QWORD *)v67 + v6) = v7;
      LODWORD(v68) = v68 + 1;
      if ( (unsigned __int16 **)v3 == v4 )
        goto LABEL_9;
    }
    v42 = 0;
  }
  if ( v67 != v69 )
    free(v67);
  return v42;
}
