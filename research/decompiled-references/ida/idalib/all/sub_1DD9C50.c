unsigned __int64 __fastcall sub_1DD9C50(
        __int64 *a1,
        const __m128i *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 *v10; // r13
  unsigned __int16 *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __m128 v14; // xmm1
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  _BYTE *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r14
  unsigned __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 *v28; // r12
  __int64 *i; // r15
  __int64 v30; // r14
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  _BYTE *v39; // r12
  char *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // r11
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // [rsp+0h] [rbp-288h]
  unsigned __int64 *v51; // [rsp+0h] [rbp-288h]
  unsigned __int64 *v52; // [rsp+20h] [rbp-268h]
  unsigned __int64 v54; // [rsp+30h] [rbp-258h]
  unsigned __int64 v55; // [rsp+30h] [rbp-258h]
  __m128i v56; // [rsp+60h] [rbp-228h] BYREF
  __int64 v57; // [rsp+70h] [rbp-218h]
  unsigned __int64 v58; // [rsp+88h] [rbp-200h]
  __m128i v59; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-1E8h]
  __int128 v61; // [rsp+B0h] [rbp-1D8h] BYREF
  void *v62[2]; // [rsp+C0h] [rbp-1C8h]
  __int128 v63; // [rsp+D0h] [rbp-1B8h]
  void *ptr; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v65; // [rsp+E8h] [rbp-1A0h]
  _BYTE v66[64]; // [rsp+F0h] [rbp-198h] BYREF
  void *v67; // [rsp+130h] [rbp-158h] BYREF
  __int64 v68; // [rsp+138h] [rbp-150h]
  _BYTE v69[128]; // [rsp+140h] [rbp-148h] BYREF
  void *v70; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v71; // [rsp+1C8h] [rbp-C0h]
  _BYTE v72[184]; // [rsp+1D0h] [rbp-B8h] BYREF

  v8 = a2[1].m128i_u32[0];
  v67 = v69;
  v68 = 0x1000000000LL;
  if ( v8 > 0x10 )
  {
    sub_2237220(&v67, v69, v8, 8);
    v8 = a2[1].m128i_u32[0];
  }
  v9 = (__int64)&a2[6].m128i_i64[v8 + 1];
  v10 = &a2[6].m128i_u64[1];
  if ( (unsigned __int64 *)v9 == &a2[6].m128i_u64[1] )
  {
LABEL_9:
    v61 = 0;
    v14 = (__m128)_mm_loadu_si128(a2 + 4);
    *(_OWORD *)v62 = 0;
    v63 = 0;
    v15 = v14.m128_u64[0];
    sub_15AB8B0((__int64)&v61, v14.m128_i64[0], v14.m128_i64[1]);
    v19 = a2[6].m128i_i64[0];
    v59 = _mm_loadu_si128(a2 + 5);
    v60 = v19;
    if ( !v59.m128i_i64[0]
      || (v15 = (__int64)a1,
          v20 = 0,
          sub_1DD8C40(&v56, (__int64)a1, &v59, (__m128)0LL, v14, v16, v17, v18),
          v59 = _mm_loadu_si128(&v56),
          v60 = v57,
          v56.m128i_i64[0]) )
    {
      v71 = 0x1000000000LL;
      v21 = v72;
      v22 = a2[1].m128i_u32[0];
      v70 = v72;
      v23 = (__int64)&a2[2 * v22 + 6].m128i_i64[1];
      v52 = (unsigned __int64 *)(v23 + 8 * v22);
      if ( (unsigned __int64 *)v23 == v52 )
      {
        v46 = 0;
      }
      else
      {
        v51 = &a2[2 * v22 + 6].m128i_u64[1];
        do
        {
          v24 = *v51;
          if ( *v51 )
          {
            v25 = v24 + 64;
            ptr = v66;
            v65 = 0x800000000LL;
            v26 = (__int64 *)(v24 + 80);
            v27 = *(unsigned int *)(v24 + 4);
            if ( (*(_WORD *)v24 & 0x1FF) == 0x18 )
              v26 = (__int64 *)(v24 + 64);
            v28 = &v26[v27];
            if ( v26 == v28 )
            {
              v39 = v66;
              v40 = v66;
            }
            else
            {
              for ( i = v26 + 1; ; ++i )
              {
                v30 = *v26;
                v31 = sub_C00A40(v24, v15, v27, v25, v17);
                v35 = sub_1DD8310((__int64)a1, v31, v30 & 0xFFFFFFFFFFFFFFF8LL, v32, v33, v34, (__m128)0LL, v14);
                v36 = (*(_BYTE *)(v35 + 29) >> 5) & 3 | v35;
                v58 = v36;
                v25 = (unsigned int)v65;
                v15 = HIDWORD(v65);
                v37 = (unsigned int)v65 + 1LL;
                if ( v37 > HIDWORD(v65) )
                {
                  v15 = (__int64)v66;
                  v54 = v36;
                  sub_2237220(&ptr, v66, v37, 8);
                  v25 = (unsigned int)v65;
                  v36 = v54;
                }
                v27 = (__int64)ptr;
                *((_QWORD *)ptr + v25) = v36;
                v38 = (unsigned int)(v65 + 1);
                LODWORD(v65) = v65 + 1;
                if ( v28 == i )
                  break;
                v26 = i;
              }
              v39 = ptr;
              v40 = (char *)ptr + 8 * v38;
            }
            v41 = sub_15AB9E0((__int64)&v61, *(_QWORD **)(*a1 + 248), v27, v25, v17, v18);
            v43 = sub_C98860(*(_QWORD **)(*a1 + 248), 0, v41, v42, &v59, 1, v39, (__int64)v40, 0, 0);
            v44 = (unsigned int)v71;
            v15 = HIDWORD(v71);
            v45 = (unsigned int)v71 + 1LL;
            if ( v45 > HIDWORD(v71) )
            {
              v15 = (__int64)v72;
              v55 = v43;
              sub_2237220(&v70, v72, v45, 8);
              v44 = (unsigned int)v71;
              v43 = v55;
            }
            *((_QWORD *)v70 + v44) = v43;
            LODWORD(v71) = v71 + 1;
            if ( ptr != v66 )
              free(ptr);
          }
          else
          {
            v48 = (unsigned int)v71;
            v49 = (unsigned int)v71 + 1LL;
            if ( v49 > HIDWORD(v71) )
            {
              v15 = (__int64)v72;
              sub_2237220(&v70, v72, v49, 8);
              v48 = (unsigned int)v71;
            }
            *((_QWORD *)v70 + v48) = 0;
            LODWORD(v71) = v71 + 1;
          }
          ++v51;
        }
        while ( v52 != v51 );
        v21 = v70;
        v46 = (unsigned int)v71;
      }
      v20 = sub_1B78AF0(
              *(__int64 **)(*a1 + 760),
              (int)v67,
              v68,
              a2[3].m128i_i64[0],
              a2->m128i_i32[0],
              a2->m128i_u32[3],
              (__m128)0LL,
              v14,
              a2[3].m128i_i32[2],
              a2[3].m128i_i32[3],
              a2->m128i_i32[1],
              (__int64)&v61,
              &v59,
              (__int64)v21,
              v46);
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
      v11 = sub_1DC71F0(a1, *v10, v8, a6, a7, a8, a3, a4);
      if ( v11 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      a6 = (unsigned int)v68;
      v12 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL;
      v13 = (unsigned int)v68 + 1LL;
      if ( v13 > HIDWORD(v68) )
      {
        v50 = v12;
        sub_2237220(&v67, v69, v13, 8);
        a6 = (unsigned int)v68;
        v12 = v50;
      }
      v8 = (unsigned __int64)v67;
      ++v10;
      *((_QWORD *)v67 + a6) = v12;
      LODWORD(v68) = v68 + 1;
      if ( (unsigned __int64 *)v9 == v10 )
        goto LABEL_9;
    }
    v20 = 0;
  }
  if ( v67 != v69 )
    free(v67);
  return v20;
}
