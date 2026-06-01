/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B880
// Address: 0x000000000041B880

//----- (000000000041B880) ----------------------------------------------------
unsigned __int64 __fastcall sub_41B880(
        __int64 a1,
        const char *a2,
        __int64 a3,
        const char *a4,
        const char *a5,
        double a6)
{
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __m128i v11; // xmm1
  size_t v12; // rax
  size_t v13; // r8
  bool v14; // zf
  size_t v15; // r15
  size_t v16; // rax
  size_t v17; // r15
  size_t v18; // r13
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  size_t v21; // rbp
  size_t v22; // rbp
  size_t v23; // rbp
  size_t v24; // rbp
  int *v25; // rax
  int *v26; // rdx
  int *v27; // rcx
  int *v28; // rdx
  int *v29; // rcx
  size_t v30; // rbp
  size_t v31; // rbp
  __int64 v32; // r8
  __m128i *v33; // rdi
  __m128i *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  _QWORD *v37; // rbp
  _QWORD *v38; // r12
  void *v39; // rdi
  _QWORD *v40; // rbx
  _QWORD *v41; // rbp
  void *v42; // rdi
  const char *v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rdi
  void *v47; // rdi
  size_t v49; // [rsp+8h] [rbp-210h]
  size_t v50; // [rsp+8h] [rbp-210h]
  void *v51; // [rsp+10h] [rbp-208h] BYREF
  size_t v52[3]; // [rsp+18h] [rbp-200h]
  __m128 v53; // [rsp+30h] [rbp-1E8h] BYREF
  void *v54; // [rsp+40h] [rbp-1D8h]
  size_t v55[2]; // [rsp+48h] [rbp-1D0h]
  void *v56; // [rsp+58h] [rbp-1C0h]
  size_t v57[3]; // [rsp+60h] [rbp-1B8h]
  int v58; // [rsp+78h] [rbp-1A0h] BYREF
  void *v59; // [rsp+80h] [rbp-198h]
  int *v60; // [rsp+88h] [rbp-190h]
  int *v61; // [rsp+90h] [rbp-188h]
  __int64 v62; // [rsp+98h] [rbp-180h]
  void *v63; // [rsp+A0h] [rbp-178h]
  size_t v64[2]; // [rsp+A8h] [rbp-170h]
  void *src; // [rsp+B8h] [rbp-160h]
  size_t n[2]; // [rsp+C0h] [rbp-158h]
  int v67; // [rsp+D0h] [rbp-148h]
  void *v68; // [rsp+E0h] [rbp-138h] BYREF
  size_t v69[2]; // [rsp+E8h] [rbp-130h]
  void *v70; // [rsp+F8h] [rbp-120h]
  __int128 v71; // [rsp+100h] [rbp-118h]
  void *v72; // [rsp+110h] [rbp-108h]
  __int128 v73; // [rsp+118h] [rbp-100h]
  int v74; // [rsp+130h] [rbp-E8h] BYREF
  void *v75; // [rsp+138h] [rbp-E0h]
  int *v76; // [rsp+140h] [rbp-D8h]
  int *v77; // [rsp+148h] [rbp-D0h]
  __int64 v78; // [rsp+150h] [rbp-C8h]
  void *ptr; // [rsp+158h] [rbp-C0h]
  __int128 v80; // [rsp+160h] [rbp-B8h]
  void *v81; // [rsp+170h] [rbp-A8h]
  __int128 v82; // [rsp+178h] [rbp-A0h]
  int v83; // [rsp+188h] [rbp-90h]
  unsigned __int64 v84; // [rsp+190h] [rbp-88h] BYREF
  __int64 v85; // [rsp+198h] [rbp-80h]
  __int64 v86; // [rsp+1A0h] [rbp-78h]
  void *dest[2]; // [rsp+1A8h] [rbp-70h] BYREF
  __int128 v88; // [rsp+1B8h] [rbp-60h]
  __int128 v89; // [rsp+1C8h] [rbp-50h] BYREF
  unsigned __int64 v90; // [rsp+1D8h] [rbp-40h]

  v90 = __readfsqword(0x28u);
  sub_4563D0(a1, "%a: new dll %s (soname=%s)\n", a6, a2, a4);
  *(_OWORD *)dest = 0;
  v84 = 0xFFFFFFFFLL;
  v85 = -1;
  v86 = 0;
  v88 = 0;
  v89 = 0;
  sub_4787B0((__int64)&v84, 8);
  v9 = HIDWORD(v86) & 0xFFFFFFF;
  if ( (unsigned int)v9 > 0xB || (v10 = 2306, !_bittest64(&v10, v9)) )
    sub_40D8C0();
  v11 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 1340));
  v85 = (__int64)a2;
  LOBYTE(v86) = 1;
  v84 = _mm_shuffle_epi32(v11, 224).m128i_u64[0];
  if ( a4 && (v12 = strlen(a4), (v13 = v12) != 0) )
  {
    v47 = dest[0];
    v9 = v12 + 1;
    if ( (unsigned __int64)v88 < v12 + 1 )
    {
      v50 = v12;
      dest[0] = sub_481540((__int64)dest, dest[0], v12 + 1, 1u);
      v13 = v50;
      v47 = dest[0];
    }
    v49 = v13;
    dest[1] = (void *)v9;
    memmove(v47, a4, v13);
    *((_BYTE *)dest[0] + v49) = 0;
    LODWORD(v9) = HIDWORD(v86) & 0xFFFFFFF;
  }
  else
  {
    dest[1] = nullptr;
  }
  v14 = *(_BYTE *)(a1 + 861) == 0;
  *((_QWORD *)&v88 + 1) = a2;
  *((_QWORD *)&v89 + 1) = -1;
  *(_QWORD *)&v89 = a3;
  if ( v14 )
    goto LABEL_7;
  v44 = s1;
  if ( *(_QWORD *)(a1 + 592) )
    v44 = *(const char **)(a1 + 584);
  if ( strcmp(v44, a4) )
  {
LABEL_7:
    if ( (_DWORD)v9 )
    {
LABEL_73:
      v45 = *(_QWORD *)(a1 + 136);
      if ( v45 == *(_QWORD *)(a1 + 144) )
      {
        sub_41AFF0((_QWORD *)(a1 + 120), (__int64)&v84);
      }
      else
      {
        *(_BYTE *)(v45 - 56) = 0;
        v46 = v45 - 72;
        *(_QWORD *)(v46 + 8) = -1;
        *(_QWORD *)v46 = 0xFFFFFFFFLL;
        *(_DWORD *)(v46 + 20) = 0;
        sub_4788F0(v46, (__int64)&v84);
        *(_QWORD *)(a1 + 136) -= 72LL;
      }
      *(_BYTE *)(a1 + 1412) = 0;
    }
  }
  else
  {
    *((_QWORD *)&v89 + 1) = a2;
    if ( (_DWORD)v9 )
      goto LABEL_73;
  }
  v68 = nullptr;
  *(_OWORD *)v69 = 0;
  if ( a5 )
  {
    v15 = strlen(a5);
    v68 = sub_481540((__int64)&v68, nullptr, v15 + 1, 1u);
    v69[0] = v15 + 1;
    memmove(v68, a5, v15);
    *((_BYTE *)v68 + v15) = 0;
  }
  v51 = nullptr;
  *(_OWORD *)v52 = 0;
  if ( a4 )
  {
    v16 = strlen(a4);
    v17 = v16 + 1;
    v18 = v16;
    v51 = sub_481540((__int64)&v51, nullptr, v16 + 1, 1u);
    v52[0] = v17;
    memmove(v51, a4, v18);
    *((_BYTE *)v51 + v18) = 0;
  }
  v19 = HIDWORD(v86) & 0xFFFFFFF;
  if ( (unsigned int)v19 > 0xB || (v20 = 2306, !_bittest64(&v20, v19)) )
    sub_40D8C0();
  v54 = nullptr;
  v21 = v52[0];
  v53 = _mm_loadh_ps((const double *)&v89);
  *(_OWORD *)v55 = 0;
  if ( v52[0] )
  {
    v54 = sub_4814F0(v52[0]);
    v55[1] = v21;
    memcpy(v54, v51, v21);
    v55[0] = v21;
  }
  v22 = v69[0];
  v56 = nullptr;
  *(_OWORD *)v57 = 0;
  if ( v69[0] )
  {
    v56 = sub_4814F0(v69[0]);
    v57[1] = v22;
    memcpy(v56, v68, v22);
    v57[0] = v22;
  }
  v58 = 0;
  v59 = nullptr;
  v60 = &v58;
  v61 = &v58;
  v62 = 0;
  v63 = nullptr;
  src = nullptr;
  v67 = 0;
  *(_OWORD *)v64 = 0;
  *(_OWORD *)n = 0;
  if ( v51 )
  {
    v52[0] = 0;
    j__free(v51);
  }
  if ( v68 )
  {
    v69[0] = 0;
    j__free(v68);
  }
  v23 = v55[0];
  v70 = nullptr;
  v71 = 0;
  v68 = (void *)v53.m128_u64[0];
  *(__m128 *)v69 = v53;
  if ( v55[0] )
  {
    v70 = sub_4814F0(v55[0]);
    *((_QWORD *)&v71 + 1) = v23;
    memcpy(v70, v54, v23);
    *(_QWORD *)&v71 = v23;
  }
  v24 = v57[0];
  v72 = nullptr;
  v73 = 0;
  if ( v57[0] )
  {
    v72 = sub_4814F0(v57[0]);
    *((_QWORD *)&v73 + 1) = v24;
    memcpy(v72, v56, v24);
    *(_QWORD *)&v73 = v24;
  }
  v74 = 0;
  v75 = nullptr;
  v76 = &v74;
  v77 = &v74;
  v78 = 0;
  if ( v59 )
  {
    v25 = (int *)sub_40FC30((int *)v59, (__int64)&v74);
    v26 = v25;
    do
    {
      v27 = v26;
      v26 = *((int **)v26 + 2);
    }
    while ( v26 );
    v76 = v27;
    v28 = v25;
    do
    {
      v29 = v28;
      v28 = *((int **)v28 + 3);
    }
    while ( v28 );
    v77 = v29;
    v75 = v25;
    v78 = v62;
  }
  v30 = v64[0];
  ptr = nullptr;
  v80 = 0;
  if ( v64[0] )
  {
    ptr = sub_4814F0(v64[0]);
    *((_QWORD *)&v80 + 1) = v30;
    memcpy(ptr, v63, v30);
    *(_QWORD *)&v80 = v30;
  }
  v31 = n[0];
  v81 = nullptr;
  v82 = 0;
  if ( n[0] )
  {
    v81 = sub_4814F0(n[0]);
    *((_QWORD *)&v82 + 1) = v31;
    memcpy(v81, src, v31);
    *(_QWORD *)&v82 = v31;
  }
  v32 = a1 + 1168;
  v33 = (__m128i *)(a1 + 1168);
  v83 = v67;
  v34 = *(__m128i **)(a1 + 1176);
  if ( !v34 )
    goto LABEL_68;
  do
  {
    while ( 1 )
    {
      v35 = v34[1].m128i_i64[0];
      v36 = v34[1].m128i_i64[1];
      if ( v34[2].m128i_i64[0] < (unsigned __int64)v68 )
        break;
      v33 = v34;
      v34 = (__m128i *)v34[1].m128i_i64[0];
      if ( !v35 )
        goto LABEL_41;
    }
    v34 = (__m128i *)v34[1].m128i_i64[1];
  }
  while ( v36 );
