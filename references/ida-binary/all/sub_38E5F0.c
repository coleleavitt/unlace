unsigned __int64 __fastcall struc_stroff_data_t__::vfunc_4(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3,
        _QWORD *a4,
        __int64 a5,
        int a6)
{
  __int64 *v9; // rbx
  __int64 v10; // rdi
  double v11; // xmm0_8
  __int64 v12; // rdx
  const char *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rbp
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 v31; // rbx
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v35; // rdx
  const char *v36; // r15
  const char *v37; // r9
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdi
  __int64 v44; // r15
  __int64 v45; // r13
  _QWORD *v46; // r12
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rsi
  void *v50; // rcx
  __int64 strid; // rax
  char *v52; // r8
  size_t v53; // r12
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdi
  __int64 v62; // r13
  __int64 v63; // r15
  _QWORD *v64; // r12
  __int64 v65; // rdi
  __int64 v66; // rdi
  __m128i v67; // xmm1
  char *v68; // [rsp+0h] [rbp-1D8h]
  const char *v69; // [rsp+0h] [rbp-1D8h]
  char **p_s; // [rsp+8h] [rbp-1D0h]
  __int64 *v71; // [rsp+8h] [rbp-1D0h]
  void *src; // [rsp+10h] [rbp-1C8h]
  char *srca; // [rsp+10h] [rbp-1C8h]
  char *v74; // [rsp+18h] [rbp-1C0h]
  __int64 v75; // [rsp+28h] [rbp-1B0h] BYREF
  char *s; // [rsp+30h] [rbp-1A8h] BYREF
  __m128i v77; // [rsp+38h] [rbp-1A0h] BYREF
  char *v78; // [rsp+50h] [rbp-188h] BYREF
  _BYTE v79[24]; // [rsp+58h] [rbp-180h] BYREF
  __int64 v80; // [rsp+70h] [rbp-168h]
  __int128 v81; // [rsp+78h] [rbp-160h]
  char v82; // [rsp+88h] [rbp-150h]
  __int64 v83; // [rsp+90h] [rbp-148h] BYREF
  __int128 v84; // [rsp+98h] [rbp-140h]
  __int64 v85; // [rsp+A8h] [rbp-130h]
  __int128 v86; // [rsp+B0h] [rbp-128h]
  __int64 v87; // [rsp+C0h] [rbp-118h]
  __int128 v88; // [rsp+C8h] [rbp-110h]
  __int64 v89; // [rsp+D8h] [rbp-100h]
  __int128 v90; // [rsp+E0h] [rbp-F8h]
  int v91; // [rsp+F4h] [rbp-E4h]
  __int128 v92; // [rsp+100h] [rbp-D8h] BYREF
  _OWORD v93[3]; // [rsp+110h] [rbp-C8h] BYREF
  _OWORD v94[3]; // [rsp+140h] [rbp-98h] BYREF
  __int64 v95; // [rsp+170h] [rbp-68h]
  int v96; // [rsp+178h] [rbp-60h]
  __int64 v97; // [rsp+180h] [rbp-58h]
  char v98; // [rsp+188h] [rbp-50h]
  unsigned __int64 v99; // [rsp+198h] [rbp-40h]

  v9 = a2;
  LODWORD(v68) = a6;
  v99 = __readfsqword(0x28u);
  v10 = *a2;
  if ( *a2 )
  {
    a2[1] = 0;
    qfree(v10, (const char *)a2);
    *a2 = 0;
    a2[2] = 0;
  }
  v11 = 0.0;
  v83 = 0;
  v85 = 0;
  v87 = 0;
  v89 = 0;
  v84 = 0;
  v86 = 0;
  v88 = 0;
  v90 = 0;
  sub_2D1510((__int64)&v83, (const char *)a2);
  v13 = (const char *)a4[6];
  v14 = a4[7];
  if ( v13 == (const char *)-1LL )
  {
    v15 = a4[2];
    if ( v15 != -1 )
    {
      v35 = a4[7];
      v36 = (const char *)a4[5];
      s = nullptr;
      memset(v93, 0, sizeof(v93));
      v95 = 1;
      v96 = -1;
      v97 = 0;
      v98 = 0;
      p_s = &s;
      v92 = 0;
      v94[0] = 0;
      get_udm_by_tid(&s, &v92, v35);
      v37 = &s1;
      if ( *((_QWORD *)&v93[0] + 1) )
        v37 = *(const char **)&v93[0];
      v11 = 0.0;
      memset(v79, 0, sizeof(v79));
      v80 = 0;
      LODWORD(v78) = (_DWORD)v68;
      v82 = 1;
      v69 = v37;
      v81 = 0;
      if ( v37 )
      {
        *(_QWORD *)v79 = qvector_reserve(v79, 0, 1, 80);
        v11 = 0.0;
        v38 = *(_QWORD *)v79 + 80LL * *(_QWORD *)&v79[8];
        *(_QWORD *)v38 = 0;
        *(_QWORD *)(v38 + 8) = 0;
        *(_QWORD *)(v38 + 32) = 0;
        *(_DWORD *)(v38 + 72) = 0;
        *(_OWORD *)(v38 + 16) = 0;
        *(_OWORD *)(v38 + 40) = 0;
        *(_OWORD *)(v38 + 56) = 0;
        ++*(_QWORD *)&v79[8];
        sub_1E88D0(v38, v69, 1);
      }
      a2 = (__int64 *)v36;
      sub_2D50E0((const char *)&v83, (__int64)v36, v15, (int *)&v78);
      if ( v80 )
      {
        *(_QWORD *)&v81 = 0;
        v11 = qfree(v80, v36);
      }
      v43 = *(_QWORD *)v79;
      if ( *(_QWORD *)v79 )
      {
        v44 = *(_QWORD *)&v79[8];
        if ( *(_QWORD *)&v79[8] )
        {
          v45 = 0;
          do
          {
            v39 = 80 * v45;
            v46 = (_QWORD *)(v43 + 80 * v45);
            v47 = v46[4];
            if ( v47 )
            {
              v46[5] = 0;
              qfree(v47, (const char *)a2);
            }
            v48 = v46[1];
            if ( v48 )
            {
              v46[2] = 0;
              qfree(v48, (const char *)a2);
            }
            ++v45;
            v43 = *(_QWORD *)v79;
          }
          while ( v44 != v45 );
        }
        *(_QWORD *)&v79[8] = 0;
        v11 = qfree(v43, (const char *)a2, v39, v40, v41, v42, v69, &s, &v92);
      }
      clear_tinfo_t(v94);
      if ( *((_QWORD *)&v93[1] + 1) )
      {
        *(_QWORD *)&v93[2] = 0;
        v11 = qfree(*((_QWORD *)&v93[1] + 1), (const char *)a2);
      }
      if ( *(_QWORD *)&v93[0] )
      {
        *((_QWORD *)&v93[0] + 1) = 0;
        v11 = qfree(*(_QWORD *)&v93[0], (const char *)a2);
      }
      clear_tinfo_t(p_s);
    }
  }
  else
  {
    v49 = a4[6];
    src = (void *)a4[7];
    v71 = &v75;
    s = nullptr;
    v75 = 0;
    v77 = 0;
    get_type_by_tid(&v75, v49);
    v50 = src;
    if ( (v75 & 0x100) != 0 )
    {
      get_tinfo_pdata(&s, v75, 0);
      v50 = src;
    }
    v78 = nullptr;
    v11 = 0.0;
    *(_OWORD *)v79 = 0;
    if ( v50 == (void *)-1LL )
    {
      v52 = s;
      s = nullptr;
      v67 = _mm_loadu_si128(&v77);
      memset(v93, 0, 40);
      v78 = v52;
      LODWORD(v92) = (_DWORD)v68;
      *((_QWORD *)&v92 + 1) = 0;
      *(__m128i *)v79 = v67;
      v77 = 0;
    }
    else
    {
      strid = get_strid(v50);
      get_tid_name(&v78, strid);
      v11 = 0.0;
      *((_QWORD *)&v92 + 1) = 0;
      v52 = v78;
      memset(v93, 0, 40);
      LODWORD(v92) = (_DWORD)v68;
      if ( s )
      {
        v74 = v78;
        srca = s;
        v53 = strlen(s);
        v68 = (char *)(v53 + 1);
        *(_QWORD *)&v93[1] = qvector_reserve(&v93[1], 0, v53 + 1, 1);
        *((_QWORD *)&v93[1] + 1) = v53 + 1;
        memmove(*(void **)&v93[1], srca, v53);
        v52 = v74;
        *(_BYTE *)(*(_QWORD *)&v93[1] + v53) = 0;
      }
    }
    BYTE8(v93[2]) = 1;
    if ( v52 )
    {
      v54 = *(_QWORD *)&v93[0];
      v55 = *((_QWORD *)&v92 + 1);
      if ( *((_QWORD *)&v93[0] + 1) < (unsigned __int64)(*(_QWORD *)&v93[0] + 1LL) )
      {
        v68 = v52;
        *((_QWORD *)&v92 + 1) = qvector_reserve((char *)&v92 + 8, *((_QWORD *)&v92 + 1), *(_QWORD *)&v93[0] + 1LL, 80);
        v55 = *((_QWORD *)&v92 + 1);
        v52 = v68;
        v54 = *(_QWORD *)&v93[0];
      }
      v11 = 0.0;
      v56 = v55 + 80 * v54;
      *(_QWORD *)v56 = 0;
      *(_QWORD *)(v56 + 8) = 0;
      *(_QWORD *)(v56 + 32) = 0;
      *(_DWORD *)(v56 + 72) = 0;
      *(_OWORD *)(v56 + 16) = 0;
      *(_OWORD *)(v56 + 40) = 0;
      *(_OWORD *)(v56 + 56) = 0;
      ++*(_QWORD *)&v93[0];
      sub_1E88D0(v56, v52, 1);
    }
    a2 = (__int64 *)v13;
    sub_2D50E0((const char *)&v83, (__int64)v13, a5, (int *)&v92);
    if ( *(_QWORD *)&v93[1] )
    {
      *((_QWORD *)&v93[1] + 1) = 0;
      v11 = qfree(*(_QWORD *)&v93[1], v13);
    }
    v61 = *((_QWORD *)&v92 + 1);
    if ( *((_QWORD *)&v92 + 1) )
    {
      v62 = *(_QWORD *)&v93[0];
      if ( *(_QWORD *)&v93[0] )
      {
        v63 = 0;
        do
        {
          v64 = (_QWORD *)(v61 + 80 * v63);
          v65 = v64[4];
          if ( v65 )
          {
            v64[5] = 0;
            qfree(v65, (const char *)a2);
          }
          v66 = v64[1];
          if ( v66 )
          {
            v64[2] = 0;
            qfree(v66, (const char *)a2);
          }
          ++v63;
          v61 = *((_QWORD *)&v92 + 1);
        }
        while ( v62 != v63 );
      }
      *(_QWORD *)&v93[0] = 0;
      v11 = qfree(v61, (const char *)a2, v57, v58, v59, v60, v68, &v75, &v92);
    }
    if ( v78 )
    {
      *(_QWORD *)v79 = 0;
      v11 = qfree(v78, (const char *)a2);
    }
    clear_tinfo_t(v71);
    if ( s )
    {
      v77.m128i_i64[0] = 0;
      v11 = qfree(s, (const char *)a2);
    }
  }
  if ( (_QWORD)v84 )
  {
    a2 = v9;
    sub_2D17F0((__int64)&v83, v9, 1, v14, v11);
    v17 = v91;
  }
  else
  {
    v16 = *v9;
    if ( *v9 )
    {
      v9[1] = 0;
      qfree(v16, (const char *)a2, v12, v14);
      *v9 = 0;
      v9[2] = 0;
    }
    v17 = 0;
  }
  v18 = v89;
  *a3 = v17;
  if ( v18 )
  {
    v19 = v90;
    if ( (_QWORD)v90 )
    {
      v20 = 0;
      do
      {
        v21 = (_QWORD *)(v18 + 80 * v20);
        v22 = v21[4];
        if ( v22 )
        {
          v21[5] = 0;
          qfree(v22, (const char *)a2, v12, v14);
        }
        v23 = v21[1];
        if ( v23 )
        {
          v21[2] = 0;
          qfree(v23, (const char *)a2, v12, v14);
        }
        ++v20;
        v18 = v89;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v90 = 0;
    qfree(v18, (const char *)a2, v12, v14);
  }
  if ( v87 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(v87, (const char *)a2, v12, v14);
  }
  v24 = v85;
  if ( v85 )
  {
    v25 = v86;
    if ( (_QWORD)v86 )
    {
      v26 = 0;
      do
      {
        v27 = (__int64 *)(v24 + 24 * v26);
        v28 = *v27;
        if ( *v27 )
        {
          v27[1] = 0;
          qfree(v28, (const char *)a2, v24, v14);
          v24 = v85;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v86 = 0;
    qfree(v24, (const char *)a2);
  }
  v29 = v83;
  if ( v83 )
  {
    v30 = v84;
    if ( (_QWORD)v84 )
    {
      v31 = 0;
      do
      {
        v32 = (__int64 *)(v29 + 24 * v31);
        v33 = *v32;
        if ( *v32 )
        {
          v32[1] = 0;
          qfree(v33, (const char *)a2, v29, v14);
          v29 = v83;
        }
        ++v31;
      }
      while ( v30 != v31 );
    }
    *(_QWORD *)&v84 = 0;
    qfree(v29, (const char *)a2);
  }
  return v99 - __readfsqword(0x28u);
}
