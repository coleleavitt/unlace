unsigned __int64 __fastcall sub_1D206D0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  unsigned __int16 **v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  _BYTE *v23; // rax
  unsigned __int16 **v24; // r13
  unsigned __int16 *v25; // rdx
  unsigned __int16 *v26; // rsi
  unsigned __int16 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int16 *v30; // rbp
  unsigned __int16 *i; // r15
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  _BYTE *v36; // r12
  char *v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // r9
  unsigned __int64 v44; // rbx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // [rsp+10h] [rbp-268h]
  unsigned __int16 **v49; // [rsp+10h] [rbp-268h]
  unsigned __int64 v50; // [rsp+18h] [rbp-260h]
  unsigned __int64 v51; // [rsp+18h] [rbp-260h]
  __m128i v52; // [rsp+50h] [rbp-228h] BYREF
  __int64 v53; // [rsp+60h] [rbp-218h]
  unsigned __int64 v54; // [rsp+78h] [rbp-200h]
  __m128i v55; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v56; // [rsp+90h] [rbp-1E8h]
  __int128 v57; // [rsp+A0h] [rbp-1D8h] BYREF
  void *v58[2]; // [rsp+B0h] [rbp-1C8h]
  __int128 v59; // [rsp+C0h] [rbp-1B8h]
  void *ptr; // [rsp+D0h] [rbp-1A8h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-1A0h]
  _BYTE v62[64]; // [rsp+E0h] [rbp-198h] BYREF
  void *v63; // [rsp+120h] [rbp-158h] BYREF
  __int64 v64; // [rsp+128h] [rbp-150h]
  _BYTE v65[128]; // [rsp+130h] [rbp-148h] BYREF
  void *v66; // [rsp+1B0h] [rbp-C8h] BYREF
  __int64 v67; // [rsp+1B8h] [rbp-C0h]
  _BYTE v68[184]; // [rsp+1C0h] [rbp-B8h] BYREF

  v8 = *(unsigned int *)(a2 + 16);
  v63 = v65;
  v64 = 0x1000000000LL;
  if ( v8 > 0x10 )
  {
    sub_2237220(&v63, v65, v8, 8);
    v8 = *(unsigned int *)(a2 + 16);
  }
  v9 = a2 + 8 * v8 + 96;
  v10 = (unsigned __int16 **)(a2 + 96);
  if ( v9 == a2 + 96 )
  {
LABEL_9:
    v14 = *(_QWORD *)(a2 + 64);
    v15 = *(_QWORD *)(a2 + 56);
    v57 = 0;
    *(_OWORD *)v58 = 0;
    v59 = 0;
    sub_15AB8B0((__int64)&v57, v15, v14);
    v19 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 72));
    v20 = *(_QWORD *)(a2 + 88);
    v21 = *(_QWORD *)(a2 + 72);
    v55 = (__m128i)v19;
    v56 = v20;
    if ( v21
      && (sub_1D204A0(&v52, a1, &v55, (__m128)0LL, v19, v16, v17, v18),
          v55 = _mm_loadu_si128(&v52),
          v56 = v53,
          !v52.m128i_i64[0]) )
    {
      v44 = 0;
    }
    else
    {
      v22 = *(unsigned int *)(a2 + 16);
      v23 = v68;
      v67 = 0x1000000000LL;
      v66 = v68;
      v24 = (unsigned __int16 **)(a2 + 32 * v22 + 96);
      v49 = &v24[v22];
      if ( v24 == v49 )
      {
        v43 = 0;
      }
      else
      {
        do
        {
          v25 = *v24;
          if ( *v24 )
          {
            v26 = v25 + 32;
            ptr = v62;
            v61 = 0x800000000LL;
            v29 = *v25;
            v27 = v25 + 40;
            v28 = *((unsigned int *)v25 + 1);
            LOWORD(v29) = v29 & 0x1FF;
            if ( (_WORD)v29 == 24 )
              v27 = v26;
            v30 = &v27[4 * v28];
            if ( v27 == v30 )
            {
              v37 = v62;
              v36 = v62;
            }
            else
            {
              for ( i = v27 + 4; ; i += 4 )
              {
                v32 = sub_1D1B120(
                        (__int64)a1,
                        *(_QWORD *)v27 & 0xFFFFFFFFFFFFFFF8LL,
                        (__m128)0LL,
                        v19,
                        v28,
                        v29,
                        v17,
                        v18);
                v33 = (*(_BYTE *)(v32 + 29) >> 5) & 3 | (unsigned __int64)v32;
                v54 = v33;
                v29 = (unsigned int)v61;
                v34 = (unsigned int)v61 + 1LL;
                if ( v34 > HIDWORD(v61) )
                {
                  v50 = v33;
                  sub_2237220(&ptr, v62, v34, 8);
                  v29 = (unsigned int)v61;
                  v33 = v50;
                }
                v28 = (__int64)ptr;
                *((_QWORD *)ptr + v29) = v33;
                v35 = (unsigned int)(v61 + 1);
                LODWORD(v61) = v61 + 1;
                if ( v30 == i )
                  break;
                v27 = i;
              }
              v36 = ptr;
              v37 = (char *)ptr + 8 * v35;
            }
            v38 = sub_15AB9E0((__int64)&v57, *(_QWORD **)(*a1 + 248), v28, v29, v17, v18);
            v40 = sub_C98860(*(_QWORD **)(*a1 + 248), 0, v38, v39, &v55, 1, v36, (__int64)v37, 0, 0);
            v41 = (unsigned int)v67;
            v42 = (unsigned int)v67 + 1LL;
            if ( v42 > HIDWORD(v67) )
            {
              v51 = v40;
              sub_2237220(&v66, v68, v42, 8);
              v41 = (unsigned int)v67;
              v40 = v51;
            }
            *((_QWORD *)v66 + v41) = v40;
            LODWORD(v67) = v67 + 1;
            if ( ptr != v62 )
              free(ptr);
          }
          else
          {
            v46 = (unsigned int)v67;
            v47 = (unsigned int)v67 + 1LL;
            if ( v47 > HIDWORD(v67) )
            {
              sub_2237220(&v66, v68, v47, 8);
              v46 = (unsigned int)v67;
            }
            *((_QWORD *)v66 + v46) = 0;
            LODWORD(v67) = v67 + 1;
          }
          ++v24;
        }
        while ( v49 != v24 );
        v23 = v66;
        v43 = (unsigned int)v67;
      }
      v44 = sub_1B79350(
              *(__int64 **)(*a1 + 760),
              (int)v63,
              v64,
              *(_DWORD *)a2,
              *(_DWORD *)(a2 + 12),
              *(_DWORD *)(a2 + 48),
              (__m128)0LL,
              v19,
              *(_DWORD *)(a2 + 4),
              (__int64)&v57,
              &v55,
              (__int64)v23,
              v43);
      if ( v66 != v68 )
        free(v66);
    }
    if ( HIDWORD(v58[1]) )
      free(v58[0]);
  }
  else
  {
    while ( 1 )
    {
      v11 = sub_1D11200(a1, *v10, a3, a4, v8, a6, a7);
      if ( v11 == 1 )
        break;
      a6 = (unsigned int)v64;
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v13 = (unsigned int)v64 + 1LL;
      if ( v13 > HIDWORD(v64) )
      {
        v48 = v12;
        sub_2237220(&v63, v65, v13, 8);
        a6 = (unsigned int)v64;
        v12 = v48;
      }
      v8 = (unsigned __int64)v63;
      ++v10;
      *((_QWORD *)v63 + a6) = v12;
      LODWORD(v64) = v64 + 1;
      if ( (unsigned __int16 **)v9 == v10 )
        goto LABEL_9;
    }
    v44 = 0;
  }
  if ( v63 != v65 )
    free(v63);
  return v44;
}
