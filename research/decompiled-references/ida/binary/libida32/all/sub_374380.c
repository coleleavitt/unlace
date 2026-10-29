unsigned __int64 __fastcall sub_374380(__int64 a1, __int64 a2, __int64 a3, double a4, double a5, __m128 a6)
{
  __m128i v6; // xmm0
  char v9; // al
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // r13
  char *v15; // r13
  __int64 v16; // rbp
  char *v17; // r12
  unsigned __int64 v18; // rdx
  char *v19; // rbp
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  char *v22; // rax
  _QWORD *v23; // rsi
  char *v24; // rsi
  char *v25; // rax
  _QWORD *v26; // rdx
  void *v27; // rdi
  __int64 v28; // rax
  __m128 v29; // xmm0
  char *v31; // rsi
  _QWORD *v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rax
  int *v35; // r15
  int *v36; // r12
  int *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  void (__fastcall *v40)(__int64 *, const __m128i **, int); // rax
  _QWORD *v41; // rax
  __int64 v42; // r12
  __m128i v43; // xmm0
  __int64 v44; // rbp
  __int64 (__fastcall *v45)(__m128i **, const __m128i **, int); // rdx
  int v46; // ecx
  void (__fastcall *v47)(__int128 *, __int128 *, __int64); // rax
  __m128i v48; // xmm0
  __int64 v49; // rax
  __m128i *v50; // r14
  __int64 v51; // rdx
  void (__fastcall *v52)(__m128i **, const __m128i **, int); // rax
  int *v53; // rax
  int *v54; // r15
  int *v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // r13
  __int64 v59; // rbp
  int v60; // edx
  int *v61; // rbp
  __int64 v62; // r12
  int v63; // edx
  int v64; // ecx
  int v65; // [rsp+0h] [rbp-110h]
  int v66; // [rsp+1Ch] [rbp-F4h] BYREF
  int v67; // [rsp+20h] [rbp-F0h] BYREF
  int v68; // [rsp+24h] [rbp-ECh] BYREF
  __int64 v69; // [rsp+28h] [rbp-E8h] BYREF
  __int64 v70; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v71; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v72; // [rsp+40h] [rbp-D0h] BYREF
  void *ptr; // [rsp+48h] [rbp-C8h] BYREF
  __int128 v74; // [rsp+50h] [rbp-C0h] BYREF
  __int128 v75; // [rsp+68h] [rbp-A8h] BYREF
  __m128i v76; // [rsp+78h] [rbp-98h] BYREF
  __int128 v77; // [rsp+88h] [rbp-88h] BYREF
  __m128i v78; // [rsp+98h] [rbp-78h] BYREF
  __int128 v79; // [rsp+A8h] [rbp-68h] BYREF
  __m128i v80; // [rsp+B8h] [rbp-58h]
  unsigned __int64 v81; // [rsp+D0h] [rbp-40h]

  v6.m128i_i64[0] = 0;
  v9 = *(_BYTE *)(a2 + 52);
  v81 = __readfsqword(0x28u);
  v74 = 0;
  ptr = nullptr;
  v11 = v9 & 7;
  if ( v11 )
    v12 = 1 << (v11 - 1);
  else
    v12 = (unsigned __int8)getinf(61);
  v13 = 8 * v12;
  v14 = -1;
  if ( v13 <= 63 )
    v14 = (1LL << v13) - 1;
  if ( a3 == -1 )
  {
    v76 = 0u;
    v75 = 0;
    v41 = (_QWORD *)operator new(0x18u);
    v41[1] = a2;
    v42 = *(_QWORD *)(a2 + 32);
    v43 = _mm_loadl_epi64((const __m128i *)off_2AFC908);
    *v41 = &ptr;
    v41[2] = v14;
    *(_QWORD *)&v75 = v41;
    a6 = (__m128)(unsigned __int64)sub_36CF80;
    v6 = _mm_unpacklo_epi64(v43, (__m128i)(unsigned __int64)sub_36CF80);
    v76 = v6;
    if ( v42 )
    {
      v78 = 0u;
      v77 = 0;
      sub_36B910((__m128i **)&v77, (const __m128i **)&v75, 2);
      v48 = _mm_load_si128(&v76);
      v80 = 0u;
      v78 = v48;
      v79 = 0;
      v49 = operator new(0x20u);
      *(_QWORD *)(v49 + 16) = 0;
      v50 = (__m128i *)v49;
      *(_QWORD *)(v49 + 24) = 0;
      *(_OWORD *)v49 = 0;
      if ( v78.m128i_i64[0] )
      {
        ((void (__fastcall *)(__int64, __int128 *, __int64))v78.m128i_i64[0])(v49, &v77, 2);
        v50[1] = _mm_load_si128(&v78);
      }
      v51 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)&v79 = v50;
      v6 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2AFC910), (__m128i)(unsigned __int64)sub_36D220);
      v80 = v6;
      if ( v51 )
      {
        v53 = *(int **)(a2 + 24);
        v54 = &v53[v51];
        if ( v53 != v54 )
        {
          v55 = *(int **)(a2 + 24);
          v56 = 0;
          while ( 1 )
          {
            v57 = *v55;
            if ( !(_DWORD)v57 )
              break;
            ++v55;
            v56 += v57;
            if ( v54 == v55 )
            {
              if ( v56 != *(_QWORD *)(a2 + 8) )
                break;
              v61 = *(int **)(a2 + 24);
              v62 = 0;
              v52 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_374280;
              do
              {
                v64 = *v61;
                v69 = v62;
                v66 = v64;
                if ( !v52 )
                  std::__throw_bad_function_call();
                v65 = v64;
                v63 = ((__int64 (__fastcall *)(__int128 *, __int64 *, int *))v80.m128i_i64[1])(&v79, &v69, &v66);
                v52 = (void (__fastcall *)(__m128i **, const __m128i **, int))v80.m128i_i64[0];
                if ( v63 )
                  break;
                ++v61;
                v62 += v65;
              }
              while ( v54 != v61 );
              goto LABEL_49;
            }
          }
        }
      }
      v52 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_374280;