LABEL_41:
  if ( (__m128i *)v32 == v33 || (unsigned __int64)v68 < v33[2].m128i_i64[0] )
LABEL_68:
    sub_41AA70((_QWORD *)(a1 + 1160), v33, (__int64)&v68);
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    j__free(v81);
  }
  if ( ptr )
  {
    *(_QWORD *)&v80 = 0;
    j__free(ptr);
  }
  v37 = v75;
  if ( v75 )
  {
    do
    {
      v38 = v37;
      sub_40F970((_QWORD *)v37[3]);
      v39 = (void *)v37[5];
      v37 = (_QWORD *)v37[2];
      if ( v39 )
      {
        v38[6] = 0;
        j__free(v39);
      }
      operator delete(v38, 0x40u);
    }
    while ( v37 );
  }
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    j__free(v72);
  }
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    j__free(v70);
  }
  sub_41A580((_QWORD *)(a1 + 1112), (unsigned __int64 *)&v53, v36, v35, v32);
  if ( src )
  {
    n[0] = 0;
    j__free(src);
  }
  if ( v63 )
  {
    v64[0] = 0;
    j__free(v63);
  }
  v40 = v59;
  if ( v59 )
  {
    do
    {
      v41 = v40;
      sub_40F970((_QWORD *)v40[3]);
      v42 = (void *)v40[5];
      v40 = (_QWORD *)v40[2];
      if ( v42 )
      {
        v41[6] = 0;
        j__free(v42);
      }
      operator delete(v41, 0x40u);
    }
    while ( v40 );
  }
  if ( v56 )
  {
    v57[0] = 0;
    j__free(v56);
  }
  if ( v54 )
  {
    v55[0] = 0;
    j__free(v54);
  }
  sub_478720((__int64)&v84);
  return v90 - __readfsqword(0x28u);
}
// 41BE42: variable 'v36' is possibly undefined
// 41BE42: variable 'v35' is possibly undefined
// 41BE42: variable 'v32' is possibly undefined
