__int64 __fastcall sub_1DF1A70(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 a8,
        __int64 a9)
{
  __int64 v9; // r13
  __int64 v10; // r12
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // r15
  __int64 v17; // r12
  unsigned __int16 *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm1
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 *v28; // rbp
  unsigned __int64 v29; // r15
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 *v33; // r13
  unsigned __int64 *v34; // rsi
  __int64 *i; // r15
  __int64 v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  _BYTE *v45; // r13
  char *v46; // r15
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  __int64 v52; // rbp
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // [rsp+8h] [rbp-280h]
  unsigned __int64 v57; // [rsp+18h] [rbp-270h]
  unsigned __int64 v58; // [rsp+20h] [rbp-268h]
  unsigned __int64 *v59; // [rsp+28h] [rbp-260h]
  __int64 v60; // [rsp+38h] [rbp-250h]
  __m128i v61; // [rsp+50h] [rbp-238h] BYREF
  __int64 v62; // [rsp+60h] [rbp-228h]
  unsigned __int64 v63; // [rsp+78h] [rbp-210h] BYREF
  int v64[3]; // [rsp+84h] [rbp-204h] BYREF
  __m128i v65; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-1E8h]
  __int128 v67; // [rsp+B0h] [rbp-1D8h] BYREF
  void *v68[2]; // [rsp+C0h] [rbp-1C8h]
  __int128 v69; // [rsp+D0h] [rbp-1B8h]
  void *ptr; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v71; // [rsp+E8h] [rbp-1A0h]
  _BYTE v72[64]; // [rsp+F0h] [rbp-198h] BYREF
  void *v73; // [rsp+130h] [rbp-158h] BYREF
  __int64 v74; // [rsp+138h] [rbp-150h]
  _BYTE v75[128]; // [rsp+140h] [rbp-148h] BYREF
  void *v76; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v77; // [rsp+1C8h] [rbp-C0h]
  _BYTE v78[184]; // [rsp+1D0h] [rbp-B8h] BYREF

  v9 = a2;
  v10 = (__int64)a1;
  v11 = *(_DWORD *)(a2 + 12);
  v12 = *(_DWORD *)(a2 + 4);
  v13 = *(_DWORD *)a2;
  v67 = 0;
  v64[1] = v11;
  v76 = v78;
  v14 = *(unsigned int *)(a2 + 16);
  v64[0] = v13;
  v15 = (unsigned __int64)&v76;
  v64[2] = v12;
  v73 = v75;
  v74 = 0x1000000000LL;
  *(_OWORD *)v68 = 0;
  v69 = 0;
  v65.m128i_i64[0] = 0;
  v65.m128i_i32[2] = 0;
  v66 = 0;
  v77 = 0x1000000000LL;
  if ( v14 > 0x10 )
  {
    sub_2237220(&v73, v75, v14, 8);
    v14 = *(unsigned int *)(a2 + 16);
  }
  v16 = (unsigned __int64 *)(a2 + 104);
  if ( a2 + 8 * v14 + 104 != a2 + 104 )
  {
    v17 = a2 + 8 * v14 + 104;
    while ( 1 )
    {
      v18 = sub_1DC71F0(a1, *v16, v14, v15, a8, a9, (__m128)0LL, a4);
      if ( v18 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_44;
      v15 = (unsigned int)v74;
      a8 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFELL;
      v14 = (unsigned int)v74 + 1LL;
      if ( v14 <= HIDWORD(v74) )
      {
        ++v16;
        *((_QWORD *)v73 + (unsigned int)v74) = a8;
        LODWORD(v74) = v74 + 1;
        if ( (unsigned __int64 *)v17 == v16 )
          goto LABEL_9;
      }
      else
      {
        v56 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFELL;
        sub_2237220(&v73, v75, v14, 8);
        v14 = (unsigned int)v74;
        a8 = v56;
        ++v16;
        *((_QWORD *)v73 + (unsigned int)v74) = v56;
        LODWORD(v74) = v74 + 1;
        if ( (unsigned __int64 *)v17 == v16 )
        {
LABEL_9:
          v10 = (__int64)a1;
          break;
        }
      }
    }
  }
  v19 = *(_QWORD *)(a2 + 40);
  v20 = 0;
  if ( v19 && (v19 = sub_1DD3CF0(v10, v19, *(void **)(v9 + 48), 0, 0)) == 0
    || (sub_15AB8B0((__int64)&v67, v19, v20),
        v24 = (__m128)_mm_loadu_si128((const __m128i *)(v9 + 56)),
        v25 = *(_QWORD *)(v9 + 72),
        v26 = *(_QWORD *)(v9 + 56),
        v65 = (__m128i)v24,
        v66 = v25,
        v26)
    && (sub_1DD8C40(&v61, v10, &v65, (__m128)0LL, v24, v21, v22, v23),
        a5 = _mm_loadu_si128(&v61),
        v65 = a5,
        v66 = v62,
        !v61.m128i_i64[0]) )
  {
LABEL_44:
    v52 = 0;
    goto LABEL_33;
  }
  v27 = 8LL * *(unsigned int *)(v9 + 16);
  v28 = (unsigned __int64 *)(v9 + v27 + 104);
  v59 = (unsigned __int64 *)(v9 + v27 + 104 + v27);
  if ( v59 != v28 )
  {
    v60 = v9;
    do
    {
      v29 = *v28;
      if ( *v28 )
      {
        v30 = v29 + 64;
        ptr = v72;
        v71 = 0x800000000LL;
        v31 = (__int64 *)(v29 + 80);
        v32 = *(unsigned int *)(v29 + 4);
        if ( (*(_WORD *)v29 & 0x1FF) == 0x18 )
          v31 = (__int64 *)(v29 + 64);
        v33 = &v31[v32];
        if ( v31 == v33 )
        {
          v46 = v72;
          v45 = v72;
        }
        else
        {
          v34 = &v63;
          v58 = v29;
          for ( i = v31 + 1; ; ++i )
          {
            v36 = *v31;
            v37 = sub_C00A40(v58, (__int64)v34, v32, v30, v22);
            v41 = sub_1DD8310(v10, v37, v36 & 0xFFFFFFFFFFFFFFF8LL, v38, v39, v40, (__m128)0LL, v24);
            v34 = &v63;
            v63 = (*(_BYTE *)(v41 + 29) >> 5) & 3 | v41;
            v42 = v63;
            v30 = HIDWORD(v71);
            v43 = (unsigned int)v71 + 1LL;
            if ( v43 > HIDWORD(v71) )
            {
              v34 = (unsigned __int64 *)v72;
              sub_2237220(&ptr, v72, v43, 8);
              v32 = (unsigned int)v71;
            }
            else
            {
              v32 = (__int64)ptr;
            }
            *((_QWORD *)ptr + (unsigned int)v71) = v42;
            v44 = (unsigned int)(v71 + 1);
            LODWORD(v71) = v71 + 1;
            if ( v33 == i )
              break;
            v31 = i;
          }
          v45 = ptr;
          v46 = (char *)ptr + 8 * v44;
        }
        v47 = sub_15AB9E0((__int64)&v67, *(_QWORD **)(*(_QWORD *)v10 + 248LL), v32, v30, v22, v23);
        v49 = sub_C98860(*(_QWORD **)(*(_QWORD *)v10 + 248LL), 0, v47, v48, &v65, 1, v45, (__int64)v46, 0, 0);
        v50 = (unsigned int)v77;
        v51 = (unsigned int)v77 + 1LL;
        if ( v51 > HIDWORD(v77) )
        {
          v57 = v49;
          sub_2237220(&v76, v78, v51, 8);
          v50 = (unsigned int)v77;
          v49 = v57;
        }
        *((_QWORD *)v76 + v50) = v49;
        LODWORD(v77) = v77 + 1;
        if ( ptr != v72 )
          free(ptr);
      }
      else
      {
        v54 = (unsigned int)v77;
        v55 = (unsigned int)v77 + 1LL;
        if ( v55 > HIDWORD(v77) )
        {
          sub_2237220(&v76, v78, v55, 8);
          v54 = (unsigned int)v77;
        }
        *((_QWORD *)v76 + v54) = 0;
        LODWORD(v77) = v77 + 1;
      }
      ++v28;
    }
    while ( v59 != v28 );
    v9 = v60;
  }
  v52 = sub_1B60AE0(
          *(__int64 **)(*(_QWORD *)v10 + 760LL),
          (int *)(v9 + 80),
          2,
          (unsigned int *)(v9 + 88),
          (__m128)0LL,
          v24,
          a5,
          2,
          (__int64)&v67,
          (__int64)&v65,
          *(_DWORD *)(v9 + 96),
          (__int64)v73,
          (unsigned int)v74,
          v64,
          (__int64)v76,
          (_DWORD *)(unsigned int)v77);
LABEL_33:
  if ( v76 != v78 )
    free(v76);
  if ( HIDWORD(v68[1]) )
    free(v68[0]);
  if ( v73 != v75 )
    free(v73);
  return v52;
}