LABEL_49:
      if ( v52 )
        v52((__m128i **)&v79, (const __m128i **)&v79, 3);
      if ( v78.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v78.m128i_i64[0])(&v77, &v77, 3);
      v47 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v76.m128i_i64[0];
    }
    else
    {
      v44 = *(_QWORD *)(a2 + 8);
      if ( !v44 )
      {
        sub_36B910((__m128i **)&v75, (const __m128i **)&v75, 3);
        goto LABEL_7;
      }
      v45 = sub_36B910;
      do
      {
        v70 = v42;
        v71 = 0;
        v67 = v44;
        if ( !v45 )
          std::__throw_bad_function_call();
        v46 = ((__int64 (__fastcall *)(__int128 *, __int64 *, __int64 *, int *))v76.m128i_i64[1])(
                &v75,
                &v70,
                &v71,
                &v67);
        v47 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v76.m128i_i64[0];
        v45 = (__int64 (__fastcall *)(__m128i **, const __m128i **, int))v76.m128i_i64[0];
        if ( v46 )
          break;
        ++v42;
      }
      while ( v44 != v42 );
    }
    if ( v47 )
      v47(&v75, &v75, 3);
  }
  else if ( (*(_BYTE *)(a2 + 52) & 0x10) != 0 )
  {
    v80 = 0u;
    v79 = 0;
    v32 = (_QWORD *)operator new(0x20u);
    v32[1] = a2;
    v33 = _mm_loadl_epi64((const __m128i *)off_2AFC918);
    *v32 = &ptr;
    v32[2] = v14;
    v32[3] = v14 & a3;
    *(_QWORD *)&v79 = v32;
    a5 = COERCE_DOUBLE(sub_36E7D0);
    v34 = *(_QWORD *)(a2 + 32);
    v6 = _mm_unpacklo_epi64(v33, (__m128i)(unsigned __int64)sub_36E7D0);
    v80 = v6;
    if ( v34 )
    {
      v35 = *(int **)(a2 + 24);
      v36 = &v35[v34];
      if ( v35 != v36 )
      {
        v37 = *(int **)(a2 + 24);
        v38 = 0;
        while ( 1 )
        {
          v39 = *v37;
          if ( !(_DWORD)v39 )
            break;
          ++v37;
          v38 += v39;
          if ( v36 == v37 )
          {
            if ( v38 != *(_QWORD *)(a2 + 8) )
              break;
            v40 = (void (__fastcall *)(__int64 *, const __m128i **, int))sub_36B890;
            v58 = 0;
            do
            {
              v59 = *v35;
              v72 = v58;
              v68 = v59;
              if ( !v40 )
                std::__throw_bad_function_call();
              v60 = ((__int64 (__fastcall *)(__int128 *, __int64 *, int *))v80.m128i_i64[1])(&v79, &v72, &v68);
              v40 = (void (__fastcall *)(__int64 *, const __m128i **, int))v80.m128i_i64[0];
              if ( v60 )
                break;
              ++v35;
              v58 += v59;
            }
            while ( v36 != v35 );
            if ( !v80.m128i_i64[0] )
              goto LABEL_7;
            goto LABEL_36;
          }
        }
      }
    }
    v40 = (void (__fastcall *)(__int64 *, const __m128i **, int))sub_36B890;
LABEL_36:
    v40((__int64 *)&v79, (const __m128i **)&v79, 3);
  }
