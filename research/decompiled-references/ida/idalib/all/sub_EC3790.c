_DWORD *__fastcall sub_EC3790(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        char **a8,
        char *a9,
        __int64 a10,
        __int64 a11)
{
  char **v12; // r15
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 *v15; // r14
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r11d
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // r11d
  _DWORD *v24; // rbp
  int v25; // esi
  int v26; // edx
  void *v27; // rax
  char *v28; // rsi
  char *v29; // rbx
  char *v30; // rsi
  _QWORD *v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // r13
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r15
  __int64 v39; // rcx
  char *v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rdx
  _QWORD *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // r12
  int v47; // r14d
  char *v48; // rbp
  char *v49; // r13
  __int64 v50; // rbx
  _QWORD *v51; // rax
  __int64 *v52; // rdi
  char *v53; // r12
  char *v54; // rdi
  _QWORD *v56; // rsi
  __int64 v57; // rax
  __int64 *v58; // rax
  __int64 v59; // r11
  __int64 *v60; // rcx
  __int64 v61; // rdx
  const __m128i *v62; // r8
  __int64 v63; // rsi
  __m128i v64; // xmm1
  __m128i v65; // [rsp+0h] [rbp-138h] BYREF
  _QWORD *v66; // [rsp+18h] [rbp-120h]
  char *v67; // [rsp+20h] [rbp-118h]
  _QWORD *v68; // [rsp+28h] [rbp-110h]
  void **v69; // [rsp+30h] [rbp-108h]
  _DWORD *v70; // [rsp+38h] [rbp-100h]
  _QWORD v71[2]; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v72; // [rsp+50h] [rbp-E8h]
  char *v73; // [rsp+58h] [rbp-E0h]
  __int64 v74; // [rsp+60h] [rbp-D8h]
  char v75; // [rsp+68h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-C8h] BYREF

  v12 = a8;
  v68 = (_QWORD *)a2;
  v13 = a11;
  v14 = a10;
  v66 = a3;
  v65.m128i_i64[1] = a6;
  v15 = (__int64 *)a8;
  v65.m128i_i64[0] = a5;
  v67 = a9;
  v16 = sub_EB5A30(a8, a9);
  v17 = v14 + 144 * v13;
  if ( v17 == v14 )
  {
    v20 = 0;
    v19 = 0;
  }
  else
  {
    v18 = v14;
    v19 = 0;
    do
    {
      v19 += *(_DWORD *)(v18 + 8);
      v18 += 144;
    }
    while ( v17 != v18 );
    v20 = 16LL * v19;
  }
  v70 = v68;
  LODWORD(v69) = v19;
  LODWORD(v68) = v16;
  v21 = 4LL * (v16 + (unsigned int)v13) + 8 * (v16 + (unsigned __int64)(unsigned int)(3 * (_DWORD)a4));
  v22 = sub_EBD890((__int64 *)(a1 + 2352), v20 + 8 * ((v21 != 0) + ((v21 - (v21 != 0)) >> 3)) + 80, 3u);
  v23 = (int)v69;
  v24 = (_DWORD *)v22;
  LODWORD(v22) = v70[1];
  v25 = *v70;
  v26 = v70[2];
  v24[5] = (_DWORD)v68;
  v24[7] = v23;
  v24[1] = v26;
  *v24 = v25;
  v24[3] = v22;
  v27 = v66;
  v24[4] = (_DWORD)a4;
  v24[6] = v13;
  v24[2] = 111;
  *((_BYTE *)v24 + 32) = 0;
  *((_QWORD *)v24 + 7) = 0;
  v24[16] = 0;
  *((_QWORD *)v24 + 9) = 0;
  *(_OWORD *)(v24 + 10) = 0;
  ptr[1] = a4;
  v69 = ptr;
  ptr[0] = v27;
  sub_EB8020((__int64)ptr, (char *)v24 + 80);
  v28 = (char *)&v24[2 * v24[4] + 20];
  *(__m128i *)ptr = _mm_load_si128(&v65);
  sub_EB8020((__int64)ptr, v28);
  v29 = &v75;
  v30 = (char *)&v24[4 * v24[4] + 20];
  *(__m128i *)ptr = _mm_loadu_si128((const __m128i *)&a7);
  sub_EB8020((__int64)ptr, v30);
  v73 = &v75;
  v68 = v71;
  v71[0] = 0;
  v35 = (__int64 *)&v12[(_QWORD)v67];
  v71[1] = 0;
  v72 = 0;
  v74 = 0;
  if ( v12 == (char **)v35 )
  {
    v40 = &v75;
  }
  else
  {
    do
    {
      v36 = sub_EC2230((__int64)v68, v15, (__int64)v31, (__int64)v32, v33, v34);
      v37 = *(unsigned int *)(v14 + 8);
      v38 = *(_QWORD *)v14;
      v39 = *(unsigned int *)(v36 + 8);
      v31 = (_QWORD *)(v39 + 1);
      if ( v39 + 1 > (unsigned __int64)*(unsigned int *)(v36 + 12) )
      {
        v65.m128i_i64[0] = v36;
        sub_2237220(v36, v36 + 16, v31, 16);
        v36 = v65.m128i_i64[0];
        v31 = (_QWORD *)(*(_QWORD *)v65.m128i_i64[0] + 16LL * *(unsigned int *)(v65.m128i_i64[0] + 8));
        *v31 = v38;
        v31[1] = v37;
      }
      else
      {
        v32 = (_QWORD *)(*(_QWORD *)v36 + 16 * v39);
        *v32 = v38;
        v32[1] = v37;
      }
      ++v15;
      ++*(_DWORD *)(v36 + 8);
      v14 += 144;
    }
    while ( v35 != v15 );
    v40 = v73;
    v29 = &v73[152 * (unsigned int)v74];
  }
  v41 = (unsigned int)v24[5];
  v42 = 8LL * (unsigned int)(3 * v24[4]) + 80;
  v43 = (_QWORD *)((char *)v24 + v42);
  v44 = v42 + 8 * v41;
  v45 = v44 + 4LL * (unsigned int)(v24[6] + v24[5]);
  v66 = v43;
  v65.m128i_i64[0] = (__int64)&v24[v41] + v44;
  v46 = ((unsigned __int64)v24 + v45 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v40 == v29 )
    goto LABEL_20;
  v70 = v24;
  v47 = 0;
  v48 = (char *)v24 + v44;
  v49 = v29;
  v67 = (char *)(v69 + 2);
  do
  {
    while ( 1 )
    {
      v50 = *(_QWORD *)v40;
      ptr[0] = v67;
      ptr[1] = (void *)0x800000000LL;
      if ( !*((_DWORD *)v40 + 4) )
      {
        v51 = v66;
        v48 += 4;
        *v66 = v50;
        v52 = (__int64 *)ptr[0];
        v66 = v51 + 1;
        *((_DWORD *)v48 - 1) = 0;
        goto LABEL_14;
      }
      v48 += 4;
      sub_EC0D40((__int64 *)v69, (__int64 *)v40 + 1);
      v56 = v66;
      v57 = LODWORD(ptr[1]);
      *v66 = v50;
      v52 = (__int64 *)ptr[0];
      *((_DWORD *)v48 - 1) = v57;
      v58 = &v52[2 * v57];
      v66 = v56 + 1;
      if ( v52 != v58 )
        break;
LABEL_14:
      if ( v52 == (__int64 *)v67 )
        goto LABEL_29;
LABEL_15:
      free(v52);
      v40 += 152;
      if ( v49 == v40 )
        goto LABEL_16;
    }
    v59 = v65.m128i_i64[0];
    v60 = v52;
    do
    {
      v61 = v60[1];
      v62 = (const __m128i *)*v60;
      v59 += 4;
      v47 += v61;
      v61 *= 16;
      *(_DWORD *)(v59 - 4) = v47;
      v63 = v61 >> 4;
      if ( v61 > 0 )
      {
        do
        {
          v64 = _mm_loadu_si128(v62);
          v46 += 16LL;
          ++v62;
          *(__m128i *)(v46 - 16) = v64;
          --v63;
        }
        while ( v63 );
      }
      v60 += 2;
    }
    while ( v58 != v60 );
    v65.m128i_i64[0] += 4 * (((unsigned __int64)v58 - 16 - (unsigned __int64)v52) >> 4) + 4;
    if ( v52 != (__int64 *)v67 )
      goto LABEL_15;
LABEL_29:
    v40 += 152;
  }
  while ( v49 != v40 );
LABEL_16:
  v53 = v73;
  v24 = v70;
  v29 = &v73[152 * (unsigned int)v74];
  if ( v73 != v29 )
  {
    do
    {
      while ( 1 )
      {
        v29 -= 152;
        v54 = *((char **)v29 + 1);
        if ( v54 == v29 + 24 )
          break;
        free(v54);
        if ( v53 == v29 )
          goto LABEL_19;
      }
    }
    while ( v53 != v29 );
LABEL_19:
    v29 = v73;
  }
LABEL_20:
  if ( v29 != (char *)(v68 + 5) )
    free(v29);
  operator delete(v71[0], 16LL * v72, 8);
  return v24;
}