LABEL_7:
  v15 = (char *)ptr;
  v16 = 8 * v74;
  v17 = (char *)ptr + 8 * v74;
  if ( ptr == v17 )
    goto LABEL_22;
  if ( v16 >> 3 )
  {
    _BitScanReverse64(&v18, v16 >> 3);
    sub_36CB00((__m128i *)ptr, (unsigned __int64 *)ptr + v74, 2LL * (int)v18, *(double *)v6.m128i_i64, a5, a6);
    if ( v16 > 128 )
    {
      v19 = v15 + 128;
      sub_36B740(v15, v15 + 128);
      do
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)v19;
          v21 = *((_QWORD *)v19 - 1);
          v22 = v19 - 8;
          if ( *(_QWORD *)v19 < v21 )
            break;
          v31 = v19;
          v19 += 8;
          *(_QWORD *)v31 = v20;
          if ( v17 == v19 )
            goto LABEL_14;
        }
        do
        {
          *((_QWORD *)v22 + 1) = v21;
          v23 = v22;
          v21 = *((_QWORD *)v22 - 1);
          v22 -= 8;
        }
        while ( v20 < v21 );
        v19 += 8;
        *v23 = v20;
      }
      while ( v17 != v19 );
      goto LABEL_14;
    }
  }
  else
  {
    sub_36CB00((__m128i *)ptr, (unsigned __int64 *)ptr + v74, -2, *(double *)v6.m128i_i64, a5, a6);
  }
  sub_36B740(v15, v17);
LABEL_14:
  v17 = (char *)ptr;
  v24 = (char *)ptr + 8 * v74;
  if ( ptr != v24 )
  {
    v25 = (char *)ptr + 8;
    if ( 8LL * (_QWORD)v74 != 8 )
    {
      v26 = ptr;
      do
      {
        if ( *v26 != *(_QWORD *)v25 )
        {
          if ( v25 != (char *)(v26 + 1) )
            v26[1] = *(_QWORD *)v25;
          ++v26;
        }
        v25 += 8;
      }
      while ( v24 != v25 );
    }
  }
LABEL_22:
  v27 = *(void **)a1;
  v28 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = v17;
  v29 = _mm_loadh_ps((const double *)&v74 + 1);
  ptr = v27;
  *((_QWORD *)&v74 + 1) = v28;
  *(__m128 *)(a1 + 8) = v29;
  if ( v27 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v27);
  }
  return v81 - __readfsqword(0x28u);
}

